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
    bool  (*method_pointer_948aee799fca58ada8c5ab4b87b75698)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    bool  (::clang::AutoType::*method_pointer_0759f62a819d558aad3978f79e4de4c5)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_795f34fc52d45504932b7538dd58c621)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_a0a8864da2cd51b58c7f4cb36f0ae4ff)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_948aee799fca58ada8c5ab4b87b75698, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_0759f62a819d558aad3978f79e4de4c5, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_795f34fc52d45504932b7538dd58c621, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_a0a8864da2cd51b58c7f4cb36f0ae4ff, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}