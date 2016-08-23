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
    bool  (*method_pointer_4694e388926551b1b273e34a934a7077)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_8a49a417590a5f619b6769beeca09a26)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_6de5ef87fca85b5eb5e7183898a9e01a)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_9a8ed9cec26259f894524b41937ea94b)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_6210f83474855a9c800115f25f91b12a)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_be4a5583ca0b523e884d7018100428fe)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_a9086050e7fb51aeb43cf75c658ce3f2)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_1c119b2202b35ccaa1e1067d6c7dade5)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_f28420ec26d553e7aa0e197633eaa997)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_de4821ef825559ec9e66cad63813231e)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_4694e388926551b1b273e34a934a7077, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_8a49a417590a5f619b6769beeca09a26, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_6de5ef87fca85b5eb5e7183898a9e01a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_9a8ed9cec26259f894524b41937ea94b, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_6210f83474855a9c800115f25f91b12a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_be4a5583ca0b523e884d7018100428fe, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_a9086050e7fb51aeb43cf75c658ce3f2, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_1c119b2202b35ccaa1e1067d6c7dade5, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_f28420ec26d553e7aa0e197633eaa997, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_de4821ef825559ec9e66cad63813231e, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}