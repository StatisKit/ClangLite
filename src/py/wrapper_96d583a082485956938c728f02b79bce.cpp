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
    class ::clang::ClassTemplatePartialSpecializationDecl  * (*method_pointer_1e850fd9feeb50c98c8835d7b29e9647)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplatePartialSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_662cf398b4645fb985050b2cd36ee9dc)(class ::clang::Decl  const *) = ::clang::ClassTemplatePartialSpecializationDecl::classof;
    bool  (*method_pointer_9ae694d4b45150c5998d18e58ece7aef)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplatePartialSpecializationDecl::classofKind;
    class ::clang::QualType  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_ec3849407c985769ac9a3d63c5ce1109)() const = &::clang::ClassTemplatePartialSpecializationDecl::getInjectedSpecializationType;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_97953bb6e47755c69bdd0311db5fb676)() const = &::clang::ClassTemplatePartialSpecializationDecl::getInstantiatedFromMember;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_dc8558ac9a5d5813b896e33e786d2e90)() = &::clang::ClassTemplatePartialSpecializationDecl::getMostRecentDecl;
    bool  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_883e0d0a021153feb217e9244ba8346b)() = &::clang::ClassTemplatePartialSpecializationDecl::isMemberSpecialization;
    void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_bda1aaf0210955078a0a00986b8af947)(class ::clang::ClassTemplatePartialSpecializationDecl  *) = &::clang::ClassTemplatePartialSpecializationDecl::setInstantiatedFromMember;
    void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_670f67f2634854f7a11c9bd37d715c9e)() = &::clang::ClassTemplatePartialSpecializationDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::ClassTemplatePartialSpecializationDecl, autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl >, boost::python::bases< class ::clang::ClassTemplateSpecializationDecl >, boost::noncopyable > class_96d583a082485956938c728f02b79bce("ClassTemplatePartialSpecializationDecl", "", boost::python::no_init);
    class_96d583a082485956938c728f02b79bce.def("create_deserialized", method_pointer_1e850fd9feeb50c98c8835d7b29e9647, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("classof", method_pointer_662cf398b4645fb985050b2cd36ee9dc, "");
    class_96d583a082485956938c728f02b79bce.def("classof_kind", method_pointer_9ae694d4b45150c5998d18e58ece7aef, "");
    class_96d583a082485956938c728f02b79bce.def("get_injected_specialization_type", method_pointer_ec3849407c985769ac9a3d63c5ce1109, "");
    class_96d583a082485956938c728f02b79bce.def("get_instantiated_from_member", method_pointer_97953bb6e47755c69bdd0311db5fb676, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("get_most_recent_decl", method_pointer_dc8558ac9a5d5813b896e33e786d2e90, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("is_member_specialization", method_pointer_883e0d0a021153feb217e9244ba8346b, "");
    class_96d583a082485956938c728f02b79bce.def("set_instantiated_from_member", method_pointer_bda1aaf0210955078a0a00986b8af947, "");
    class_96d583a082485956938c728f02b79bce.def("set_member_specialization", method_pointer_670f67f2634854f7a11c9bd37d715c9e, "");
    class_96d583a082485956938c728f02b79bce.staticmethod("classof_kind");
    class_96d583a082485956938c728f02b79bce.staticmethod("create_deserialized");
    class_96d583a082485956938c728f02b79bce.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl >, autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl > >();
    }

}