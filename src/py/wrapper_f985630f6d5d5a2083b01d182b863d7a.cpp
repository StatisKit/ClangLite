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
    bool  (*method_pointer_cf14571cf96755868819a41fab4e28d8)(enum ::clang::Decl::Kind ) = ::clang::CXXConversionDecl::classofKind;
    bool  (*method_pointer_8fffe593c5505196a6c7b23d495b6880)(class ::clang::Decl  const *) = ::clang::CXXConversionDecl::classof;
    bool  (::clang::CXXConversionDecl::*method_pointer_8052bd833c135d279074478c72250776)() const = &::clang::CXXConversionDecl::isExplicitSpecified;
    bool  (::clang::CXXConversionDecl::*method_pointer_ebf5ff8c1be8550ebe5ea21b3e10a055)() const = &::clang::CXXConversionDecl::isLambdaToBlockPointerConversion;
    bool  (::clang::CXXConversionDecl::*method_pointer_f0fa5d62f5f35b9a944caebcf0ad02bc)() const = &::clang::CXXConversionDecl::isExplicit;
    class ::clang::CXXConversionDecl  * (*method_pointer_450cdcea60eb59ab9dd7f7b66028497c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConversionDecl::CreateDeserialized;
    boost::python::class_< class ::clang::CXXConversionDecl, autowig::HeldType< class ::clang::CXXConversionDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_f985630f6d5d5a2083b01d182b863d7a("CXXConversionDecl", "", boost::python::no_init);
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof_kind", method_pointer_cf14571cf96755868819a41fab4e28d8, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof", method_pointer_8fffe593c5505196a6c7b23d495b6880, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit_specified", method_pointer_8052bd833c135d279074478c72250776, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_lambda_to_block_pointer_conversion", method_pointer_ebf5ff8c1be8550ebe5ea21b3e10a055, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit", method_pointer_f0fa5d62f5f35b9a944caebcf0ad02bc, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("create_deserialized", method_pointer_450cdcea60eb59ab9dd7f7b66028497c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof_kind");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("create_deserialized");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConversionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConversionDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}