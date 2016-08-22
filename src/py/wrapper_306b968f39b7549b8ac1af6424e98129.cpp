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
    bool  (*method_pointer_408dee7530aa5cdb8453c81294854a4a)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_5c4fcd89995a51f09bb1096e13d6d5f1)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_cbc829fa17c155418c2204cf08d71800)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_24c6cc4b43c85051bc6dd0a2ec729763)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_ece1643dd6885d12bc6a3b7f561e8eea)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_dca82d7898bf57fc9f0470919307384b)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_e88a7d746d6c5f8f9b47033b5ddef1c0)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_06cca567ab6f5dfab3dd1f6736f95381)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_7f4b28b3c7525828af873e42485cc924)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_dd1cc3b758a15e02a40276b7b9627246)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_408dee7530aa5cdb8453c81294854a4a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_5c4fcd89995a51f09bb1096e13d6d5f1, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_cbc829fa17c155418c2204cf08d71800, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_24c6cc4b43c85051bc6dd0a2ec729763, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_ece1643dd6885d12bc6a3b7f561e8eea, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_dca82d7898bf57fc9f0470919307384b, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_e88a7d746d6c5f8f9b47033b5ddef1c0, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_06cca567ab6f5dfab3dd1f6736f95381, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_7f4b28b3c7525828af873e42485cc924, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_dd1cc3b758a15e02a40276b7b9627246, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}