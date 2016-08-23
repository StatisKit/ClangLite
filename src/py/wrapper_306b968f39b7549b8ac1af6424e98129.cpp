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
    bool  (*method_pointer_ab4bd38077245e2fb6ef39f93a193108)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_b1198c93c6985df1a9eaa424f92864d9)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_2ca93ddf43b653a987087215f0a571f9)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_f7a8e9e7d3485754a8ea3ba76e9708c2)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_8115053ff8c05cfda21e5e526c6ff3ed)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_d730c65a6a295bbe84fd4f5fde7d4732)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_4933c01a645e5cae8fef0a6fdc73616c)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_ba9c3f6fa95d5e3cb0164f37db5f657c)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_3014c9344a8a569e88683adf72f0b425)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_d0f37b371f1d5c3e97e85a6fb0c7c697)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_ab4bd38077245e2fb6ef39f93a193108, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_b1198c93c6985df1a9eaa424f92864d9, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_2ca93ddf43b653a987087215f0a571f9, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_f7a8e9e7d3485754a8ea3ba76e9708c2, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_8115053ff8c05cfda21e5e526c6ff3ed, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_d730c65a6a295bbe84fd4f5fde7d4732, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_4933c01a645e5cae8fef0a6fdc73616c, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_ba9c3f6fa95d5e3cb0164f37db5f657c, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_3014c9344a8a569e88683adf72f0b425, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_d0f37b371f1d5c3e97e85a6fb0c7c697, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}