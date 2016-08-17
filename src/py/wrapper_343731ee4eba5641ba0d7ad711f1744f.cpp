#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_343731ee4eba5641ba0d7ad711f1744f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::AutoType::*method_pointer_ca960ad02e3351a49c0cd385b22691ff)() const = &::clang::AutoType::isSugared;
    bool  (::clang::AutoType::*method_pointer_4ae0f925a7335ea29383e5133af77a92)() const = &::clang::AutoType::isDeduced;
    bool  (*method_pointer_44afe9c4b7d45192962ac8cb41ba1fed)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    bool  (::clang::AutoType::*method_pointer_f3ed4b98f6af50bcb21cc97bba46cbb5)() const = &::clang::AutoType::isDecltypeAuto;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_ca960ad02e3351a49c0cd385b22691ff, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_4ae0f925a7335ea29383e5133af77a92, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_44afe9c4b7d45192962ac8cb41ba1fed, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_f3ed4b98f6af50bcb21cc97bba46cbb5, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}