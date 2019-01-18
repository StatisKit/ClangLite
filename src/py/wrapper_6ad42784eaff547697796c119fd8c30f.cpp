#include "_clanglite.h"

class ::clang::NamedDecl * (::clang::TemplateDecl::*method_pointer_8e923e09f8d85043871ed4c79c6f3285)()const= &::clang::TemplateDecl::getTemplatedDecl;
bool  (*method_pointer_82cedffb8c6f5b63aa9c7e1fab902e70)(class ::clang::Decl const *)= ::clang::TemplateDecl::classof;
bool  (*method_pointer_30e71c321ace5ff8975bf710816334b8)(enum ::clang::Decl::Kind )= ::clang::TemplateDecl::classofKind;
bool  (::clang::TemplateDecl::*method_pointer_38cefaeeea8859c0ad8032b409a12ae6)()const= &::clang::TemplateDecl::isConcept;
void  (::clang::TemplateDecl::*method_pointer_48fa123fd5f556f2b8d8305debb15cc6)()= &::clang::TemplateDecl::setConcept;

namespace autowig {
}

void wrapper_6ad42784eaff547697796c119fd8c30f(pybind11::module& module)
{

    pybind11::class_<class ::clang::TemplateDecl, autowig::HolderType< class ::clang::TemplateDecl >::Type, class ::clang::NamedDecl > class_6ad42784eaff547697796c119fd8c30f(module, "TemplateDecl", "The base class of all kinds of template declarations (e.g., class,\nfunction, etc.).\n\nThe TemplateDecl class stores the list of template parameters and a\nreference to the templated scoped declaration: the underlying AST node.\n\n");
    class_6ad42784eaff547697796c119fd8c30f.def("get_templated_decl", method_pointer_8e923e09f8d85043871ed4c79c6f3285, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::NamedDecl`\n\n");
    class_6ad42784eaff547697796c119fd8c30f.def_static("classof", method_pointer_82cedffb8c6f5b63aa9c7e1fab902e70, "");
    class_6ad42784eaff547697796c119fd8c30f.def_static("classof_kind", method_pointer_30e71c321ace5ff8975bf710816334b8, "");
    class_6ad42784eaff547697796c119fd8c30f.def("is_concept", method_pointer_38cefaeeea8859c0ad8032b409a12ae6, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_6ad42784eaff547697796c119fd8c30f.def("set_concept", method_pointer_48fa123fd5f556f2b8d8305debb15cc6, "");

}