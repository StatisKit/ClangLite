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
/* File authors: Pierre Fernique <pfernique@gmail.com> (31)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_c135a712d4ea5ecca5fd38e224a91e4a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::TemplateArgument::*method_pointer_1f6094429ac05d3eaa0307d2fe2db984)() const = &::clang::TemplateArgument::containsUnexpandedParameterPack;
    class ::clang::ValueDecl  * (::clang::TemplateArgument::*method_pointer_6f6e5075c5645c1d9ecc1fd639b4ae9e)() const = &::clang::TemplateArgument::getAsDecl;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_5037e8142f095811bee8ffcd04be54c0)() const = &::clang::TemplateArgument::getAsType;
    class ::clang::TemplateArgument  (*method_pointer_47fd443f0e2c5c21a9b150caae6792f5)() = ::clang::TemplateArgument::getEmptyPack;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_40900f93b0725b1fb9cc9cd35b194d33)() const = &::clang::TemplateArgument::getIntegralType;
    enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_4799e2463b3f570ca755c5173393c740)() const = &::clang::TemplateArgument::getKind;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_5e5efd0bae4c52f8bd2c06b018703336)() const = &::clang::TemplateArgument::getNullPtrType;
    class ::clang::TemplateArgument  (::clang::TemplateArgument::*method_pointer_a094831a30235770ab2b70d9a8cc69c6)() const = &::clang::TemplateArgument::getPackExpansionPattern;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_ff3a39d08dd15d3b9c0fe5136b51b2ed)() const = &::clang::TemplateArgument::getParamTypeForDecl;
    bool  (::clang::TemplateArgument::*method_pointer_20baf621596b52efbd52be8887c58002)() const = &::clang::TemplateArgument::isDependent;
    bool  (::clang::TemplateArgument::*method_pointer_3cb7b490a74d5d5493bd78e687bee825)() const = &::clang::TemplateArgument::isInstantiationDependent;
    bool  (::clang::TemplateArgument::*method_pointer_5d6db9fbce0b56ce8fa0acf9f219ea47)() const = &::clang::TemplateArgument::isNull;
    bool  (::clang::TemplateArgument::*method_pointer_3da1a59957285579a64c7a6bc3fa89d5)() const = &::clang::TemplateArgument::isPackExpansion;
    unsigned int  (::clang::TemplateArgument::*method_pointer_e0781c9806aa53b1a28a3fa634896f77)() const = &::clang::TemplateArgument::pack_size;
    void  (::clang::TemplateArgument::*method_pointer_d1565a517ecf5affbecbc71b2bf527b1)(class ::clang::QualType ) = &::clang::TemplateArgument::setIntegralType;
    bool  (::clang::TemplateArgument::*method_pointer_c867f5fbbf8455c3b0ebee2352aa60f8)(class ::clang::TemplateArgument  const &) const = &::clang::TemplateArgument::structurallyEquals;
    struct function_group
    {
        static class ::boost::python::str  function_1f92787059f759a480ede96a59d6342c(class ::clang::TemplateArgument  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::TemplateArgument, autowig::HeldType< class ::clang::TemplateArgument > > class_c135a712d4ea5ecca5fd38e224a91e4a("TemplateArgument", "", boost::python::no_init);
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_1f6094429ac05d3eaa0307d2fe2db984, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_decl", method_pointer_6f6e5075c5645c1d9ecc1fd639b4ae9e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_type", method_pointer_5037e8142f095811bee8ffcd04be54c0, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_empty_pack", method_pointer_47fd443f0e2c5c21a9b150caae6792f5, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_integral_type", method_pointer_40900f93b0725b1fb9cc9cd35b194d33, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_4799e2463b3f570ca755c5173393c740, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_null_ptr_type", method_pointer_5e5efd0bae4c52f8bd2c06b018703336, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_pack_expansion_pattern", method_pointer_a094831a30235770ab2b70d9a8cc69c6, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_param_type_for_decl", method_pointer_ff3a39d08dd15d3b9c0fe5136b51b2ed, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_20baf621596b52efbd52be8887c58002, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_3cb7b490a74d5d5493bd78e687bee825, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_5d6db9fbce0b56ce8fa0acf9f219ea47, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_3da1a59957285579a64c7a6bc3fa89d5, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_e0781c9806aa53b1a28a3fa634896f77, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("set_integral_type", method_pointer_d1565a517ecf5affbecbc71b2bf527b1, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("structurally_equals", method_pointer_c867f5fbbf8455c3b0ebee2352aa60f8, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.staticmethod("get_empty_pack");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_1f92787059f759a480ede96a59d6342c, "");

}