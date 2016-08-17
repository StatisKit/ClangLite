#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_96d583a082485956938c728f02b79bce()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_843fa9e5517c5c4a9c3cd8886e838da7)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplatePartialSpecializationDecl::classofKind;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (*method_pointer_90e183c3dbcb536dbd6db3f8ca1045f8)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplatePartialSpecializationDecl::CreateDeserialized;
    void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_7ab5efac17f8528bbdaede8618b64f00)() = &::clang::ClassTemplatePartialSpecializationDecl::setMemberSpecialization;
    bool  (*method_pointer_1325a452f8c05274966e9428401eb9c5)(class ::clang::Decl  const *) = ::clang::ClassTemplatePartialSpecializationDecl::classof;
    bool  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_e8d38298a0a95a91b830dd0449f5578f)() = &::clang::ClassTemplatePartialSpecializationDecl::isMemberSpecialization;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_c966407e841357449ec7899977530c23)() const = &::clang::ClassTemplatePartialSpecializationDecl::getInstantiatedFromMember;
    void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_884c252aa33250dc86f8a68782de1db9)(class ::clang::ClassTemplatePartialSpecializationDecl  *) = &::clang::ClassTemplatePartialSpecializationDecl::setInstantiatedFromMember;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_7a578cb07726597d88466bf5fb4b3c38)() = &::clang::ClassTemplatePartialSpecializationDecl::getMostRecentDecl;
    boost::python::class_< class ::clang::ClassTemplatePartialSpecializationDecl, autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl >, boost::python::bases< class ::clang::ClassTemplateSpecializationDecl >, boost::noncopyable > class_96d583a082485956938c728f02b79bce("ClassTemplatePartialSpecializationDecl", "", boost::python::no_init);
    class_96d583a082485956938c728f02b79bce.def("classof_kind", method_pointer_843fa9e5517c5c4a9c3cd8886e838da7, "");
    class_96d583a082485956938c728f02b79bce.def("create_deserialized", method_pointer_90e183c3dbcb536dbd6db3f8ca1045f8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("set_member_specialization", method_pointer_7ab5efac17f8528bbdaede8618b64f00, "");
    class_96d583a082485956938c728f02b79bce.def("classof", method_pointer_1325a452f8c05274966e9428401eb9c5, "");
    class_96d583a082485956938c728f02b79bce.def("is_member_specialization", method_pointer_e8d38298a0a95a91b830dd0449f5578f, "");
    class_96d583a082485956938c728f02b79bce.def("get_instantiated_from_member", method_pointer_c966407e841357449ec7899977530c23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("set_instantiated_from_member", method_pointer_884c252aa33250dc86f8a68782de1db9, "");
    class_96d583a082485956938c728f02b79bce.def("get_most_recent_decl", method_pointer_7a578cb07726597d88466bf5fb4b3c38, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.staticmethod("classof_kind");
    class_96d583a082485956938c728f02b79bce.staticmethod("create_deserialized");
    class_96d583a082485956938c728f02b79bce.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl >, autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl > >();
    }

}