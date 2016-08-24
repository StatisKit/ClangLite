#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_96d583a082485956938c728f02b79bce()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (*method_pointer_d00610b6e4225e528c002846c4674a1d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplatePartialSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_7059c8fbbda152c2a99ebb047e5a10ea)(class ::clang::Decl  const *) = ::clang::ClassTemplatePartialSpecializationDecl::classof;
    bool  (*method_pointer_cbab9456be2e5404b14648ec0d4abe5d)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplatePartialSpecializationDecl::classofKind;
    class ::clang::QualType  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_9c158570d6dd5da6b0fe8a71f3235e4c)() const = &::clang::ClassTemplatePartialSpecializationDecl::getInjectedSpecializationType;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_8ae987d740775ef0a05f3178cb21dfcd)() const = &::clang::ClassTemplatePartialSpecializationDecl::getInstantiatedFromMember;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_09b9d412889c53f4b202ef9083742d70)() = &::clang::ClassTemplatePartialSpecializationDecl::getMostRecentDecl;
    bool  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_7ed42a45d88e53798e6d0606716375c8)() = &::clang::ClassTemplatePartialSpecializationDecl::isMemberSpecialization;
    void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_08c139b13fc8555b812522d3c48d63f5)(class ::clang::ClassTemplatePartialSpecializationDecl  *) = &::clang::ClassTemplatePartialSpecializationDecl::setInstantiatedFromMember;
    void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_8167039839785f8aa5c39bb7fe4d42d8)() = &::clang::ClassTemplatePartialSpecializationDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::ClassTemplatePartialSpecializationDecl, autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl >, boost::python::bases< class ::clang::ClassTemplateSpecializationDecl >, boost::noncopyable > class_96d583a082485956938c728f02b79bce("ClassTemplatePartialSpecializationDecl", "", boost::python::no_init);
    class_96d583a082485956938c728f02b79bce.def("create_deserialized", method_pointer_d00610b6e4225e528c002846c4674a1d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("classof", method_pointer_7059c8fbbda152c2a99ebb047e5a10ea, "");
    class_96d583a082485956938c728f02b79bce.def("classof_kind", method_pointer_cbab9456be2e5404b14648ec0d4abe5d, "");
    class_96d583a082485956938c728f02b79bce.def("get_injected_specialization_type", method_pointer_9c158570d6dd5da6b0fe8a71f3235e4c, "");
    class_96d583a082485956938c728f02b79bce.def("get_instantiated_from_member", method_pointer_8ae987d740775ef0a05f3178cb21dfcd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("get_most_recent_decl", method_pointer_09b9d412889c53f4b202ef9083742d70, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("is_member_specialization", method_pointer_7ed42a45d88e53798e6d0606716375c8, "");
    class_96d583a082485956938c728f02b79bce.def("set_instantiated_from_member", method_pointer_08c139b13fc8555b812522d3c48d63f5, "");
    class_96d583a082485956938c728f02b79bce.def("set_member_specialization", method_pointer_8167039839785f8aa5c39bb7fe4d42d8, "");
    class_96d583a082485956938c728f02b79bce.staticmethod("classof_kind");
    class_96d583a082485956938c728f02b79bce.staticmethod("create_deserialized");
    class_96d583a082485956938c728f02b79bce.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl >, autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl > >();
    }

}