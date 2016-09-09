/**********************************************************************************/
/*                                                                                */
/* PyClangLite: Python bindings for Clang                                         */
/*                                                                                */
/* Homepage: http://pyclanglite.readthedocs.io/                                   */
/*                                                                                */
/* Copyright (c) 2016 Pierre Fernique                                             */
/*                                                                                */
/* This software is distributed under the CeCILL-C license. You should have       */
/* received a copy of the legalcode along with this work. If not, see             */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/* File authors: Pierre Fernique <pfernique@gmail.com> (35)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_13b544d609775d6c82f349029c56dab2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_ff2b334bb1375d6996eb7b4751658771)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_f0d5312605745718958cdb61148a0f96)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_bb67f19e81275ca2b55b2b54e6704c4a)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_bab6d32cc7ba5fc4be9aa7a15fc9d48a)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_b628f46bfab857828d159bc9f9a5afdf)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_b76aeb7c519f5088b022ebcdce18b354)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_2fea7be0ea765fea891a31cc9498a54e)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_c8f61662edd6504a9ec0ca6771fa8e90)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_0ab0cd45dbd153b08796aa6b2fe03348)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_794f35a649455265b430e5b4df498134)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_7f7f83a8bd8355ffbd6789fef2ac278e)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_ff2b334bb1375d6996eb7b4751658771, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_f0d5312605745718958cdb61148a0f96, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_bb67f19e81275ca2b55b2b54e6704c4a, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_bab6d32cc7ba5fc4be9aa7a15fc9d48a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_b628f46bfab857828d159bc9f9a5afdf, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_b76aeb7c519f5088b022ebcdce18b354, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_2fea7be0ea765fea891a31cc9498a54e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_c8f61662edd6504a9ec0ca6771fa8e90, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_0ab0cd45dbd153b08796aa6b2fe03348, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_794f35a649455265b430e5b4df498134, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_7f7f83a8bd8355ffbd6789fef2ac278e, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}