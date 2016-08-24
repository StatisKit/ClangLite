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
    bool  (*method_pointer_f3f2b08ab1ff53d292b318580a3b1948)(class ::clang::Type  const *) = ::clang::TypeOfType::classof;
    class ::clang::QualType  (::clang::TypeOfType::*method_pointer_64a7ad5b35635d9face07483528a45f9)() const = &::clang::TypeOfType::desugar;
    class ::clang::QualType  (::clang::TypeOfType::*method_pointer_c7f3cd828180545294c9d5b42209a78e)() const = &::clang::TypeOfType::getUnderlyingType;
    bool  (::clang::TypeOfType::*method_pointer_c72eff1b34635e85b601d0219a472258)() const = &::clang::TypeOfType::isSugared;
    boost::python::class_< class ::clang::TypeOfType, autowig::HeldType< class ::clang::TypeOfType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_69d409490fc05f00af970e471a94279a("TypeOfType", "", boost::python::no_init);
    class_69d409490fc05f00af970e471a94279a.def("classof", method_pointer_f3f2b08ab1ff53d292b318580a3b1948, "");
    class_69d409490fc05f00af970e471a94279a.def("desugar", method_pointer_64a7ad5b35635d9face07483528a45f9, "");
    class_69d409490fc05f00af970e471a94279a.def("get_underlying_type", method_pointer_c7f3cd828180545294c9d5b42209a78e, "");
    class_69d409490fc05f00af970e471a94279a.def("is_sugared", method_pointer_c72eff1b34635e85b601d0219a472258, "");
    class_69d409490fc05f00af970e471a94279a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeOfType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeOfType >, autowig::HeldType< class ::clang::Type > >();
    }

}