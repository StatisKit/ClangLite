#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_289d20f99a245c299406a081a1259a49()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    boost::python::class_< class ::clang::DependentTypeOfExprType, autowig::HeldType< class ::clang::DependentTypeOfExprType >, boost::python::bases< class ::clang::TypeOfExprType >, boost::noncopyable > class_289d20f99a245c299406a081a1259a49("DependentTypeOfExprType", "", boost::python::no_init);

    if(std::is_class< autowig::HeldType< class ::clang::DependentTypeOfExprType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentTypeOfExprType >, autowig::HeldType< class ::clang::TypeOfExprType > >();
    }

}