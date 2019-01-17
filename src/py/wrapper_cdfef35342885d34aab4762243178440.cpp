#include "_clanglite.h"

class ::clang::ImplicitParamDecl * (*method_pointer_f3b6f7c41a01501ea64acd30079c149c)(class ::clang::ASTContext &, unsigned int )= ::clang::ImplicitParamDecl::CreateDeserialized;
bool  (*method_pointer_669a0ce239dc5388b30594acfd7facad)(class ::clang::Decl const *)= ::clang::ImplicitParamDecl::classof;
bool  (*method_pointer_683aa3e3a13b5281bef113dddd666a5d)(enum ::clang::Decl::Kind )= ::clang::ImplicitParamDecl::classofKind;


void wrapper_cdfef35342885d34aab4762243178440(pybind11::module& module)
{

    pybind11::class_<class ::clang::ImplicitParamDecl, autowig::HolderType< class ::clang::ImplicitParamDecl >::Type, class ::clang::VarDecl > class_cdfef35342885d34aab4762243178440(module, "ImplicitParamDecl", "");
    class_cdfef35342885d34aab4762243178440.def_static("create_deserialized", method_pointer_f3b6f7c41a01501ea64acd30079c149c, pybind11::return_value_policy::reference_internal, "");
    class_cdfef35342885d34aab4762243178440.def_static("classof", method_pointer_669a0ce239dc5388b30594acfd7facad, "");
    class_cdfef35342885d34aab4762243178440.def_static("classof_kind", method_pointer_683aa3e3a13b5281bef113dddd666a5d, "");

}