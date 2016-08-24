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
    class ::clang::CXXConversionDecl  * (*method_pointer_c6bb8cc6659c56e8afa82eb9bd6f0395)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConversionDecl::CreateDeserialized;
    bool  (*method_pointer_8be787c8e67e594b8b0d73b2a792f5b9)(class ::clang::Decl  const *) = ::clang::CXXConversionDecl::classof;
    bool  (*method_pointer_341907c8df305b76b16f95ae4cd402ff)(enum ::clang::Decl::Kind ) = ::clang::CXXConversionDecl::classofKind;
    class ::clang::QualType  (::clang::CXXConversionDecl::*method_pointer_29f4f05733545e59babe3ddb0ff73853)() const = &::clang::CXXConversionDecl::getConversionType;
    bool  (::clang::CXXConversionDecl::*method_pointer_ffc3274cc1e251da8ae30a8143e30eaa)() const = &::clang::CXXConversionDecl::isExplicit;
    bool  (::clang::CXXConversionDecl::*method_pointer_2f35320565cb5c93a331ae1266359595)() const = &::clang::CXXConversionDecl::isExplicitSpecified;
    bool  (::clang::CXXConversionDecl::*method_pointer_6eb1dbf380805bff96d80a6f93604761)() const = &::clang::CXXConversionDecl::isLambdaToBlockPointerConversion;
    boost::python::class_< class ::clang::CXXConversionDecl, autowig::HeldType< class ::clang::CXXConversionDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_f985630f6d5d5a2083b01d182b863d7a("CXXConversionDecl", "", boost::python::no_init);
    class_f985630f6d5d5a2083b01d182b863d7a.def("create_deserialized", method_pointer_c6bb8cc6659c56e8afa82eb9bd6f0395, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof", method_pointer_8be787c8e67e594b8b0d73b2a792f5b9, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof_kind", method_pointer_341907c8df305b76b16f95ae4cd402ff, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("get_conversion_type", method_pointer_29f4f05733545e59babe3ddb0ff73853, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit", method_pointer_ffc3274cc1e251da8ae30a8143e30eaa, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit_specified", method_pointer_2f35320565cb5c93a331ae1266359595, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_lambda_to_block_pointer_conversion", method_pointer_6eb1dbf380805bff96d80a6f93604761, "");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof_kind");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("create_deserialized");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConversionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConversionDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}