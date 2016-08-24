#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_7d10a38ead5950acb903ebd8bb882a64()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_b0f80abbc6885afe97cdb5b7ec7a1eb7)(class ::clang::Type  const *) = ::clang::DependentSizedExtVectorType::classof;
    class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_8b14b31dd36755979acd7fdee11310c2)() const = &::clang::DependentSizedExtVectorType::desugar;
    class ::clang::SourceLocation  (::clang::DependentSizedExtVectorType::*method_pointer_2f35fc71af7b502c91fe4193b643535c)() const = &::clang::DependentSizedExtVectorType::getAttributeLoc;
    class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_54268a7a91475daea27dab5f066c8dc8)() const = &::clang::DependentSizedExtVectorType::getElementType;
    bool  (::clang::DependentSizedExtVectorType::*method_pointer_7d2f9b1fc8025f33a567b6fe375516bb)() const = &::clang::DependentSizedExtVectorType::isSugared;
    boost::python::class_< class ::clang::DependentSizedExtVectorType, autowig::HeldType< class ::clang::DependentSizedExtVectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_7d10a38ead5950acb903ebd8bb882a64("DependentSizedExtVectorType", "", boost::python::no_init);
    class_7d10a38ead5950acb903ebd8bb882a64.def("classof", method_pointer_b0f80abbc6885afe97cdb5b7ec7a1eb7, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("desugar", method_pointer_8b14b31dd36755979acd7fdee11310c2, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("get_attribute_loc", method_pointer_2f35fc71af7b502c91fe4193b643535c, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("get_element_type", method_pointer_54268a7a91475daea27dab5f066c8dc8, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("is_sugared", method_pointer_7d2f9b1fc8025f33a567b6fe375516bb, "");
    class_7d10a38ead5950acb903ebd8bb882a64.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentSizedExtVectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentSizedExtVectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}