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
    bool  (*method_pointer_77a3ad25f4df58c0b2e77bc29e083d32)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    bool  (::clang::AutoType::*method_pointer_4ba69b60ff2f508e909d8f4375f65fb3)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_ad5785700d26526f99d89f313c74f1a9)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_76cd867b93ea52ecb98e36f6bf10357c)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_77a3ad25f4df58c0b2e77bc29e083d32, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_4ba69b60ff2f508e909d8f4375f65fb3, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_ad5785700d26526f99d89f313c74f1a9, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_76cd867b93ea52ecb98e36f6bf10357c, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}