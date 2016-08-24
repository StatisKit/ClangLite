#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_343731ee4eba5641ba0d7ad711f1744f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_6cfdbb19292a5317b5afa8cf78d3cb05)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_09c6c4442c51543dbe9c30e465871f14)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_499fdc475ebd5beaa4dda0443b55fd9a)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_31e3c30f851a5fb5ba8dc84c0ec8d5ca)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_facf3e336daf580c9e17cb8cbcc2713b)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_09b949a117635a30b0342cf97d91e42f)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_6cfdbb19292a5317b5afa8cf78d3cb05, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_09c6c4442c51543dbe9c30e465871f14, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_499fdc475ebd5beaa4dda0443b55fd9a, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_31e3c30f851a5fb5ba8dc84c0ec8d5ca, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_facf3e336daf580c9e17cb8cbcc2713b, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_09b949a117635a30b0342cf97d91e42f, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}