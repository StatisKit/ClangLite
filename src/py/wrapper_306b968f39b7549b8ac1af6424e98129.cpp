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
    bool  (*method_pointer_f89bc73201525f33bb9f53d9dbece25c)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_48b0b71bad9a5fdf8ee1f3dcce1e8aaa)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_71a19c19f619532692f5031f320fb962)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_52fded574d355c48841251bfa17fafaf)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_3f54f7a79c4957bcbc04fd10999b9f74)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_bd96e0c33c5e54eb913613ecd05007da)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_3cf28abbc2795c74b488764819c2e0e7)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_de9cfb6ef16e50bf8f95a04f4d8edbe4)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_b316636722bc5d70ae0ebef1836cf011)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_f83db21860045347a3529ad4e57d085d)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_67efd31a6da859459746815ac773a360)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_f89bc73201525f33bb9f53d9dbece25c, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_48b0b71bad9a5fdf8ee1f3dcce1e8aaa, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_71a19c19f619532692f5031f320fb962, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_52fded574d355c48841251bfa17fafaf, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_3f54f7a79c4957bcbc04fd10999b9f74, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_bd96e0c33c5e54eb913613ecd05007da, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_3cf28abbc2795c74b488764819c2e0e7, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_de9cfb6ef16e50bf8f95a04f4d8edbe4, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_b316636722bc5d70ae0ebef1836cf011, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_f83db21860045347a3529ad4e57d085d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_67efd31a6da859459746815ac773a360, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}