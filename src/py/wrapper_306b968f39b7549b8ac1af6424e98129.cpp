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
    bool  (*method_pointer_bec98659f2ca52b7beaf484a40d662ee)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_8e4906378c2754088e080b6ef737122a)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_cb33d487e30a5cc195e126e70b69d321)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_7ecd7169c1c65085a02a5c355a1b943a)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_0340bda755335f3a9f04dbed7084aacc)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_293e7651a3a9508b99c6aa9ecc9fdd27)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_eab48e48039f5f0d8e81932abe4cea1b)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_e22f00f600b65d788a95d694906fc5e1)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_c51823ddc97654d88cb099e68c9b3fbd)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_c0e5bbc716c2587084a492984b76d941)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_1f319af58d5958b8b7b2d9dd4cd5df2d)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_bec98659f2ca52b7beaf484a40d662ee, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_8e4906378c2754088e080b6ef737122a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_cb33d487e30a5cc195e126e70b69d321, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_7ecd7169c1c65085a02a5c355a1b943a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_0340bda755335f3a9f04dbed7084aacc, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_293e7651a3a9508b99c6aa9ecc9fdd27, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_eab48e48039f5f0d8e81932abe4cea1b, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_e22f00f600b65d788a95d694906fc5e1, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_c51823ddc97654d88cb099e68c9b3fbd, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_c0e5bbc716c2587084a492984b76d941, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_1f319af58d5958b8b7b2d9dd4cd5df2d, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}