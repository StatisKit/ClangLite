#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_566b7f2eb62955db8f0e90ccbfe7d271()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_50e7d130f1295596982d7498c2295473)(class ::clang::Type  const *) = ::clang::LocInfoType::classof;
    boost::python::class_< class ::clang::LocInfoType, autowig::HeldType< class ::clang::LocInfoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_566b7f2eb62955db8f0e90ccbfe7d271("LocInfoType", "", boost::python::no_init);
    class_566b7f2eb62955db8f0e90ccbfe7d271.def("classof", method_pointer_50e7d130f1295596982d7498c2295473, "");
    class_566b7f2eb62955db8f0e90ccbfe7d271.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::LocInfoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LocInfoType >, autowig::HeldType< class ::clang::Type > >();
    }

}