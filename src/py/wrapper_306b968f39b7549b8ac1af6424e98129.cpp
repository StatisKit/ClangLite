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
    bool  (*method_pointer_9486edb8bfee54bab61c8cb6112cd2d6)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_760c03b9ebc5510682bd4f0e3f76f0f7)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_540e661610b65b8891164582a9c8dd2b)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_380be43663af507c9441a2fb685681e5)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_e9dcc74d2f6f53dd85c74f30ace81942)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_6ff96992243c517cb6e213a0946640cc)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_af789ca6d27d55b7bab209d6b6e41c31)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_02fce4427374500fa93e17a53322f538)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_23522907aafe59f59a6d925d12b3d69c)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_7c9e7e30f7dc5416854902de243c41f9)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_45c016d8f396506f8ef9f8bc3949ba6a)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_9486edb8bfee54bab61c8cb6112cd2d6, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_760c03b9ebc5510682bd4f0e3f76f0f7, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_540e661610b65b8891164582a9c8dd2b, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_380be43663af507c9441a2fb685681e5, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_e9dcc74d2f6f53dd85c74f30ace81942, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_6ff96992243c517cb6e213a0946640cc, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_af789ca6d27d55b7bab209d6b6e41c31, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_02fce4427374500fa93e17a53322f538, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_23522907aafe59f59a6d925d12b3d69c, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_7c9e7e30f7dc5416854902de243c41f9, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_45c016d8f396506f8ef9f8bc3949ba6a, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}