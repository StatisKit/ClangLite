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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_f6b6777877a45275ae1b8c8f7ad46fc9)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_beebc665fed8595b82faff6b1f219ebc)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_be0daecd6f6856569ba8d0334e0ae39c)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_1e3f08ea58a35bd49e784b4d7689b76d)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_2cdc5e8425ac5aa399d5cc1f0fa4d1c4)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_a9a659d893835acca10e1a98dde01e70)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_68175b02b412529e9bb144aaa7a0c828)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_ee39a3a7f8d05c2abbb2ad89829db0f4)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_9560d66666f65bedb770b8b6e53e2247)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_fb043cbd22c85966bb7ebaba9d4fb7ca)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_67c746eb8bec54b0856a400f76605e4e)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_f6b6777877a45275ae1b8c8f7ad46fc9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_beebc665fed8595b82faff6b1f219ebc, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_be0daecd6f6856569ba8d0334e0ae39c, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_1e3f08ea58a35bd49e784b4d7689b76d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_2cdc5e8425ac5aa399d5cc1f0fa4d1c4, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_a9a659d893835acca10e1a98dde01e70, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_68175b02b412529e9bb144aaa7a0c828, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_ee39a3a7f8d05c2abbb2ad89829db0f4, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_9560d66666f65bedb770b8b6e53e2247, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_fb043cbd22c85966bb7ebaba9d4fb7ca, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_67c746eb8bec54b0856a400f76605e4e, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}