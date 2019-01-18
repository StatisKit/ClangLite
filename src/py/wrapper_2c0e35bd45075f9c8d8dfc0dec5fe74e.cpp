#include "_clanglite.h"

bool  (*method_pointer_f56d1a376318570c81f7b59d6124ffa8)(class ::clang::Decl const *)= ::clang::ExternCContextDecl::classof;
bool  (*method_pointer_7c23f58f6b59552a8401fbe90c98b36c)(enum ::clang::Decl::Kind )= ::clang::ExternCContextDecl::classofKind;
class ::clang::DeclContext * (*method_pointer_176e548cecf25eac8b3a2fba8df60d4d)(class ::clang::ExternCContextDecl const *)= ::clang::ExternCContextDecl::castToDeclContext;
class ::clang::ExternCContextDecl * (*method_pointer_721300149021541b9a6d3b05c2704914)(class ::clang::DeclContext const *)= ::clang::ExternCContextDecl::castFromDeclContext;

namespace autowig {
}

void wrapper_2c0e35bd45075f9c8d8dfc0dec5fe74e(pybind11::module& module)
{

    pybind11::class_<class ::clang::ExternCContextDecl, autowig::HolderType< class ::clang::ExternCContextDecl >::Type, class ::clang::Decl, class ::clang::DeclContext > class_2c0e35bd45075f9c8d8dfc0dec5fe74e(module, "ExternCContextDecl", "Declaration context for names declared as extern “C” in C++. This is\nneither the semantic nor lexical context for such declarations, but is\nused to check for conflicts with other extern “C” declarations. Example:\n\n");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def_static("classof", method_pointer_f56d1a376318570c81f7b59d6124ffa8, "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def_static("classof_kind", method_pointer_7c23f58f6b59552a8401fbe90c98b36c, "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def_static("cast_to_decl_context", method_pointer_176e548cecf25eac8b3a2fba8df60d4d, pybind11::return_value_policy::reference_internal, "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def_static("cast_from_decl_context", method_pointer_721300149021541b9a6d3b05c2704914, pybind11::return_value_policy::reference_internal, "");

}