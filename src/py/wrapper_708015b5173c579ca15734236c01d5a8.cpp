#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_708015b5173c579ca15734236c01d5a8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_3923fa7f13835c24838716ec26322e04)(class ::clang::Type  const *) = ::clang::UnresolvedUsingType::classof;
    class ::clang::UnresolvedUsingTypenameDecl  * (::clang::UnresolvedUsingType::*method_pointer_e3a7e9261aef5118bafdd3da85265eba)() const = &::clang::UnresolvedUsingType::getDecl;
    bool  (::clang::UnresolvedUsingType::*method_pointer_fc7e21714bae5771bd81c85d737e9950)() const = &::clang::UnresolvedUsingType::isSugared;
    boost::python::class_< class ::clang::UnresolvedUsingType, autowig::HeldType< class ::clang::UnresolvedUsingType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_708015b5173c579ca15734236c01d5a8("UnresolvedUsingType", "", boost::python::no_init);
    class_708015b5173c579ca15734236c01d5a8.def("classof", method_pointer_3923fa7f13835c24838716ec26322e04, "");
    class_708015b5173c579ca15734236c01d5a8.def("get_decl", method_pointer_e3a7e9261aef5118bafdd3da85265eba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_708015b5173c579ca15734236c01d5a8.def("is_sugared", method_pointer_fc7e21714bae5771bd81c85d737e9950, "");
    class_708015b5173c579ca15734236c01d5a8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnresolvedUsingType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnresolvedUsingType >, autowig::HeldType< class ::clang::Type > >();
    }

}