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
    bool  (*method_pointer_7827a8a8918c55859fb7c9335cdfc8b9)(class ::clang::Type  const *) = ::clang::DependentSizedExtVectorType::classof;
    class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_ef596542e1155cfcaf49020d49f8ef07)() const = &::clang::DependentSizedExtVectorType::desugar;
    class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_47ee02ffbf18551987523bcc580b18d4)() const = &::clang::DependentSizedExtVectorType::getElementType;
    bool  (::clang::DependentSizedExtVectorType::*method_pointer_f77b02d6a4545dd5b3a8c8311ac22a23)() const = &::clang::DependentSizedExtVectorType::isSugared;
    boost::python::class_< class ::clang::DependentSizedExtVectorType, autowig::HeldType< class ::clang::DependentSizedExtVectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_7d10a38ead5950acb903ebd8bb882a64("DependentSizedExtVectorType", "", boost::python::no_init);
    class_7d10a38ead5950acb903ebd8bb882a64.def("classof", method_pointer_7827a8a8918c55859fb7c9335cdfc8b9, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("desugar", method_pointer_ef596542e1155cfcaf49020d49f8ef07, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("get_element_type", method_pointer_47ee02ffbf18551987523bcc580b18d4, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("is_sugared", method_pointer_f77b02d6a4545dd5b3a8c8311ac22a23, "");
    class_7d10a38ead5950acb903ebd8bb882a64.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentSizedExtVectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentSizedExtVectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}