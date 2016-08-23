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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_cd66f30d9c705936a40f5e9930ca476c)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_5ed0fe036b7e5113a7e9ef8025d53cd2)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_bafe88e944075c2d9b4c1421c5a7d327)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_c1a07e16ec145e17accb117570ee1d9a)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_ddce8911d95a5a13970f824664c0c55e)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_235791eaa0d556d785b70c077587a8c6)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_6289f1aa2c9058bea550829a6e48b17a)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_b222b0eeb4285ff790e35e203618b78b)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_777f712da42f5c129c7d1a505d69fb4c)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_77bdcbd3b73559ebb0e8e698c6b2da1a)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_e902c53c3e50553d8409c604d7b0d123)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_cd66f30d9c705936a40f5e9930ca476c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_5ed0fe036b7e5113a7e9ef8025d53cd2, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_bafe88e944075c2d9b4c1421c5a7d327, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_c1a07e16ec145e17accb117570ee1d9a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_ddce8911d95a5a13970f824664c0c55e, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_235791eaa0d556d785b70c077587a8c6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_6289f1aa2c9058bea550829a6e48b17a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_b222b0eeb4285ff790e35e203618b78b, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_777f712da42f5c129c7d1a505d69fb4c, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_77bdcbd3b73559ebb0e8e698c6b2da1a, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_e902c53c3e50553d8409c604d7b0d123, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}