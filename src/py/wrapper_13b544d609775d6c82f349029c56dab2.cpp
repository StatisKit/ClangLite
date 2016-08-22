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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_6389f16aaa0e5d8b97b6ce38846c5948)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_0456d320f6ad59fe96da98352fd1e8b5)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_5e1edd2edc1b50e5ac6d1c041f0cc34c)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_413503c494165d5ca9e06b395c45c4bb)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_ec5550a9de2e5e118486468ce718863a)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_ffb96d10078b523f9692ccf2e5489b8f)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_b3b850d095d75ec99b4313912abda029)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_faa3b4c8981255468fb0d4f0cf2a6d8a)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_6389f16aaa0e5d8b97b6ce38846c5948, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_0456d320f6ad59fe96da98352fd1e8b5, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_5e1edd2edc1b50e5ac6d1c041f0cc34c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_413503c494165d5ca9e06b395c45c4bb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_ec5550a9de2e5e118486468ce718863a, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_ffb96d10078b523f9692ccf2e5489b8f, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_b3b850d095d75ec99b4313912abda029, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_faa3b4c8981255468fb0d4f0cf2a6d8a, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}