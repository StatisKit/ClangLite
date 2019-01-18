#include "_clanglite.h"

class ::clang::ClassTemplatePartialSpecializationDecl * (*method_pointer_66982ddd10b55c0b9e50e8eef1ffb586)(class ::clang::ASTContext &, unsigned int )= ::clang::ClassTemplatePartialSpecializationDecl::CreateDeserialized;
class ::clang::ClassTemplatePartialSpecializationDecl * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_ee781781090d5923847dc4f67aa580bf)()= &::clang::ClassTemplatePartialSpecializationDecl::getMostRecentDecl;
class ::clang::ClassTemplatePartialSpecializationDecl * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_18534bb58a3f58d3a33c8911273f4a0f)()const= &::clang::ClassTemplatePartialSpecializationDecl::getInstantiatedFromMember;
class ::clang::ClassTemplatePartialSpecializationDecl * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_99fa278b74dd515c9a326a460cf73fe5)()const= &::clang::ClassTemplatePartialSpecializationDecl::getInstantiatedFromMemberTemplate;
void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_12901c2d8869567fa5541cb651ddd382)(class ::clang::ClassTemplatePartialSpecializationDecl *)= &::clang::ClassTemplatePartialSpecializationDecl::setInstantiatedFromMember;
bool  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_6b599ca7b5dc50d2ac9516ae84be04af)()= &::clang::ClassTemplatePartialSpecializationDecl::isMemberSpecialization;
void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_02174b7afab15d35be5ec1c0a5eba511)()= &::clang::ClassTemplatePartialSpecializationDecl::setMemberSpecialization;
class ::clang::QualType  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_dcebbf927b4e5f029c31219d42d9c49c)()const= &::clang::ClassTemplatePartialSpecializationDecl::getInjectedSpecializationType;
bool  (*method_pointer_38c08f465d9e5a55937266dbd50431b5)(class ::clang::Decl const *)= ::clang::ClassTemplatePartialSpecializationDecl::classof;
bool  (*method_pointer_c9257dcfba5c52618600db101b42eb03)(enum ::clang::Decl::Kind )= ::clang::ClassTemplatePartialSpecializationDecl::classofKind;

namespace autowig {
}

void wrapper_96d583a082485956938c728f02b79bce(pybind11::module& module)
{

    pybind11::class_<class ::clang::ClassTemplatePartialSpecializationDecl, autowig::HolderType< class ::clang::ClassTemplatePartialSpecializationDecl >::Type, class ::clang::ClassTemplateSpecializationDecl > class_96d583a082485956938c728f02b79bce(module, "ClassTemplatePartialSpecializationDecl", "");
    class_96d583a082485956938c728f02b79bce.def_static("create_deserialized", method_pointer_66982ddd10b55c0b9e50e8eef1ffb586, pybind11::return_value_policy::reference_internal, "");
    class_96d583a082485956938c728f02b79bce.def("get_most_recent_decl", method_pointer_ee781781090d5923847dc4f67aa580bf, pybind11::return_value_policy::reference_internal, "");
    class_96d583a082485956938c728f02b79bce.def("get_instantiated_from_member", method_pointer_18534bb58a3f58d3a33c8911273f4a0f, pybind11::return_value_policy::reference_internal, "Retrieve the member class template partial specialization from which\nthis particular class template partial specialization was instantiated.\n\n:Return Type:\n    :cpp:class:`::clang::ClassTemplatePartialSpecializationDecl`\n\n");
    class_96d583a082485956938c728f02b79bce.def("get_instantiated_from_member_template", method_pointer_99fa278b74dd515c9a326a460cf73fe5, pybind11::return_value_policy::reference_internal, "");
    class_96d583a082485956938c728f02b79bce.def("set_instantiated_from_member", method_pointer_12901c2d8869567fa5541cb651ddd382, "");
    class_96d583a082485956938c728f02b79bce.def("is_member_specialization", method_pointer_6b599ca7b5dc50d2ac9516ae84be04af, "Determines whether this class template partial specialization template\nwas a specialization of a member partial specialization.\n\nIn the following example, the member template partial specialization\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_96d583a082485956938c728f02b79bce.def("set_member_specialization", method_pointer_02174b7afab15d35be5ec1c0a5eba511, "Note that this member template is a specialization.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_96d583a082485956938c728f02b79bce.def("get_injected_specialization_type", method_pointer_dcebbf927b4e5f029c31219d42d9c49c, ":Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_96d583a082485956938c728f02b79bce.def_static("classof", method_pointer_38c08f465d9e5a55937266dbd50431b5, "");
    class_96d583a082485956938c728f02b79bce.def_static("classof_kind", method_pointer_c9257dcfba5c52618600db101b42eb03, "");

}