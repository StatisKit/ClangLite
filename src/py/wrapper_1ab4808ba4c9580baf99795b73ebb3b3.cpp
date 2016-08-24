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
    bool  (*method_pointer_be401c1af7785883895a1bdbc4279efb)(class ::clang::Type  const *) = ::clang::ComplexType::classof;
    class ::clang::QualType  (::clang::ComplexType::*method_pointer_98a2b7e22d51566e9ef35ffff04e78e4)() const = &::clang::ComplexType::desugar;
    class ::clang::QualType  (::clang::ComplexType::*method_pointer_f6c0b4edf0ce5207b0aee18f7933df93)() const = &::clang::ComplexType::getElementType;
    bool  (::clang::ComplexType::*method_pointer_fc4fbefeac765e45a1d1d0db03aa8260)() const = &::clang::ComplexType::isSugared;
    boost::python::class_< class ::clang::ComplexType, autowig::HeldType< class ::clang::ComplexType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1ab4808ba4c9580baf99795b73ebb3b3("ComplexType", "", boost::python::no_init);
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("classof", method_pointer_be401c1af7785883895a1bdbc4279efb, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("desugar", method_pointer_98a2b7e22d51566e9ef35ffff04e78e4, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("get_element_type", method_pointer_f6c0b4edf0ce5207b0aee18f7933df93, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("is_sugared", method_pointer_fc4fbefeac765e45a1d1d0db03aa8260, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ComplexType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ComplexType >, autowig::HeldType< class ::clang::Type > >();
    }

}