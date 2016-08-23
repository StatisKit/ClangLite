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
    bool  (*method_pointer_5455ebcf1bfb52639d6f1e3b03a71ff3)(class ::clang::Type  const *) = ::clang::DependentSizedExtVectorType::classof;
    class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_de49964219f454349e22b41985863efe)() const = &::clang::DependentSizedExtVectorType::desugar;
    class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_8541800445df500fa5bebfef7fa4b721)() const = &::clang::DependentSizedExtVectorType::getElementType;
    bool  (::clang::DependentSizedExtVectorType::*method_pointer_e6da16e2404558a98df02f7d000a0997)() const = &::clang::DependentSizedExtVectorType::isSugared;
    boost::python::class_< class ::clang::DependentSizedExtVectorType, autowig::HeldType< class ::clang::DependentSizedExtVectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_7d10a38ead5950acb903ebd8bb882a64("DependentSizedExtVectorType", "", boost::python::no_init);
    class_7d10a38ead5950acb903ebd8bb882a64.def("classof", method_pointer_5455ebcf1bfb52639d6f1e3b03a71ff3, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("desugar", method_pointer_de49964219f454349e22b41985863efe, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("get_element_type", method_pointer_8541800445df500fa5bebfef7fa4b721, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("is_sugared", method_pointer_e6da16e2404558a98df02f7d000a0997, "");
    class_7d10a38ead5950acb903ebd8bb882a64.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentSizedExtVectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentSizedExtVectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}