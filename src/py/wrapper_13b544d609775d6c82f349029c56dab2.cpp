#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_13b544d609775d6c82f349029c56dab2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_228293cb469b5718817135b89c770850)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_d2f1b57395875ad3b3a3d4cb23329c96)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_20d6e4c2a7d2597ab91f9156773593f9)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_28bdd201ef1c579ca0064acfe1576237)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_fec2279192ac5b889f8e29e36dd5d351)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_228293cb469b5718817135b89c770850, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_d2f1b57395875ad3b3a3d4cb23329c96, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_20d6e4c2a7d2597ab91f9156773593f9, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_28bdd201ef1c579ca0064acfe1576237, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_fec2279192ac5b889f8e29e36dd5d351, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}