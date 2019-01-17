#include "_clanglite.h"

class ::clang::DecompositionDecl * (*method_pointer_c58a9e1353b0544b8424320841d69374)(class ::clang::ASTContext &, unsigned int , unsigned int )= ::clang::DecompositionDecl::CreateDeserialized;
bool  (*method_pointer_edd4a175743959229790327667d8cd37)(class ::clang::Decl const *)= ::clang::DecompositionDecl::classof;
bool  (*method_pointer_505ddc8044a35ce0a7087e7069165665)(enum ::clang::Decl::Kind )= ::clang::DecompositionDecl::classofKind;


void wrapper_dc571eff37b95ae9b2dec9805c38004c(pybind11::module& module)
{

    pybind11::class_<class ::clang::DecompositionDecl, autowig::HolderType< class ::clang::DecompositionDecl >::Type, class ::clang::VarDecl > class_dc571eff37b95ae9b2dec9805c38004c(module, "DecompositionDecl", "");
    class_dc571eff37b95ae9b2dec9805c38004c.def_static("create_deserialized", method_pointer_c58a9e1353b0544b8424320841d69374, pybind11::return_value_policy::reference_internal, "");
    class_dc571eff37b95ae9b2dec9805c38004c.def_static("classof", method_pointer_edd4a175743959229790327667d8cd37, "");
    class_dc571eff37b95ae9b2dec9805c38004c.def_static("classof_kind", method_pointer_505ddc8044a35ce0a7087e7069165665, "");

}