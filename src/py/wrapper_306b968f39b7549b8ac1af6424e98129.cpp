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
    bool  (*method_pointer_fdfba8248b9d5fb98eeca24ed8193284)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_2b268d990c54510fac3813d251f00bba)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_3a1c0174a1e95c56b2ab6aa4158ccbf0)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_98f7d59ba4b354a0a2312710c153dc33)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_1853fa60251351dca1fa557269ae1f00)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_a13588aaaa0257a5806d75d831f6ca6d)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_1bc64d0ac1cf5a789746aad39bd1bc25)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_6abed03edd1f51ad87aa9e53b80ddaf5)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_0a0c14120d5e5d09aea9e201e2433d69)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_ccb780dbf83b5f4ea8045370f0fe9fdd)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_fdfba8248b9d5fb98eeca24ed8193284, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_2b268d990c54510fac3813d251f00bba, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_3a1c0174a1e95c56b2ab6aa4158ccbf0, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_98f7d59ba4b354a0a2312710c153dc33, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_1853fa60251351dca1fa557269ae1f00, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_a13588aaaa0257a5806d75d831f6ca6d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_1bc64d0ac1cf5a789746aad39bd1bc25, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_6abed03edd1f51ad87aa9e53b80ddaf5, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_0a0c14120d5e5d09aea9e201e2433d69, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_ccb780dbf83b5f4ea8045370f0fe9fdd, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}