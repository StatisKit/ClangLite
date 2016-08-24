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
    class ::clang::CXXConversionDecl  * (*method_pointer_30a7e4952605556180af01a57837ddf5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConversionDecl::CreateDeserialized;
    bool  (*method_pointer_b720ea81c7a851c89842c17c784e305e)(class ::clang::Decl  const *) = ::clang::CXXConversionDecl::classof;
    bool  (*method_pointer_229607615b1a572f8e9272e8846297f0)(enum ::clang::Decl::Kind ) = ::clang::CXXConversionDecl::classofKind;
    class ::clang::QualType  (::clang::CXXConversionDecl::*method_pointer_2ba0dab22a965325b1bb4a3d85d24e99)() const = &::clang::CXXConversionDecl::getConversionType;
    bool  (::clang::CXXConversionDecl::*method_pointer_dd089144c28c5a259a352634819734ad)() const = &::clang::CXXConversionDecl::isExplicit;
    bool  (::clang::CXXConversionDecl::*method_pointer_14d6929f889655318ce1fa2aaea8bf7c)() const = &::clang::CXXConversionDecl::isExplicitSpecified;
    bool  (::clang::CXXConversionDecl::*method_pointer_e1f2fbd20cfe53c5a283c2674ccf8de7)() const = &::clang::CXXConversionDecl::isLambdaToBlockPointerConversion;
    boost::python::class_< class ::clang::CXXConversionDecl, autowig::HeldType< class ::clang::CXXConversionDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_f985630f6d5d5a2083b01d182b863d7a("CXXConversionDecl", "", boost::python::no_init);
    class_f985630f6d5d5a2083b01d182b863d7a.def("create_deserialized", method_pointer_30a7e4952605556180af01a57837ddf5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof", method_pointer_b720ea81c7a851c89842c17c784e305e, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof_kind", method_pointer_229607615b1a572f8e9272e8846297f0, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("get_conversion_type", method_pointer_2ba0dab22a965325b1bb4a3d85d24e99, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit", method_pointer_dd089144c28c5a259a352634819734ad, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit_specified", method_pointer_14d6929f889655318ce1fa2aaea8bf7c, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_lambda_to_block_pointer_conversion", method_pointer_e1f2fbd20cfe53c5a283c2674ccf8de7, "");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof_kind");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("create_deserialized");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConversionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConversionDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}