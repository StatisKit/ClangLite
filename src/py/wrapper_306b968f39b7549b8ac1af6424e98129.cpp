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
    bool  (*method_pointer_af37cf94667a5719807b424df79a62a3)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_9fc86551b763509a9266ea03f1428678)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_c04742ec327c56ddaa11e00dcfb99063)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_fdd07b76b0395523a3cc83d1b4ff92c0)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_59b5bf48b3b359f79105ef53455daf72)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_a0f800ca48e45e8fbea11675286a66f7)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_f1b5ad9fd181552cafbbcbe96f353020)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_0fcb69c5e7f1521a824b1cc0d2c61292)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_af7a93b88853537f899766d8400567a7)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_7ecb766c9f775282b1886f63eac999ed)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_af37cf94667a5719807b424df79a62a3, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_9fc86551b763509a9266ea03f1428678, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_c04742ec327c56ddaa11e00dcfb99063, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_fdd07b76b0395523a3cc83d1b4ff92c0, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_59b5bf48b3b359f79105ef53455daf72, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_a0f800ca48e45e8fbea11675286a66f7, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_f1b5ad9fd181552cafbbcbe96f353020, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_0fcb69c5e7f1521a824b1cc0d2c61292, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_af7a93b88853537f899766d8400567a7, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_7ecb766c9f775282b1886f63eac999ed, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}