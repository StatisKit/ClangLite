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
    class ::clang::VarTemplatePartialSpecializationDecl  * (*method_pointer_4069eea866fc5798b5f3489c5e148817)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplatePartialSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_ec8bbf29932e57b3a2c2157300d1688f)(class ::clang::Decl  const *) = ::clang::VarTemplatePartialSpecializationDecl::classof;
    bool  (*method_pointer_275861fbc51e5955874e31e65df2304d)(enum ::clang::Decl::Kind ) = ::clang::VarTemplatePartialSpecializationDecl::classofKind;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_528eb2cd16635365947567a7a2c7defe)() const = &::clang::VarTemplatePartialSpecializationDecl::getInstantiatedFromMember;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_57b553b8b9ef502591ff64648839ef59)() = &::clang::VarTemplatePartialSpecializationDecl::getMostRecentDecl;
    bool  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_690e75eae8355c49bab948bb1099ddec)() = &::clang::VarTemplatePartialSpecializationDecl::isMemberSpecialization;
    void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_24e74c587293555ca0e4914581c107d3)(class ::clang::VarTemplatePartialSpecializationDecl  *) = &::clang::VarTemplatePartialSpecializationDecl::setInstantiatedFromMember;
    void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_93775584134b5d858bc1f8aff77faa32)() = &::clang::VarTemplatePartialSpecializationDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::VarTemplatePartialSpecializationDecl, autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl >, boost::python::bases< class ::clang::VarTemplateSpecializationDecl >, boost::noncopyable > class_dcc054c796b75900b6320f767d12d934("VarTemplatePartialSpecializationDecl", "", boost::python::no_init);
    class_dcc054c796b75900b6320f767d12d934.def("create_deserialized", method_pointer_4069eea866fc5798b5f3489c5e148817, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("classof", method_pointer_ec8bbf29932e57b3a2c2157300d1688f, "");
    class_dcc054c796b75900b6320f767d12d934.def("classof_kind", method_pointer_275861fbc51e5955874e31e65df2304d, "");
    class_dcc054c796b75900b6320f767d12d934.def("get_instantiated_from_member", method_pointer_528eb2cd16635365947567a7a2c7defe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("get_most_recent_decl", method_pointer_57b553b8b9ef502591ff64648839ef59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("is_member_specialization", method_pointer_690e75eae8355c49bab948bb1099ddec, "");
    class_dcc054c796b75900b6320f767d12d934.def("set_instantiated_from_member", method_pointer_24e74c587293555ca0e4914581c107d3, "");
    class_dcc054c796b75900b6320f767d12d934.def("set_member_specialization", method_pointer_93775584134b5d858bc1f8aff77faa32, "");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("classof_kind");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("create_deserialized");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl >, autowig::HeldType< class ::clang::VarTemplateSpecializationDecl > >();
    }

}