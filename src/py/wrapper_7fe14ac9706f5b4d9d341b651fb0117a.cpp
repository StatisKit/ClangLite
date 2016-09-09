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


void wrapper_7fe14ac9706f5b4d9d341b651fb0117a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TagDecl  * (*method_pointer_c8d7eb6e659a51cba8a129dcf664e5ec)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_b25253dbebe15408a4a24892837c6965)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_2236505cad2a59448038dfca5cad0f4d)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_c05174c593cc5fbe859372f607bc60a3)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_cfe549b5c4f95fb487f2041646a79730)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_64c94afdb3775f3bbfc2391e45563f38)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_c714ae54cfcf5f94aba568fdbbd684c4)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_a42d803bc2ba5dabba1fbf72d50a18ee)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_220985d2e6605aeea484a800ea22c854)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_64d29e6e946a576cb388e370f1283932)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_8b9674db41625f9d9cb4b5e2f3e54d58)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_951493dca1495063b3d500278dd3efd1)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_29d80fe0a3895a27bff53b5f9e828f2e)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_a04e94afcaaa5f4db1761d830874605c)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_f56832c38e8158b6a43d90925b278576)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_93e182bd64db5e01863953ea862d2c2f)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_7fa6d7f4288250459692a9bb6bfd0bc4)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_27fb855ba53e521a97deb191849e4ccf)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_c1dba679a23f51e6b731626d8ff74e33)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_2f1caee1b9205c74a55723e7d53748eb)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_29e5a3291ef853b9ba05c75c9ddeec0f)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_306ba9e5f1be52b19546b36f6a4084e7)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_894143bb970452b3928e5c976742bfca)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_cc2db7bef6085a69b4b6f0ba4f71c05b)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_c0b9cf4cfcaa5c5f8baf4a5485683801)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_32dd04af5a5a5ed1a28d68ef406a8af0)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_1237dea214255cfba050fa4013ea8989)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_117956323058513c8204fdc210b0c8fd)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_ae8ad46a52dd566ca3d9d74cc80bd5d0)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_71cb75ef508b5f66ac3dd52ac7aba2de)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_97f54233f7655b38af4c8231712f4907)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_3d9a90ee6a985e84a7ffa1250c360d75)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_c85cc394b70f593cae2e5f8c4ba76f4f)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_c8d7eb6e659a51cba8a129dcf664e5ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_b25253dbebe15408a4a24892837c6965, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_2236505cad2a59448038dfca5cad0f4d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_c05174c593cc5fbe859372f607bc60a3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_cfe549b5c4f95fb487f2041646a79730, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_64c94afdb3775f3bbfc2391e45563f38, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_c714ae54cfcf5f94aba568fdbbd684c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_a42d803bc2ba5dabba1fbf72d50a18ee, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_220985d2e6605aeea484a800ea22c854, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_64d29e6e946a576cb388e370f1283932, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_8b9674db41625f9d9cb4b5e2f3e54d58, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_951493dca1495063b3d500278dd3efd1, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_29d80fe0a3895a27bff53b5f9e828f2e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_a04e94afcaaa5f4db1761d830874605c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_f56832c38e8158b6a43d90925b278576, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_93e182bd64db5e01863953ea862d2c2f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_7fa6d7f4288250459692a9bb6bfd0bc4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_27fb855ba53e521a97deb191849e4ccf, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_c1dba679a23f51e6b731626d8ff74e33, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_2f1caee1b9205c74a55723e7d53748eb, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_29e5a3291ef853b9ba05c75c9ddeec0f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_306ba9e5f1be52b19546b36f6a4084e7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_894143bb970452b3928e5c976742bfca, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_cc2db7bef6085a69b4b6f0ba4f71c05b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_c0b9cf4cfcaa5c5f8baf4a5485683801, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_32dd04af5a5a5ed1a28d68ef406a8af0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_1237dea214255cfba050fa4013ea8989, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_117956323058513c8204fdc210b0c8fd, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_ae8ad46a52dd566ca3d9d74cc80bd5d0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_71cb75ef508b5f66ac3dd52ac7aba2de, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_97f54233f7655b38af4c8231712f4907, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_3d9a90ee6a985e84a7ffa1250c360d75, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_c85cc394b70f593cae2e5f8c4ba76f4f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("classof_kind");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("classof");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("cast_from_decl_context");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::TagDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TagDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TagDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}