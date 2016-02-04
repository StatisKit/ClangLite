import warnings
import uuid
from path import path
from autowig.asg import *
from autowig.front_end import preprocessing, postprocessing, resolve_templates

from .pyclanglite import *
from .ast import AbstractSyntaxTree

def front_end(asg, headers, flags, bootstrap=True, maximum=1000, inline=True, permissive=True, **kwargs):
    content = preprocessing(asg, headers, flags)
    if content:
        tu = clang.tooling.build_ast_from_code_with_args(content, flags)
        read_translation_unit(asg, tu, inline, permissive)
        if bootstrap:
            flags += ['-Wno-unused-value', '-ferror-limit=0']#['-w']
            index = 0
            if isinstance(bootstrap, bool):
                bootstrap = float("Inf")
            nodes = 0
            forbidden = set()
            while not nodes == len(asg) and index < bootstrap:
                resolve_templates(asg)
                nodes = len(asg)
                white = []
                black = set()
                for node in asg.nodes():
                    if not node.clean:
                        white.append(node)
                        black.add(node._node)
                gray = set()
                while len(white) > 0:
                    node = white.pop()
                    if isinstance(node, (TypedefProxy, VariableProxy)):
                        target = node.qualified_type.desugared_type.unqualified_type
                        if not target._node in black:
                            white.append(target)
                            black.add(target._node)
                    elif isinstance(node, FunctionProxy):
                        return_type = node.return_type.desugared_type.unqualified_type
                        if not return_type._node in black:
                            white.append(return_type)
                            black.add(return_type._node)
                        for parameter in node.parameters:
                            target = parameter.qualified_type.desugared_type.unqualified_type
                            if not target._node in black:
                                white.append(target)
                                black.add(target._node)
                    elif isinstance(node, ConstructorProxy):
                        for parameter in node.parameters:
                            target = parameter.qualified_type.desugared_type.unqualified_type
                            if not target._node in black:
                                white.append(target)
                                black.add(target._node)
                    elif isinstance(node, ClassProxy):
                        for base in node.bases():
                            if base.access == 'public':
                                if not base._node in black:
                                    white.append(base)
                                    black.add(base._node)
                        for dcl in node.declarations():
                            try:
                                if dcl.access == 'public':
                                    if not dcl._node in black:
                                        white.append(dcl)
                                        black.add(dcl._node)
                            except:
                                pass
                        if isinstance(node, ClassTemplateSpecializationProxy):
                            if not node.is_complete:
                                gray.add(node._node)
                            specialize = node.specialize
                            if not specialize._node in black:
                                white.append(node.specialize)
                                black.add(node.specialize._node)
                        elif not node.is_complete:
                            gray.add(node._node)
                    elif isinstance(node, ClassTemplateProxy):
                        for specialization in node.specializations():
                            if not specialization._node in black:
                                white.append(specialization)
                                black.add(specialization._node)
                gray = list(gray)
                for gray in [gray[index:index+maximum] for index in xrange(0, len(gray), maximum)]:
                    content = []
                    for header in asg.headers(*[asg[node] for node in gray]):
                        content.append("#include \"" + header.globalname + "\"")
                    import pdb
                    pdb.set_trace()
                    content.append("")
                    content.append("int main(void)")
                    content.append("{")
                    for _index, spc in enumerate(gray):
                        if not spc in forbidden:
                            content.append("\tsizeof(" + spc + ");")
                    content.append("\treturn 0;")
                    content.append("}")
                    content = '\n'.join(content)
                    forbidden.update(set(gray))
                    tu = clang.tooling.build_ast_from_code_with_args(content, flags)
                    read_translation_unit(asg, tu, inline, permissive)
                    #del tu
                index += 1
    postprocessing(asg, headers, **kwargs)

def read_file(asg, spelling, decl):
    ast = decl.get_ast_context()
    sm = ast.get_source_manager()
    loc = decl.get_location()
    fid = sm.get_file_id(loc)
    if not fid.is_invalid():
        filename = sm.get_filename(loc).str()
        if filename:
            filename = str(path(filename).abspath())
            filenode = asg.add_file(filename, proxy=HeaderProxy)
            filenode.language = asg._language
            asg._nodes[spelling]['_header'] = filenode.globalname
            while True:
                loc = sm.get_include_loc(fid)
                fid = sm.get_file_id(loc)
                if not fid.is_invalid():
                    includename = sm.get_filename(loc).str()
                    if includename:
                        includename = str(path(includename).abspath())
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
            raise warnings.warn(qtype.get_as_string(), NoneTypeWarning)
        elif ttype.get_type_class() in [clang.Type.type_class.TYPEDEF,  clang.Type.type_class.SUBST_TEMPLATE_TYPE_PARM, clang.Type.type_class.ELABORATED]:
            qtype = ttype.get_canonical_type_internal()
            if qtype.is_local_const_qualified() and not qualifiers.startswith(' const'):
                qualifiers = ' const' + qualifiers
            if qtype.is_local_volatile_qualified() and not qualifiers.startswith(' volatile'):
                qualifiers = ' volatile' + qualifiers
            ttype = qtype.get_type_ptr_or_null()
        elif any([ttype.is_structure_or_class_type(), ttype.is_enumeral_type(), ttype.is_union_type()]):
            tag = ttype.get_as_tag_decl()
            tag = read_tag(asg, tag, out=False, inline=inline, permissive=False)
            return tag[0], qualifiers
        elif ttype.is_pointer_type():
            qtype = ttype.get_pointee_type()
            qualifiers = ' const' * qtype.is_local_const_qualified() + ' volatile' * qtype.is_local_volatile_qualified() + ' *' + qualifiers
            ttype = qtype.get_type_ptr_or_null()
        elif ttype.is_rvalue_reference_type():
            qtype = ttype.get_pointee_type()
            qualifiers = ' const' * qtype.is_local_const_qualified() + ' volatile' * qtype.is_local_volatile_qualified() + ' &&' + qualifiers
            ttype = qtype.get_type_ptr_or_null()
        elif ttype.is_lvalue_reference_type():
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
        raise NotImplementedError('\'' + str(btype.get_class_type()) + '\'')

def read_spelling(asg, decl, inline):
    parent = read_syntaxic_parent(asg, decl)
    if inline:
        while isinstance(parent, clang.NamespaceDecl) and parent.is_inline():
            parent = read_syntaxic_parent(asg, parent)
    if isinstance(parent, clang.TranslationUnitDecl):
        scope = '::'
        spelling = scope + decl.get_name()
    else:
        scope = read_decl(asg, parent, out=False, permissive=False, inline=inline)
        if not len(scope) == 1:
            raise Exception('parent not found')
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
                asg._nodes[spelling] = dict(_proxy=EnumerationProxy)
                asg._syntax_edges[spelling] = []
                asg._syntax_edges[scope].append(spelling)
                read_access(asg, decl.get_access_unsafe(), spelling)
            if out and not spelling in asg._read and not asg[spelling].is_complete:
                asg._read.add(spelling)
                asg._syntax_edges[scope].remove(spelling)
                asg._syntax_edges[scope].append(spelling)
                for child in decl.get_children():
                    for childspelling in read_enum_constant(asg, child, inline=inline, permissive=permissive):
                        dict.pop(asg._nodes[childspelling], "_header", None)
                if asg[spelling].is_complete:
                    read_file(asg, spelling, decl)
                asg._read.remove(spelling)
                read_access(asg, decl.get_access_unsafe(), spelling)
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
        raise NotImplementedError('\'' + decl.__class__.__name__ + '\'')
    elif decl.get_type().get_type_ptr_or_null().get_type_class() is clang.Type.type_class.TEMPLATE_TYPE_PARM:
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
                target, qualifiers = read_qualified_type(asg, decl.get_type(), inline=inline)
                if isinstance(asg[scope], ClassProxy):
                    asg._nodes[spelling] = dict(_proxy=FieldProxy,
                            _is_mutable=False,
                            _is_static=True)
                elif isinstance(asg[scope], ClassTemplateProxy):
                    return []
                else:
                    asg._nodes[spelling] = dict(_proxy=VariableProxy)
                asg._type_edges[spelling] = dict(target=target, qualifiers=qualifiers)
                asg._syntax_edges[scope].append(spelling)
                read_file(asg, spelling, decl)
                read_access(asg, decl.get_access_unsafe(), spelling)
            return [spelling]

def read_function(asg, decl, inline, permissive):
    if decl.is_deleted():
        return []
    elif isinstance(decl, clang.FunctionTemplateDecl):
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
                if isinstance(decl, clang.CXXConversionDecl):
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
                                            _is_pure=decl.is_pure())
                            else:
                                asg._nodes[spelling] = dict(_proxy=ConstructorProxy,
                                        _is_virtual=decl.is_virtual())
                            asg._syntax_edges[scope].append(spelling)
                            read_access(asg, decl.get_access_unsafe(), spelling)
                            return [spelling]
                    else:
                        if not spelling in asg._nodes:
                            asg._nodes[spelling] = dict(_proxy=DestructorProxy,
                                    _is_virtual=decl.is_virtual())
                            asg._syntax_edges[scope].append(spelling)
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
                        asg._nodes[spelling] = dict(_proxy=FunctionProxy)
                        asg._syntax_edges[scope].append(spelling)
                        read_file(asg, spelling, decl)
                        read_access(asg, decl.get_access_unsafe(), spelling)
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
                        _is_static=False) # TODO
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
            if spelling == 'class ::arma::arma_rng::randi':
                impoTrueb
                pdb.set_trace()
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
    if decl.spelling() == 'class ::statiskit::UnivariateDataFrame::Metric':
        import pdb
        pdb.set_trace()
    if isinstance(decl, clang.EnumDecl):
        return read_enum(asg, decl, out=out, inline=inline, permissive=permissive)
    elif isinstance(decl, clang.ClassTemplatePartialSpecializationDecl):
        decl.unset_type_as_written()
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
                NotImplementedError('\'' + decl.__class__.__name__ + '\'')
            spelling = spelling.replace('_Bool', 'bool')
            if not spelling in asg._nodes:
                try:
                    specialize = read_class_template(asg, decl.get_specialized_template(), out=False, inline=inline, permissive=permissive)
                    if not len(specialize) == 1:
                        raise Exception('cannot find one unique specialization')
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
        if isinstance(decl, clang.ClassTemplateSpecializationDecl):
            decl.unset_type_as_written()
        try:
            scope, spelling = read_spelling(asg, decl, inline=inline)
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
                        for template in [templates.get(index) for index in range(templates.size())]:
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
                            _is_copyable=True,
                            _is_complete=False,
                            _is_explicit=True)
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
                        _is_copyable=True,
                        _is_complete=False)
                    asg._syntax_edges[spelling] = []
                    asg._base_edges[spelling] = []
                    asg._syntax_edges[scope].append(spelling)
                    read_access(asg, decl.get_access_unsafe(), spelling)
    if out and not spelling in asg._read and decl.is_complete_definition():
        asg._read.add(spelling)
        if not asg[spelling].is_complete:
            asg._syntax_edges[scope].remove(spelling)
            asg._syntax_edges[scope].append(spelling)
            if isinstance(decl, clang.CXXRecordDecl):
                asg._nodes[spelling]['_is_abstract'] = decl.is_abstract()
                asg._nodes[spelling]['_is_copyable'] = decl.is_copyable()
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
            asg._nodes[spelling]['_is_complete'] = len(asg._syntax_edges[spelling])+len(asg._base_edges[spelling]) > 0
            if asg[spelling].is_complete:
                read_file(asg, spelling, decl)
        else:
            for child in decl.get_children():
                if isinstance(child, clang.TagDecl):
                    children = read_tag(asg, child, out=out, permissive=permissive, inline=inline)
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
            target, qualifiers = read_qualified_type(asg, decl.get_underlying_type(), inline=inline)
            asg._type_edges[spelling] = dict(target=target, qualifiers=qualifiers)
            asg._nodes[spelling] = dict(_proxy=TypedefProxy)
            asg._syntax_edges[scope].append(spelling)
            read_file(asg, spelling, decl)
            read_access(asg, decl.get_access_unsafe(), spelling)
        return [spelling]

def read_namespace(asg, decl, inline, permissive, out=True):
    if decl.get_name() == '' or inline and decl.is_inline():
        children = []
        for child in decl.get_children():
            children.extend(read_decl(asg, child, inline=inline, permissive=permissive))
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
                    read_decl(asg, child, inline=inline, permissive=permissive)
                asg._read.remove(spelling)
            return [spelling]

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
            children = read_decl(asg, child, **kwargs)
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
    elif isinstance(decl, (clang.AccessSpecDecl,
        clang.BlockDecl, clang.CapturedDecl,
        clang.ClassScopeFunctionSpecializationDecl,
        clang.EmptyDecl, clang.FileScopeAsmDecl,
        clang.FriendDecl, clang.FriendTemplateDecl,
        clang.StaticAssertDecl, clang.LabelDecl,
        clang.NamespaceAliasDecl, clang.TemplateDecl,
        clang.TemplateTypeParmDecl, clang.UsingDecl,
        clang.UsingDirectiveDecl, clang.UsingShadowDecl,
        clang.IndirectFieldDecl, clang.UnresolvedUsingValueDecl, clang.TypedefNameDecl)):
        return []
    else:
        warnings.warn(decl.__class__.__name__, NotImplementedDeclWarning) #.split('.')[-1]
        return []

def read_lexical_parent(asg, decl):
    return read_parent(asg, decl.get_lexical_parent())

def read_syntaxic_parent(asg, decl):
    if isinstance(decl, (clang.TypedefDecl, clang.ClassTemplateDecl, clang.ClassTemplatePartialSpecializationDecl, clang.EnumConstantDecl, clang.VarDecl, clang.FieldDecl)):
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
        parent = clang.cast.cast_as_namespace_decl(parent)
        if parent.get_name() == '':
            parent = read_parent(asg, parent.get_parent())
        return parent
    elif kind in [clang.Decl.kind.CXX_RECORD, clang.Decl.kind.RECORD, clang.Decl.kind.FIRST_CXX_RECORD, clang.Decl.kind.FIRST_CLASS_TEMPLATE_SPECIALIZATION, clang.Decl.kind.FIRST_RECORD]:
        parent = clang.cast.cast_as_record_decl(parent)
        #if parent.get_name() == '':
        #    parent = read_parent(parent.get_parent())
        return parent
    elif kind in [clang.Decl.kind.ENUM]:
        parent = clang.cast.cast_as_enum_decl(parent)
        if parent.get_name() == '':
            parent = read_parent(asg, parent.get_parent())
        return parent
    elif kind is clang.Decl.kind.LINKAGE_SPEC:
        return read_parent(asg, read_parent(asg, parent.get_parent()))
    elif kind in [clang.Decl.kind.TRANSLATION_UNIT, clang.Decl.kind.LAST_DECL]:
        return clang.cast.cast_as_translation_unit_decl(parent)
    elif kind in [clang.Decl.kind.CLASS_TEMPLATE_PARTIAL_SPECIALIZATION, clang.Decl.kind.FIRST_TEMPLATE, clang.Decl.kind.FIRST_VAR_TEMPLATE_SPECIALIZATION, clang.Decl.kind.LAST_TAG, clang.Decl.kind.LAST_REDECLARABLE_TEMPLATE, clang.Decl.kind.LAST_TEMPLATE]:
        warnings.warn('', TemplateParentWarning)
    else:
        warnings.warn(kind, NotImplementedParentWarning)
