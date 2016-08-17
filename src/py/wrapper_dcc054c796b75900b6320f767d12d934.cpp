#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_dcc054c796b75900b6320f767d12d934()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_4112a753166c58adae9c88dc9fe2e0ce)() const = &::clang::VarTemplatePartialSpecializationDecl::getInstantiatedFromMember;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_cf357dc508f95af0b26e04fb4f8c8018)() = &::clang::VarTemplatePartialSpecializationDecl::getMostRecentDecl;
    class ::clang::VarTemplatePartialSpecializationDecl  * (*method_pointer_800ca888cd8652628387d3d3373e9bcc)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplatePartialSpecializationDecl::CreateDeserialized;
    void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_94e01681b7c8589b8133050b3e8a080d)(class ::clang::VarTemplatePartialSpecializationDecl  *) = &::clang::VarTemplatePartialSpecializationDecl::setInstantiatedFromMember;
    void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_93f625274d8c5364a910a8ea4b3059eb)() = &::clang::VarTemplatePartialSpecializationDecl::setMemberSpecialization;
    bool  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_37ac165f7f0151a79c8a4e1d938f4a49)() = &::clang::VarTemplatePartialSpecializationDecl::isMemberSpecialization;
    bool  (*method_pointer_197ba005852a57e1b4325644c1b71bf9)(class ::clang::Decl  const *) = ::clang::VarTemplatePartialSpecializationDecl::classof;
    bool  (*method_pointer_d0b13ec271dd5abea8f37ce6af64b62b)(enum ::clang::Decl::Kind ) = ::clang::VarTemplatePartialSpecializationDecl::classofKind;
    boost::python::class_< class ::clang::VarTemplatePartialSpecializationDecl, autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl >, boost::python::bases< class ::clang::VarTemplateSpecializationDecl >, boost::noncopyable > class_dcc054c796b75900b6320f767d12d934("VarTemplatePartialSpecializationDecl", "", boost::python::no_init);
    class_dcc054c796b75900b6320f767d12d934.def("get_instantiated_from_member", method_pointer_4112a753166c58adae9c88dc9fe2e0ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("get_most_recent_decl", method_pointer_cf357dc508f95af0b26e04fb4f8c8018, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("create_deserialized", method_pointer_800ca888cd8652628387d3d3373e9bcc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("set_instantiated_from_member", method_pointer_94e01681b7c8589b8133050b3e8a080d, "");
    class_dcc054c796b75900b6320f767d12d934.def("set_member_specialization", method_pointer_93f625274d8c5364a910a8ea4b3059eb, "");
    class_dcc054c796b75900b6320f767d12d934.def("is_member_specialization", method_pointer_37ac165f7f0151a79c8a4e1d938f4a49, "");
    class_dcc054c796b75900b6320f767d12d934.def("classof", method_pointer_197ba005852a57e1b4325644c1b71bf9, "");
    class_dcc054c796b75900b6320f767d12d934.def("classof_kind", method_pointer_d0b13ec271dd5abea8f37ce6af64b62b, "");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("classof_kind");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("create_deserialized");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl >, autowig::HeldType< class ::clang::VarTemplateSpecializationDecl > >();
    }

}