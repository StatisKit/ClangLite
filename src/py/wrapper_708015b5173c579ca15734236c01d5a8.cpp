#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_708015b5173c579ca15734236c01d5a8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_b0b15b63918957db907cac8bd6dccdbe)(class ::clang::Type  const *) = ::clang::UnresolvedUsingType::classof;
    bool  (::clang::UnresolvedUsingType::*method_pointer_89550a58bbe659ffa42d3ce92013b232)() const = &::clang::UnresolvedUsingType::isSugared;
    boost::python::class_< class ::clang::UnresolvedUsingType, autowig::HeldType< class ::clang::UnresolvedUsingType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_708015b5173c579ca15734236c01d5a8("UnresolvedUsingType", "", boost::python::no_init);
    class_708015b5173c579ca15734236c01d5a8.def("classof", method_pointer_b0b15b63918957db907cac8bd6dccdbe, "");
    class_708015b5173c579ca15734236c01d5a8.def("is_sugared", method_pointer_89550a58bbe659ffa42d3ce92013b232, "");
    class_708015b5173c579ca15734236c01d5a8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnresolvedUsingType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnresolvedUsingType >, autowig::HeldType< class ::clang::Type > >();
    }

}