#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_a17549d1336953b08ed02070ee0558cb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_e20c77fd7cc05521b74cf1850fcab0b0)(class ::clang::Type  const *) = ::clang::RValueReferenceType::classof;
    bool  (::clang::RValueReferenceType::*method_pointer_db7a79b0e01256acbe5fae54fbb06a11)() const = &::clang::RValueReferenceType::isSugared;
    boost::python::class_< class ::clang::RValueReferenceType, autowig::HeldType< class ::clang::RValueReferenceType >, boost::python::bases< class ::clang::ReferenceType >, boost::noncopyable > class_a17549d1336953b08ed02070ee0558cb("RValueReferenceType", "", boost::python::no_init);
    class_a17549d1336953b08ed02070ee0558cb.def("classof", method_pointer_e20c77fd7cc05521b74cf1850fcab0b0, "");
    class_a17549d1336953b08ed02070ee0558cb.def("is_sugared", method_pointer_db7a79b0e01256acbe5fae54fbb06a11, "");
    class_a17549d1336953b08ed02070ee0558cb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RValueReferenceType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RValueReferenceType >, autowig::HeldType< class ::clang::ReferenceType > >();
    }

}