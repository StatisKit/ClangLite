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
    bool  (*method_pointer_08f621972392556b86abfb6976dec2b8)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_0cc1ffc390465a7daa9f3e2356509177)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_f3c0e529f70757b5a717c18d9d878cdb)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_3574e58137aa5ad4879318307f5bcb81)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_4ff4ef1f8ba55a369034f51c7442d0d8)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_37b30bdff409572eb8b4f97c0f8a3fb2)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_3d0f8d5c91fa5dafb90cf6bfb50db1de)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_aff98c367e395358b21ec31ef029c270)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_3ea2c6186b12511f94bcd973f2addb82)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_3421397f782c5824a5ddba5343cfa9f8)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_08f621972392556b86abfb6976dec2b8, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_0cc1ffc390465a7daa9f3e2356509177, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_f3c0e529f70757b5a717c18d9d878cdb, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_3574e58137aa5ad4879318307f5bcb81, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_4ff4ef1f8ba55a369034f51c7442d0d8, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_37b30bdff409572eb8b4f97c0f8a3fb2, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_3d0f8d5c91fa5dafb90cf6bfb50db1de, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_aff98c367e395358b21ec31ef029c270, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_3ea2c6186b12511f94bcd973f2addb82, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_3421397f782c5824a5ddba5343cfa9f8, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}