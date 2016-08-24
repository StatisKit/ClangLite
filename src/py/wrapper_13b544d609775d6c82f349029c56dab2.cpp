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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_09b059cebc565532850b990c05c2d709)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_aff2cc5a6eb353cdb29043c22a3300dd)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_4187d5c29a61566089e42e6b41faa51b)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_29d626bf708455849b24724630400645)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_a4c2fe093948520da4da39987beebc4c)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_1f30e87f9a765c8580e398c36098d69c)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_d70ebe3eb02e5062ac378f4c699f60f9)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_bf8272ae240659249ffee2237b884267)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_a49e86e3fd1e5ed39d33b0e6229ecacf)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_a5552ecaf68e57c793ce0d5eb7975e8f)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_32bf1db2298e54e790ab3ea3b137e35b)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_09b059cebc565532850b990c05c2d709, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_aff2cc5a6eb353cdb29043c22a3300dd, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_4187d5c29a61566089e42e6b41faa51b, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_29d626bf708455849b24724630400645, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_a4c2fe093948520da4da39987beebc4c, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_1f30e87f9a765c8580e398c36098d69c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_d70ebe3eb02e5062ac378f4c699f60f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_bf8272ae240659249ffee2237b884267, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_a49e86e3fd1e5ed39d33b0e6229ecacf, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_a5552ecaf68e57c793ce0d5eb7975e8f, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_32bf1db2298e54e790ab3ea3b137e35b, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}