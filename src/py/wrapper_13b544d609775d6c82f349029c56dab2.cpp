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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_9b091267e8965f5d83ccfa6870553793)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_126619c0404157fbac5265f31d0ba2b1)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_a7eb138c36b75c6cbe10da690d420591)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_ee336b9e8b035aad8b72a89a69f0b968)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_99a07c7caa025b77923612309ff245fc)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_a2ce23cd09235798a7af9ecf1e7b7001)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_7c4d8fdef7d95d9da5a5d89374210865)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_90e1a8d53ca55079975ee6ddce7e33dc)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_8a30b3a3d7a856938c9ad2beb881425c)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_695b339de13a50d08600767c91e9fc3d)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_7312d48ce07e574e931bca95b3eb1e2c)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_9b091267e8965f5d83ccfa6870553793, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_126619c0404157fbac5265f31d0ba2b1, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_a7eb138c36b75c6cbe10da690d420591, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_ee336b9e8b035aad8b72a89a69f0b968, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_99a07c7caa025b77923612309ff245fc, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_a2ce23cd09235798a7af9ecf1e7b7001, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_7c4d8fdef7d95d9da5a5d89374210865, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_90e1a8d53ca55079975ee6ddce7e33dc, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_8a30b3a3d7a856938c9ad2beb881425c, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_695b339de13a50d08600767c91e9fc3d, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_7312d48ce07e574e931bca95b3eb1e2c, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}