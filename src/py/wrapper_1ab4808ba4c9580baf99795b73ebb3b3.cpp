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
    bool  (*method_pointer_b6fdf877032b51fd81285ce5edf232d2)(class ::clang::Type  const *) = ::clang::ComplexType::classof;
    class ::clang::QualType  (::clang::ComplexType::*method_pointer_8429b1d0509b5e0a91fe32a6f135fff9)() const = &::clang::ComplexType::desugar;
    class ::clang::QualType  (::clang::ComplexType::*method_pointer_7e903a3dd90b5635b46e1dda4652ab0d)() const = &::clang::ComplexType::getElementType;
    bool  (::clang::ComplexType::*method_pointer_7852a78d0071506cb364c4fe85979821)() const = &::clang::ComplexType::isSugared;
    boost::python::class_< class ::clang::ComplexType, autowig::HeldType< class ::clang::ComplexType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1ab4808ba4c9580baf99795b73ebb3b3("ComplexType", "", boost::python::no_init);
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("classof", method_pointer_b6fdf877032b51fd81285ce5edf232d2, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("desugar", method_pointer_8429b1d0509b5e0a91fe32a6f135fff9, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("get_element_type", method_pointer_7e903a3dd90b5635b46e1dda4652ab0d, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("is_sugared", method_pointer_7852a78d0071506cb364c4fe85979821, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ComplexType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ComplexType >, autowig::HeldType< class ::clang::Type > >();
    }

}