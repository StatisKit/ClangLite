#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_69d409490fc05f00af970e471a94279a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_c7f96fa4d052564d92729ef29df5e657)(class ::clang::Type  const *) = ::clang::TypeOfType::classof;
    class ::clang::QualType  (::clang::TypeOfType::*method_pointer_b397525c1b7f53f889a12eec1cc949af)() const = &::clang::TypeOfType::desugar;
    class ::clang::QualType  (::clang::TypeOfType::*method_pointer_b7e1a1634cce541eb0351ef37a28a577)() const = &::clang::TypeOfType::getUnderlyingType;
    bool  (::clang::TypeOfType::*method_pointer_4bbd10296d8b55a2a9249288e82716d7)() const = &::clang::TypeOfType::isSugared;
    boost::python::class_< class ::clang::TypeOfType, autowig::HeldType< class ::clang::TypeOfType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_69d409490fc05f00af970e471a94279a("TypeOfType", "", boost::python::no_init);
    class_69d409490fc05f00af970e471a94279a.def("classof", method_pointer_c7f96fa4d052564d92729ef29df5e657, "");
    class_69d409490fc05f00af970e471a94279a.def("desugar", method_pointer_b397525c1b7f53f889a12eec1cc949af, "");
    class_69d409490fc05f00af970e471a94279a.def("get_underlying_type", method_pointer_b7e1a1634cce541eb0351ef37a28a577, "");
    class_69d409490fc05f00af970e471a94279a.def("is_sugared", method_pointer_4bbd10296d8b55a2a9249288e82716d7, "");
    class_69d409490fc05f00af970e471a94279a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeOfType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeOfType >, autowig::HeldType< class ::clang::Type > >();
    }

}