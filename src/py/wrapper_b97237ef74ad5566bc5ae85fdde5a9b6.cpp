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
    bool  (::clang::DeclContext::*method_pointer_85d69246d5cd5cc18738d5bfe9cb3d9b)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_09cec3af1114510cb3dbbfed97cba16f)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_fb5b5ee00ff857789723782e235e1dca)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_49196743530e5d5b9eee0e2304c59a1b)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_f8b8e5b8ecc052eeab4283cf79d6be3c)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_c24073a662005e6ab3017bc836d5a265)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_c4243b7c7bfb592984c95dfef55e4491)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_536be1d32f745cb7a64b2bc2c92d882a)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_8e774fab80665d499533676c74a3f98c)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_bfaac15761dc5290aa227dd3f7fdc0f6)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_9ee57071f13154e3a849a65a66e021c4)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_7c3261cc62e9535aaeaeb87262c8266f)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_24f05e892bc45338a5e6323d9efd6a71)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_be25d4666c1451a6816c923d4ee94dd9)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_14da83e0d3d55e869f331f25cf6e880f)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_57f8dd620db75af981ea1e5a49337db5)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_839f193464515778b3525a65217d06db)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_9872edfb885357b7910c0fdcde59dfc1)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_6f3794e3337f5aedbdc275e9f30a8641)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_9a13ff0277235e76964b5c1cb84bd731)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_154c60d4dce25cb688c80300b7d39c6c)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_61602436100756558cc9e2d3fe2ac027)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_4d96d13a6f3350c4b27f0b7fde321bb6)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_6b9252c861db5a47ad9db3d6ac9c5d33)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_a3915706da7c5657b076ba240e83aae0)() = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_27f27137fbae5d1b85ab572c3d5bd00f)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_72055fbfe5a2563c917f67ff25bf06c1)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_0c14b30c62f858d4984cd8c1693c13a2)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_792daa67419755548e1ce6cdeb3954c2)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_0c1cc85f0d9a577085e22a9fcf685f31)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_bb6ab0e399ea5c5dba231d93bcd04aa9)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_1c3e16ca6f225024b9312c0e0b18d02d)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_6f01513945e756f791bc283e8e663274)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_3cbce3fea0d75608b725989bbf7012db)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_5b4c383a7c0052b49db05e1498dc3fc2)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_aac58ce060145808ba212338e7aa859f)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_7f4af845a4b55f00adbb947574a6401e)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_42288c3049ab592c93da733fbc6f0c57)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_9a240903f2d259b3882957c62f58f1ad)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_1d7d3cf3c0df59c2beab6d2ada1e4b8f)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_83db54589c42537989161af50aca5e82)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_84afcb2f2ddb5b43b0ddabd55f929dfd)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_bf17fea65cf45cb3a803d8e8b37ee27f)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_d29f9c473a805768bfd96dad946850a2)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_a561dc2d19805af4b1edda4bc6758f07)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_74c59d8336075079b3c7ff700d4c0b75)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_d9693c6c07675a2ebf390f8160c6071f)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_44d5aab8a688562db440673b82086a86)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_87097736033b53d7931483d9269f80d2)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_43f41ba46b0e57e6b564849b0b59815d)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_a8973b62d0e757888d67b0dc38b37273)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_91b7a98e91c151059bbd8efd7eddee89)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_a50410e2d6be5dca84218f1a36cf3c72)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_71771d3b75985330b061112f30425c63)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_4695573643c3545b85799b6fd0d983a5(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_addaaf6b1c1a523ab4e1d6b3f5a8747b(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_5ed0826463fd5eaabf1a245a856af680(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_43d5813a44ef5fe187ed0da1e5f5af44(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_57b62abab844527ea0e72dc9445ee575(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_85d69246d5cd5cc18738d5bfe9cb3d9b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_09cec3af1114510cb3dbbfed97cba16f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_fb5b5ee00ff857789723782e235e1dca, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_49196743530e5d5b9eee0e2304c59a1b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_f8b8e5b8ecc052eeab4283cf79d6be3c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_c24073a662005e6ab3017bc836d5a265, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_c4243b7c7bfb592984c95dfef55e4491, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_536be1d32f745cb7a64b2bc2c92d882a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_8e774fab80665d499533676c74a3f98c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_bfaac15761dc5290aa227dd3f7fdc0f6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_9ee57071f13154e3a849a65a66e021c4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_7c3261cc62e9535aaeaeb87262c8266f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_24f05e892bc45338a5e6323d9efd6a71, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_be25d4666c1451a6816c923d4ee94dd9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_14da83e0d3d55e869f331f25cf6e880f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_57f8dd620db75af981ea1e5a49337db5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_839f193464515778b3525a65217d06db, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_9872edfb885357b7910c0fdcde59dfc1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_6f3794e3337f5aedbdc275e9f30a8641, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_9a13ff0277235e76964b5c1cb84bd731, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_154c60d4dce25cb688c80300b7d39c6c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_61602436100756558cc9e2d3fe2ac027, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_4d96d13a6f3350c4b27f0b7fde321bb6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_6b9252c861db5a47ad9db3d6ac9c5d33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_a3915706da7c5657b076ba240e83aae0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_27f27137fbae5d1b85ab572c3d5bd00f, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_72055fbfe5a2563c917f67ff25bf06c1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_0c14b30c62f858d4984cd8c1693c13a2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_792daa67419755548e1ce6cdeb3954c2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_0c1cc85f0d9a577085e22a9fcf685f31, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_bb6ab0e399ea5c5dba231d93bcd04aa9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_1c3e16ca6f225024b9312c0e0b18d02d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_6f01513945e756f791bc283e8e663274, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_3cbce3fea0d75608b725989bbf7012db, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_5b4c383a7c0052b49db05e1498dc3fc2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_aac58ce060145808ba212338e7aa859f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_7f4af845a4b55f00adbb947574a6401e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_42288c3049ab592c93da733fbc6f0c57, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_9a240903f2d259b3882957c62f58f1ad, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_1d7d3cf3c0df59c2beab6d2ada1e4b8f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_83db54589c42537989161af50aca5e82, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_84afcb2f2ddb5b43b0ddabd55f929dfd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_bf17fea65cf45cb3a803d8e8b37ee27f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_d29f9c473a805768bfd96dad946850a2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_a561dc2d19805af4b1edda4bc6758f07, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_74c59d8336075079b3c7ff700d4c0b75, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_d9693c6c07675a2ebf390f8160c6071f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_44d5aab8a688562db440673b82086a86, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_87097736033b53d7931483d9269f80d2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_43f41ba46b0e57e6b564849b0b59815d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_a8973b62d0e757888d67b0dc38b37273, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_91b7a98e91c151059bbd8efd7eddee89, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_a50410e2d6be5dca84218f1a36cf3c72, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_71771d3b75985330b061112f30425c63, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_4695573643c3545b85799b6fd0d983a5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_addaaf6b1c1a523ab4e1d6b3f5a8747b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_5ed0826463fd5eaabf1a245a856af680, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_43d5813a44ef5fe187ed0da1e5f5af44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_57b62abab844527ea0e72dc9445ee575, "");

}