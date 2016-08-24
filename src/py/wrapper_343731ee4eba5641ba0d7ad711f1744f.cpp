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
    bool  (*method_pointer_2ba33b2db4395d38832b50446977c108)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_ed6bca7b556c52e4b0d096f13404adf7)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_85a48e5edbc55f7b8d1db72f999cb558)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_f742406a8e2d5a2497f73c9abc47049a)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_d2f0b554cb1651fbaee550c3643d4ffe)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_6859ce630fa15410801a917f9875c632)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_2ba33b2db4395d38832b50446977c108, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_ed6bca7b556c52e4b0d096f13404adf7, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_85a48e5edbc55f7b8d1db72f999cb558, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_f742406a8e2d5a2497f73c9abc47049a, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_d2f0b554cb1651fbaee550c3643d4ffe, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_6859ce630fa15410801a917f9875c632, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}