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
    bool  (*method_pointer_b6d7765fdb965d5897482d7745000055)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_cbc29a4fcd1e5afcb53e9b53b8bd2af5)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_5bf8a9194edd5d5487d9d10cac170de7)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_9047c6bd6424538fb4021a69b6c463dc)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_07166a6f04485d7ba7df2451ff0acfe1)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_06a3c30541f35461ad3e7a16c11a99e7)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_53a9c7b10c0d502e8e544e3164f32356)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_784604cc192d5debbe0fff591f6bddb3)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_b6d7765fdb965d5897482d7745000055, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_cbc29a4fcd1e5afcb53e9b53b8bd2af5, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_5bf8a9194edd5d5487d9d10cac170de7, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_9047c6bd6424538fb4021a69b6c463dc, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_07166a6f04485d7ba7df2451ff0acfe1, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_06a3c30541f35461ad3e7a16c11a99e7, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_53a9c7b10c0d502e8e544e3164f32356, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_784604cc192d5debbe0fff591f6bddb3, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}