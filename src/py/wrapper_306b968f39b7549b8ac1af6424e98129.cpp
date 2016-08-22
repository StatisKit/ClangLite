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
    bool  (*method_pointer_cbe0954458a6571b97e11f1fc34b4921)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_c3f8aa484c025c38b2ebeee20abce792)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_a815dd88130a5e14b3d92502c5fee09f)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_7c5e69ad970b54beaf64bb4af8774240)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_188fbc4093925796abb71f42e30f0e08)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_21590bbcb98c57e28fd0c29fbbc3908c)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_bb0210c9078f5d16866123ebbeffe51c)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_7669e00e8890515985acd14dcd8cb09c)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_16ec05bb43b958baa4a5b6591be4c733)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_6fb0871f290952889d0def4022f79349)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_cbe0954458a6571b97e11f1fc34b4921, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_c3f8aa484c025c38b2ebeee20abce792, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_a815dd88130a5e14b3d92502c5fee09f, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_7c5e69ad970b54beaf64bb4af8774240, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_188fbc4093925796abb71f42e30f0e08, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_21590bbcb98c57e28fd0c29fbbc3908c, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_bb0210c9078f5d16866123ebbeffe51c, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_7669e00e8890515985acd14dcd8cb09c, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_16ec05bb43b958baa4a5b6591be4c733, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_6fb0871f290952889d0def4022f79349, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}