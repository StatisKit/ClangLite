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
    class ::clang::CXXConversionDecl  * (*method_pointer_e70839250a82502391c50a603f76fb58)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConversionDecl::CreateDeserialized;
    bool  (*method_pointer_9f6bd84507195ac0a59c88c016d56a2a)(class ::clang::Decl  const *) = ::clang::CXXConversionDecl::classof;
    bool  (*method_pointer_ef65def6b6585d419c2d54d8a611ab46)(enum ::clang::Decl::Kind ) = ::clang::CXXConversionDecl::classofKind;
    bool  (::clang::CXXConversionDecl::*method_pointer_8c97cbb9b1225351b8a6435f6c58a353)() const = &::clang::CXXConversionDecl::isExplicit;
    bool  (::clang::CXXConversionDecl::*method_pointer_d25060597ca65a9fb8a13c795e1e66c8)() const = &::clang::CXXConversionDecl::isExplicitSpecified;
    bool  (::clang::CXXConversionDecl::*method_pointer_f765031b64b3596db0787a8e316bd448)() const = &::clang::CXXConversionDecl::isLambdaToBlockPointerConversion;
    boost::python::class_< class ::clang::CXXConversionDecl, autowig::HeldType< class ::clang::CXXConversionDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_f985630f6d5d5a2083b01d182b863d7a("CXXConversionDecl", "", boost::python::no_init);
    class_f985630f6d5d5a2083b01d182b863d7a.def("create_deserialized", method_pointer_e70839250a82502391c50a603f76fb58, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof", method_pointer_9f6bd84507195ac0a59c88c016d56a2a, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof_kind", method_pointer_ef65def6b6585d419c2d54d8a611ab46, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit", method_pointer_8c97cbb9b1225351b8a6435f6c58a353, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit_specified", method_pointer_d25060597ca65a9fb8a13c795e1e66c8, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_lambda_to_block_pointer_conversion", method_pointer_f765031b64b3596db0787a8e316bd448, "");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof_kind");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("create_deserialized");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConversionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConversionDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}