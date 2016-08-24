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
    bool  (*method_pointer_665bcd4d0d34522a80a5c5c3be905dae)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_6f460ec4f7d05f20ae65fd4baa29fbe5)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_d681f67a2eb25924ba7dda27b15178b2)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_04482225403b55769e3815660ad0f982)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_4401b529d4d25aa7a5ba3ce73fa8fd4d)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_9e34ca7fb7685d53b683a79cb93e50a5)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_99511928117f5aeb9f24ce32e4a98d72)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_07774e44070e5100ade42cc192f05db8)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_ec16b7432a635ba38744dee3b16041e6)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_d1ec3c300668521290025b9cb020a3a6)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_c89c0c731fe653d686414fd60d6561c7)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_665bcd4d0d34522a80a5c5c3be905dae, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_6f460ec4f7d05f20ae65fd4baa29fbe5, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_d681f67a2eb25924ba7dda27b15178b2, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_04482225403b55769e3815660ad0f982, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_4401b529d4d25aa7a5ba3ce73fa8fd4d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_9e34ca7fb7685d53b683a79cb93e50a5, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_99511928117f5aeb9f24ce32e4a98d72, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_07774e44070e5100ade42cc192f05db8, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_ec16b7432a635ba38744dee3b16041e6, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_d1ec3c300668521290025b9cb020a3a6, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_c89c0c731fe653d686414fd60d6561c7, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}