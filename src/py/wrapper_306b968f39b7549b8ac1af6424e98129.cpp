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
    bool  (*method_pointer_b47c3814953457569e17503e79313f25)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_e3c67e67d1a65bba9ac5ebcad4162e6a)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_d31963d645e650efb91f6676111bcd13)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_3a42d4e7da7c523a9f1420ec06365eba)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_2a5c99545caa53d18e3194f7e25b5d75)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_75280d6a2bec5f669b00d627b94ebb7e)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_e484974903745793b2bbbd8b9ca3b24d)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_45ef828e31a552ba8ed1f8f9ea39a681)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_a5aeaa81eb8a5d4fba57ba5d9672fbbc)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_2dbccd1c713952669264b5ed33cf0ed0)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_b47c3814953457569e17503e79313f25, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_e3c67e67d1a65bba9ac5ebcad4162e6a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_d31963d645e650efb91f6676111bcd13, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_3a42d4e7da7c523a9f1420ec06365eba, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_2a5c99545caa53d18e3194f7e25b5d75, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_75280d6a2bec5f669b00d627b94ebb7e, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_e484974903745793b2bbbd8b9ca3b24d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_45ef828e31a552ba8ed1f8f9ea39a681, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_a5aeaa81eb8a5d4fba57ba5d9672fbbc, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_2dbccd1c713952669264b5ed33cf0ed0, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}