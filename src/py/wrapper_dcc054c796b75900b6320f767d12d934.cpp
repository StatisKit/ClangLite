#include "_clanglite.h"

class ::clang::VarTemplatePartialSpecializationDecl * (*method_pointer_0f507becab4255118435fbdb244ad254)(class ::clang::ASTContext &, unsigned int )= ::clang::VarTemplatePartialSpecializationDecl::CreateDeserialized;
class ::clang::VarTemplatePartialSpecializationDecl * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_b6a861c91f475587ad9a65238d00567b)()= &::clang::VarTemplatePartialSpecializationDecl::getMostRecentDecl;
class ::clang::VarTemplatePartialSpecializationDecl * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_ccbdaa8b550c55be878a625c941f5589)()const= &::clang::VarTemplatePartialSpecializationDecl::getInstantiatedFromMember;
void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_4f8fdb290b0155ac98a20b6bf81aa088)(class ::clang::VarTemplatePartialSpecializationDecl *)= &::clang::VarTemplatePartialSpecializationDecl::setInstantiatedFromMember;
bool  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_80cd3f055c445e3981c47232a67df5a4)()= &::clang::VarTemplatePartialSpecializationDecl::isMemberSpecialization;
void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_00990ce2b30259aaa065142173c4b3c3)()= &::clang::VarTemplatePartialSpecializationDecl::setMemberSpecialization;
bool  (*method_pointer_e3f3c94b937353b19a1af00fa5ebb6d3)(class ::clang::Decl const *)= ::clang::VarTemplatePartialSpecializationDecl::classof;
bool  (*method_pointer_532e9077f0525c3aa6b1c0da10624f2e)(enum ::clang::Decl::Kind )= ::clang::VarTemplatePartialSpecializationDecl::classofKind;

namespace autowig {
}

void wrapper_dcc054c796b75900b6320f767d12d934(pybind11::module& module)
{

    pybind11::class_<class ::clang::VarTemplatePartialSpecializationDecl, autowig::HolderType< class ::clang::VarTemplatePartialSpecializationDecl >::Type, class ::clang::VarTemplateSpecializationDecl > class_dcc054c796b75900b6320f767d12d934(module, "VarTemplatePartialSpecializationDecl", "");
    class_dcc054c796b75900b6320f767d12d934.def_static("create_deserialized", method_pointer_0f507becab4255118435fbdb244ad254, pybind11::return_value_policy::reference_internal, "");
    class_dcc054c796b75900b6320f767d12d934.def("get_most_recent_decl", method_pointer_b6a861c91f475587ad9a65238d00567b, pybind11::return_value_policy::reference_internal, "");
    class_dcc054c796b75900b6320f767d12d934.def("get_instantiated_from_member", method_pointer_ccbdaa8b550c55be878a625c941f5589, pybind11::return_value_policy::reference_internal, "Retrieve the member variable template partial specialization from which\nthis particular variable template partial specialization was\ninstantiated.\n\n:Return Type:\n    :cpp:class:`::clang::VarTemplatePartialSpecializationDecl`\n\n");
    class_dcc054c796b75900b6320f767d12d934.def("set_instantiated_from_member", method_pointer_4f8fdb290b0155ac98a20b6bf81aa088, "");
    class_dcc054c796b75900b6320f767d12d934.def("is_member_specialization", method_pointer_80cd3f055c445e3981c47232a67df5a4, "Determines whether this variable template partial specialization was a\nspecialization of a member partial specialization.\n\nIn the following example, the member template partial specialization\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_dcc054c796b75900b6320f767d12d934.def("set_member_specialization", method_pointer_00990ce2b30259aaa065142173c4b3c3, "Note that this member template is a specialization.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_dcc054c796b75900b6320f767d12d934.def_static("classof", method_pointer_e3f3c94b937353b19a1af00fa5ebb6d3, "");
    class_dcc054c796b75900b6320f767d12d934.def_static("classof_kind", method_pointer_532e9077f0525c3aa6b1c0da10624f2e, "");

}