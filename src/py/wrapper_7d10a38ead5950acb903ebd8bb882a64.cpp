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
    bool  (*method_pointer_22745fb8d8e85af4a0394b2867c1029d)(class ::clang::Type  const *) = ::clang::DependentSizedExtVectorType::classof;
    class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_2605a64b963c5fbba6837d352d2dc9c6)() const = &::clang::DependentSizedExtVectorType::desugar;
    class ::clang::SourceLocation  (::clang::DependentSizedExtVectorType::*method_pointer_c0663c2e91905edba1d82d1a8c5c91e3)() const = &::clang::DependentSizedExtVectorType::getAttributeLoc;
    class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_32469d2a60af5db793f1edc40f546c57)() const = &::clang::DependentSizedExtVectorType::getElementType;
    bool  (::clang::DependentSizedExtVectorType::*method_pointer_d5a941e9a51051dc8fbe335591b73ab8)() const = &::clang::DependentSizedExtVectorType::isSugared;
    boost::python::class_< class ::clang::DependentSizedExtVectorType, autowig::HeldType< class ::clang::DependentSizedExtVectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_7d10a38ead5950acb903ebd8bb882a64("DependentSizedExtVectorType", "", boost::python::no_init);
    class_7d10a38ead5950acb903ebd8bb882a64.def("classof", method_pointer_22745fb8d8e85af4a0394b2867c1029d, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("desugar", method_pointer_2605a64b963c5fbba6837d352d2dc9c6, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("get_attribute_loc", method_pointer_c0663c2e91905edba1d82d1a8c5c91e3, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("get_element_type", method_pointer_32469d2a60af5db793f1edc40f546c57, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("is_sugared", method_pointer_d5a941e9a51051dc8fbe335591b73ab8, "");
    class_7d10a38ead5950acb903ebd8bb882a64.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentSizedExtVectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentSizedExtVectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}