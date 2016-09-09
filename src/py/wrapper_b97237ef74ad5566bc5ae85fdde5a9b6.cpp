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
/* File authors: Pierre Fernique <pfernique@gmail.com> (37)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_b97237ef74ad5566bc5ae85fdde5a9b6()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::DeclContext::*method_pointer_624d619dd1b55b4ea4df475156641b65)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_deb92519e0f25ac0b26620ed9c72d99d)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_b0af7711cdd657a793c6384252351681)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_fb982c0fd76a5c5db22fe46e9eaa9db5)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_44024ee656a25ed2a62edc0b1017a138)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_f2d80fac35cd5110add69de6b8c57437)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_ff487526e22b59528da7b86b83e4c1dd)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_a0a51a321bb858aeb8d2ba091e05becb)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_95028f3ebd6f5f0189ced8bb32808aad)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_d003ab0390cd574a95fd2c7ebe792893)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_39735ed74bff52fbb94ba63bc309ed0c)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_5aead853242b58edabb1c05007274990)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_59a35a81e469515cb6ed97e4c1fadf38)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_aa3034da9d3958e1b3bbd74408f4fdcf)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_9a7993bdd58652e485df3b7b11d852b8)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_57a248b76e615a68a184b8f5a0f38aff)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_bd0334b9b6905f9a829ea99fc65f59c8)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_8f98f109e925536ea8203891eadfabc1)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_b7377ce1289d5a108523c795142f26fe)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_cf5bb297a5175da7b7964becb338bd29)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_6bc014358a5f5352adad07993f840826)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_4e3b4c79889d55ff8b1e6e6bbd9f8ae7)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_ae9b0e60560252eb8e5f8afe32f2df29)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_c46d50c806a25071884f0e757232dd70)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_d65b0df4bdaf5574bd6929f82d87632e)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_7907a7e7d5b25890b96edaaf8106a0ba)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_2f9bd2a5ee035682b3d7fc94ef352671)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_5c5649d3d6875b0cafebd02115966662)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_d271bc6d1ac856b1bf2f51568cd14b12)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_344ea90afb6050b59e33cc8a7cb59470)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_a9528c52b471521482e3a421b383f7d2)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_30bc958511c6569fb9c2f2f52493e2f4)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_8651df5cf56d5f62b72b09cc3f7d6b80)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_e3131c65f62e5a7d9be7d38d54a1be6c)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_63e27254d194578ab435d3966ee3260c)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_41e1c1a2e73751189b44cd6c74359124)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_93067358d0cc58bc9481dbcc9a183f25)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_4ff31efb2dff53ffac73ac33cad0e059)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_6c4182c8e1b653cc9e9acc3fe4fed72b)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_088d3562833a5383af219a240c6d5e58)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_19299027f8b5554a84ad0be5134cac6c)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_fd1fef8bfeef5568998fc5c8ad9c95d4)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_a6a6f1e755885a2daee5f46aac12eb72)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_434f04526e4858c0bbb081d7cff59cd6)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_d99b75ac9e175632a8b0eebe7e194bc2)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_4286b58c54445b30a026bdbaa756f895)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_534ada39d80d5322be57d5e991098a75)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_02bb685892a556b8a99165b657003134)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_7847609ffe7056819b7e524504c349e4)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_3d1828a887a5559cb48588f802f4f786)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_41ee8fc07e925bdcbe42ff75dc6f3a5a)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_8151b820fb6a56e6821200de5da80888)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_07b70d9232805b608e781a84f8d228c8)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_466c695fdf385880bd0d324fbf575b53)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_ae67ab79b94f5f6a99b9df603efccb3c(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_5340c8366b3e547dbb60dc699fbcc838(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_be779e11d0df5f6ea567db0a632984c7(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_16f7d2c784c85ac29f0ba04209b5db83(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_9f9c2e7fa4c15edebd1e96331f22d498(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_624d619dd1b55b4ea4df475156641b65, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_deb92519e0f25ac0b26620ed9c72d99d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_b0af7711cdd657a793c6384252351681, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_fb982c0fd76a5c5db22fe46e9eaa9db5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_44024ee656a25ed2a62edc0b1017a138, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_f2d80fac35cd5110add69de6b8c57437, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_ff487526e22b59528da7b86b83e4c1dd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_a0a51a321bb858aeb8d2ba091e05becb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_95028f3ebd6f5f0189ced8bb32808aad, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_d003ab0390cd574a95fd2c7ebe792893, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_39735ed74bff52fbb94ba63bc309ed0c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_5aead853242b58edabb1c05007274990, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_59a35a81e469515cb6ed97e4c1fadf38, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_aa3034da9d3958e1b3bbd74408f4fdcf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_9a7993bdd58652e485df3b7b11d852b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_57a248b76e615a68a184b8f5a0f38aff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_bd0334b9b6905f9a829ea99fc65f59c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_8f98f109e925536ea8203891eadfabc1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_b7377ce1289d5a108523c795142f26fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_cf5bb297a5175da7b7964becb338bd29, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_6bc014358a5f5352adad07993f840826, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_4e3b4c79889d55ff8b1e6e6bbd9f8ae7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_ae9b0e60560252eb8e5f8afe32f2df29, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_c46d50c806a25071884f0e757232dd70, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_d65b0df4bdaf5574bd6929f82d87632e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_7907a7e7d5b25890b96edaaf8106a0ba, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_2f9bd2a5ee035682b3d7fc94ef352671, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_5c5649d3d6875b0cafebd02115966662, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_d271bc6d1ac856b1bf2f51568cd14b12, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_344ea90afb6050b59e33cc8a7cb59470, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_a9528c52b471521482e3a421b383f7d2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_30bc958511c6569fb9c2f2f52493e2f4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_8651df5cf56d5f62b72b09cc3f7d6b80, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_e3131c65f62e5a7d9be7d38d54a1be6c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_63e27254d194578ab435d3966ee3260c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_41e1c1a2e73751189b44cd6c74359124, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_93067358d0cc58bc9481dbcc9a183f25, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_4ff31efb2dff53ffac73ac33cad0e059, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_6c4182c8e1b653cc9e9acc3fe4fed72b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_088d3562833a5383af219a240c6d5e58, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_19299027f8b5554a84ad0be5134cac6c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_fd1fef8bfeef5568998fc5c8ad9c95d4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_a6a6f1e755885a2daee5f46aac12eb72, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_434f04526e4858c0bbb081d7cff59cd6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_d99b75ac9e175632a8b0eebe7e194bc2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_4286b58c54445b30a026bdbaa756f895, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_534ada39d80d5322be57d5e991098a75, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_02bb685892a556b8a99165b657003134, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_7847609ffe7056819b7e524504c349e4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_3d1828a887a5559cb48588f802f4f786, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_41ee8fc07e925bdcbe42ff75dc6f3a5a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_8151b820fb6a56e6821200de5da80888, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_07b70d9232805b608e781a84f8d228c8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_466c695fdf385880bd0d324fbf575b53, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_ae67ab79b94f5f6a99b9df603efccb3c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_5340c8366b3e547dbb60dc699fbcc838, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_be779e11d0df5f6ea567db0a632984c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_16f7d2c784c85ac29f0ba04209b5db83, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_9f9c2e7fa4c15edebd1e96331f22d498, "");

}