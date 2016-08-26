#include "_clanglite.h"


namespace autowig
{
}


void wrapper_306b968f39b7549b8ac1af6424e98129()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_e0d71b3c5a2f577985a86c091d715149)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_4d6771cee1e55d1e99f2bc4a5940f0a2)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_78c2c46187035e3d800196b97aff2892)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_73bf4117793a52c1958689a739d19959)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_07560e2a90b05eccb6d81f7c0e50f91e)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_dc71f3e018335a45973a4a6034444c6c)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_5c86155099c95ada9d51bfeaee1c26c1)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_43a0d5e42dd55844805f01ae7c6beb01)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_4f668cfbefe85ff4bf7bf012c36dee6f)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_176cbe19655e54a0acba0eebd06d09f8)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_e0d71b3c5a2f577985a86c091d715149, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_4d6771cee1e55d1e99f2bc4a5940f0a2, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_78c2c46187035e3d800196b97aff2892, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_73bf4117793a52c1958689a739d19959, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_07560e2a90b05eccb6d81f7c0e50f91e, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_dc71f3e018335a45973a4a6034444c6c, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_5c86155099c95ada9d51bfeaee1c26c1, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_43a0d5e42dd55844805f01ae7c6beb01, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_4f668cfbefe85ff4bf7bf012c36dee6f, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_176cbe19655e54a0acba0eebd06d09f8, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}