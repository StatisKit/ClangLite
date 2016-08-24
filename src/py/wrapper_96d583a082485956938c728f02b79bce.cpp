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
    class ::clang::ClassTemplatePartialSpecializationDecl  * (*method_pointer_65a517a170895c07a8c0e91f99e5c76c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplatePartialSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_e05b663337d05d0185cca9869733a43a)(class ::clang::Decl  const *) = ::clang::ClassTemplatePartialSpecializationDecl::classof;
    bool  (*method_pointer_9e28888fde265d94bc7b3e8ab70b71d0)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplatePartialSpecializationDecl::classofKind;
    class ::clang::QualType  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_b7f5f2e0ef0d5e8c9e30cb1171e704ae)() const = &::clang::ClassTemplatePartialSpecializationDecl::getInjectedSpecializationType;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_534005264b1e55d4ba578733e3654d64)() const = &::clang::ClassTemplatePartialSpecializationDecl::getInstantiatedFromMember;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_a4b727972c655e84a37a2a6751baf68a)() = &::clang::ClassTemplatePartialSpecializationDecl::getMostRecentDecl;
    bool  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_650edf4a9300543bb79c8374c63163b7)() = &::clang::ClassTemplatePartialSpecializationDecl::isMemberSpecialization;
    void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_bc8ecc85c7275604bc413be0aa5e184d)(class ::clang::ClassTemplatePartialSpecializationDecl  *) = &::clang::ClassTemplatePartialSpecializationDecl::setInstantiatedFromMember;
    void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_18d1bd83bf7d5def9bf3203a237c2bc6)() = &::clang::ClassTemplatePartialSpecializationDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::ClassTemplatePartialSpecializationDecl, autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl >, boost::python::bases< class ::clang::ClassTemplateSpecializationDecl >, boost::noncopyable > class_96d583a082485956938c728f02b79bce("ClassTemplatePartialSpecializationDecl", "", boost::python::no_init);
    class_96d583a082485956938c728f02b79bce.def("create_deserialized", method_pointer_65a517a170895c07a8c0e91f99e5c76c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("classof", method_pointer_e05b663337d05d0185cca9869733a43a, "");
    class_96d583a082485956938c728f02b79bce.def("classof_kind", method_pointer_9e28888fde265d94bc7b3e8ab70b71d0, "");
    class_96d583a082485956938c728f02b79bce.def("get_injected_specialization_type", method_pointer_b7f5f2e0ef0d5e8c9e30cb1171e704ae, "");
    class_96d583a082485956938c728f02b79bce.def("get_instantiated_from_member", method_pointer_534005264b1e55d4ba578733e3654d64, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("get_most_recent_decl", method_pointer_a4b727972c655e84a37a2a6751baf68a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("is_member_specialization", method_pointer_650edf4a9300543bb79c8374c63163b7, "");
    class_96d583a082485956938c728f02b79bce.def("set_instantiated_from_member", method_pointer_bc8ecc85c7275604bc413be0aa5e184d, "");
    class_96d583a082485956938c728f02b79bce.def("set_member_specialization", method_pointer_18d1bd83bf7d5def9bf3203a237c2bc6, "");
    class_96d583a082485956938c728f02b79bce.staticmethod("classof_kind");
    class_96d583a082485956938c728f02b79bce.staticmethod("create_deserialized");
    class_96d583a082485956938c728f02b79bce.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl >, autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl > >();
    }

}