#include "_clanglite.h"

class ::clang::BindingDecl * (*method_pointer_9f33652b35db55129d14aa44b171f723)(class ::clang::ASTContext &, unsigned int )= ::clang::BindingDecl::CreateDeserialized;
class ::clang::VarDecl * (::clang::BindingDecl::*method_pointer_ab6f4cf81e8a50c09c2ee837f5aa1808)()const= &::clang::BindingDecl::getHoldingVar;
bool  (*method_pointer_0a0e1a36042853dfa7ee2c56019e244a)(class ::clang::Decl const *)= ::clang::BindingDecl::classof;
bool  (*method_pointer_16e00ee30eac5817a83bb5101a2bfe8d)(enum ::clang::Decl::Kind )= ::clang::BindingDecl::classofKind;

namespace autowig {
}

void wrapper_345632bb56275b51ac3b5487f472ba13(pybind11::module& module)
{

    pybind11::class_<class ::clang::BindingDecl, autowig::HolderType< class ::clang::BindingDecl >::Type, class ::clang::ValueDecl > class_345632bb56275b51ac3b5487f472ba13(module, "BindingDecl", "");
    class_345632bb56275b51ac3b5487f472ba13.def_static("create_deserialized", method_pointer_9f33652b35db55129d14aa44b171f723, pybind11::return_value_policy::reference_internal, "");
    class_345632bb56275b51ac3b5487f472ba13.def("get_holding_var", method_pointer_ab6f4cf81e8a50c09c2ee837f5aa1808, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::VarDecl`\n\n");
    class_345632bb56275b51ac3b5487f472ba13.def_static("classof", method_pointer_0a0e1a36042853dfa7ee2c56019e244a, "");
    class_345632bb56275b51ac3b5487f472ba13.def_static("classof_kind", method_pointer_16e00ee30eac5817a83bb5101a2bfe8d, "");

}