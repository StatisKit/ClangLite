#include "_clanglite.h"

class ::clang::TypeAliasDecl * (::clang::TypeAliasTemplateDecl::*method_pointer_92f0c5703a845875830a32e9a9cdbdf0)()const= &::clang::TypeAliasTemplateDecl::getTemplatedDecl;
class ::clang::TypeAliasTemplateDecl * (::clang::TypeAliasTemplateDecl::*method_pointer_19e38818e5995c98a503a6e06eef670c)()= &::clang::TypeAliasTemplateDecl::getCanonicalDecl;
class ::clang::TypeAliasTemplateDecl const * (::clang::TypeAliasTemplateDecl::*method_pointer_51bc98d4e5b751dc9d4f277c7119c336)()const= &::clang::TypeAliasTemplateDecl::getCanonicalDecl;
class ::clang::TypeAliasTemplateDecl * (::clang::TypeAliasTemplateDecl::*method_pointer_9b4f829df9695f04966c3579c8f91c44)()= &::clang::TypeAliasTemplateDecl::getPreviousDecl;
class ::clang::TypeAliasTemplateDecl const * (::clang::TypeAliasTemplateDecl::*method_pointer_08da488b26c25ed19152c194de98fea2)()const= &::clang::TypeAliasTemplateDecl::getPreviousDecl;
class ::clang::TypeAliasTemplateDecl * (::clang::TypeAliasTemplateDecl::*method_pointer_21212176034c501cbf2236dbc37612aa)()const= &::clang::TypeAliasTemplateDecl::getInstantiatedFromMemberTemplate;
class ::clang::TypeAliasTemplateDecl * (*method_pointer_21f40cbf27c3543c841f243e1b77ee11)(class ::clang::ASTContext &, unsigned int )= ::clang::TypeAliasTemplateDecl::CreateDeserialized;
bool  (*method_pointer_f308a8e811215c80a130624632513b04)(class ::clang::Decl const *)= ::clang::TypeAliasTemplateDecl::classof;
bool  (*method_pointer_9364c7fed91c5b769f6378f3d4e0391a)(enum ::clang::Decl::Kind )= ::clang::TypeAliasTemplateDecl::classofKind;

namespace autowig {
}

void wrapper_19f2e9be2a19546ea2b5c16dcb943e36(pybind11::module& module)
{

    pybind11::class_<class ::clang::TypeAliasTemplateDecl, autowig::HolderType< class ::clang::TypeAliasTemplateDecl >::Type, class ::clang::RedeclarableTemplateDecl > class_19f2e9be2a19546ea2b5c16dcb943e36(module, "TypeAliasTemplateDecl", "Declaration of an alias template.\n\nFor example:\n\n");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_templated_decl", method_pointer_92f0c5703a845875830a32e9a9cdbdf0, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::TypeAliasDecl`\n\n");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_canonical_decl", method_pointer_19e38818e5995c98a503a6e06eef670c, pybind11::return_value_policy::reference_internal, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_canonical_decl", method_pointer_51bc98d4e5b751dc9d4f277c7119c336, pybind11::return_value_policy::reference_internal, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_previous_decl", method_pointer_9b4f829df9695f04966c3579c8f91c44, pybind11::return_value_policy::reference_internal, "Retrieve the previous declaration of this function template, or NULL if\nno such declaration exists.\n\n:Return Type:\n    :cpp:class:`::clang::TypeAliasTemplateDecl`\n\n");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_previous_decl", method_pointer_08da488b26c25ed19152c194de98fea2, pybind11::return_value_policy::reference_internal, "Retrieve the previous declaration of this function template, or NULL if\nno such declaration exists.\n\n:Return Type:\n    :cpp:class:`::clang::TypeAliasTemplateDecl`\n\n");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_instantiated_from_member_template", method_pointer_21212176034c501cbf2236dbc37612aa, pybind11::return_value_policy::reference_internal, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def_static("create_deserialized", method_pointer_21f40cbf27c3543c841f243e1b77ee11, pybind11::return_value_policy::reference_internal, "Create an empty alias template node.\n\n:Parameters:\n  - `C` (:cpp:class:`::clang::ASTContext`) - Undocumented\n  - `ID` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::TypeAliasTemplateDecl`\n\n");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def_static("classof", method_pointer_f308a8e811215c80a130624632513b04, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def_static("classof_kind", method_pointer_9364c7fed91c5b769f6378f3d4e0391a, "");

}