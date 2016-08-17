#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_306b968f39b7549b8ac1af6424e98129()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::BuiltinType::*method_pointer_996fa723a4105128b47ae9808fdf5dfb)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_5a678871d87a532fa3f0025c3aed211c)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_97463b97ce455eafb445d8087a540fa0)() const = &::clang::BuiltinType::isUnsignedInteger;
    bool  (*method_pointer_7a657daf839a5ab9a5689bae2d11b1d3)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_5990c6e937a85249b8e60ce6979f524f)() const = &::clang::BuiltinType::isInteger;
    bool  (*method_pointer_47437e599bfa5c5aa1bcaef0a12ea8b4)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    bool  (::clang::BuiltinType::*method_pointer_13f633b29f59577a87f6ceca3543381d)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_69ea081d0d825491a40837a74494827b)() const = &::clang::BuiltinType::isSugared;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_42c59153c53953acaaa34cb6a32fd514)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_0d41952a45bc50cbb3f4942e1cc8223a)() const = &::clang::BuiltinType::isSignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_996fa723a4105128b47ae9808fdf5dfb, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_5a678871d87a532fa3f0025c3aed211c, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_97463b97ce455eafb445d8087a540fa0, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_7a657daf839a5ab9a5689bae2d11b1d3, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_5990c6e937a85249b8e60ce6979f524f, "");
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_47437e599bfa5c5aa1bcaef0a12ea8b4, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_13f633b29f59577a87f6ceca3543381d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_69ea081d0d825491a40837a74494827b, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_42c59153c53953acaaa34cb6a32fd514, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_0d41952a45bc50cbb3f4942e1cc8223a, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}