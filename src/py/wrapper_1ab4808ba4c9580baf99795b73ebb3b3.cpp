#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_1ab4808ba4c9580baf99795b73ebb3b3()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_1d7a1650de2c51548246d1efacacb31c)(class ::clang::Type  const *) = ::clang::ComplexType::classof;
    class ::clang::QualType  (::clang::ComplexType::*method_pointer_9c9d2150073a5cbe9367408ea23a30cc)() const = &::clang::ComplexType::desugar;
    class ::clang::QualType  (::clang::ComplexType::*method_pointer_417c281e75e75b09ba9d2ee08a483da8)() const = &::clang::ComplexType::getElementType;
    bool  (::clang::ComplexType::*method_pointer_f1eb36f1a7655949a06b8fbc38941e4a)() const = &::clang::ComplexType::isSugared;
    boost::python::class_< class ::clang::ComplexType, autowig::HeldType< class ::clang::ComplexType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1ab4808ba4c9580baf99795b73ebb3b3("ComplexType", "", boost::python::no_init);
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("classof", method_pointer_1d7a1650de2c51548246d1efacacb31c, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("desugar", method_pointer_9c9d2150073a5cbe9367408ea23a30cc, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("get_element_type", method_pointer_417c281e75e75b09ba9d2ee08a483da8, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("is_sugared", method_pointer_f1eb36f1a7655949a06b8fbc38941e4a, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ComplexType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ComplexType >, autowig::HeldType< class ::clang::Type > >();
    }

}