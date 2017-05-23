__all__ = []


# Import Boost.Python module
import __clanglite

# Resolve scopes
__clanglite.clang.LinkageSpecDecl.language_i_ds = __clanglite.clang._linkage_spec_decl.language_i_ds
__clanglite.clang.Decl.kind = __clanglite.clang._decl.kind
__clanglite.clang.TemplateArgument.arg_kind = __clanglite.clang._template_argument.arg_kind
__clanglite.clang.BuiltinType.kind = __clanglite.clang._builtin_type.kind
__clanglite.clang.Type.type_class = __clanglite.clang._type.type_class

# Group template specializations
__clanglite.llvm.detail._AlignmentCalcImpl = (__clanglite.llvm.detail._AlignmentCalcImpl_6bc87a1668d653eba3c26946758eb6dc)

