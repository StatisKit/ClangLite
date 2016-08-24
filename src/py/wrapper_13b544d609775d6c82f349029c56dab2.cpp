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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_fe16098921dc530680c9e363cab6a062)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_0ccf5aba3daf5b2ab62df3190b99dda4)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_48991f3809d05c16982ca23f90d6ee3e)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_746e17e0c88158a6a44002ecfc7c3b9a)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_82d1030986fd5123b516cf7dc3349961)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_5c5eb3fb3c5c58e286b703eeea5239a4)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_39b0023f9aff5e72a7ba94a4a253e2c4)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_36db486aac135b9381ce86bf3cf6a863)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_aef25918f95150cdafe143315f262fc6)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_4795852ad16b5c2b950dce3871c8f14a)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_eba32a9500305237a4284f5b76fd16ef)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_fe16098921dc530680c9e363cab6a062, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_0ccf5aba3daf5b2ab62df3190b99dda4, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_48991f3809d05c16982ca23f90d6ee3e, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_746e17e0c88158a6a44002ecfc7c3b9a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_82d1030986fd5123b516cf7dc3349961, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_5c5eb3fb3c5c58e286b703eeea5239a4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_39b0023f9aff5e72a7ba94a4a253e2c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_36db486aac135b9381ce86bf3cf6a863, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_aef25918f95150cdafe143315f262fc6, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_4795852ad16b5c2b950dce3871c8f14a, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_eba32a9500305237a4284f5b76fd16ef, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}