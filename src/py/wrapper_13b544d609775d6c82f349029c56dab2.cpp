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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_538ea36988a05251b7f46161183a5cb7)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_6f37f316dc95591ab6cb38272613f49e)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_d77366dfc5d75cc997f8720dba28e3af)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_fc138190be575a5db98d92139108341c)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_aeee2e7c34d559a09ee8ab21c8f33da7)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_152b6cf081c85e26a62852992e39f9e6)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_6110b143ef415f71af6e3e9fa566a625)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_9e1d6f43b6a75b24bda46cc124cc1f15)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_bc20248a94b7510085768e8ccd990c17)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_619220e61ded5662b98b79d89f2811f6)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_78bd6ac1b6f258b8a4560e80291c59b5)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_538ea36988a05251b7f46161183a5cb7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_6f37f316dc95591ab6cb38272613f49e, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_d77366dfc5d75cc997f8720dba28e3af, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_fc138190be575a5db98d92139108341c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_aeee2e7c34d559a09ee8ab21c8f33da7, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_152b6cf081c85e26a62852992e39f9e6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_6110b143ef415f71af6e3e9fa566a625, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_9e1d6f43b6a75b24bda46cc124cc1f15, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_bc20248a94b7510085768e8ccd990c17, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_619220e61ded5662b98b79d89f2811f6, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_78bd6ac1b6f258b8a4560e80291c59b5, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}