#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_dcc054c796b75900b6320f767d12d934()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarTemplatePartialSpecializationDecl  * (*method_pointer_7a2fccde18015f48ba690289ee90b0ae)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplatePartialSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_c270a0c6961c594d9859de7e6c28d012)(class ::clang::Decl  const *) = ::clang::VarTemplatePartialSpecializationDecl::classof;
    bool  (*method_pointer_7c75c37b52fe5b69a3f26b4cd65ee010)(enum ::clang::Decl::Kind ) = ::clang::VarTemplatePartialSpecializationDecl::classofKind;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_005a88f2c76251f08ced2a128f8401c6)() const = &::clang::VarTemplatePartialSpecializationDecl::getInstantiatedFromMember;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_56bec1ad233e501e9b518fbd2a682d59)() = &::clang::VarTemplatePartialSpecializationDecl::getMostRecentDecl;
    bool  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_fa75cfb9ba195f119aa6216151dace37)() = &::clang::VarTemplatePartialSpecializationDecl::isMemberSpecialization;
    void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_e8da205b1acc5d1abaeed97530b9dac1)(class ::clang::VarTemplatePartialSpecializationDecl  *) = &::clang::VarTemplatePartialSpecializationDecl::setInstantiatedFromMember;
    void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_5dd1b38cbd015e2b94d6877a8609a60b)() = &::clang::VarTemplatePartialSpecializationDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::VarTemplatePartialSpecializationDecl, autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl >, boost::python::bases< class ::clang::VarTemplateSpecializationDecl >, boost::noncopyable > class_dcc054c796b75900b6320f767d12d934("VarTemplatePartialSpecializationDecl", "", boost::python::no_init);
    class_dcc054c796b75900b6320f767d12d934.def("create_deserialized", method_pointer_7a2fccde18015f48ba690289ee90b0ae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("classof", method_pointer_c270a0c6961c594d9859de7e6c28d012, "");
    class_dcc054c796b75900b6320f767d12d934.def("classof_kind", method_pointer_7c75c37b52fe5b69a3f26b4cd65ee010, "");
    class_dcc054c796b75900b6320f767d12d934.def("get_instantiated_from_member", method_pointer_005a88f2c76251f08ced2a128f8401c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("get_most_recent_decl", method_pointer_56bec1ad233e501e9b518fbd2a682d59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("is_member_specialization", method_pointer_fa75cfb9ba195f119aa6216151dace37, "");
    class_dcc054c796b75900b6320f767d12d934.def("set_instantiated_from_member", method_pointer_e8da205b1acc5d1abaeed97530b9dac1, "");
    class_dcc054c796b75900b6320f767d12d934.def("set_member_specialization", method_pointer_5dd1b38cbd015e2b94d6877a8609a60b, "");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("classof_kind");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("create_deserialized");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl >, autowig::HeldType< class ::clang::VarTemplateSpecializationDecl > >();
    }

}