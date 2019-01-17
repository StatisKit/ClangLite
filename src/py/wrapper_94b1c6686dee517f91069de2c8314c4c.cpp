#include "_clanglite.h"

class ::clang::OMPCapturedExprDecl * (*method_pointer_3967f0f41c5e548291eb5e3478cc3c59)(class ::clang::ASTContext &, unsigned int )= ::clang::OMPCapturedExprDecl::CreateDeserialized;
bool  (*method_pointer_075ee3c541175c6ba83b2af5d6c2c429)(class ::clang::Decl const *)= ::clang::OMPCapturedExprDecl::classof;
bool  (*method_pointer_d99eed282bbe5d4daaba26d3334acfad)(enum ::clang::Decl::Kind )= ::clang::OMPCapturedExprDecl::classofKind;


void wrapper_94b1c6686dee517f91069de2c8314c4c(pybind11::module& module)
{

    pybind11::class_<class ::clang::OMPCapturedExprDecl, autowig::HolderType< class ::clang::OMPCapturedExprDecl >::Type, class ::clang::VarDecl > class_94b1c6686dee517f91069de2c8314c4c(module, "OMPCapturedExprDecl", "");
    class_94b1c6686dee517f91069de2c8314c4c.def_static("create_deserialized", method_pointer_3967f0f41c5e548291eb5e3478cc3c59, pybind11::return_value_policy::reference_internal, "");
    class_94b1c6686dee517f91069de2c8314c4c.def_static("classof", method_pointer_075ee3c541175c6ba83b2af5d6c2c429, "");
    class_94b1c6686dee517f91069de2c8314c4c.def_static("classof_kind", method_pointer_d99eed282bbe5d4daaba26d3334acfad, "");

}