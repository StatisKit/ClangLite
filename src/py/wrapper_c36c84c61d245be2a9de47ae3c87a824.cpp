#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_c36c84c61d245be2a9de47ae3c87a824()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_30850e75a0185d6a9a37814f8bfc5b26)(class ::clang::Type  const *) = ::clang::PointerType::classof;
    class ::clang::QualType  (::clang::PointerType::*method_pointer_ec696aa44432556f9e413377d075221a)() const = &::clang::PointerType::desugar;
    class ::clang::QualType  (::clang::PointerType::*method_pointer_a2538983aa0d5331b6a2587e5d79ca04)() const = &::clang::PointerType::getPointeeType;
    bool  (::clang::PointerType::*method_pointer_6acc7a900d1f5b7cafedb72caa5f8f48)() const = &::clang::PointerType::isSugared;
    boost::python::class_< class ::clang::PointerType, autowig::HeldType< class ::clang::PointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_c36c84c61d245be2a9de47ae3c87a824("PointerType", "", boost::python::no_init);
    class_c36c84c61d245be2a9de47ae3c87a824.def("classof", method_pointer_30850e75a0185d6a9a37814f8bfc5b26, "");
    class_c36c84c61d245be2a9de47ae3c87a824.def("desugar", method_pointer_ec696aa44432556f9e413377d075221a, "");
    class_c36c84c61d245be2a9de47ae3c87a824.def("get_pointee_type", method_pointer_a2538983aa0d5331b6a2587e5d79ca04, "");
    class_c36c84c61d245be2a9de47ae3c87a824.def("is_sugared", method_pointer_6acc7a900d1f5b7cafedb72caa5f8f48, "");
    class_c36c84c61d245be2a9de47ae3c87a824.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::PointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::PointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}