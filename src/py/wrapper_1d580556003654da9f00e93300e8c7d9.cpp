#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_1d580556003654da9f00e93300e8c7d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_a11bd5a4c3b358889c6c1e8b318d3064)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_550c42745738511488554276aeeb6c79)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_7b8d5d21de7d5c039e8e7c31c3f61e89)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_7d5ff6c73acf5c0f903d856befb6c972)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_ed3ecf72e5e657a3b5f0b69fdf58ec58)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_373f7ce3f47d5040bf0bb376bca2111a)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_ed951660f43352abab75f287509fb56a)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_b443d11ad1185d0687891288f0a4f6fe)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_a11bd5a4c3b358889c6c1e8b318d3064, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_550c42745738511488554276aeeb6c79, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_7b8d5d21de7d5c039e8e7c31c3f61e89, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_7d5ff6c73acf5c0f903d856befb6c972, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_ed3ecf72e5e657a3b5f0b69fdf58ec58, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_373f7ce3f47d5040bf0bb376bca2111a, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_ed951660f43352abab75f287509fb56a, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_b443d11ad1185d0687891288f0a4f6fe, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}