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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_a7817d1cf28f5ebfab4a7ba89c141674)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_5c17d3a1b1cb5b139ae5bed83e525634)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_f8ad8861d4c95878a16d5a2187a630a8)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_2bc369d8b90f5918a786fea84b2b116f)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_8829e84e3ccf5d3ab031ec6d53f7c167)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_0f9bd5ad76225466bb7479591b93ea09)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_d9a03eeb3f965787931f73fc12a168c7)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_940e7c1721c352368a910abd02ea5af4)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_a0913246a0de59808c4fca97d84ed753)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_01040c9b4f6d5973931bdad7e1f90f25)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_f808a3320a5f5232aba45380923c1d01)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_a7817d1cf28f5ebfab4a7ba89c141674, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_5c17d3a1b1cb5b139ae5bed83e525634, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_f8ad8861d4c95878a16d5a2187a630a8, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_2bc369d8b90f5918a786fea84b2b116f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_8829e84e3ccf5d3ab031ec6d53f7c167, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_0f9bd5ad76225466bb7479591b93ea09, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_d9a03eeb3f965787931f73fc12a168c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_940e7c1721c352368a910abd02ea5af4, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_a0913246a0de59808c4fca97d84ed753, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_01040c9b4f6d5973931bdad7e1f90f25, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_f808a3320a5f5232aba45380923c1d01, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}