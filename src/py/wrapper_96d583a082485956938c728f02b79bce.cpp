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
    class ::clang::ClassTemplatePartialSpecializationDecl  * (*method_pointer_fbc5b4755b9b592c8ec4607c318f1f3f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplatePartialSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_59062aa0e9605f7da833751f1756cec8)(class ::clang::Decl  const *) = ::clang::ClassTemplatePartialSpecializationDecl::classof;
    bool  (*method_pointer_8c3443495b675effad3edd5ab9f0b8fb)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplatePartialSpecializationDecl::classofKind;
    class ::clang::QualType  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_a27672b5c4cb51ccaeccaaf290aa8124)() const = &::clang::ClassTemplatePartialSpecializationDecl::getInjectedSpecializationType;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_86d649ed7b4054ef83451396668505da)() const = &::clang::ClassTemplatePartialSpecializationDecl::getInstantiatedFromMember;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_5a69607633a35afd9cb50ced3e2908f4)() = &::clang::ClassTemplatePartialSpecializationDecl::getMostRecentDecl;
    bool  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_5a33396b2a16595d83d757fd60ebe384)() = &::clang::ClassTemplatePartialSpecializationDecl::isMemberSpecialization;
    void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_e3d20c8e8319553c9a4ccf6c7fc7bc74)(class ::clang::ClassTemplatePartialSpecializationDecl  *) = &::clang::ClassTemplatePartialSpecializationDecl::setInstantiatedFromMember;
    void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_843a973d76895094bc3ccd997584aea5)() = &::clang::ClassTemplatePartialSpecializationDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::ClassTemplatePartialSpecializationDecl, autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl >, boost::python::bases< class ::clang::ClassTemplateSpecializationDecl >, boost::noncopyable > class_96d583a082485956938c728f02b79bce("ClassTemplatePartialSpecializationDecl", "", boost::python::no_init);
    class_96d583a082485956938c728f02b79bce.def("create_deserialized", method_pointer_fbc5b4755b9b592c8ec4607c318f1f3f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("classof", method_pointer_59062aa0e9605f7da833751f1756cec8, "");
    class_96d583a082485956938c728f02b79bce.def("classof_kind", method_pointer_8c3443495b675effad3edd5ab9f0b8fb, "");
    class_96d583a082485956938c728f02b79bce.def("get_injected_specialization_type", method_pointer_a27672b5c4cb51ccaeccaaf290aa8124, "");
    class_96d583a082485956938c728f02b79bce.def("get_instantiated_from_member", method_pointer_86d649ed7b4054ef83451396668505da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("get_most_recent_decl", method_pointer_5a69607633a35afd9cb50ced3e2908f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("is_member_specialization", method_pointer_5a33396b2a16595d83d757fd60ebe384, "");
    class_96d583a082485956938c728f02b79bce.def("set_instantiated_from_member", method_pointer_e3d20c8e8319553c9a4ccf6c7fc7bc74, "");
    class_96d583a082485956938c728f02b79bce.def("set_member_specialization", method_pointer_843a973d76895094bc3ccd997584aea5, "");
    class_96d583a082485956938c728f02b79bce.staticmethod("classof_kind");
    class_96d583a082485956938c728f02b79bce.staticmethod("create_deserialized");
    class_96d583a082485956938c728f02b79bce.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl >, autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl > >();
    }

}