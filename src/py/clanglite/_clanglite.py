__all__ = []


# Import Boost.Python module
from . import _clanglite

# Resolve scopes
_clanglite.clang.LinkageSpecDecl.language_i_ds = _clanglite.clang._linkage_spec_decl.language_i_ds
_clanglite.clang.Decl.kind = _clanglite.clang._decl.kind
_clanglite.clang.TemplateArgument.arg_kind = _clanglite.clang._template_argument.arg_kind
_clanglite.clang.BuiltinType.kind = _clanglite.clang._builtin_type.kind
_clanglite.clang.Type.type_class = _clanglite.clang._type.type_class


