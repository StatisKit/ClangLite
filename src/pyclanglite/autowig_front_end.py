import warnings
import uuid
from path import path
from vplants.autowig.asg import *
from vplants.autowig.middle_end import *
from vplants.autowig.tools import remove_regex, split_scopes, remove_templates
from vplants.autowig.custom_warnings import NotWrittenFileWarning, ErrorWarning, NoneTypeWarning,  UndeclaredParentWarning, MultipleDeclaredParentWarning, MultipleDefinitionWarning, NoDefinitionWarning, SideEffectWarning, ProtectedFileWarning, InfoWarning, TemplateParentWarning, TemplateParentWarning, AnonymousWarning, AnonymousFunctionWarning, AnonymousFieldWarning, AnonymousClassWarning, NotImplementedWarning, NotImplementedTypeWarning, NotImplementedDeclWarning, NotImplementedParentWarning, NotImplementedOperatorWarning, NotImplementedTemplateWarning
from vplants.autowig.front_end import preprocessing, postprocessing
from .pyclanglite import *
from .ast import AbstractSyntaxTree

def front_end(asg, filepaths, flags, silent=False, bootstrap=False, maximum=1000, cache=None, force=False, **kwargs):
    content = preprocessing(asg, filepaths, flags, cache, force)
    if content:
        tu = clang.tooling.build_ast_from_code_with_args(content, flags)
        with warnings.catch_warnings() as cw:
            if silent:
                warnings.simplefilter('ignore')
            else:
                warnings.simplefilter('always')
            read_translation_unit(asg, tu)
            #del tu
        if bootstrap:
            flags += ['-Wno-unused-value', '-ferror-limit=0']#['-w']
            index = 0
            if isinstance(bootstrap, bool):
                bootstrap = float("Inf")
            nodes = 0
            forbidden = set()
            while not nodes == len(asg) and index < bootstrap:
                nodes = len(asg)
                white = []
                black = set()
                for node in asg.nodes():
                    if not node.clean:
                        white.append(node)
                        black.add(node.node)
                gray = set()
                while len(white) > 0:
                    node = white.pop()
                    if isinstance(node, (TypedefProxy, VariableProxy)):
                        target = node.type.target
                        if not target.node in black:
                            white.append(target)
                            black.add(target.node)
                    elif isinstance(node, FunctionProxy):
                        result_type = node.result_type.target
                        if not result_type.node in black:
                            white.append(result_type)
                            black.add(result_type.node)
                        for parameter in node.parameters:
                            target = parameter.type.target
                            if not target.node in black:
                                white.append(target)
                                black.add(target.node)
                    elif isinstance(node, ConstructorProxy):
                        for parameter in node.parameters:
                            target = parameter.type.target
                            if not target.node in black:
                                white.append(target)
                                black.add(target.node)
                    elif isinstance(node, ClassProxy):
                        for base in node.bases():
                            if base.access == 'public':
                                if not base.node in black:
                                    white.append(base)
                                    black.add(base.node)
                        for dcl in node.declarations():
                            try:
                                if dcl.access == 'public':
                                    if not dcl.node in black:
                                        white.append(dcl)
                                        black.add(dcl.node)
                            except:
                                pass
                        if isinstance(node, ClassTemplateSpecializationProxy):
                            if not node.is_complete:
                                gray.add(node.node)
                            specialize = node.specialize
                            if not specialize.node in black:
                                white.append(node.specialize)
                                black.add(node.specialize.node)
                        elif not node.is_complete:
                            gray.add(node.node)
                    elif isinstance(node, ClassTemplateProxy):
                        for specialization in node.specializations():
                            if not specialization.node in black:
                                white.append(specialization)
                                black.add(specialization.node)
                gray = list(gray)
                for gray in [gray[index:index+maximum] for index in xrange(0, len(gray), maximum)]:
                    content = []
                    for header in asg.headers(*[asg[node] for node in gray]):
                        content.append("#include \"" + header.globalname + "\"")
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
                    with warnings.catch_warnings() as cw:
                        if silent:
                            warnings.simplefilter('ignore')
                        else:
                            warnings.simplefilter('always')
                        read_translation_unit(asg, tu)
                    #del tu
                index += 1
    postprocessing(asg, filepaths, cache=cache, **kwargs)

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
                        #if not includename in asg:
                        filenode = asg.add_file(includename, proxy=HeaderProxy)
                        asg._include_edges[filename] = filenode.node
                        filename = includename
                        #else:
                        #    break
                    else:
                        break
                else:
                    break

def read_translation_unit(asg, tu):
        """
        """
        asg._read = set()
        for child in tu.get_children():
            read_decl(asg, child)
        del asg._read

def read_qualified_type(asg, qtype):
    specifiers = ' const' * qtype.is_local_const_qualified() + ' volatile' *  qtype.is_local_volatile_qualified()
    ttype = qtype.get_type_ptr_or_null()
    while True:
        if ttype is None:
            raise warnings.warn(qtype.get_as_string(), NoneTypeWarning)
        elif ttype.get_type_class() in [clang.Type.type_class.TYPEDEF,  clang.Type.type_class.SUBST_TEMPLATE_TYPE_PARM, clang.Type.type_class.ELABORATED]:
            qtype = ttype.get_canonical_type_internal()
            #specifiers = ' const' * qtype.is_local_const_qualified() + ' volatile' * qtype.is_local_volatile_qualified() + specifiers
            if qtype.is_local_const_qualified() and not specifiers.startswith(' const'):
                specifiers = ' const' + specifiers
            if qtype.is_local_volatile_qualified() and not specifiers.startswith(' volatile'):
                specifiers = ' volatile' + specifiers
            ttype = qtype.get_type_ptr_or_null()
        elif any([ttype.is_structure_or_class_type(), ttype.is_enumeral_type(), ttype.is_union_type()]):
            try:
                with warnings.catch_warnings():
                    warnings.simplefilter('error')
                    tag = ttype.get_as_tag_decl()
                    tag = read_tag(asg, tag, False)
                    return tag[0], specifiers
            except Warning as warning:
                warnings.warn(str(warning), warning.__class__)
                break
        elif ttype.is_pointer_type():
            qtype = ttype.get_pointee_type()
            specifiers = ' const' * qtype.is_local_const_qualified() + ' volatile' * qtype.is_local_volatile_qualified() + ' *' + specifiers
            ttype = qtype.get_type_ptr_or_null()
        elif ttype.is_rvalue_reference_type():
            qtype = ttype.get_pointee_type()
            specifiers = ' const' * qtype.is_local_const_qualified() + ' volatile' * qtype.is_local_volatile_qualified() + ' &&' + specifiers
            ttype = qtype.get_type_ptr_or_null()
        elif ttype.is_lvalue_reference_type():
            qtype = ttype.get_pointee_type()
            specifiers = ' const' * qtype.is_local_const_qualified() + ' volatile' * qtype.is_local_volatile_qualified() + ' &' + specifiers
            ttype = qtype.get_type_ptr_or_null()
        elif ttype.is_builtin_type():
            return read_builtin_type(asg, ttype), specifiers
        else:
            warnings.warn('\'' + str(ttype.get_type_class()) + '\'', NotImplementedTypeWarning)
            break

def read_builtin_type(asg, btype):
    if btype.is_specific_builtin_type(clang.BuiltinType.kind.BOOL):
        return BoolTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.CHAR_U):
        return UnsignedCharTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.CHAR_S):
        return CharTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.CHAR_32):
        return Char32TypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.CHAR_16):
        return Char16TypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.DOUBLE):
        return SignedDoubleTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.FLOAT):
        return SignedFloatTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.INT):
        return SignedIntegerTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.LONG_LONG):
        return SignedLongLongIntegerTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.LONG):
        return SignedLongIntegerTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.LONG_DOUBLE):
        return SignedLongDoubleTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.NULL_PTR):
        return NullPtrTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.SHORT):
        return SignedShortIntegerTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.S_CHAR):
        return SignedCharTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.U_LONG_LONG):
        return UnsignedLongLongIntegerTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.U_CHAR):
        return UnsignedCharTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.U_LONG):
        return UnsignedLongIntegerTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.U_INT):
        return UnsignedIntegerTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.U_SHORT):
        return UnsignedShortIntegerTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.VOID):
        return VoidTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.W_CHAR_S):
        return WCharTypeProxy.node
    elif btype.is_specific_builtin_type(clang.BuiltinType.kind.W_CHAR_U):
        return WCharTypeProxy.node
    else:
        warnings.warn('\'' + str(btype.get_class_type()) + '\'', NotImplementedTypeWarning)

def read_enum(asg, decl, out=True):
    if decl.get_name() == '':
        children = []
        decls = []
        for child in decl.get_children():
            children.extend(read_enum_constant(asg, child))
            decls.append(child)
        for childspelling, child in zip(children, decls):
            read_file(asg, childspelling, decl)
        return children
    else:
        try:
            with warnings.catch_warnings():
                warnings.simplefilter("error")
                parent = read_syntaxic_parent(asg, decl)
        except Warning as warning:
            warnings.warn(str(warning) + ' for enum \'' + decl.get_name() + '\'', warning.__class__)
            return []
        else:
            if isinstance(parent, clang.TranslationUnitDecl):
                scope = '::'
                spelling = scope + decl.get_name()
            else:
                scope = read_decl(asg, parent, out=False)
                if len(scope) == 0:
                    warnings.warn(spelling, UndeclaredParentWarning)
                    return []
                elif len(scope) == 1:
                    scope = scope[0]
                else:
                    warnings.warn(spelling, MultipleDeclaredParentWarning)
                    return []
                spelling = scope + '::' + decl.get_name()
                if spelling.startswith('class '):
                    spelling = spelling[6:]
                elif spelling.startswith('union '):
                    spelling = spelling[6:]
                elif spelling.startswith('struct '):
                    spelling = spelling[7:]
            if not spelling.startswith('enum '):
                spelling = 'enum ' + spelling
            if not spelling in asg._nodes:
                asg._nodes[spelling] = dict(proxy=EnumProxy)
                asg._syntax_edges[spelling] = []
                asg._syntax_edges[scope].append(spelling)
            if out and not spelling in asg._read and not asg[spelling].is_complete:
                asg._read.add(spelling)
                asg._syntax_edges[scope].remove(spelling)
                asg._syntax_edges[scope].append(spelling)
                for child in decl.get_children():
                    for childspelling in read_enum_constant(asg, child):
                        dict.pop(asg._nodes[childspelling], "_header", None)
                if asg[spelling].is_complete:
                    read_file(asg, spelling, decl)
                asg._read.remove(spelling)
            return [spelling]

def read_enum_constant(asg, decl):
    try:
        with warnings.catch_warnings():
            warnings.simplefilter("error")
            parent = read_context_parent(asg, decl)
    except Warning as warning:
        warnings.warn(str(warning) + ' for enum constant \'' + decl.get_name() + '\'', warning.__class__)
        return []
    else:
        if isinstance(parent, clang.TranslationUnitDecl):
            scope = '::'
            spelling = scope + decl.get_name()
        else:
            scope = read_decl(asg, parent, out=False)
            if len(scope) == 0:
                warnings.warn(spelling, UndeclaredParentWarning)
                return []
            elif len(scope) == 1:
                scope = scope[0]
            else:
                warnings.warn(spelling, MultipleDeclaredParentWarning)
                return []
            spelling = scope + '::' + decl.get_name()
            if spelling.startswith('enum '):
                spelling = spelling[5:]
            elif spelling.startswith('class '):
                spelling = spelling[6:]
            elif spelling.startswith('union '):
                spelling = spelling[6:]
            elif spelling.startswith('struct '):
                spelling = spelling[7:]
        if not spelling in asg._nodes:
            asg._nodes[spelling] = dict(proxy=EnumConstantProxy)
            asg._syntax_edges[scope].append(spelling)
            read_file(asg, spelling, decl)
        return [spelling]

def read_variable(asg, decl):
    if isinstance(decl, (clang.VarTemplateDecl, clang.VarTemplateSpecializationDecl)) or decl.get_type().get_type_ptr_or_null().get_type_class() is clang.Type.type_class.TEMPLATE_TYPE_PARM:
        return []
    else:
        try:
            with warnings.catch_warnings():
                warnings.simplefilter("error")
                parent = read_context_parent(asg, decl)
                if isinstance(parent, (clang.TagDecl, clang.ClassTemplateDecl)):
                    warnings.warn('' + decl.get_name() + '\'', UserWarning)
        except Warning as warning:
            warnings.warn(str(warning) + ' for variable \'' + decl.get_name() + '\'', warning.__class__)
            return []
        else:
            if isinstance(parent, clang.TranslationUnitDecl):
                scope = '::'
                spelling = scope + decl.get_name()
            else:
                scope = read_decl(asg, parent, out=False)
                if len(scope) == 0:
                    warnings.warn(decl.get_name(), UndeclaredParentWarning)
                    return []
                elif len(scope) == 1:
                    scope = scope[0]
                else:
                    warnings.warn(spelling, MultipleDeclaredParentWarning)
                    return []
                spelling = scope + '::' + decl.get_name()
            try:
                with warnings.catch_warnings() as warning:
                    warnings.simplefilter("error")
                    target, specifiers = read_qualified_type(asg, decl.get_type())
                    asg._type_edges[spelling] = dict(target=target, specifiers=specifiers)
            except Warning as warning:
                warnings.warn(str(warning) + ' for variable \'' + spelling + '\'', warning.__class__)
                return []
            else:
                if not spelling in asg._nodes:
                    asg._nodes[spelling] = dict(proxy=VariableProxy)
                    asg._syntax_edges[scope].append(spelling)
                    read_file(asg, spelling, decl)
                return [spelling]

def read_function(asg, decl):
    if isinstance(decl, clang.FunctionTemplateDecl) or decl.is_implicit() or decl.is_deleted():
        return []
    if decl.get_name() == '':
        warnings.warn('', AnonymousFunctionWarning)
        return []
    try:
        with warnings.catch_warnings():
            warnings.simplefilter('error')
            if isinstance(decl, clang.CXXMethodDecl):
                parent = read_lexical_parent(asg, decl)
                if isinstance(parent, clang.NamespaceDecl):
                    return []
            parent = read_syntaxic_parent(asg, decl)
    except Warning as warning:
        warnings.warn(str(warning) + ' for function \'' + decl.get_name() + '\'', warning.__class__)
        return []
    else:
        if isinstance(parent, clang.TranslationUnitDecl):
            scope = '::'
            spelling = scope + decl.get_name()
        else:
            scope = read_decl(asg, parent, out=False)
            if len(scope) == 0:
                warnings.warn(spelling, UndeclaredParentWarning)
                return []
            elif len(scope) == 1:
                scope = scope[0]
            else:
                warnings.warn(spelling, MultipleDeclaredParentWarning)
                return []
            spelling =  scope + '::' + decl.get_name()
        if spelling.startswith('class '):
            spelling = spelling[6:]
        elif spelling.startswith('union '):
            spelling = spelling[6:]
        elif spelling.startswith('struct '):
            spelling = spelling[7:]
        if not isinstance(decl, clang.CXXDestructorDecl):
            spelling += '::' + str(uuid.uuid5(uuid.NAMESPACE_X500, decl.get_mangling()))
        if not spelling in asg._nodes:
            if isinstance(decl, clang.CXXMethodDecl):
                if isinstance(decl, clang.CXXConversionDecl):
                    warnings.warn(clang.CXXConversionDecl.__class__.__name__.split('.')[-1] + ' for function \'' + spelling + '\'',
                            NotImplementedDeclWarning)
                    return []
                    #try:
                    #    with warnings.catch_warnings() as warning:
                    #        warnings.simplefilter("error")
                    #        target, specifiers = read_qualified_type(asg, decl.get_conversion_type())
                    #except Warning as warning:
                    #    warnings.warn(str(warning) + ' for function \'' + spelling + '\' return type',
                    #            warning.__class__)
                    #    return []
                    #else:
                    #    asg._type_edges[spelling] = dict(target=target, specifiers=specifiers)
                    #    asg._nodes[spelling] = dict(proxy=MethodProxy,
                    #            is_static=decl.is_static(),
                    #            is_const=decl.is_const(),
                    #            is_volatile=decl.is_volatile(),
                    #            is_virtual=decl.is_virtual(),
                    #            decl=decl)
                    #    asg._syntax_edges[scope].append(spelling)
                    #    return [spelling]
                elif isinstance(asg[scope], NamespaceProxy):
                    return []
                else:
                    if not isinstance(decl, clang.CXXDestructorDecl):
                        asg._parameter_edges[spelling] = []
                        try:
                            with warnings.catch_warnings() as warning:
                                warnings.simplefilter("error")
                                for index, child in enumerate(decl.get_children()):
                                    #childspelling = spelling + child.spelling()
                                    #if childspelling.endswith('::'):
                                    #    childspelling += 'parm_' + str(index)
                                    #if childspelling in setted:
                                    #    warnings.warn('')
                                    #else:
                                    #    setted.add(childspelling)
                                    target, specifiers = read_qualified_type(asg, child.get_type())
                                    asg._parameter_edges[spelling].append(dict(name=child.get_name(), target=target, specifiers=specifiers))
                                    #asg._nodes[childspelling] = dict(proxy=VariableProxy)
                                    #asg._syntax_edges[spelling].append(childspelling)
                        except Warning as warning:
                            message = str(warning)
                            #asg._syntax_edges.pop(spelling)
                            #for index, child in enumerate(decl.get_children()):
                            #    childspelling = spelling + child.spelling()
                            #    if childspelling.endswith('::'):
                            #        childspelling += 'parm_' + str(index)
                            #    asg._nodes.pop(childspelling, None)
                            #    asg._type_edges.pop(childspelling, None)
                            asg._parameter_edges.pop(spelling, None)
                            warnings.warn(message, warning.__class__)
                            return []
                        else:
                            if not isinstance(decl, clang.CXXConstructorDecl):
                                try:
                                    with warnings.catch_warnings() as warning:
                                        warnings.simplefilter("error")
                                        target, specifiers = read_qualified_type(asg, decl.get_return_type())
                                except Warning as warning:
                                    asg._parameter_edges.pop(spelling)
                                    #for index, child in enumerate(decl.get_children()):
                                    #    childspelling = spelling + child.spelling()
                                    #    if childspelling.endswith('::'):
                                    #        childspelling += 'parm_' + str(index)
                                    #    asg._nodes.pop(childspelling, None)
                                    #    asg._type_edges.pop(childspelling, None)
                                    warnings.warn(str(warning) + ' for function \'' + spelling + '\' return type',
                                            warning.__class__)
                                    return []
                                else:
                                    asg._type_edges[spelling] = dict(target=target, specifiers=specifiers)
                                    asg._nodes[spelling] = dict(proxy=MethodProxy,
                                            is_static=decl.is_static(),
                                            is_const=decl.is_const(),
                                            is_volatile=decl.is_volatile(),
                                            is_virtual=decl.is_virtual(),
                                            is_pure=decl.is_pure())
                                    #decl=decl)
                            else:
                                asg._nodes[spelling] = dict(proxy=ConstructorProxy,
                                        is_virtual=decl.is_virtual())
                                #decl=decl)
                            asg._syntax_edges[scope].append(spelling)
                            return [spelling]
                    else:
                        if not spelling in asg._nodes:
                            asg._nodes[spelling] = dict(proxy=DestructorProxy,
                                    virtual=decl.is_virtual())
                            #decl=decl)
                            asg._syntax_edges[scope].append(spelling)
                        return [spelling]
            else:
                asg._parameter_edges[spelling] = []
                try:
                    with warnings.catch_warnings() as warning:
                        warnings.simplefilter("error")
                        setted = set()
                        for index, child in enumerate(decl.get_children()):
                            #childspelling = spelling + child.spelling()
                            #if childspelling.endswith('::'):
                            #    childspelling += 'parm_' + str(index)
                            #if childspelling in setted:
                            #    warnings.warn('')
                            #else:
                            #    setted.add(childspelling)
                            target, specifiers = read_qualified_type(asg, child.get_type())
                            asg._parameter_edges[spelling].append(dict(name=child.get_name(), target=target, specifiers=specifiers))
                            #asg._type_edges[childspelling] = dict(target=target,
                            #        specifiers=specifiers)
                            #asg._nodes[childspelling] = dict(proxy=VariableProxy)
                            #asg._syntax_edges[spelling].append(childspelling)
                except Warning as warning:
                    message = str(warning)
                    asg._parameter_edges.pop(spelling)
                    #for index, child in enumerate(decl.get_children()):
                    #    childspelling = spelling + child.spelling()
                    #    if childspelling.endswith('::'):
                    #        childspelling += 'parm_' + str(index)
                    #    asg._nodes.pop(childspelling, None)
                    #    asg._type_edges.pop(childspelling, None)
                    warnings.warn(message, warning.__class__)
                    return []
                else:
                    try:
                        with warnings.catch_warnings() as warning:
                            warnings.simplefilter("error")
                            target, specifiers = read_qualified_type(asg, decl.get_return_type())
                    except Warning as warning:
                        message = str(warning) + ' for function \'' + spelling + '\''
                        asg._parameter_edges.pop(spelling)
                        #for index, child in enumerate(decl.get_children()):
                        #    childspelling = spelling + child.spelling()
                        #    if childspelling.endswith('::'):
                        #        childspelling += 'parm_' + str(index)
                        #    asg._nodes.pop(childspelling, None)
                        #    asg._type_edges.pop(childspelling, None)
                        asg._type_edges.pop(spelling, None)
                        warnings.warn(message, warning.__class__)
                        return []
                    else:
                        asg._type_edges[spelling] = dict(target=target, specifiers=specifiers)
                        asg._nodes[spelling] = dict(proxy=FunctionProxy)
                        #decl=decl)
                        asg._syntax_edges[scope].append(spelling)
                        read_file(asg, spelling, decl)
                        return [spelling]

def read_field(asg, decl):
    if decl.get_name() == '':
        warnings.warn('', AnonymousFieldWarning)
        return []
    try:
        with warnings.catch_warnings():
            warnings.simplefilter('error')
            parent = read_context_parent(asg, decl)
    except Warning as warning:
        warnings.warn(str(warning) + ' for field \'' + decl.get_name() + '\'', warning.__class__)
        return []
    else:
        if isinstance(parent, clang.TranslationUnitDecl):
            scope = '::'
            spelling = scope + decl.get_name()
        else:
            scope = read_decl(asg, parent, out=False)
            if len(scope) == 0:
                warnings.warn(spelling, UndeclaredParentWarning)
                return []
            elif len(scope) == 1:
                scope = scope[0]
            else:
                warnings.warn(spelling, MultipleDeclaredParentWarning)
                return []
            spelling = scope + '::' + decl.get_name()
            if spelling.startswith('class '):
                spelling = spelling[6:]
            elif spelling.startswith('union '):
                spelling = spelling[6:]
            elif spelling.startswith('struct '):
                spelling = spelling[7:]
        try:
            with warnings.catch_warnings() as warning:
                warnings.simplefilter("error")
                target, specifiers = read_qualified_type(asg, decl.get_type())
        except Warning as warning:
            warnings.warn(str(warning) + ' for field \'' + spelling + '\'', warning.__class__)
            return []
        else:
            asg._type_edges[spelling] = dict(target=target, specifiers=specifiers)
            asg._nodes[spelling] = dict(proxy=FieldProxy,
                    is_mutable=decl.is_mutable(),
                    is_static=False)#, # TODO
            #decl=decl)
            asg._syntax_edges[scope].append(spelling)
            return [spelling]

def read_class_template(asg, decl, out=True):
    try:
        with warnings.catch_warnings():
            warnings.simplefilter('error')
            parent = read_context_parent(asg, decl)
    except Warning as warning:
        warnings.warn(str(warning) + ' for class \'' + decl.get_name() + '\'', warning.__class__)
        return []
    else:
        if isinstance(parent, (clang.ClassTemplateDecl, clang.ClassTemplatePartialSpecializationDecl)):
            warnings.warn("", UserWarning)
            return []
        elif isinstance(parent, clang.TranslationUnitDecl):
            scope = '::'
            spelling = 'class ' + scope + decl.get_name()
        else:
            scope = read_decl(asg, parent, out=False)
            if len(scope) == 0:
                warnings.warn(spelling, UndeclaredParentWarning)
                return []
            elif len(scope) == 1:
                scope = scope[0]
            else:
                warnings.warn(spelling, MultipleDeclaredParentWarning)
                return []
            spelling = scope + '::' + decl.get_name()
            if spelling.startswith('union '):
                spelling = 'class ' + spelling[6:]
            elif spelling.startswith('struct '):
                spelling = 'class ' + spelling[7:]
            elif not spelling.startswith('class '):
                spelling = 'class ' + spelling
        if not spelling in asg._nodes:
            asg._nodes[spelling] = dict(proxy=ClassTemplateProxy,
                    #decl=decl,
                    is_complete=decl.is_this_declaration_a_definition())
            asg._syntax_edges[scope].append(spelling)
            asg._specialization_edges[spelling] = set()
            asg._syntax_edges[spelling] = []
            read_file(asg, spelling, decl)
        else:
            asg._nodes[spelling]['is_complete'] = asg._nodes[spelling]['is_complete'] or decl.is_this_declaration_a_definition()
        if out:
            for child in decl.get_children():
                try:
                    asg._specialization_edges[spelling].update(set(read_tag(asg, child)))
                except:
                    pass
        return [spelling]

def read_tag(asg, decl, out=True):
    if isinstance(decl, clang.EnumDecl):
        return read_enum(asg, decl, out=out)
    elif isinstance(decl, clang.ClassTemplatePartialSpecializationDecl):
        # TODO
        try:
            with warnings.catch_warnings():
                warnings.simplefilter('error')
                parent = read_context_parent(asg, decl)
        except Warning as warning:
            warnings.warn(str(warning) + ' for class \'' + decl.get_typedef_name_for_anon_decl().get_name() + '\'', warning.__class__)
            return []
        else:
            if isinstance(parent, (clang.ClassTemplateDecl, clang.ClassTemplatePartialSpecializationDecl)):
                warnings.warn("", UserWarning)
                return []
            elif isinstance(parent, clang.TranslationUnitDecl):
                scope = '::'
                spelling = scope + decl.get_name()
            else:
                scope = read_decl(asg, parent, out=False)
                if len(scope) == 0:
                    warnings.warn(spelling, UndeclaredParentWarning)
                    return []
                elif len(scope) == 1:
                    scope = scope[0]
                else:
                    warnings.warn(spelling, MultipleDeclaredParentWarning)
                    return []
                spelling = scope + '::' + decl.get_name()
                if spelling.startswith('class '):
                    spelling = spelling[6:]
                elif spelling.startswith('union '):
                    spelling = spelling[6:]
                elif spelling.startswith('struct '):
                    spelling = spelling[7:]
            if decl.is_class():
                spelling = 'class ' + spelling
            elif decl.is_struct():
                spelling = 'struct ' + spelling
            elif decl.is_union():
                spelling = 'union ' + spelling
            else:
                warnings.warn(spelling, NotImplementedDeclWarning)
                return []
            spelling = spelling.replace('_Bool', 'bool')
            if not spelling in asg._nodes:
                asg._nodes[spelling] = dict(proxy=ClassTemplatePartialSpecializationProxy)#,
                #decl=decl)
                specialize = read_class_template(asg, decl.get_specialized_template(), out=False)[0]
                asg._specialization_edges[specialize].add(spelling)
                asg._syntax_edges[scope].append(spelling)
                asg._syntax_edges[spelling] = []
                read_file(asg, spelling, decl)
            return [spelling]
    if not decl.has_name_for_linkage():
        warnings.warn('', AnonymousClassWarning)
        return []
    if not decl.get_typedef_name_for_anon_decl() is None:
        try:
            with warnings.catch_warnings():
                warnings.simplefilter('error')
                parent = read_syntaxic_parent(asg, decl)
        except Warning as warning:
            warnings.warn(str(warning) + ' for class \'' + decl.get_typedef_name_for_anon_decl().get_name() + '\'', warning.__class__)
            return []
        else:
            if isinstance(parent, (clang.ClassTemplateDecl, clang.ClassTemplatePartialSpecializationDecl)):
                warnings.warn("", UserWarning)
                # TODO
                return []
            elif isinstance(parent, clang.TranslationUnitDecl):
                scope = '::'
                spelling = scope + decl.get_typedef_name_for_anon_decl().get_name()
            else:
                scope = read_decl(asg, parent, out=False)
                if len(scope) == 0:
                    warnings.warn(spelling, UndeclaredParentWarning)
                    return []
                elif len(scope) == 1:
                    scope = scope[0]
                else:
                    warnings.warn(spelling, MultipleDeclaredParentWarning)
                    return []
                spelling = scope + '::' + decl.get_typedef_name_for_anon_decl().get_name()
                if spelling.startswith('class '):
                    spelling = spelling[6:]
                elif spelling.startswith('union '):
                    spelling = spelling[6:]
                elif spelling.startswith('struct '):
                    spelling = spelling[7:]
    elif decl.get_name() == '':
        warnings.warn('in scope \'' + scope + '\'', AnonymousClassWarning)
        return []
    else:
        try:
            with warnings.catch_warnings():
                warnings.simplefilter('error')
                parent = read_syntaxic_parent(asg, decl)
        except Warning as warning:
            warnings.warn(str(warning) + ' for class \'' + decl.get_typedef_name_for_anon_decl().get_name() + '\'', warning.__class__)
            return []
        else:
            if isinstance(parent, clang.TranslationUnitDecl):
                scope = '::'
                spelling = scope + decl.get_name()
            else:
                scope = read_decl(asg, parent, out=False)
                if len(scope) == 0:
                    warnings.warn(spelling, UndeclaredParentWarning)
                    return []
                elif len(scope) == 1:
                    scope = scope[0]
                else:
                    warnings.warn(spelling, MultipleDeclaredParentWarning)
                    return []
                spelling = scope + '::' + decl.get_name()
                if spelling.startswith('class '):
                    spelling = spelling[6:]
                elif spelling.startswith('union '):
                    spelling = spelling[6:]
                elif spelling.startswith('struct '):
                    spelling = spelling[7:]
            if decl.is_class():
                spelling = 'class ' + spelling
            elif decl.is_struct():
                spelling = 'struct ' + spelling
            elif decl.is_union():
                spelling = 'union ' + spelling
            else:
                warnings.warn(spelling, NotImplementedDeclWarning)
                return []
    if isinstance(decl, clang.ClassTemplateSpecializationDecl):
        spelling = spelling.replace('_Bool', 'bool')
    if not spelling in asg._nodes:
        if decl.is_class():
            default_access = 'private'
        else:
            default_access = 'public'
        if isinstance(decl, clang.ClassTemplateSpecializationDecl):
            asg._nodes[spelling] = dict(proxy=ClassTemplateSpecializationProxy,
                _scope = scope,
                default_access=default_access,
                is_abstract=False,
                _is_copyable=True,
                is_complete=False)#,
            #decl=decl)
            specialize = read_class_template(asg, decl.get_specialized_template(), out=False)[0]
            asg._specialization_edges[specialize].add(spelling)
            asg._syntax_edges[spelling] = []
            asg._base_edges[spelling] = []
            asg._syntax_edges[scope].append(spelling)
            asg._template_edges[spelling] = []
            try:
                with warnings.catch_warnings():
                    warnings.simplefilter('error')
                    templates = decl.get_template_args()
                    for template in [templates.get(index) for index in range(templates.size())]:
                        if template.get_kind() is clang.TemplateArgument.arg_kind.TYPE:
                            target, specifiers = read_qualified_type(asg, template.get_as_type())
                            asg._template_edges[spelling].append(dict(target = target, specifiers = specifiers))
                        elif template.get_kind() is clang.TemplateArgument.arg_kind.DECLARATION:
                            target, specifiers = read_qualified_type(asg, template.get_as_decl().get_type())
                            asg._template_edges[spelling].append(dict(target = target, specifiers = specifiers))
                        elif template.get_kind() is clang.TemplateArgument.arg_kind.INTEGRAL:
                            target, specifiers = read_qualified_type(asg, template.get_integral_type())
                            asg._template_edges[spelling].append(dict(target = target, specifiers = specifiers))
                        else:
                            warnings.warn(str(template.get_kind()), NotImplementedTemplateWarning)
            except Warning as warning:
                asg._nodes.pop(spelling)
                asg._specialization_edges[specialize].remove(spelling)
                asg._syntax_edges.pop(spelling)
                asg._base_edges.pop(spelling)
                asg._syntax_edges[scope].remove(spelling)
                asg._template_edges.pop(spelling)
                warnings.warn(str(warning) + 'nested', warning.__class__)
                return []
        else:
            asg._nodes[spelling] = dict(proxy=ClassProxy,
                _scope = scope,
                default_access=default_access,
                is_abstract=False,
                _is_copyable=True,
                is_complete=False)
            #decl=decl)
            asg._syntax_edges[spelling] = []
            asg._base_edges[spelling] = []
            asg._syntax_edges[scope].append(spelling)
    if out and not spelling in asg._read and decl.is_complete_definition():
        if spelling == 'struct ::statiskit::DiscreteUnivariateDistribution':
            debug = True
        else:
            debug = False
        asg._read.add(spelling)
        if not asg[spelling].is_complete:
            asg._syntax_edges[scope].remove(spelling)
            asg._syntax_edges[scope].append(spelling)
            if isinstance(decl, clang.CXXRecordDecl):
                asg._nodes[spelling]['is_abstract'] = decl.is_abstract()
                asg._nodes[spelling]['_is_copyable'] = decl.is_copyable()
            else:
                asg._nodes[spelling]['is_abstract'] = False
                asg._nodes[spelling]['_is_copyable'] = True
            asg._nodes[spelling]['is_complete'] = True
            asg._base_edges[spelling] = []
            for base in decl.get_bases():
                try:
                    with warnings.catch_warnings():
                        warnings.simplefilter('error')
                        basespelling, specifiers = read_qualified_type(asg, base.get_type())
                        asg._base_edges[spelling].append(dict(base=asg[basespelling].node,
                            access=str(base.get_access_specifier()).strip('AS_').lower(),
                            is_virtual=False))
                except Warning as warning:
                    pass
                    #warnings.warn(str(warning), warning.__class__)
            for base in decl.get_virtual_bases():
                try:
                    with warnings.catch_warnings():
                        warnings.simplefilter('error')
                        basespelling, specifiers = read_qualified_type(asg, base.get_type())
                        asg._base_edges[spelling].append(dict(base=asg[basespelling].node,
                            access=str(base.get_access_specifier()).strip('AS_').lower(),
                            is_virtual=True))
                except Warning as warning:
                    pass
                    #warnings.warn(str(warning), warning.__class__)
            for child in decl.get_children():
                if debug and child.get_name() == 'event_type':
                    import pdb
                    #pdb.set_trace()
                try:
                    with warnings.catch_warnings():
                        warnings.simplefilter('error')
                        access = str(child.get_access_unsafe()).strip('AS_').lower()
                        children = read_decl(asg, child)
                        for childspelling in children:
                            asg._nodes[childspelling]["access"] = access
                            #dict.pop(asg._nodes[childspelling], "_header", None)
                except Warning as warning:
                    pass
                    #warnings.warn(str(warning), warning.__class__)
            asg._nodes[spelling]['is_complete'] = len(asg._syntax_edges[spelling])+len(asg._base_edges[spelling]) > 0
            if asg[spelling].is_complete:
                read_file(asg, spelling, decl)
        else:
            for child in decl.get_children():
                try:
                    with warnings.catch_warnings():
                        warnings.simplefilter('error')
                        if isinstance(child, clang.TagDecl):
                            access = str(child.get_access_unsafe()).strip('AS_').lower()
                            children = read_tag(asg, child)
                            for childspelling in children:
                                asg._nodes[childspelling]["access"] = access
                                #dict.pop(asg._nodes[childspelling], "_header", None)
                except Warning as warning:
                    pass
                    #warnings.warn(str(warning), warning.__class__)
        asg._read.remove(spelling)
    return [spelling]

def read_typedef(asg, decl):
    try:
        with warnings.catch_warnings():
            warnings.simplefilter("error")
            parent = read_context_parent(asg, decl)
            if isinstance(parent, clang.ClassTemplateDecl):
                warnings.warn('' + decl.get_name() + '\'', UserWarning)
    except Warning as warning:
        warnings.warn(str(warning) + ' for variable \'' + decl.get_name() + '\'', warning.__class__)
        return []
    else:
        if isinstance(parent, clang.TranslationUnitDecl):
            scope = '::'
            spelling = scope + decl.get_name()
        else:
            scope = read_decl(asg, parent, out=False)
            if len(scope) == 0:
                warnings.warn(decl.get_name(), UndeclaredParentWarning)
                return []
            elif len(scope) == 1:
                scope = scope[0]
            else:
                warnings.warn(spelling, MultipleDeclaredParentWarning)
                return []
            spelling = scope + '::' + decl.get_name()
            if spelling.startswith('class '):
                spelling = spelling[6:]
            elif spelling.startswith('union '):
                spelling = spelling[6:]
            elif spelling.startswith('struct '):
                spelling = spelling[7:]
        try:
            with warnings.catch_warnings() as warning:
                warnings.simplefilter("error")
                target, specifiers = read_qualified_type(asg, decl.get_underlying_type())
                asg._type_edges[spelling] = dict(target=target, specifiers=specifiers)
        except Warning as warning:
            warnings.warn(str(warning) + ' for variable \'' + spelling + '\'', warning.__class__)
            return []
        else:
            if not spelling in asg._nodes:
                asg._nodes[spelling] = dict(proxy=TypedefProxy)
                asg._syntax_edges[scope].append(spelling)
                read_file(asg, spelling, decl)
            return [spelling]

def read_namespace(asg, decl, out=True):
    if decl.get_name() == '':
        children = []
        for child in decl.get_children():
            try:
                with warnings.catch_warnings():
                    warnings.simplefilter('error')
                    children.extend(read_decl(asg, child))
            except:
                pass
        return children
    else:
        try:
            with warnings.catch_warnings():
                warnings.simplefilter('error')
                parent = read_syntaxic_parent(asg, decl)
        except Warning as warning:
            warnings.warn(str(warning) + ' for namespace \'' + decl.get_name() + '\'', warning.__class__)
            return []
        else:
            if isinstance(parent, clang.TranslationUnitDecl):
                scope = '::'
                spelling = scope + decl.get_name()
            else:
                scope = read_decl(asg, parent, out=False)
                if len(scope) == 0:
                    warnings.warn(spelling, UndeclaredParentWarning)
                    return []
                elif len(scope) == 1:
                    scope = scope[0]
                else:
                    warnings.warn(spelling, MultipleDeclaredParentWarning)
                    return []
                spelling = scope + '::' + decl.get_name()
            if not spelling in asg._nodes:
                asg._nodes[spelling] = dict(proxy=NamespaceProxy)
                asg._syntax_edges[spelling] = []
            if not spelling in asg._syntax_edges[scope]:
                asg._syntax_edges[scope].append(spelling)
            if out and not spelling in asg._read:
                asg._read.add(spelling)
                for child in decl.get_children():
                    try:
                        with warnings.catch_warnings():
                            warnings.simplefilter('error')
                            read_decl(asg, child)
                    except:
                        pass
                asg._read.remove(spelling)
            return [spelling]

def read_decl(asg, decl, **kwargs):
    """
    """
    if isinstance(decl, clang.LinkageSpecDecl):
        language = asg._language
        if decl.get_language() is clang.LinkageSpecDecl.language_ids.LANG_C:
            asg._language = 'c'
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
