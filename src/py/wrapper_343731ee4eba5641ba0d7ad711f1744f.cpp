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
    bool  (*method_pointer_ef53e811294b5036b05708d4a4f770dd)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    bool  (::clang::AutoType::*method_pointer_22035c944d0c562db811d707df55d025)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_034e903972bc5856b97e9ad581c778ff)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_eb99351e08a85b2ebbb7c0717728258d)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_ef53e811294b5036b05708d4a4f770dd, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_22035c944d0c562db811d707df55d025, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_034e903972bc5856b97e9ad581c778ff, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_eb99351e08a85b2ebbb7c0717728258d, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}