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
    class ::clang::CXXConversionDecl  * (*method_pointer_db7babf2e0fd5f4995797c548dca1e46)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConversionDecl::CreateDeserialized;
    bool  (*method_pointer_13068a0cdad95a628d41273f35925a02)(class ::clang::Decl  const *) = ::clang::CXXConversionDecl::classof;
    bool  (*method_pointer_70b72e7f5c6b53969df6dce385637c8c)(enum ::clang::Decl::Kind ) = ::clang::CXXConversionDecl::classofKind;
    class ::clang::QualType  (::clang::CXXConversionDecl::*method_pointer_3e0ad357e763551190492a01d716c688)() const = &::clang::CXXConversionDecl::getConversionType;
    bool  (::clang::CXXConversionDecl::*method_pointer_7563068bf8fd504d870245645de84eda)() const = &::clang::CXXConversionDecl::isExplicit;
    bool  (::clang::CXXConversionDecl::*method_pointer_b8a4a42e661757208e73f794a5a951df)() const = &::clang::CXXConversionDecl::isExplicitSpecified;
    bool  (::clang::CXXConversionDecl::*method_pointer_f82fbc1e009f5e6bb844485b2382e240)() const = &::clang::CXXConversionDecl::isLambdaToBlockPointerConversion;
    boost::python::class_< class ::clang::CXXConversionDecl, autowig::HeldType< class ::clang::CXXConversionDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_f985630f6d5d5a2083b01d182b863d7a("CXXConversionDecl", "", boost::python::no_init);
    class_f985630f6d5d5a2083b01d182b863d7a.def("create_deserialized", method_pointer_db7babf2e0fd5f4995797c548dca1e46, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof", method_pointer_13068a0cdad95a628d41273f35925a02, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof_kind", method_pointer_70b72e7f5c6b53969df6dce385637c8c, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("get_conversion_type", method_pointer_3e0ad357e763551190492a01d716c688, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit", method_pointer_7563068bf8fd504d870245645de84eda, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit_specified", method_pointer_b8a4a42e661757208e73f794a5a951df, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_lambda_to_block_pointer_conversion", method_pointer_f82fbc1e009f5e6bb844485b2382e240, "");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof_kind");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("create_deserialized");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConversionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConversionDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}