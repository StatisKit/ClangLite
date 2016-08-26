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
    bool  (*method_pointer_f3942f7a2a795b639935b928ff27f07a)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_e14e97e036ca551a8784d81e84caf094)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_f62409c40fcf531a96ffcfd0e4036b39)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_2d22dfe6b1875263b568c200d65a5e1e)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_8f0d562fd53f507cbd6c62a61445e1d7)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_71eea933520d59899dc008e6e13f1927)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_fb2afc90f4bd5cbcac1ec8058749f2b8)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_f2a15a2e55b65318a04e60ea19727ed1)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_a6e9c23edbcf55868f8f0f2023847e28)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_db5123e17ae656a3a5f07c65b06d457e)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_f3942f7a2a795b639935b928ff27f07a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_e14e97e036ca551a8784d81e84caf094, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_f62409c40fcf531a96ffcfd0e4036b39, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_2d22dfe6b1875263b568c200d65a5e1e, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_8f0d562fd53f507cbd6c62a61445e1d7, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_71eea933520d59899dc008e6e13f1927, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_fb2afc90f4bd5cbcac1ec8058749f2b8, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_f2a15a2e55b65318a04e60ea19727ed1, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_a6e9c23edbcf55868f8f0f2023847e28, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_db5123e17ae656a3a5f07c65b06d457e, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}