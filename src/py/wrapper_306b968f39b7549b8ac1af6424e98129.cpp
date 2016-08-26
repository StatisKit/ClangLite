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
    bool  (*method_pointer_8cddf5e6540953838911a84acc79e078)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_642bee27d2e253dfa30cc8ad054e2735)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_d2fc5ab5ec82526c9bc68ead0906513a)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_36683f5cf1815129b889b5801e31b389)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_321c35221e075ac2b57b373ff7bf0af5)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_31a0105c61615ef6a7ccf643ea8652d5)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_240b8d53cd3f5b76ab1b412bd80b0db7)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_5d2a0b081e1b5ae7bc1bb9eea06035e9)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_a53f000332165313bef2c2e94edaf1d5)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_ddb0d07e45a1599c8d1e927b85327ca0)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_2b830756574b5f01a28fe6573c50074e)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_8cddf5e6540953838911a84acc79e078, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_642bee27d2e253dfa30cc8ad054e2735, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_d2fc5ab5ec82526c9bc68ead0906513a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_36683f5cf1815129b889b5801e31b389, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_321c35221e075ac2b57b373ff7bf0af5, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_31a0105c61615ef6a7ccf643ea8652d5, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_240b8d53cd3f5b76ab1b412bd80b0db7, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_5d2a0b081e1b5ae7bc1bb9eea06035e9, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_a53f000332165313bef2c2e94edaf1d5, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_ddb0d07e45a1599c8d1e927b85327ca0, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_2b830756574b5f01a28fe6573c50074e, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}