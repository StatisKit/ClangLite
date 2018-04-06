## Copyright [2017-2018] UMR MISTEA INRA, UMR LEPSE INRA,                ##
##                       UMR AGAP CIRAD, EPI Virtual Plants Inria        ##
## Copyright [2015-2016] UMR AGAP CIRAD, EPI Virtual Plants Inria        ##
##                                                                       ##
## This file is part of the AutoWIG project. More information can be     ##
## found at                                                              ##
##                                                                       ##
##     http://autowig.rtfd.io                                            ##
##                                                                       ##
## The Apache Software Foundation (ASF) licenses this file to you under  ##
## the Apache License, Version 2.0 (the "License"); you may not use this ##
## file except in compliance with the License. You should have received  ##
## a copy of the Apache License, Version 2.0 along with this file; see   ##
## the file LICENSE. If not, you may obtain a copy of the License at     ##
##                                                                       ##
##     http://www.apache.org/licenses/LICENSE-2.0                        ##
##                                                                       ##
## Unless required by applicable law or agreed to in writing, software   ##
## distributed under the License is distributed on an "AS IS" BASIS,     ##
## WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or       ##
## mplied. See the License for the specific language governing           ##
## permissions and limitations under the License.                        ##

import warnings
import uuid
from path import Path
from autowig.asg import *
from autowig._parser import pre_processing, post_processing
from clanglite import *

MSVCFLAGS = {'/O1' : '-O1',
             '/O2' : '-O2'}

def autowig_parser(asg, headers, flags, inline=True, permissive=True, **kwargs):
    header = pre_processing(asg, headers, flags, **kwargs)
    if header:
        _flags = []
        for flag in flags:
            if flag.startswith('/'):
                if flag in MSVCFLAGS:
                    _flags.append(MSVCFLAGS[flag])
                elif flag.startswith('/D'):
                    _flags.append(flag.replace('/D', '-D'))
                elif flag.startswith('/I'):
                    _flags.append(flag.replace('/I', '-I'))
            else:
                _flags.append(flag)
        tu = clang.tooling.build_ast_from_code_with_args(header, _flags)
        read_translation_unit(asg, tu, inline, permissive)
    post_processing(asg, flags, **kwargs)
    return asg

def read_file(asg, spelling, decl):
    ast = decl.get_ast_context()
    sm = ast.get_source_manager()
    loc = decl.get_location()
    fid = sm.get_file_id(loc)
    if not fid.is_invalid():
        filename = sm.get_filename(loc).str()
        if filename:
            filename = str(Path(filename).abspath())
            filenode = asg.add_file(filename, proxy=HeaderProxy)
            filenode.language = asg._language
            asg._nodes[spelling]['_header'] = filenode._node
            while True:
                loc = sm.get_include_loc(fid)
                fid = sm.get_file_id(loc)
                if not fid.is_invalid():
                    includename = sm.get_filename(loc).str()
                    if includename:
                        includename = str(Path(includename).abspath())
                        filenode = asg.add_file(includename, proxy=HeaderProxy)
                        asg._include_edges[filename] = filenode._node
                        filename = includename
                    else:
                        break
                else:
                    break

def read_translation_unit(asg, tu, inline, permissive):
    """
    """
    asg._read = set()
    for child in tu.get_children():
        try:
            read_decl(asg, child, inline=inline, permissive=permissive)
        except NotImplementedError:
            if not permissive:
                raise
    del asg._read

def read_qualified_type(asg, qtype, inline):
    qualifiers = ' const' * qtype.is_local_const_qualified() + ' volatile' *  qtype.is_local_volatile_qualified()
    ttype = qtype.get_type_ptr_or_null()
    while True:
        if ttype is None:
            raise NotImplementedError('none type')
        elif ttype.get_type_class() in [clang.Type.type_class.TYPEDEF]:
            if qtype.is_local_const_qualified() and not qualifiers.startswith(' const'):
                qualifiers = ' const' + qualifiers
            if qtype.is_local_volatile_qualified() and not qualifiers.startswith(' volatile'):
                qualifiers = ' volatile' + qualifiers
            typedef = qtype.get_type_ptr_or_null().get_as_typedef_name_decl()
            typedef = read_typedef(asg, typedef, inline=inline, permissive=False)
            return typedef[0], qualifiers
        elif ttype.get_type_class() in [clang.Type.type_class.SUBST_TEMPLATE_TYPE_PARM, clang.Type.type_class.ELABORATED]:
            qtype = ttype.get_canonical_type_internal()
            if qtype.is_local_const_qualified() and not qualifiers.startswith(' const'):
                qualifiers = ' const' + qualifiers
            if qtype.is_local_volatile_qualified() and not qualifiers.startswith(' volatile'):
                qualifiers = ' volatile' + qualifiers
            ttype = qtype.get_type_ptr_or_null()
        elif any([ttype.is_structure_or_class_type(), ttype.is_enumeral_type(), ttype.is_union_type()]):
            tag = ttype.get_as_tag_decl()
            if tag.has_name_for_linkage():
                tag = read_tag(asg, tag, out=False, inline=inline, permissive=False)
                return tag[0], qualifiers
            else:
                raise NotImplementedError('anonymous ' + tag.__class__.__name__)
        elif ttype.is_pointer_type():
            qtype = ttype.get_pointee_type()
            qualifiers = ' const' * qtype.is_local_const_qualified() + ' volatile' * qtype.is_local_volatile_qualified() + ' *' + qualifiers
            ttype = qtype.get_type_ptr_or_null()
        elif ttype.is_r_value_reference_type():
            qtype = ttype.get_pointee_type()
            qualifiers = ' const' * qtype.is_local_const_qualified() + ' volatile' * qtype.is_local_volatile_qualified() + ' &&' + qualifiers
            ttype = qtype.get_type_ptr_or_null()
        elif ttype.is_l_value_reference_type():
            qtype = ttype.get_pointee_type()
            qualifiers = ' const' * qtype.is_local_const_qualified() + ' volatile' * qtype.is_local_volatile_qualified() + ' &' + qualifiers
            ttype = qtype.get_type_ptr_or_null()
        elif ttype.is_builtin_type():
            return read_builtin_type(asg, ttype), qualifiers
        else:
            raise NotImplementedError('\'' + str(ttype.get_type_class()) + '\'')

def read_builtin_type(asg, btype):
    if btype.is_specific_builtin_type(clang.BuiltinType.kind.BOOL):
        return BoolTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.CHAR_U):
        return UnsignedCharTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.CHAR_S):
        return CharTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.CHAR_32):
        return Char32TypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.CHAR_16):
        return Char16TypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.DOUBLE):
        return SignedDoubleTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.FLOAT):
        return SignedFloatTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.INT):
        return SignedIntegerTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.LONG_LONG):
        return SignedLongLongIntegerTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.LONG):
        return SignedLongIntegerTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.LONG_DOUBLE):
        return SignedLongDoubleTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.NULL_PTR):
        return NullPtrTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.SHORT):
        return SignedShortIntegerTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.S_CHAR):
        return SignedCharTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.U_LONG_LONG):
        return UnsignedLongLongIntegerTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.U_CHAR):
        return UnsignedCharTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.U_LONG):
        return UnsignedLongIntegerTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.U_INT):
        return UnsignedIntegerTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.U_SHORT):
        return UnsignedShortIntegerTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.VOID):
        return VoidTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.W_CHAR_S):
        return WCharTypeProxy._node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.W_CHAR_U):
        return WCharTypeProxy._node
    else:
        raise NotImplementedError('\'' + str(btype.get_type_class()) + '\'')

def read_spelling(asg, decl, inline):
    parent = read_syntaxic_parent(asg, decl)
    if inline:
        while isinstance(parent, clang.NamespaceDecl) and parent.is_inline():
            parent = read_syntaxic_parent(asg, parent)
    if isinstance(parent, clang.TranslationUnitDecl):
        scope = '::'
        spelling = scope + decl.get_name()
    else:
        scope = read_decl(asg, parent, out=False, permissive=True, inline=inline)
        if not len(scope) == 1:
            raise NotImplementedError('parent not found')
        scope = scope.pop()
        spelling = scope + '::' + decl.get_name()
        if spelling.startswith('enum '):
            spelling = spelling[5:]
        elif spelling.startswith('class '):
            spelling = spelling[6:]
        elif spelling.startswith('union '):
            spelling = spelling[6:]
        elif spelling.startswith('struct '):
            spelling = spelling[7:]
    return scope, spelling

def read_access(asg, access, *args):
    if access is clang.access_specifier.AS__PUBLIC:
        for arg in args:
            asg._nodes[arg]['_access'] = 'public'
    elif access is clang.access_specifier.AS__PROTECTED:
        for arg in args:
            asg._nodes[arg]['_access'] = 'protected'
    elif access is clang.access_specifier.AS__PRIVATE:
        for arg in args:
            asg._nodes[arg]['_access'] = 'private'

def read_enum(asg, decl, inline, permissive, out=True):
    if decl.get_name() == '':
        children = []
        decls = []
        for child in decl.get_children():
            try:
                children.extend(read_enum_constant(asg, child, inline=inline, permissive=permissive))
                decls.append(child)
            except NotImplementedError:
                if not permissive:
                    raise
        for childspelling, child in zip(children, decls):
            read_file(asg, childspelling, decl)
        read_access(asg, decl.get_access_unsafe(), *children)
        return children
    else:
        try:
            scope, spelling = read_spelling(asg, decl, inline=inline)
        except NotImplementedError:
            if permissive:
                return []
            else:
                raise
        else:
            if not spelling.startswith('enum '):
                spelling = 'enum ' + spelling
            if not spelling in asg._nodes:
                asg._nodes[spelling] = dict(_proxy=EnumerationProxy,
                        _comment = "",
                        _is_scoped = decl.is_scoped())
                asg._syntax_edges[spelling] = []
                asg._syntax_edges[scope].append(spelling)
                read_access(asg, decl.get_access_unsafe(), spelling)
            if out and not spelling in asg._read and not asg[spelling].is_complete:
                asg._nodes[spelling]['_is_scoped'] = decl.is_scoped()
                if not asg[spelling].comment:
                    asg._nodes[spelling]['_comment'] = decl.get_comment()
                asg._read.add(spelling)
                try:
                    asg._syntax_edges[scope].remove(spelling)
                    asg._syntax_edges[scope].append(spelling)
                    for child in decl.get_children():
                        for childspelling in read_enum_constant(asg, child, inline=inline, permissive=permissive):
                            dict.pop(asg._nodes[childspelling], "_header", None)
                    if asg[spelling].is_complete:
                        read_file(asg, spelling, decl)
                    read_access(asg, decl.get_access_unsafe(), spelling)
                except:
                    asg._read.remove(spelling)
                    raise
                else:
                    asg._read.remove(spelling)
            return [spelling]

def read_enum_constant(asg, decl, inline, permissive):
    try:
        scope, spelling = read_spelling(asg, decl, inline=inline)
    except NotImplementedError:
        if permissive:
            return []
        else:
            raise
    else:
        if not spelling in asg._nodes:
            asg._nodes[spelling] = dict(_proxy=EnumeratorProxy)
            asg._syntax_edges[scope].append(spelling)
            read_file(asg, spelling, decl)
        return [spelling]

def read_variable(asg, decl, inline, permissive):
    if isinstance(decl, (clang.VarTemplateDecl, clang.VarTemplateSpecializationDecl)):
        if permissive:
            return []
        else:
            raise NotImplementedError('\'' + decl.__class__.__name__ + '\'')
    elif decl.get_type().get_type_ptr_or_null().get_type_class() is clang.Type.type_class.TEMPLATE_TYPE_PARM:
        if permissive:
            return []
        else:
            raise NotImplementedError('\'' + str(clang.Type.type_class.TEMPLATE_TYPE_PARM) + '\'')
    else:
        try:
            scope, spelling = read_spelling(asg, decl, inline=inline)
        except NotImplementedError:
            if permissive:
                return []
            else:
                raise
        else:
            if not spelling in asg._nodes:
                try:
                    target, qualifiers = read_qualified_type(asg, decl.get_type(), inline=inline)
                    if isinstance(asg[scope], ClassProxy):
                        asg._nodes[spelling] = dict(_proxy=FieldProxy,
                                    _is_mutable=False,
                                    _is_static=True,
                                    _is_bit_field=False)
                    elif isinstance(asg[scope], ClassTemplateProxy):
                        return []
                    else:
                        asg._nodes[spelling] = dict(_proxy=VariableProxy)
                    asg._type_edges[spelling] = dict(target=target, qualifiers=qualifiers)
                    asg._syntax_edges[scope].append(spelling)
                    read_file(asg, spelling, decl)
                    read_access(asg, decl.get_access_unsafe(), spelling)
                except NotImplementedError:
                    if not permissive:
                        raise
                    else:
                        return []
                else:
                    return [spelling]
            else:
                return [spelling]

def read_function(asg, decl, inline, permissive):
    if isinstance(decl, clang.FunctionTemplateDecl):
        if permissive:
            return []
        else:
            raise NotImplementedError('\'' + decl.__class__.__name__ + '\'')
    elif decl.get_name() == '':
        return []
    try:
        scope, spelling = read_spelling(asg, decl, inline=inline)
    except NotImplementedError:
        if permissive:
            return []
        else:
            raise
    else:
        if not isinstance(decl, clang.CXXDestructorDecl):
            spelling += '::' + str(uuid.uuid5(uuid.NAMESPACE_X500, decl.get_mangling()))
        if not spelling in asg._nodes:
            if isinstance(decl, clang.CXXMethodDecl):
                if decl.is_deleted():
                    access = "deleted"
                else:
                    access = None
                if isinstance(decl, clang.CXXConversionDecl):
                    if permissive:
                        return []
                    else:
                        raise NotImplementedError('\'' + decl.__class__.__name__ + '\'')
                elif isinstance(asg[scope], NamespaceProxy):
                    if permissive:
                        return []
                    else:
                        raise Exception('method in namespace')
                else:
                    if not isinstance(decl, clang.CXXDestructorDecl):
                        asg._parameter_edges[spelling] = []
                        try:
                            for index, child in enumerate(decl.get_children()):
                                target, qualifiers = read_qualified_type(asg, child.get_type(), inline=inline)
                                asg._parameter_edges[spelling].append(dict(name=child.get_name(), target=target, qualifiers=qualifiers))
                        except NotImplementedError:
                            if permissive:
                                asg._parameter_edges.pop(spelling, None)
                                return []
                            else:
                                raise
                        else:
                            if not isinstance(decl, clang.CXXConstructorDecl):
                                try:
                                    target, qualifiers = read_qualified_type(asg, decl.get_return_type(), inline=inline)
                                except NotImplementedError:
                                    if permissive:
                                        asg._parameter_edges.pop(spelling)
                                        return []
                                    else:
                                        raise
                                else:
                                    asg._type_edges[spelling] = dict(target=target, qualifiers=qualifiers)
                                    asg._nodes[spelling] = dict(_proxy=MethodProxy,
                                            _is_static=decl.is_static(),
                                            _is_const=decl.is_const(),
                                            _is_volatile=decl.is_volatile(),
                                            _is_virtual=decl.is_virtual(),
                                            _is_pure=decl.is_pure(),
                                            _comment = decl.get_comment())
                            else:
                                asg._nodes[spelling] = dict(_proxy=ConstructorProxy,
                                        _is_virtual=decl.is_virtual())
                            asg._syntax_edges[scope].append(spelling)
                            if access:
                                asg._nodes[spelling]['_access'] = access
                            else:
                                read_access(asg, decl.get_access_unsafe(), spelling)
                            return [spelling]
                    else:
                        if not spelling in asg._nodes:
                            asg._nodes[spelling] = dict(_proxy=DestructorProxy,
                                    _is_virtual=decl.is_virtual(),
                                    _comment = decl.get_comment())
                            asg._syntax_edges[scope].append(spelling)
                        if access:
                            asg._nodes[spelling]['_access'] = access
                        else:
                            read_access(asg, decl.get_access_unsafe(), spelling)
                        return [spelling]
            else:
                asg._parameter_edges[spelling] = []
                try:
                    for index, child in enumerate(decl.get_children()):
                        target, qualifiers = read_qualified_type(asg, child.get_type(), inline=inline)
                        asg._parameter_edges[spelling].append(dict(name=child.get_name(), target=target, qualifiers=qualifiers))
                except NotImplementedError:
                    if permissive:
                        asg._parameter_edges.pop(spelling)
                        return []
                    else:
                        raise
                else:
                    try:
                        target, qualifiers = read_qualified_type(asg, decl.get_return_type(), inline=inline)
                    except NotImplementedError:
                        if permissive:
                            asg._parameter_edges.pop(spelling)
                            asg._type_edges.pop(spelling, None)
                            return []
                        else:
                            raise
                    else:
                        asg._type_edges[spelling] = dict(target=target, qualifiers=qualifiers)
                        asg._nodes[spelling] = dict(_proxy=FunctionProxy,
                                _comment = decl.get_comment())
                        asg._syntax_edges[scope].append(spelling)
                        read_file(asg, spelling, decl)
                        read_access(asg, decl.get_access_unsafe(), spelling)
                        return [spelling]
        else:
            return [spelling]

def read_field(asg, decl, inline, permissive):
    if decl.get_name() == '':
        return []
    try:
        scope, spelling = read_spelling(asg, decl, inline=inline)
    except NotImplementedError:
        if permissive:
            return []
        else:
            raise
    else:
        if not spelling in asg._nodes:
            try:
                target, qualifiers = read_qualified_type(asg, decl.get_type(), inline=inline)
            except NotImplementedError:
                if permissive:
                    return []
                else:
                    raise
            else:
                asg._type_edges[spelling] = dict(target=target, qualifiers=qualifiers)
                asg._nodes[spelling] = dict(_proxy=FieldProxy,
                        _is_mutable=decl.is_mutable(),
                        _is_static=False,
                        _is_bit_field=decl.is_bit_field()) # TODO
                asg._syntax_edges[scope].append(spelling)
                read_access(asg, decl.get_access_unsafe(), spelling)
                return [spelling]

def read_class_template(asg, decl, inline, permissive, out=True):
    parent = read_context_parent(asg, decl)
    if isinstance(parent, (clang.ClassTemplateDecl, clang.ClassTemplatePartialSpecializationDecl)):
        if permissive:
            return []
        else:
            raise Exception('Parent of class \'' + parent.__class__.__name__ + '\' for child of class \'' + decl.__class__.__name__ + '\'')
    try:
        scope, spelling = read_spelling(asg, decl, inline=inline)
    except NotImplementedError:
        if permissive:
            return []
        else:
            raise
    else:
        spelling = 'class ' + spelling
        if not spelling in asg._nodes:
            asg._nodes[spelling] = dict(_proxy=ClassTemplateProxy,
                    _is_complete=decl.is_this_declaration_a_definition())
            asg._syntax_edges[scope].append(spelling)
            asg._specialization_edges[spelling] = set()
            asg._syntax_edges[spelling] = []
            read_file(asg, spelling, decl)
            read_access(asg, decl.get_access_unsafe(), spelling)
        else:
            asg._nodes[spelling]['_is_complete'] = asg._nodes[spelling]['_is_complete'] or decl.is_this_declaration_a_definition()
        if out:
            for child in decl.get_children():
                try:
                    asg._specialization_edges[spelling].update(set(read_tag(asg, child, out=out, inline=inline, permissive=permissive)))
                except Exception as e:
                    if not permissive:
                        raise e
        return [spelling]

def read_tag(asg, decl, inline, permissive, out=True):
    if isinstance(decl, clang.EnumDecl):
        return read_enum(asg, decl, out=out, inline=inline, permissive=permissive)
    elif isinstance(decl, clang.ClassTemplatePartialSpecializationDecl):
        try:
            scope, spelling = read_spelling(asg, decl, inline=inline)
        except NotImplementedError:
            if permissive:
                return []
            else:
                raise
        else:
            if decl.is_class():
                spelling = 'class ' + spelling
            elif decl.is_struct():
                spelling = 'struct ' + spelling
            elif decl.is_union():
                spelling = 'union ' + spelling
            else:
                raise ValueError('\'' + decl.__class__.__name__ + '\'')
            spelling = spelling.replace('_Bool', 'bool')
            if not spelling in asg._nodes:
                try:
                    specialize = read_class_template(asg, decl.get_specialized_template(), out=False, inline=inline, permissive=permissive)
                    if not len(specialize) == 1:
                        raise ValueError('cannot find one unique specialization')
                    else:
                        specialize = specialize.pop()
                except NotImplementedError:
                    if permissive:
                        return []
                    else:
                        raise
                else:
                    asg._nodes[spelling] = dict(_proxy=ClassTemplatePartialSpecializationProxy)
                    asg._specialization_edges[specialize].add(spelling)
                    asg._syntax_edges[scope].append(spelling)
                    asg._syntax_edges[spelling] = []
                    read_file(asg, spelling, decl)
                read_access(asg, decl.get_access_unsafe(), spelling)
            return [spelling]
    elif not decl.has_name_for_linkage():
        return []
    else:
        try:
            scope, spelling = read_spelling(asg, decl, inline=inline)
            if isinstance(decl, clang.ClassTemplateSpecializationDecl):
                count = 1
                index = -2
                while not count == 0:
                    if spelling[index] == '>':
                        count += 1
                    elif spelling[index] == '<':
                        count -= 1
                    index -= 1
                _spelling = spelling[:index+1]
                templates = decl.get_template_args()
                template_names = []
                for template in [templates.get(index) for index in range(len(templates))]:
                    if template.get_kind() is clang.TemplateArgument.arg_kind.TYPE:
                        target, qualifiers = read_qualified_type(asg, template.get_as_type(), inline=inline)
                        template_names.append(target.strip('::') + qualifiers)
                    elif template.get_kind() is clang.TemplateArgument.arg_kind.DECLARATION:
                        target, qualifiers = read_qualified_type(asg, template.get_as_decl().get_type(), inline=inline)
                        template_names.append(target.strip('::') + qualifiers)
                    elif template.get_kind() is clang.TemplateArgument.arg_kind.INTEGRAL:
                        target, qualifiers = read_qualified_type(asg, template.get_integral_type(), inline=inline)
                        template_names.append(template.get_name())
                    else:
                        raise NotImplementedError(str(template.get_kind()))
                spelling = _spelling + '< ' + ', '.join(template_names) + ' >'
        except NotImplementedError:
            if permissive:
                return []
            else:
                raise
        else:
            if not decl.get_typedef_name_for_anon_decl() is None:
                if not decl.get_name() == '':
                    spelling = '::'.join(spelling.split('::')[:-1]) + '::'
                spelling += decl.get_typedef_name_for_anon_decl().get_name()
            elif decl.get_name() == '':
                return []
            else:
                if decl.is_class():
                    spelling = 'class ' + spelling
                elif decl.is_struct():
                    spelling = 'struct ' + spelling
                elif decl.is_union():
                    spelling = 'union ' + spelling
                else:
                    NotImplementedError('\'' + decl.__class__.__name__ + '\'')
            if isinstance(decl, clang.ClassTemplateSpecializationDecl):
                spelling = spelling.replace('_Bool', 'bool')
            if not spelling in asg._nodes:
                if decl.is_class():
                    default_access = 'private'
                else:
                    default_access = 'public'
                if isinstance(decl, clang.ClassTemplateSpecializationDecl):
                    try:
                        specialize = read_class_template(asg, decl.get_specialized_template(), out=False, inline=inline, permissive=permissive)
                        if not len(specialize) == 1:
                            raise Exception('cannot find one unique specialization')
                        else:
                            specialize = specialize.pop()
                        templates = decl.get_template_args()
                        template_edges = []
                        for template in [templates.get(index) for index in range(len(templates))]:
                            if template.get_kind() is clang.TemplateArgument.arg_kind.TYPE:
                                target, qualifiers = read_qualified_type(asg, template.get_as_type(), inline=inline)
                                template_edges.append(dict(target = target, qualifiers = qualifiers))
                            elif template.get_kind() is clang.TemplateArgument.arg_kind.DECLARATION:
                                target, qualifiers = read_qualified_type(asg, template.get_as_decl().get_type(), inline=inline)
                                template_edges.append(dict(target = target, qualifiers = qualifiers))
                            elif template.get_kind() is clang.TemplateArgument.arg_kind.INTEGRAL:
                                target, qualifiers = read_qualified_type(asg, template.get_integral_type(), inline=inline)
                                template_edges.append(dict(target = target, qualifiers = qualifiers))
                            else:
                                raise NotImplementedError(str(template.get_kind()))
                    except NotImplementedError:
                        if permissive:
                            return []
                        else:
                            raise
                    else:
                        asg._nodes[spelling] = dict(_proxy=ClassTemplateSpecializationProxy,
                            #_scope = scope,
                            #default_access=default_access,
                            _is_abstract=False,
                            _is_complete=False,
                            _is_explicit=True,
                            _comment = "")
                        asg._specialization_edges[specialize].add(spelling)
                        asg._syntax_edges[spelling] = []
                        asg._base_edges[spelling] = []
                        asg._syntax_edges[scope].append(spelling)
                        asg._template_edges[spelling] = template_edges
                        read_access(asg, decl.get_access_unsafe(), spelling)
                else:
                    asg._nodes[spelling] = dict(_proxy=ClassProxy,
                        #_scope = scope,
                        #default_access=default_access,
                        _is_abstract=False,
                        _is_complete=False)
                    asg._syntax_edges[spelling] = []
                    asg._base_edges[spelling] = []
                    asg._syntax_edges[scope].append(spelling)
                    read_access(asg, decl.get_access_unsafe(), spelling)
            elif not isinstance(decl, (clang.ClassTemplateDecl, clang.ClassTemplateSpecializationDecl)) and not isinstance(asg[spelling], (ClassProxy, ClassTemplateProxy)):
                    asg._nodes[spelling] = dict(_proxy = ClassProxy,
                        #_scope = scope,
                        #default_access=default_access,
                        _is_abstract=False,
                        _is_complete=False)
                    if not spelling in asg._syntax_edges:
                        asg._syntax_edges[spelling] = []
                    if not spelling in asg._base_edges:
                        asg._base_edges[spelling] = []
                    if not spelling in asg._syntax_edges[scope]:
                        asg._syntax_edges[scope].append(spelling)
                    read_access(asg, decl.get_access_unsafe(), spelling)
    if out and not spelling in asg._read and decl.is_complete_definition():
        if not asg[spelling].comment:
            if not isinstance(decl, clang.ClassTemplateSpecializationDecl) or decl.is_explicit_specialization():
                asg._nodes[spelling]['_comment'] = decl.get_comment()
        asg._read.add(spelling)
        try:
            if not asg[spelling]._is_complete:
                asg._syntax_edges[scope].remove(spelling)
                asg._syntax_edges[scope].append(spelling)
                if isinstance(decl, clang.CXXRecordDecl):
                    asg._nodes[spelling]['_is_abstract'] = decl.is_abstract()
                else:
                    asg._nodes[spelling]['_is_abstract'] = False
                    asg._nodes[spelling]['_is_copyable'] = True
                if isinstance(decl, clang.ClassTemplateSpecializationDecl):
                    asg._nodes[spelling]['_is_explicit'] = decl.is_explicit_specialization()
                asg._nodes[spelling]['_is_complete'] = True
                asg._base_edges[spelling] = []
                for base in decl.get_bases():
                    try:
                        basespelling, qualifiers = read_qualified_type(asg, base.get_type(), inline=inline)
                        asg._base_edges[spelling].append(dict(base=asg[basespelling]._node,
                            _access=str(base.get_access_specifier()).strip('AS_').lower(),
                            _is_virtual=False))
                    except NotImplementedError:
                        if not permissive:
                            raise
                for base in decl.get_virtual_bases():
                    try:
                        basespelling, qualifiers = read_qualified_type(asg, base.get_type(), inline=inline)
                        asg._base_edges[spelling].append(dict(base=asg[basespelling]._node,
                            _access=str(base.get_access_specifier()).strip('AS_').lower(),
                            _is_virtual=True))
                    except NotImplementedError:
                        if not permissive:
                            raise
                for child in decl.get_children():
                    children = read_decl(asg, child, inline=inline, permissive=permissive)
                asg._nodes[spelling]['_is_complete'] = True#len(asg._syntax_edges[spelling])+len(asg._base_edges[spelling]) > 0
                if asg[spelling].is_complete:
                    read_file(asg, spelling, decl)
            else:
                for child in decl.get_children():
                    if isinstance(child, clang.TagDecl):
                        children = read_tag(asg, child, out=out, permissive=permissive, inline=inline)
        except:
            asg._read.remove(spelling)
            raise
        else:
            asg._read.remove(spelling)
    return [spelling]

def read_typedef(asg, decl, inline, permissive):
    try:
        scope, spelling = read_spelling(asg, decl, inline=inline)
    except NotImplementedError:
        if permissive:
            return []
        else:
            raise
    else:
        if not spelling in asg._nodes:
            try:
                target, qualifiers = read_qualified_type(asg, decl.get_underlying_type(), inline=inline)
                asg._type_edges[spelling] = dict(target=target, qualifiers=qualifiers)
                asg._nodes[spelling] = dict(_proxy=TypedefProxy)
                asg._syntax_edges[scope].append(spelling)
                read_file(asg, spelling, decl)
                read_access(asg, decl.get_access_unsafe(), spelling)
            except NotImplementedError:
                if not permissive:
                    raise
                else:
                    return []
        return [spelling]

def read_namespace(asg, decl, inline, permissive, out=True):
    if decl.get_name() == '' or inline and decl.is_inline():
        children = []
        for child in decl.get_children():
            try:
                _children = read_decl(asg, child, inline=inline, permissive=permissive)
            except NotImplementedError:
                if not permissive:
                    raise
            else:
                children.extend(_children)
        return children
    else:
        try:
            scope, spelling = read_spelling(asg, decl, inline=inline)
        except NotImplementedError:
            if permissive:
                return []
            else:
                raise
        else:
            if not spelling in asg._nodes:
                asg._nodes[spelling] = dict(_proxy=NamespaceProxy, _is_inline=decl.is_inline())
                asg._syntax_edges[spelling] = []
            if not spelling in asg._syntax_edges[scope]:
                asg._syntax_edges[scope].append(spelling)
            if out and not spelling in asg._read:
                asg._read.add(spelling)
                for child in decl.get_children():
                    try:
                        read_decl(asg, child, inline=inline, permissive=permissive)
                    except NotImplementedError:
                        if not permissive:
                            raise
                asg._read.remove(spelling)
            return [spelling]

def read_friend(asg, decl, **kwargs):
    """
    """
    friend = decl.get_friend_decl()
    return read_decl(asg, friend, **kwargs)

def read_decl(asg, decl, **kwargs):
    """
    """
    if isinstance(decl, clang.LinkageSpecDecl):
        language = asg._language
        if decl.get_language() is clang.LinkageSpecDecl.language_ids.LANG_C:
            asg._language = 'c++'
        else:
            asg._language = 'c++'
        children = []
        for child in decl.get_children():
            try:
                children = read_decl(asg, child, **kwargs)
            except NotImplementedError:
                if not kwargs.get('permissive', True):
                    raise
        asg._language = language
        return children
    elif isinstance(decl, clang.VarDecl):
        return read_variable(asg, decl, **kwargs)
    elif isinstance(decl, clang.FunctionDecl):
        return read_function(asg, decl, **kwargs)
    elif isinstance(decl, clang.FieldDecl):
        return read_field(asg, decl, **kwargs)
    elif isinstance(decl, clang.TagDecl):
        return read_tag(asg, decl, **kwargs)
    elif isinstance(decl, clang.ClassTemplateDecl):
        return read_class_template(asg, decl, **kwargs)
    elif isinstance(decl, clang.NamespaceDecl):
        return read_namespace(asg, decl, **kwargs)
    elif isinstance(decl, clang.TypedefDecl):
        return read_typedef(asg, decl, **kwargs)
    elif isinstance(decl, clang.FriendDecl):
        return read_friend(asg, decl, **kwargs)
    elif isinstance(decl, (clang.AccessSpecDecl,
        clang.BlockDecl, clang.CapturedDecl,
        clang.ClassScopeFunctionSpecializationDecl,
        clang.EmptyDecl, clang.FileScopeAsmDecl, clang.FriendTemplateDecl,
        clang.StaticAssertDecl, clang.LabelDecl,
        clang.NamespaceAliasDecl, clang.TemplateDecl,
        clang.TemplateTypeParmDecl, clang.UsingDecl,
        clang.UsingDirectiveDecl, clang.UsingShadowDecl,
        clang.IndirectFieldDecl, clang.UnresolvedUsingValueDecl, clang.TypedefNameDecl)):
        return []
    else:
        #warnings.warn(decl.__class__.__name__, Warning) #.split('.')[-1]
        return []

def read_lexical_parent(asg, decl):
    return read_parent(asg, decl.get_lexical_parent())

def read_syntaxic_parent(asg, decl):
    if isinstance(decl, (clang.TypedefNameDecl, clang.ClassTemplateDecl, clang.ClassTemplatePartialSpecializationDecl, clang.EnumConstantDecl, clang.VarDecl, clang.FieldDecl)):
        return read_parent(asg, decl.get_decl_context())
    #elif isinstance(decl, (clang.NamespaceDecl, clang.TagDecl, clang.FunctionDecl)):
    #    return read_parent(asg, decl.get_syntaxic_parent())
    else:
        return read_parent(asg, decl.get_parent())

def read_context_parent(asg, decl):
    return read_parent(asg, decl.get_decl_context())

def read_parent(asg, parent):
    kind = parent.get_decl_kind()
    if kind is clang.Decl.kind.NAMESPACE:
        parent = parent.as_namespace()
        if parent.get_name() == '':
            parent = read_parent(asg, parent.get_parent())
        return parent
    elif kind in [clang.Decl.kind.CXX_RECORD, clang.Decl.kind.RECORD, clang.Decl.kind.FIRST_CXX_RECORD, clang.Decl.kind.FIRST_CLASS_TEMPLATE_SPECIALIZATION, clang.Decl.kind.FIRST_RECORD]:
        parent = parent.as_record()
        return parent
    elif kind in [clang.Decl.kind.ENUM]:
        parent = parent.as_enum()
        if parent.get_name() == '':
            parent = read_parent(asg, parent.get_parent())
        return parent
    elif kind is clang.Decl.kind.LINKAGE_SPEC:
        return read_parent(asg, read_parent(asg, parent.get_parent()))
    elif kind in [clang.Decl.kind.TRANSLATION_UNIT, clang.Decl.kind.LAST_DECL]:
        return parent.as_translation_unit()
    elif kind in [clang.Decl.kind.CLASS_TEMPLATE_PARTIAL_SPECIALIZATION, clang.Decl.kind.FIRST_TEMPLATE, clang.Decl.kind.FIRST_VAR_TEMPLATE_SPECIALIZATION, clang.Decl.kind.LAST_TAG, clang.Decl.kind.LAST_REDECLARABLE_TEMPLATE, clang.Decl.kind.LAST_TEMPLATE]:
        warnings.warn('', Warning)
    else:
        warnings.warn(str(kind), Warning)
