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
    class ::clang::ClassTemplatePartialSpecializationDecl  * (*method_pointer_cf4f39cda64552b58535f6514b0ea853)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplatePartialSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_77d941cf50c352d8900ab858010a2e4b)(class ::clang::Decl  const *) = ::clang::ClassTemplatePartialSpecializationDecl::classof;
    bool  (*method_pointer_e1b1556ccbf15815a9e411ad01d24a80)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplatePartialSpecializationDecl::classofKind;
    class ::clang::QualType  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_05cf90bdb0415a3899b6442243024fea)() const = &::clang::ClassTemplatePartialSpecializationDecl::getInjectedSpecializationType;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_1b6e6df1b0d85418bd64cbc5d935337e)() const = &::clang::ClassTemplatePartialSpecializationDecl::getInstantiatedFromMember;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_f8d5a2bb4f265edcab29637cb4cbf0c9)() = &::clang::ClassTemplatePartialSpecializationDecl::getMostRecentDecl;
    bool  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_d26a8735b4965b13be3107e567ac2a17)() = &::clang::ClassTemplatePartialSpecializationDecl::isMemberSpecialization;
    void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_67f61d7015c05a919ec9aef8d978d560)(class ::clang::ClassTemplatePartialSpecializationDecl  *) = &::clang::ClassTemplatePartialSpecializationDecl::setInstantiatedFromMember;
    void  (::clang::ClassTemplatePartialSpecializationDecl::*method_pointer_3f37bb58d08254808a9f1e51d718ea01)() = &::clang::ClassTemplatePartialSpecializationDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::ClassTemplatePartialSpecializationDecl, autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl >, boost::python::bases< class ::clang::ClassTemplateSpecializationDecl >, boost::noncopyable > class_96d583a082485956938c728f02b79bce("ClassTemplatePartialSpecializationDecl", "", boost::python::no_init);
    class_96d583a082485956938c728f02b79bce.def("create_deserialized", method_pointer_cf4f39cda64552b58535f6514b0ea853, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("classof", method_pointer_77d941cf50c352d8900ab858010a2e4b, "");
    class_96d583a082485956938c728f02b79bce.def("classof_kind", method_pointer_e1b1556ccbf15815a9e411ad01d24a80, "");
    class_96d583a082485956938c728f02b79bce.def("get_injected_specialization_type", method_pointer_05cf90bdb0415a3899b6442243024fea, "");
    class_96d583a082485956938c728f02b79bce.def("get_instantiated_from_member", method_pointer_1b6e6df1b0d85418bd64cbc5d935337e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("get_most_recent_decl", method_pointer_f8d5a2bb4f265edcab29637cb4cbf0c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_96d583a082485956938c728f02b79bce.def("is_member_specialization", method_pointer_d26a8735b4965b13be3107e567ac2a17, "");
    class_96d583a082485956938c728f02b79bce.def("set_instantiated_from_member", method_pointer_67f61d7015c05a919ec9aef8d978d560, "");
    class_96d583a082485956938c728f02b79bce.def("set_member_specialization", method_pointer_3f37bb58d08254808a9f1e51d718ea01, "");
    class_96d583a082485956938c728f02b79bce.staticmethod("classof_kind");
    class_96d583a082485956938c728f02b79bce.staticmethod("create_deserialized");
    class_96d583a082485956938c728f02b79bce.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplatePartialSpecializationDecl >, autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl > >();
    }

}