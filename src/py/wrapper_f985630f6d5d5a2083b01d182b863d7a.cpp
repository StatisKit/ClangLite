#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_f985630f6d5d5a2083b01d182b863d7a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::CXXConversionDecl::*method_pointer_125c3457364b5172b08ecb3e298cda17)() const = &::clang::CXXConversionDecl::isExplicitSpecified;
    class ::clang::CXXConversionDecl  * (*method_pointer_e1234dbd80cb58499d7bc1f19709c898)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConversionDecl::CreateDeserialized;
    bool  (::clang::CXXConversionDecl::*method_pointer_7207a86ebe005d13acea920bd535e1a7)() const = &::clang::CXXConversionDecl::isLambdaToBlockPointerConversion;
    bool  (::clang::CXXConversionDecl::*method_pointer_a8ff2a26ab585601bc3da23c98203567)() const = &::clang::CXXConversionDecl::isExplicit;
    bool  (*method_pointer_c59fd7bb340b548ba9109c3109e2aa8a)(class ::clang::Decl  const *) = ::clang::CXXConversionDecl::classof;
    bool  (*method_pointer_5aab279fa14857ac85ff476401d6edbf)(enum ::clang::Decl::Kind ) = ::clang::CXXConversionDecl::classofKind;
    boost::python::class_< class ::clang::CXXConversionDecl, autowig::HeldType< class ::clang::CXXConversionDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_f985630f6d5d5a2083b01d182b863d7a("CXXConversionDecl", "", boost::python::no_init);
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit_specified", method_pointer_125c3457364b5172b08ecb3e298cda17, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("create_deserialized", method_pointer_e1234dbd80cb58499d7bc1f19709c898, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_lambda_to_block_pointer_conversion", method_pointer_7207a86ebe005d13acea920bd535e1a7, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit", method_pointer_a8ff2a26ab585601bc3da23c98203567, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof", method_pointer_c59fd7bb340b548ba9109c3109e2aa8a, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof_kind", method_pointer_5aab279fa14857ac85ff476401d6edbf, "");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof_kind");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("create_deserialized");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConversionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConversionDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}