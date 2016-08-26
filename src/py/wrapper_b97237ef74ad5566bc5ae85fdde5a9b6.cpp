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
    bool  (::clang::DeclContext::*method_pointer_919d5068a7785b9dbace7562c50383f3)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_6a6009f773925dc8bc1f24074335dc40)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_100e3575182c5641bc4a04540a75f91e)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_dab5a8119a7955cabd8243523d59719c)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_5c73cbe2cd5452ce88ec123f3c6bcf0c)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_17de203f69ef574aa4fd032491cfba12)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_4980a24d930e5b648a563b54490c23c7)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_d825ef6094a25570853951916531c014)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_010e381e61c95968907d37a0ca93aea5)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_95cc8f02d1555ecebbca5f9b2b31bcd5)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_c74d28664668593f8588ae057ffc3f14)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_4534224ecb0a5991866239da18318a49)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_a9173e3885cd569185e6ecdf72028d0a)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_df54eb5be2e25c429ff62e69b530c3bf)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_69da7a4a3687569bb7f054fcde39db1f)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_47b490dab8f1512b9f583775e346945f)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_7d20bde416bc5b52891af61297edfb6e)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_d5b7084a2e1f587ebc0f4792dd68ba41)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_16e00ddefe1b5b8b95368fc486d358f7)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_42f4b989bddb5dfb8c585e51ca49d38e)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_fa9474ff5e335fd1b27c46e643c507f4)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_b533ddd9ad2d55ffa320bef93ee5df2a)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_c4a802f3647b50fe991f1956065dfa33)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_5f2d3efd4f78591990208804f176c6ee)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_3dfdfabb1940503b978f87f0c667d486)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_6b348c5877bb557f8935e41efef9a488)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_115a117a0f895128932584ae01ad96c3)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_54dfe0e2df475e96a1ff3033dd154401)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_4d8778f12e81513f87652011faf6d2c9)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_4f7fd1f05865595b842f392e61a5e644)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_1178fe9979e85d5782fafbc3df0bbc14)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_6632d61cb84e5dd9a039fd10e19bd332)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_deb01f45ec5b562db3f8536c09493310)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_de38f7fcb02e5d4bb9230d28d35957b5)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_35483cedef3950b891c07ec6063fc44c)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_589d2d74dce350a68c3b2923f7d58246)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_9880913782305d81aab45ed8c8287564)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_2372ac1a9c995691a11572be08c308fd)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_140a9aeb5fd95a53a5414e15edda94d6)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_ecffb71731cb5891893cbe5fb1f1c895)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_a07cd47e753f5d7f84583a00c59103fc)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_0210f4f0bce3537f95da619aed60c458)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_ecf8a2fff3c95018ab88a4a8ac8c0c32)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_f8ff50bb24f8514d8878451d98c9c31a)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_53e2efd527965302b01ad02289ebf671)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_46226d2e777956f288560ab5b61cb4fd)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_505562fc506d5185b8116afbdc7f3277)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_5ff5e4fcc4115ab0998eebe8855a51d2)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_73cefb0cda00530e9dc8f5c47d85ac16)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_ebf32cf101285e689cdd7582f42a8e58)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_30f3245fe4d059f8a3a8c4a7345c3f48)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_a7bb62dda485589990c139169605738c)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_4884668733685425b26b21d66414e4fa)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_1a34382b57ef5a10bb0a7a5057f512df)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_ec5186e482d55a0ea13cd1e804cffb1c(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_7621b08e5b4f53cbafa6aac3a670e2eb(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_41651bf2e1d9551a937670a11ea07970(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_893b020d94155ffcb89bbb411777abca(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_dce1e95231b955639b3a503d07ba5647(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_919d5068a7785b9dbace7562c50383f3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_6a6009f773925dc8bc1f24074335dc40, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_100e3575182c5641bc4a04540a75f91e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_dab5a8119a7955cabd8243523d59719c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_5c73cbe2cd5452ce88ec123f3c6bcf0c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_17de203f69ef574aa4fd032491cfba12, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_4980a24d930e5b648a563b54490c23c7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_d825ef6094a25570853951916531c014, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_010e381e61c95968907d37a0ca93aea5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_95cc8f02d1555ecebbca5f9b2b31bcd5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_c74d28664668593f8588ae057ffc3f14, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_4534224ecb0a5991866239da18318a49, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_a9173e3885cd569185e6ecdf72028d0a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_df54eb5be2e25c429ff62e69b530c3bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_69da7a4a3687569bb7f054fcde39db1f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_47b490dab8f1512b9f583775e346945f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_7d20bde416bc5b52891af61297edfb6e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_d5b7084a2e1f587ebc0f4792dd68ba41, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_16e00ddefe1b5b8b95368fc486d358f7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_42f4b989bddb5dfb8c585e51ca49d38e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_fa9474ff5e335fd1b27c46e643c507f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_b533ddd9ad2d55ffa320bef93ee5df2a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_c4a802f3647b50fe991f1956065dfa33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_5f2d3efd4f78591990208804f176c6ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_3dfdfabb1940503b978f87f0c667d486, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_6b348c5877bb557f8935e41efef9a488, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_115a117a0f895128932584ae01ad96c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_54dfe0e2df475e96a1ff3033dd154401, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_4d8778f12e81513f87652011faf6d2c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_4f7fd1f05865595b842f392e61a5e644, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_1178fe9979e85d5782fafbc3df0bbc14, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_6632d61cb84e5dd9a039fd10e19bd332, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_deb01f45ec5b562db3f8536c09493310, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_de38f7fcb02e5d4bb9230d28d35957b5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_35483cedef3950b891c07ec6063fc44c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_589d2d74dce350a68c3b2923f7d58246, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_9880913782305d81aab45ed8c8287564, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_2372ac1a9c995691a11572be08c308fd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_140a9aeb5fd95a53a5414e15edda94d6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_ecffb71731cb5891893cbe5fb1f1c895, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_a07cd47e753f5d7f84583a00c59103fc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_0210f4f0bce3537f95da619aed60c458, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_ecf8a2fff3c95018ab88a4a8ac8c0c32, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_f8ff50bb24f8514d8878451d98c9c31a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_53e2efd527965302b01ad02289ebf671, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_46226d2e777956f288560ab5b61cb4fd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_505562fc506d5185b8116afbdc7f3277, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_5ff5e4fcc4115ab0998eebe8855a51d2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_73cefb0cda00530e9dc8f5c47d85ac16, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_ebf32cf101285e689cdd7582f42a8e58, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_30f3245fe4d059f8a3a8c4a7345c3f48, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_a7bb62dda485589990c139169605738c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_4884668733685425b26b21d66414e4fa, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_1a34382b57ef5a10bb0a7a5057f512df, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_ec5186e482d55a0ea13cd1e804cffb1c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_7621b08e5b4f53cbafa6aac3a670e2eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_41651bf2e1d9551a937670a11ea07970, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_893b020d94155ffcb89bbb411777abca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_dce1e95231b955639b3a503d07ba5647, "");

}