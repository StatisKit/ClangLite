#include "_clanglite.h"

class ::clang::EmptyDecl * (*method_pointer_e45009926b505d98a375ae40503b300a)(class ::clang::ASTContext &, class ::clang::DeclContext *, class ::clang::SourceLocation )= ::clang::EmptyDecl::Create;
class ::clang::EmptyDecl * (*method_pointer_e4ffaecfef875632965f6cf7b5ff48a8)(class ::clang::ASTContext &, unsigned int )= ::clang::EmptyDecl::CreateDeserialized;
bool  (*method_pointer_5871ed0c15a855a494a69982aa277c43)(class ::clang::Decl const *)= ::clang::EmptyDecl::classof;
bool  (*method_pointer_3327eb78307e56a6a564fd33593a9925)(enum ::clang::Decl::Kind )= ::clang::EmptyDecl::classofKind;

namespace autowig {
}

void wrapper_5bfc55543ee4569b9b6f1d945bfacbbb(pybind11::module& module)
{

    pybind11::class_<class ::clang::EmptyDecl, autowig::HolderType< class ::clang::EmptyDecl >::Type, class ::clang::Decl > class_5bfc55543ee4569b9b6f1d945bfacbbb(module, "EmptyDecl", "Represents an empty-declaration.\n\n");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.def_static("create", method_pointer_e45009926b505d98a375ae40503b300a, pybind11::return_value_policy::reference_internal, "");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.def_static("create_deserialized", method_pointer_e4ffaecfef875632965f6cf7b5ff48a8, pybind11::return_value_policy::reference_internal, "");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.def_static("classof", method_pointer_5871ed0c15a855a494a69982aa277c43, "");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.def_static("classof_kind", method_pointer_3327eb78307e56a6a564fd33593a9925, "");

}