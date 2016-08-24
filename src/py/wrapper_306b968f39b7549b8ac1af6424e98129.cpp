#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_306b968f39b7549b8ac1af6424e98129()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_b54452e1aee051c8afc7d4d42faca037)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_d0ba30953b3c58798c671bf33ad72c56)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_8a1f4f3a2fee5c19a529be115c9f1f3d)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_ad70dcc1d69650c78c8577fa434505bc)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_05bcd0f68319574fb06022572f0a4b89)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_caeb669f3e585cdf8b157545d37e1326)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_a661b479af45530b88e7bba20c93348e)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_6fed0f392e935ffbb9a3db9e26f3df94)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_534b74bac3195ccd8882231d07633b87)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_594c36c88de05374be98d7b4478bd23b)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_c95170d8e90459f88174bab07c0af2ad)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_b54452e1aee051c8afc7d4d42faca037, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_d0ba30953b3c58798c671bf33ad72c56, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_8a1f4f3a2fee5c19a529be115c9f1f3d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_ad70dcc1d69650c78c8577fa434505bc, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_05bcd0f68319574fb06022572f0a4b89, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_caeb669f3e585cdf8b157545d37e1326, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_a661b479af45530b88e7bba20c93348e, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_6fed0f392e935ffbb9a3db9e26f3df94, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_534b74bac3195ccd8882231d07633b87, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_594c36c88de05374be98d7b4478bd23b, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_c95170d8e90459f88174bab07c0af2ad, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}