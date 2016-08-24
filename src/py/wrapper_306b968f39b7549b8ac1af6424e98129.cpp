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
    bool  (*method_pointer_b2adb56760a054f182348a76cca129d3)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_d896fe8c8d2c5cfb9c545c7ac1f4ccc5)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_918f6b5ea7d95fb89ef02fe4332d22f8)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_0675f884fcf55f8dbb1d8fdf4af13ec0)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_bd35db314f735770b182463a31385ebe)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_6c1322d8ad2753f4a1ad0f36c29b4433)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_ab9f668fd41153e9b52cddffb8d7b418)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_c1c26dd70456528887f225d4912277a8)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_016d5103525f5cecb9c8d91537bc3267)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_029182c7cf1a5f0e8d38768854f868b0)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_3bd7063161605896a79d49c7962c7533)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_b2adb56760a054f182348a76cca129d3, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_d896fe8c8d2c5cfb9c545c7ac1f4ccc5, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_918f6b5ea7d95fb89ef02fe4332d22f8, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_0675f884fcf55f8dbb1d8fdf4af13ec0, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_bd35db314f735770b182463a31385ebe, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_6c1322d8ad2753f4a1ad0f36c29b4433, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_ab9f668fd41153e9b52cddffb8d7b418, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_c1c26dd70456528887f225d4912277a8, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_016d5103525f5cecb9c8d91537bc3267, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_029182c7cf1a5f0e8d38768854f868b0, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_3bd7063161605896a79d49c7962c7533, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}