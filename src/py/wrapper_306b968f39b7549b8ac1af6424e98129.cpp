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
    bool  (::clang::BuiltinType::*method_pointer_527b6f954cd55e1bbf414fca120be46d)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_dfb3317d3ba757cc8a8c917d6d7ba2bd)() const = &::clang::BuiltinType::isInteger;
    bool  (*method_pointer_2452763314465a42b096299a0d570938)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (*method_pointer_93d5917d454d5c35825a104efa97ec11)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    bool  (::clang::BuiltinType::*method_pointer_0bb2ef4660bd5891a455afa861e8c057)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_caf333d1167357c592c6af562ce241b6)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_5b5b5e2fdc905eba842e5981d75a0726)() const = &::clang::BuiltinType::isSugared;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_132f7a11272d57ae894de7b2240d3cd2)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_878dbb961f6e5bcfabee0e133fb9e36a)() const = &::clang::BuiltinType::isUnsignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_98f037056d4d502f9a54ef82a41acceb)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_527b6f954cd55e1bbf414fca120be46d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_dfb3317d3ba757cc8a8c917d6d7ba2bd, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_2452763314465a42b096299a0d570938, "");
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_93d5917d454d5c35825a104efa97ec11, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_0bb2ef4660bd5891a455afa861e8c057, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_caf333d1167357c592c6af562ce241b6, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_5b5b5e2fdc905eba842e5981d75a0726, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_132f7a11272d57ae894de7b2240d3cd2, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_878dbb961f6e5bcfabee0e133fb9e36a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_98f037056d4d502f9a54ef82a41acceb, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}