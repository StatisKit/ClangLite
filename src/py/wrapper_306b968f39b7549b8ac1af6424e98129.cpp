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
    bool  (*method_pointer_9c23136b69775d0a880743f3d60b87e1)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_5a3b2d1741255c32947f937079327494)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_827989a7ae675a5ba40c2b575bcb4ee0)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_103389c78f745ab99c6a7f248f9bb732)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_f1f6ec4bb807554c955db0786b80f73c)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_d1ad243d80c6598eacd53ec44338d448)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_ee21f0ae6e6a5f84bca0edb21321feaf)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_bd8bd71e7fe557e191f630a7ac0a3ed6)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_83745a8db4435f8286855d5864f94fdb)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_18c0dfff38215724aa137244fe55fc97)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_9c23136b69775d0a880743f3d60b87e1, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_5a3b2d1741255c32947f937079327494, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_827989a7ae675a5ba40c2b575bcb4ee0, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_103389c78f745ab99c6a7f248f9bb732, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_f1f6ec4bb807554c955db0786b80f73c, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_d1ad243d80c6598eacd53ec44338d448, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_ee21f0ae6e6a5f84bca0edb21321feaf, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_bd8bd71e7fe557e191f630a7ac0a3ed6, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_83745a8db4435f8286855d5864f94fdb, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_18c0dfff38215724aa137244fe55fc97, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}