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
    bool  (*method_pointer_888ff3e4c5f351308539fc59227273f0)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_ced9ea543ea15d53960c26aad39935f7)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_536df0c204e15900ba90ce063a32db88)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_022ecbc937c1536e8ba959273955155e)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_2cb188f3522859aba63ab3cf824e7cdd)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_38691b429f7659f5b7597507ec9a705d)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_94fcf997bc2d5f0f9da976bc7036880d)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_966c553c7c5c575fb967339ef6baccdd)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_abbd99da0cfe5fb9ba5dbb6b43a26c10)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_956d6a8366b15a929ce6feb8ecc12c25)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_3a97c1952fc75075bb2c414b1832ec70)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_888ff3e4c5f351308539fc59227273f0, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_ced9ea543ea15d53960c26aad39935f7, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_536df0c204e15900ba90ce063a32db88, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_022ecbc937c1536e8ba959273955155e, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_2cb188f3522859aba63ab3cf824e7cdd, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_38691b429f7659f5b7597507ec9a705d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_94fcf997bc2d5f0f9da976bc7036880d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_966c553c7c5c575fb967339ef6baccdd, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_abbd99da0cfe5fb9ba5dbb6b43a26c10, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_956d6a8366b15a929ce6feb8ecc12c25, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_3a97c1952fc75075bb2c414b1832ec70, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}