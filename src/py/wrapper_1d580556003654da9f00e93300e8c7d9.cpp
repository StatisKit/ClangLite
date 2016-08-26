#include "_clanglite.h"


namespace autowig
{
}


void wrapper_1d580556003654da9f00e93300e8c7d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_23d5ee20487e50c1937b75486ae11792)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    bool  (::clang::AttributedType::*method_pointer_c886f6370cd45eeaa43d1ffd003b791d)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_60cafb8cd8325f6a91ec46d0af7e2e91)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_a426ff8bc476594a96a1acfd6df30049)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_b395cde977b356279697c52e666f9063)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_23d5ee20487e50c1937b75486ae11792, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_c886f6370cd45eeaa43d1ffd003b791d, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_60cafb8cd8325f6a91ec46d0af7e2e91, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_a426ff8bc476594a96a1acfd6df30049, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_b395cde977b356279697c52e666f9063, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}