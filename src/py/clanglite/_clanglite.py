__all__ = []


# Import Boost.Python module
import clanglite.__clanglite

# Resolve scopes
clanglite.__clanglite.clang.LinkageSpecDecl.language_i_ds = clanglite.__clanglite.clang._linkage_spec_decl.language_i_ds
clanglite.__clanglite.clang.Decl.kind = clanglite.__clanglite.clang._decl.kind
clanglite.__clanglite.clang.TemplateArgument.arg_kind = clanglite.__clanglite.clang._template_argument.arg_kind
clanglite.__clanglite.clang.BuiltinType.kind = clanglite.__clanglite.clang._builtin_type.kind
clanglite.__clanglite.clang.Type.type_class = clanglite.__clanglite.clang._type.type_class


