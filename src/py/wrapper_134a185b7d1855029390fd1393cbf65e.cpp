#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_134a185b7d1855029390fd1393cbf65e()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_385ad717598a5664ac31ac9a3fbfca12)(class ::clang::Type  const *) = ::clang::PackExpansionType::classof;
    class ::clang::QualType  (::clang::PackExpansionType::*method_pointer_18675bdf922a52a7877ebaadd54ad93d)() const = &::clang::PackExpansionType::desugar;
    class ::clang::QualType  (::clang::PackExpansionType::*method_pointer_d4908d763c68528c876f0892b6cd88c8)() const = &::clang::PackExpansionType::getPattern;
    bool  (::clang::PackExpansionType::*method_pointer_3c376edf01b058b9ac835c09563a1ce3)() const = &::clang::PackExpansionType::isSugared;
    boost::python::class_< class ::clang::PackExpansionType, autowig::HeldType< class ::clang::PackExpansionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_134a185b7d1855029390fd1393cbf65e("PackExpansionType", "", boost::python::no_init);
    class_134a185b7d1855029390fd1393cbf65e.def("classof", method_pointer_385ad717598a5664ac31ac9a3fbfca12, "");
    class_134a185b7d1855029390fd1393cbf65e.def("desugar", method_pointer_18675bdf922a52a7877ebaadd54ad93d, "");
    class_134a185b7d1855029390fd1393cbf65e.def("get_pattern", method_pointer_d4908d763c68528c876f0892b6cd88c8, "");
    class_134a185b7d1855029390fd1393cbf65e.def("is_sugared", method_pointer_3c376edf01b058b9ac835c09563a1ce3, "");
    class_134a185b7d1855029390fd1393cbf65e.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::PackExpansionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::PackExpansionType >, autowig::HeldType< class ::clang::Type > >();
    }

}