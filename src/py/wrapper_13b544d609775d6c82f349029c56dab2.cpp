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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_1859752287ec54b8910c0d90ae6c5abb)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_a2eb44fb537657ee88e454408d1aa341)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_6f1c1c1dfcc85c99a7f415feff0ed318)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_a7e11e2077ac5d34acea75636102eb96)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_5a97031530ad5e508a681652634d7589)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_a95d4295f14a57dbae38069847db36ef)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_7790a72b44be5d9fa755f28f85b53b09)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_92f7f7087cde52de99b15964a5df5c3d)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_2f81cf894afd5320a97e05776a72b817)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_e52cd6ccff17571ebfc639cc3f3c9323)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_51404a271920558c9128a162f4679639)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_1859752287ec54b8910c0d90ae6c5abb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_a2eb44fb537657ee88e454408d1aa341, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_6f1c1c1dfcc85c99a7f415feff0ed318, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_a7e11e2077ac5d34acea75636102eb96, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_5a97031530ad5e508a681652634d7589, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_a95d4295f14a57dbae38069847db36ef, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_7790a72b44be5d9fa755f28f85b53b09, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_92f7f7087cde52de99b15964a5df5c3d, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_2f81cf894afd5320a97e05776a72b817, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_e52cd6ccff17571ebfc639cc3f3c9323, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_51404a271920558c9128a162f4679639, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}