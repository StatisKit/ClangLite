#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_c36c84c61d245be2a9de47ae3c87a824()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_1e68838a223b55378170d26f385649af)(class ::clang::Type  const *) = ::clang::PointerType::classof;
    bool  (::clang::PointerType::*method_pointer_52fce6af3e3a5a55959c79f86525a43d)() const = &::clang::PointerType::isSugared;
    boost::python::class_< class ::clang::PointerType, autowig::HeldType< class ::clang::PointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_c36c84c61d245be2a9de47ae3c87a824("PointerType", "", boost::python::no_init);
    class_c36c84c61d245be2a9de47ae3c87a824.def("classof", method_pointer_1e68838a223b55378170d26f385649af, "");
    class_c36c84c61d245be2a9de47ae3c87a824.def("is_sugared", method_pointer_52fce6af3e3a5a55959c79f86525a43d, "");
    class_c36c84c61d245be2a9de47ae3c87a824.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::PointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::PointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}