#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_134a185b7d1855029390fd1393cbf65e()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_4afc4e49c96359fcab6415d7f37e6cdb)(class ::clang::Type  const *) = ::clang::PackExpansionType::classof;
    bool  (::clang::PackExpansionType::*method_pointer_a4de0060ad395ed5aa88cec5fb9ca4ee)() const = &::clang::PackExpansionType::isSugared;
    boost::python::class_< class ::clang::PackExpansionType, autowig::HeldType< class ::clang::PackExpansionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_134a185b7d1855029390fd1393cbf65e("PackExpansionType", "", boost::python::no_init);
    class_134a185b7d1855029390fd1393cbf65e.def("classof", method_pointer_4afc4e49c96359fcab6415d7f37e6cdb, "");
    class_134a185b7d1855029390fd1393cbf65e.def("is_sugared", method_pointer_a4de0060ad395ed5aa88cec5fb9ca4ee, "");
    class_134a185b7d1855029390fd1393cbf65e.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::PackExpansionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::PackExpansionType >, autowig::HeldType< class ::clang::Type > >();
    }

}