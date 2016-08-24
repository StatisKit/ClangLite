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
    bool  (*method_pointer_1e2f5e4265885576ae88e7d6ab297397)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_6518949df8555702a8a6d93c6a6d66d2)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_d8ef7749078a5594b0a71cb69dba9d98)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_d6005d78b62a5729a72479fa3d9f879e)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_56989acbc3205e068f324494f9b1a749)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_1542822ca62d50daa28338563675db65)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_e6f62e89627353b5a8e7e7208fb46bf1)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_1932f31f44655197a4f4a14caa2befcd)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_615345677623593f9c28d6742274f933)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_9c7a223bfe0f5d6fb7202c326851c511)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_60e0dae1366258258c41450604d572e6)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_1e2f5e4265885576ae88e7d6ab297397, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_6518949df8555702a8a6d93c6a6d66d2, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_d8ef7749078a5594b0a71cb69dba9d98, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_d6005d78b62a5729a72479fa3d9f879e, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_56989acbc3205e068f324494f9b1a749, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_1542822ca62d50daa28338563675db65, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_e6f62e89627353b5a8e7e7208fb46bf1, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_1932f31f44655197a4f4a14caa2befcd, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_615345677623593f9c28d6742274f933, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_9c7a223bfe0f5d6fb7202c326851c511, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_60e0dae1366258258c41450604d572e6, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}