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
    bool  (*method_pointer_917283575ef558e9bd50dd609b1ae997)(class ::clang::Type  const *) = ::clang::DependentSizedExtVectorType::classof;
    class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_8877345cbdb752efad3a800588b8d8d9)() const = &::clang::DependentSizedExtVectorType::desugar;
    class ::clang::SourceLocation  (::clang::DependentSizedExtVectorType::*method_pointer_7b6bd09cbc7958068e69429a974ecd81)() const = &::clang::DependentSizedExtVectorType::getAttributeLoc;
    class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_54aea9d7a6ab509b9cbd308635ee1fd2)() const = &::clang::DependentSizedExtVectorType::getElementType;
    bool  (::clang::DependentSizedExtVectorType::*method_pointer_116a4ff6d2665e8da17b7221471d20fd)() const = &::clang::DependentSizedExtVectorType::isSugared;
    boost::python::class_< class ::clang::DependentSizedExtVectorType, autowig::HeldType< class ::clang::DependentSizedExtVectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_7d10a38ead5950acb903ebd8bb882a64("DependentSizedExtVectorType", "", boost::python::no_init);
    class_7d10a38ead5950acb903ebd8bb882a64.def("classof", method_pointer_917283575ef558e9bd50dd609b1ae997, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("desugar", method_pointer_8877345cbdb752efad3a800588b8d8d9, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("get_attribute_loc", method_pointer_7b6bd09cbc7958068e69429a974ecd81, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("get_element_type", method_pointer_54aea9d7a6ab509b9cbd308635ee1fd2, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("is_sugared", method_pointer_116a4ff6d2665e8da17b7221471d20fd, "");
    class_7d10a38ead5950acb903ebd8bb882a64.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentSizedExtVectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentSizedExtVectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}