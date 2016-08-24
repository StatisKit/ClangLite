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
    bool  (*method_pointer_68c0933a37985566b8b674fdb48da515)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_07fc9d2292f4525db32a666d54db2619)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_57d22dd4790f5d268aceed3f23350721)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_79516cb00db45c37bec9df3e9537b452)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_1be1d33399945a01bfa48946bbd95257)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_da3cd330981e5961863ff13e1fdc878d)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_802b2d5d34e45c0f98a9c4ee5fb0a2d0)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_aff4f26039c15d6b81ffb6d27de6f001)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_12974358beac57ad8591cda5b4de5930)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_bee207a6c42b596f8439571515fa58c3)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_cf7bbaee368753a59e0638be3e0716b1)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_68c0933a37985566b8b674fdb48da515, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_07fc9d2292f4525db32a666d54db2619, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_57d22dd4790f5d268aceed3f23350721, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_79516cb00db45c37bec9df3e9537b452, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_1be1d33399945a01bfa48946bbd95257, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_da3cd330981e5961863ff13e1fdc878d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_802b2d5d34e45c0f98a9c4ee5fb0a2d0, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_aff4f26039c15d6b81ffb6d27de6f001, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_12974358beac57ad8591cda5b4de5930, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_bee207a6c42b596f8439571515fa58c3, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_cf7bbaee368753a59e0638be3e0716b1, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}