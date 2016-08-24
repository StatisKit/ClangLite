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
    bool  (*method_pointer_1a2d290130fe5db9aa8757786fd1a84a)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_0577de00cf2a57aa8789e016d83e71de)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_0ad3b8f0fd0c59339631ce837c201a15)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_f1541d99e2dc567bba9016b5950ea936)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_3ab223a1a91d54bca402767aef947703)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_2c22a590dadb5a1aba57e5e4668f38ba)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_e79c535a778c536cada5e4b5297284e2)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_90e2c4bc7e5e50d9b048f85d923239bd)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_fec0972dd1bc53948c294f68cfe6e0ac)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_16c66b899974502c9a82b24dd9da541d)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_fefadcf947695577b513a85de220a024)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_1a2d290130fe5db9aa8757786fd1a84a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_0577de00cf2a57aa8789e016d83e71de, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_0ad3b8f0fd0c59339631ce837c201a15, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_f1541d99e2dc567bba9016b5950ea936, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_3ab223a1a91d54bca402767aef947703, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_2c22a590dadb5a1aba57e5e4668f38ba, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_e79c535a778c536cada5e4b5297284e2, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_90e2c4bc7e5e50d9b048f85d923239bd, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_fec0972dd1bc53948c294f68cfe6e0ac, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_16c66b899974502c9a82b24dd9da541d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_fefadcf947695577b513a85de220a024, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}