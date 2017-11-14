#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ClassTemplatePartialSpecializationDecl const volatile * get_pointer<class ::clang::ClassTemplatePartialSpecializationDecl const volatile >(class ::clang::ClassTemplatePartialSpecializationDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_96d583a082485956938c728f02b79bce()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ClassTemplatePartialSpecializationDecl * (*method_pointer_66982ddd10b55c0b9e50e8eef1ffb586)(class ::clang::ASTContext &, unsigned int ) = ::clang::ClassTemplatePartialSpecializationDecl::CreateDeserialized;
    class ::clang::ClassTemplatePartialSpecializationDecl * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_ee781781090d5923847dc4f67aa580bf)() = &::clang::ClassTemplatePartialSpecializationDecl::getMostRecentDecl;
    class ::clang::ClassTemplatePartialSpecializationDecl * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_18534bb58a3f58d3a33c8911273f4a0f)() const = &::clang::ClassTemplatePartialSpecializationDecl::getInstantiatedFromMember;
    void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_12901c2d8869567fa5541cb651ddd382)(class ::clang::ClassTemplatePartialSpecializationDecl *) = &::clang::ClassTemplatePartialSpecializationDecl::setInstantiatedFromMember;
    bool  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_6b599ca7b5dc50d2ac9516ae84be04af)() = &::clang::ClassTemplatePartialSpecializationDecl::isMemberSpecialization;
    void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_02174b7afab15d35be5ec1c0a5eba511)() = &::clang::ClassTemplatePartialSpecializationDecl::setMemberSpecialization;
    class ::clang::QualType  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_dcebbf927b4e5f029c31219d42d9c49c)() const = &::clang::ClassTemplatePartialSpecializationDecl::getInjectedSpecializationType;
    bool  (*method_pointer_38c08f465d9e5a55937266dbd50431b5)(class ::clang::Decl const *) = ::clang::ClassTemplatePartialSpecializationDecl::classof;
    bool  (*method_pointer_c9257dcfba5c52618600db101b42eb03)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplatePartialSpecializationDecl::classofKind;
    boost::python::class_< class ::clang::ClassTemplatePartialSpecializationDecl, autowig::Held< class ::clang::ClassTemplatePartialSpecializationDecl >::Type, boost::python::bases< class ::clang::ClassTemplateSpecializationDecl >, boost::noncopyable > class_96d583a082485956938c728f02b79bce("ClassTemplatePartialSpecializationDecl", "", boost::python::no_init);
    class_96d583a082485956938c728f02b79bce.def("create_deserialized", method_pointer_66982ddd10b55c0b9e50e8eef1ffb586, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("get_most_recent_decl", method_pointer_ee781781090d5923847dc4f67aa580bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("get_instantiated_from_member", method_pointer_18534bb58a3f58d3a33c8911273f4a0f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the member class template partial specialization from which\nthis particular class template partial specialization was instantiated.\n\n:Return Type:\n    :py:class:`clanglite.clang.ClassTemplatePartialSpecializationDecl`\n\n");
    class_96d583a082485956938c728f02b79bce.def("set_instantiated_from_member", method_pointer_12901c2d8869567fa5541cb651ddd382, "");
    class_96d583a082485956938c728f02b79bce.def("is_member_specialization", method_pointer_6b599ca7b5dc50d2ac9516ae84be04af, "Determines whether this class template partial specialization template\nwas a specialization of a member partial specialization.\n\nIn the following example, the member template partial specialization\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_96d583a082485956938c728f02b79bce.def("set_member_specialization", method_pointer_02174b7afab15d35be5ec1c0a5eba511, "Note that this member template is a specialization.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_96d583a082485956938c728f02b79bce.def("get_injected_specialization_type", method_pointer_dcebbf927b4e5f029c31219d42d9c49c, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_96d583a082485956938c728f02b79bce.def("classof", method_pointer_38c08f465d9e5a55937266dbd50431b5, "");
    class_96d583a082485956938c728f02b79bce.def("classof_kind", method_pointer_c9257dcfba5c52618600db101b42eb03, "");
    class_96d583a082485956938c728f02b79bce.staticmethod("classof_kind");
    class_96d583a082485956938c728f02b79bce.staticmethod("create_deserialized");
    class_96d583a082485956938c728f02b79bce.staticmethod("classof");

    if(autowig::Held< class ::clang::ClassTemplatePartialSpecializationDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ClassTemplatePartialSpecializationDecl >::Type, autowig::Held< class ::clang::ClassTemplateSpecializationDecl >::Type >();
    }

}