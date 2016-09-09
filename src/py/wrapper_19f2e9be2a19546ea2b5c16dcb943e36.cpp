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
/* File authors: Pierre Fernique <pfernique@gmail.com> (36)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_19f2e9be2a19546ea2b5c16dcb943e36()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TypeAliasTemplateDecl  * (*method_pointer_38417bcdbb165f33a99e119f0c024c0d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TypeAliasTemplateDecl::CreateDeserialized;
    bool  (*method_pointer_0ba0f13fade657dc988e2bdde912e0cf)(class ::clang::Decl  const *) = ::clang::TypeAliasTemplateDecl::classof;
    bool  (*method_pointer_9a0a0ea231505a65b2628277cea20730)(enum ::clang::Decl::Kind ) = ::clang::TypeAliasTemplateDecl::classofKind;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_3d8d7be7dbb555ef8beef40b0e5cd638)() = &::clang::TypeAliasTemplateDecl::getCanonicalDecl;
    class ::clang::TypeAliasTemplateDecl  const * (::clang::TypeAliasTemplateDecl::*method_pointer_b568d1d5d55f500c9ac93a17a60c97dd)() const = &::clang::TypeAliasTemplateDecl::getCanonicalDecl;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_d412c27ff8fd5f99a93ebc74928fb49b)() const = &::clang::TypeAliasTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_9a2496afe79f5200b7e46b1bc5f01fc2)() = &::clang::TypeAliasTemplateDecl::getPreviousDecl;
    class ::clang::TypeAliasTemplateDecl  const * (::clang::TypeAliasTemplateDecl::*method_pointer_1dd5a6aa53c454529ae36a8e6168d456)() const = &::clang::TypeAliasTemplateDecl::getPreviousDecl;
    class ::clang::TypeAliasDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_6f68d7e391f553a5ad1f9c69b5711f3b)() const = &::clang::TypeAliasTemplateDecl::getTemplatedDecl;
    boost::python::class_< class ::clang::TypeAliasTemplateDecl, autowig::HeldType< class ::clang::TypeAliasTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_19f2e9be2a19546ea2b5c16dcb943e36("TypeAliasTemplateDecl", "", boost::python::no_init);
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("create_deserialized", method_pointer_38417bcdbb165f33a99e119f0c024c0d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("classof", method_pointer_0ba0f13fade657dc988e2bdde912e0cf, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("classof_kind", method_pointer_9a0a0ea231505a65b2628277cea20730, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_canonical_decl", method_pointer_3d8d7be7dbb555ef8beef40b0e5cd638, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_canonical_decl", method_pointer_b568d1d5d55f500c9ac93a17a60c97dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_instantiated_from_member_template", method_pointer_d412c27ff8fd5f99a93ebc74928fb49b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_previous_decl", method_pointer_9a2496afe79f5200b7e46b1bc5f01fc2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_previous_decl", method_pointer_1dd5a6aa53c454529ae36a8e6168d456, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_templated_decl", method_pointer_6f68d7e391f553a5ad1f9c69b5711f3b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("classof_kind");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("create_deserialized");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeAliasTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeAliasTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}