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
    class ::clang::CXXConversionDecl  * (*method_pointer_f3746cf30e615dd8bc85f0b8117dd698)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConversionDecl::CreateDeserialized;
    bool  (*method_pointer_a8ebe13569b55b4ab27b2afe4e12a6c2)(class ::clang::Decl  const *) = ::clang::CXXConversionDecl::classof;
    bool  (*method_pointer_9d56277961855f78a4af54657e7db469)(enum ::clang::Decl::Kind ) = ::clang::CXXConversionDecl::classofKind;
    class ::clang::QualType  (::clang::CXXConversionDecl::*method_pointer_cda2423f8761581c827419f5e4c472c5)() const = &::clang::CXXConversionDecl::getConversionType;
    bool  (::clang::CXXConversionDecl::*method_pointer_cab5b1bfc4d85455981f940d7e83bf09)() const = &::clang::CXXConversionDecl::isExplicit;
    bool  (::clang::CXXConversionDecl::*method_pointer_9c3de9b25b3151e2a5c37d4007562e84)() const = &::clang::CXXConversionDecl::isExplicitSpecified;
    bool  (::clang::CXXConversionDecl::*method_pointer_b5ecdc415e7f5e8aa92614566babe1c3)() const = &::clang::CXXConversionDecl::isLambdaToBlockPointerConversion;
    boost::python::class_< class ::clang::CXXConversionDecl, autowig::HeldType< class ::clang::CXXConversionDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_f985630f6d5d5a2083b01d182b863d7a("CXXConversionDecl", "", boost::python::no_init);
    class_f985630f6d5d5a2083b01d182b863d7a.def("create_deserialized", method_pointer_f3746cf30e615dd8bc85f0b8117dd698, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof", method_pointer_a8ebe13569b55b4ab27b2afe4e12a6c2, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof_kind", method_pointer_9d56277961855f78a4af54657e7db469, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("get_conversion_type", method_pointer_cda2423f8761581c827419f5e4c472c5, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit", method_pointer_cab5b1bfc4d85455981f940d7e83bf09, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit_specified", method_pointer_9c3de9b25b3151e2a5c37d4007562e84, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_lambda_to_block_pointer_conversion", method_pointer_b5ecdc415e7f5e8aa92614566babe1c3, "");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof_kind");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("create_deserialized");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConversionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConversionDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}