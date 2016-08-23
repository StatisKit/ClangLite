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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_292964fe0e6a58d49e989c44bd0af49f)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_c2f9864977b250fda0528e3e8b05cb1e)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_659c647879e458419245a7831e3eda04)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_bee1be8cbfb55140acdba7ad04b59823)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_1c5d70d17f8c5ceeabeffa2087434781)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_470dcd69908b51e183c84c12afccf7dd)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_23f832b94dae54108350efd7308a320e)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_7bfd17d508e952a0b1cd10b12f77635f)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_dee142e93e3a53ec94dfc75ec8df59e7)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_701b41ff9333538180bb0cc5491e4900)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_110e14f203e65c66b6deb7b49c7d1b1b)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_292964fe0e6a58d49e989c44bd0af49f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_c2f9864977b250fda0528e3e8b05cb1e, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_659c647879e458419245a7831e3eda04, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_bee1be8cbfb55140acdba7ad04b59823, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_1c5d70d17f8c5ceeabeffa2087434781, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_470dcd69908b51e183c84c12afccf7dd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_23f832b94dae54108350efd7308a320e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_7bfd17d508e952a0b1cd10b12f77635f, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_dee142e93e3a53ec94dfc75ec8df59e7, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_701b41ff9333538180bb0cc5491e4900, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_110e14f203e65c66b6deb7b49c7d1b1b, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}