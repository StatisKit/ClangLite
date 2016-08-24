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
    bool  (*method_pointer_d80e3b4b56e45d29a7023d00bbc20326)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_9a2d9f0675ec53e293d653422447b526)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_572284bc973957318291dff5f690267a)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_61931582a82657099e75cddea3192572)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_f601e9dd98e75abd93a30e8a35475fbd)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_4a5d00ddcde85bc1afd229a6eeffc018)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_207c80de8b525ff5803a314726dee084)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_bc57b9cec6f1525b8c218ea4d2e4059c)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_d80e3b4b56e45d29a7023d00bbc20326, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_9a2d9f0675ec53e293d653422447b526, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_572284bc973957318291dff5f690267a, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_61931582a82657099e75cddea3192572, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_f601e9dd98e75abd93a30e8a35475fbd, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_4a5d00ddcde85bc1afd229a6eeffc018, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_207c80de8b525ff5803a314726dee084, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_bc57b9cec6f1525b8c218ea4d2e4059c, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}