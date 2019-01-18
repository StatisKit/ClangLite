#include "_clanglite.h"

class ::clang::TypedefDecl * (*method_pointer_b69aefef4ff15b81b646b831e889fa17)(class ::clang::ASTContext &, unsigned int )= ::clang::TypedefDecl::CreateDeserialized;
bool  (*method_pointer_45e36ed1450e5cb695711537dfe53972)(class ::clang::Decl const *)= ::clang::TypedefDecl::classof;
bool  (*method_pointer_18de171fccaa54609a8e8edff7bebd66)(enum ::clang::Decl::Kind )= ::clang::TypedefDecl::classofKind;

namespace autowig {
}

void wrapper_8792dec06996512a853ddf675dc4d4a5(pybind11::module& module)
{

    pybind11::class_<class ::clang::TypedefDecl, autowig::HolderType< class ::clang::TypedefDecl >::Type, class ::clang::TypedefNameDecl > class_8792dec06996512a853ddf675dc4d4a5(module, "TypedefDecl", "");
    class_8792dec06996512a853ddf675dc4d4a5.def_static("create_deserialized", method_pointer_b69aefef4ff15b81b646b831e889fa17, pybind11::return_value_policy::reference_internal, "");
    class_8792dec06996512a853ddf675dc4d4a5.def_static("classof", method_pointer_45e36ed1450e5cb695711537dfe53972, "");
    class_8792dec06996512a853ddf675dc4d4a5.def_static("classof_kind", method_pointer_18de171fccaa54609a8e8edff7bebd66, "");

}