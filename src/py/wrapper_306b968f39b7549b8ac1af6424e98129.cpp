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
    bool  (*method_pointer_328418d880615bc59e4fdea08c86fe81)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_3c8c5d013cff562ea3f5c63e54f78f23)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_399e9f4b5396510d86d5d6e7415ca329)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_aff42742fef65c8bb4c058e9bd8162ff)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_fdea5408a57a543b9b2f382d2058f592)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_ed2692a3b9df5543b8e2f2cfd6dc6e31)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_44ef048977275a08a3b19cbe5f752f4e)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_dac8e90f4e6b548a8133ff07ff449651)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_c8a918af58dd50ae850c3c3a01bea08c)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_f0d92be7fb6251029127f750f9959b8f)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_4307c90283b05afdb15fd4d58aa86f36)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_328418d880615bc59e4fdea08c86fe81, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_3c8c5d013cff562ea3f5c63e54f78f23, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_399e9f4b5396510d86d5d6e7415ca329, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_aff42742fef65c8bb4c058e9bd8162ff, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_fdea5408a57a543b9b2f382d2058f592, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_ed2692a3b9df5543b8e2f2cfd6dc6e31, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_44ef048977275a08a3b19cbe5f752f4e, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_dac8e90f4e6b548a8133ff07ff449651, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_c8a918af58dd50ae850c3c3a01bea08c, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_f0d92be7fb6251029127f750f9959b8f, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_4307c90283b05afdb15fd4d58aa86f36, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}