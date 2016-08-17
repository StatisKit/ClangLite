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
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_e1d316b722385a579f8048375b198992)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_bfecb07d465e543abba629291a3b9a7b)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_ee553bef04ce5ccab9c8f41e0d0847a4)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_8c554121afb15d54bfe04a2620f5035e)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (*method_pointer_fef1860e4ec45f4e92a59cedfcb9226c)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_f32833d428a7556a9e31eeaba747f2ed)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (*method_pointer_ff4d99b2a7d852a7acd1864593106d8c)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    bool  (::clang::BuiltinType::*method_pointer_48db88f459e658f2a28cf09ac4c6d67d)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_087a118347885ba9a0761662c31f2639)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_bf6d5787611257c4992d746f916fdc06)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_e1d316b722385a579f8048375b198992, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_bfecb07d465e543abba629291a3b9a7b, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_ee553bef04ce5ccab9c8f41e0d0847a4, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_8c554121afb15d54bfe04a2620f5035e, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_fef1860e4ec45f4e92a59cedfcb9226c, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_f32833d428a7556a9e31eeaba747f2ed, "");
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_ff4d99b2a7d852a7acd1864593106d8c, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_48db88f459e658f2a28cf09ac4c6d67d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_087a118347885ba9a0761662c31f2639, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_bf6d5787611257c4992d746f916fdc06, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}