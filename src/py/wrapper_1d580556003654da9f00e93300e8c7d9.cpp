#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_1d580556003654da9f00e93300e8c7d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_5b47418f977f5cbaa4f7bf4c02051ddc)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    bool  (::clang::AttributedType::*method_pointer_1f03d62429905893bbc71bb49da473b2)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_fe4d8e1f0a095d83944975c643e478b2)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_6a6d81388ec05528ae4076b8085a6205)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_c155437d78475940bc07653d23b7ce41)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_5b47418f977f5cbaa4f7bf4c02051ddc, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_1f03d62429905893bbc71bb49da473b2, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_fe4d8e1f0a095d83944975c643e478b2, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_6a6d81388ec05528ae4076b8085a6205, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_c155437d78475940bc07653d23b7ce41, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}