__all__ = []


# Import Boost.Python module
import clanglite.__clanglite

# Resolve scopes
clanglite.__clanglite.clang.LinkageSpecDecl.language_i_ds = clanglite.__clanglite.clang._linkage_spec_decl.language_i_ds
clanglite.__clanglite.clang.Decl.kind = clanglite.__clanglite.clang._decl.kind
clanglite.__clanglite.clang.TemplateArgument.arg_kind = clanglite.__clanglite.clang._template_argument.arg_kind
clanglite.__clanglite.clang.BuiltinType.kind = clanglite.__clanglite.clang._builtin_type.kind
clanglite.__clanglite.clang.Type.type_class = clanglite.__clanglite.clang._type.type_class


# Define aliases
clanglite.__clanglite.boost.python.Long.Base = clanglite.__clanglite.boost.python.detail.LongBase
clanglite.__clanglite.boost.python.Dict.Base = clanglite.__clanglite.boost.python.detail.DictBase
clanglite.__clanglite.boost.python.api.ConstObjattributePolicies.KeyType = clanglite.__clanglite.boost.python.api.Object
clanglite.__clanglite.boost.python.Str.Base = clanglite.__clanglite.boost.python.detail.StrBase
clanglite.__clanglite.boost.python.Tuple.Base = clanglite.__clanglite.boost.python.detail.TupleBase
clanglite.__clanglite.boost.python.objects.ClassId = clanglite.__clanglite.boost.python.TypeInfo
clanglite.__clanglite.boost.python.numeric.Array.Base = clanglite.__clanglite.boost.python.numeric.aux.ArrayBase
clanglite.__clanglite.boost.python.Slice.Base = clanglite.__clanglite.boost.python.detail.SliceBase
clanglite.__clanglite.boost.python.converter.detail.UnwindTypeIdHelper.ResultType = clanglite.__clanglite.boost.python.TypeInfo
clanglite.__clanglite.boost.python.api.ConstItemPolicies.KeyType = clanglite.__clanglite.boost.python.api.Object
clanglite.__clanglite.boost.python.List.Base = clanglite.__clanglite.boost.python.detail.ListBase
