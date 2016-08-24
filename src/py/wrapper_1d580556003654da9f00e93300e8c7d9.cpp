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
    bool  (*method_pointer_98256102bc5254528d0cc0d11acbf2bb)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_011d1982a50359609b174fb6a8194ed3)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_5b8291aba22658d094f750ca6cca99b9)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_0b53c5887c095c23b629ca71582740e9)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_4fa5757216fa50e09fa5483720c8c3fc)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_2c9f91ce303f5075877f4311dc33f1fe)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_81c8924e394f5e3a904a48f3aeaa3349)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_06f17e3d3eb95558a7b37853097bcbcd)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_98256102bc5254528d0cc0d11acbf2bb, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_011d1982a50359609b174fb6a8194ed3, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_5b8291aba22658d094f750ca6cca99b9, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_0b53c5887c095c23b629ca71582740e9, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_4fa5757216fa50e09fa5483720c8c3fc, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_2c9f91ce303f5075877f4311dc33f1fe, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_81c8924e394f5e3a904a48f3aeaa3349, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_06f17e3d3eb95558a7b37853097bcbcd, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}