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
    bool  (*method_pointer_b78e46821f845047acb807c4b4e211b3)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_c55f543837ab59ed9493e8fd819d61ec)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_7244198a61d755668d4da57140b1b824)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_97a8ab0e501e5e0398710e5d5b514e6f)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_1e280e9274bf54e2929df4954c1367fe)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_48fbde7311de5f5cbfa81f0b04049c21)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_3107ff57edf755468fffb47cf782b2ca)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_853dbae2090c5dd0940e784dd3f6e4f3)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_539d3685b2ce57d5aa954d154116a1a9)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_c5b1044cbe3c5b7a9c9a85c624d59c4b)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_b87f7e24ea795fdeac3455f1c1b97fd3)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_b78e46821f845047acb807c4b4e211b3, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_c55f543837ab59ed9493e8fd819d61ec, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_7244198a61d755668d4da57140b1b824, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_97a8ab0e501e5e0398710e5d5b514e6f, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_1e280e9274bf54e2929df4954c1367fe, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_48fbde7311de5f5cbfa81f0b04049c21, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_3107ff57edf755468fffb47cf782b2ca, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_853dbae2090c5dd0940e784dd3f6e4f3, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_539d3685b2ce57d5aa954d154116a1a9, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_c5b1044cbe3c5b7a9c9a85c624d59c4b, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_b87f7e24ea795fdeac3455f1c1b97fd3, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}