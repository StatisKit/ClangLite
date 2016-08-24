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
    bool  (*method_pointer_9d03bd4453ad5c1ea4984e10c4e624df)(class ::clang::Type  const *) = ::clang::ComplexType::classof;
    class ::clang::QualType  (::clang::ComplexType::*method_pointer_e41059487f565c949c97c9cbd365f742)() const = &::clang::ComplexType::desugar;
    class ::clang::QualType  (::clang::ComplexType::*method_pointer_73f3b966be9258fd9c4818afa95f41b2)() const = &::clang::ComplexType::getElementType;
    bool  (::clang::ComplexType::*method_pointer_6a28395186845bc28f7c51bf7bc3c44c)() const = &::clang::ComplexType::isSugared;
    boost::python::class_< class ::clang::ComplexType, autowig::HeldType< class ::clang::ComplexType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1ab4808ba4c9580baf99795b73ebb3b3("ComplexType", "", boost::python::no_init);
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("classof", method_pointer_9d03bd4453ad5c1ea4984e10c4e624df, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("desugar", method_pointer_e41059487f565c949c97c9cbd365f742, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("get_element_type", method_pointer_73f3b966be9258fd9c4818afa95f41b2, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("is_sugared", method_pointer_6a28395186845bc28f7c51bf7bc3c44c, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ComplexType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ComplexType >, autowig::HeldType< class ::clang::Type > >();
    }

}