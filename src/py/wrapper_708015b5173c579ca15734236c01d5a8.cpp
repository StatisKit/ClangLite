#include "_clanglite.h"

class ::clang::UnresolvedUsingTypenameDecl * (::clang::UnresolvedUsingType::*method_pointer_5c54a9bc4ce8567ca8cd25971788cb29)()const= &::clang::UnresolvedUsingType::getDecl;
bool  (::clang::UnresolvedUsingType::*method_pointer_49a47117dcdd552884f49f5ad2a0130d)()const= &::clang::UnresolvedUsingType::isSugared;
class ::clang::QualType  (::clang::UnresolvedUsingType::*method_pointer_25404b70309156e1a88b847c57749557)()const= &::clang::UnresolvedUsingType::desugar;
bool  (*method_pointer_3350ea98493b5a609335c8a9bf2b6b9a)(class ::clang::Type const *)= ::clang::UnresolvedUsingType::classof;


void wrapper_708015b5173c579ca15734236c01d5a8(pybind11::module& module)
{

    pybind11::class_<class ::clang::UnresolvedUsingType, autowig::HolderType< class ::clang::UnresolvedUsingType >::Type, class ::clang::Type > class_708015b5173c579ca15734236c01d5a8(module, "UnresolvedUsingType", "Represents the dependent type named by a dependently-scoped typename\nusing declaration, e.g. using typename Base::foo;\n\nTemplate instantiation turns these into the underlying type.\n\n");
    class_708015b5173c579ca15734236c01d5a8.def("get_decl", method_pointer_5c54a9bc4ce8567ca8cd25971788cb29, pybind11::return_value_policy::reference_internal, "");
    class_708015b5173c579ca15734236c01d5a8.def("is_sugared", method_pointer_49a47117dcdd552884f49f5ad2a0130d, "");
    class_708015b5173c579ca15734236c01d5a8.def("desugar", method_pointer_25404b70309156e1a88b847c57749557, "");
    class_708015b5173c579ca15734236c01d5a8.def_static("classof", method_pointer_3350ea98493b5a609335c8a9bf2b6b9a, "");

}