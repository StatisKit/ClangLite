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
    bool  (*method_pointer_e21b2bb7c3a25f6481935b1e7572e56d)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_0ac5714578c05c15bc962d58c82ad79a)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_fefe365fd89b5fceab293c25fe7283b3)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_10de0070b1d15f9e88e7a2155ff1014d)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_99ff905f60655cf5ba96c4cdaab9bb02)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_8c05b2b9161d5506a05d65506b3fba1a)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_1b1f70c02aa25e569c58855282b89325)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_810bfec968c65eb7a6fa4a2caf1dc993)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_a01c7b37c166599c93617414b3c0dbe2)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_859c6cc2420052c3b042e257bc467d93)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_114df33cf0a75429bbe0778e3a91b83a)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_e21b2bb7c3a25f6481935b1e7572e56d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_0ac5714578c05c15bc962d58c82ad79a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_fefe365fd89b5fceab293c25fe7283b3, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_10de0070b1d15f9e88e7a2155ff1014d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_99ff905f60655cf5ba96c4cdaab9bb02, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_8c05b2b9161d5506a05d65506b3fba1a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_1b1f70c02aa25e569c58855282b89325, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_810bfec968c65eb7a6fa4a2caf1dc993, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_a01c7b37c166599c93617414b3c0dbe2, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_859c6cc2420052c3b042e257bc467d93, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_114df33cf0a75429bbe0778e3a91b83a, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}