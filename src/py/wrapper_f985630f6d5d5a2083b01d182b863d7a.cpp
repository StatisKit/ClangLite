#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_f985630f6d5d5a2083b01d182b863d7a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXConversionDecl  * (*method_pointer_73dc6217238050b1a117e09e3fd7692c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConversionDecl::CreateDeserialized;
    bool  (*method_pointer_b44bef2c698d5ea6ba733338294416d3)(class ::clang::Decl  const *) = ::clang::CXXConversionDecl::classof;
    bool  (*method_pointer_2b17bdfadde95502baf7c610fecb0757)(enum ::clang::Decl::Kind ) = ::clang::CXXConversionDecl::classofKind;
    class ::clang::QualType  (::clang::CXXConversionDecl::*method_pointer_754841b9abe151269d2214ca07c5c806)() const = &::clang::CXXConversionDecl::getConversionType;
    bool  (::clang::CXXConversionDecl::*method_pointer_17f91b7759995855bbaeb4c90a2eedfe)() const = &::clang::CXXConversionDecl::isExplicit;
    bool  (::clang::CXXConversionDecl::*method_pointer_eb37990abe5b544aa20e5ddfb04b71a1)() const = &::clang::CXXConversionDecl::isExplicitSpecified;
    bool  (::clang::CXXConversionDecl::*method_pointer_15cce931fa995ce1b4b212284fc19db9)() const = &::clang::CXXConversionDecl::isLambdaToBlockPointerConversion;
    boost::python::class_< class ::clang::CXXConversionDecl, autowig::HeldType< class ::clang::CXXConversionDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_f985630f6d5d5a2083b01d182b863d7a("CXXConversionDecl", "", boost::python::no_init);
    class_f985630f6d5d5a2083b01d182b863d7a.def("create_deserialized", method_pointer_73dc6217238050b1a117e09e3fd7692c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof", method_pointer_b44bef2c698d5ea6ba733338294416d3, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof_kind", method_pointer_2b17bdfadde95502baf7c610fecb0757, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("get_conversion_type", method_pointer_754841b9abe151269d2214ca07c5c806, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit", method_pointer_17f91b7759995855bbaeb4c90a2eedfe, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit_specified", method_pointer_eb37990abe5b544aa20e5ddfb04b71a1, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_lambda_to_block_pointer_conversion", method_pointer_15cce931fa995ce1b4b212284fc19db9, "");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof_kind");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("create_deserialized");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConversionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConversionDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}