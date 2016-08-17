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
    bool  (*method_pointer_8e3d59471a7952e7bcb2ea3f5e56d3c2)(enum ::clang::Decl::Kind ) = ::clang::CXXConversionDecl::classofKind;
    bool  (::clang::CXXConversionDecl::*method_pointer_77d62ebad20d51b9a5ac622f75a55a66)() const = &::clang::CXXConversionDecl::isLambdaToBlockPointerConversion;
    bool  (*method_pointer_5a3febf97e1d535b8d169631f03d3a4d)(class ::clang::Decl  const *) = ::clang::CXXConversionDecl::classof;
    class ::clang::CXXConversionDecl  * (*method_pointer_bf53d00310d752a6817a6f967bc66ca5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConversionDecl::CreateDeserialized;
    bool  (::clang::CXXConversionDecl::*method_pointer_3959d524a02c58748c737f7a21e0090a)() const = &::clang::CXXConversionDecl::isExplicit;
    bool  (::clang::CXXConversionDecl::*method_pointer_06e1ded9bd81517089621e885cd01930)() const = &::clang::CXXConversionDecl::isExplicitSpecified;
    boost::python::class_< class ::clang::CXXConversionDecl, autowig::HeldType< class ::clang::CXXConversionDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_f985630f6d5d5a2083b01d182b863d7a("CXXConversionDecl", "", boost::python::no_init);
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof_kind", method_pointer_8e3d59471a7952e7bcb2ea3f5e56d3c2, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_lambda_to_block_pointer_conversion", method_pointer_77d62ebad20d51b9a5ac622f75a55a66, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof", method_pointer_5a3febf97e1d535b8d169631f03d3a4d, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("create_deserialized", method_pointer_bf53d00310d752a6817a6f967bc66ca5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit", method_pointer_3959d524a02c58748c737f7a21e0090a, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit_specified", method_pointer_06e1ded9bd81517089621e885cd01930, "");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof_kind");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("create_deserialized");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConversionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConversionDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}