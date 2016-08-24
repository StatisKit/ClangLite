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
    bool  (*method_pointer_d3ed2ae2b4f55c428cdb7dbbfb21eb7d)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_4dda386541b25ce5b5893f65d199c03f)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_cfbefdd3204258f09821492e67455351)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_b2b39b035f515fe08f4726ad8a8224f9)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_fc8e982fc3485ed0b1011f955eecb5a3)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_29a27ea086285e0aa385c8305ca4a383)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_d3ed2ae2b4f55c428cdb7dbbfb21eb7d, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_4dda386541b25ce5b5893f65d199c03f, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_cfbefdd3204258f09821492e67455351, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_b2b39b035f515fe08f4726ad8a8224f9, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_fc8e982fc3485ed0b1011f955eecb5a3, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_29a27ea086285e0aa385c8305ca4a383, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}