#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_b97237ef74ad5566bc5ae85fdde5a9b6()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::DeclContext::*method_pointer_75aa41b593455f18bd0b2efa4329348d)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_16df0c934534598e908f8a505e1865d8)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_e5c337e77802588b8b185ef4a23154e9)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_8fc7eb4c4c71512cace35664c533bad7)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_0b67dd86d90250ba9504f030e7a33b20)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_56e490f6cc3656a184e4d257c054e238)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_91ba327ef2fb5c878a7fcc7a5e45a9a3)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_ad2a9413db425a3b996cbbb413e1e83d)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_277b96d9caff5c4995bee83d70c2b2d9)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_e7f2e339a69d550e98cb4d731cd0cfb2)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_475925cfd94653b6ad6b9d7748efccd9)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_afa758f38c6d5ac2b8cf67ea01b301dc)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_415190887c48528ea627e4cf68516f16)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_e41bbef839fa57c9a06d8f749efdcbf5)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_eb699887c4f65018bb699e8172d22330)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_81584db2a52e52f3866ba75e19aa2787)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_fdab4bb9e20b58209d2f10d82059affc)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_4d17ad3cced15a1794d9b27966f6da37)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_af153e881c5351729c075286e52c7307)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_8601e4f90f9a5b8b8ff2cf32c672635f)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_0cb03fac9c205b8183ec91ee834e1a3e)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_9dbb4d32529651f8a0fd687a0d8e44c4)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_a15676fa47665bf586ddd3cbc11106b9)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_542bc1b989605c44954479ca9e985206)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_785851813107589ca665d59f1b65fd9f)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_0e35162241e45fe5b9b97a0ba5bfdf58)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_824e400cd5f052fcac48013f77c17368)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_52db81a8a77857e3af42fd8b6fd8e0cf)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_39b9452f6ac55b2cbde38fab642d5208)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_097212e6612e5f38a63ef35b0d104d09)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_3f188fa71afd555bbe1006d76ecd25be)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_86ae140359d75ddd9d5cd0c15ee07105)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_4b0c77a520d75f3f9d51a61e55452948)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_6ee6554fd592514bb29140854cc10544)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_55dbd448bea55543b75f596d3eac9b11)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_890b1d64b2e555148fe05667188caf5c)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_67edcb11d9fe5908a4d5956f1762c5cb)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_8d4c2e79f6b65f058649abfbefc91920)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_3a07bdc7ad085ffe8a6dd643304021d5)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_102d401e30075baf9f98ef8dc9d3f8bc)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_24f84e4dc1f85e05872ef9a1e38291b1)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_2e9e46228368506c9145e27b8513c38d)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_cf29c12ff5f2547e948018224ee09e84)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_7c830476e8c85e3bb15913f58feac76b)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_433c32ada45150c5b1305a87292b251c)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_f0c94a976eab5bf08e43a1a19f473fde)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_01b67e19643b5df9a2597cbf628b5a85)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_ceb8123c1812500584deeb0c83434517)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_8d599f7670cc5960a158073a6fc5bdf0)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_5016ae0194a85a57b3fba34c49f63a38)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_8984f0c48c0057d9b2f9aa43eaf263d5)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_bc4c1eb958dc54f2a065d9feaf48c44a)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_8b855bbb836a55a4b73a0344f6752ed7)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_cb2757591c055ef181fb17f0f6bb698f)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_57900222f451560ab7f70117cd728b5c(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_63cfa713e19457acbbebbc5b61ef8c4d(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_0041a0e7b4185da5900619fb438a58f4(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_aabdc11c92f9578cb5842f7924e97fd4(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_1116b50f38aa526d82dfca95b8f040a9(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_75aa41b593455f18bd0b2efa4329348d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_16df0c934534598e908f8a505e1865d8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_e5c337e77802588b8b185ef4a23154e9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_8fc7eb4c4c71512cace35664c533bad7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_0b67dd86d90250ba9504f030e7a33b20, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_56e490f6cc3656a184e4d257c054e238, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_91ba327ef2fb5c878a7fcc7a5e45a9a3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_ad2a9413db425a3b996cbbb413e1e83d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_277b96d9caff5c4995bee83d70c2b2d9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_e7f2e339a69d550e98cb4d731cd0cfb2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_475925cfd94653b6ad6b9d7748efccd9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_afa758f38c6d5ac2b8cf67ea01b301dc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_415190887c48528ea627e4cf68516f16, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_e41bbef839fa57c9a06d8f749efdcbf5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_eb699887c4f65018bb699e8172d22330, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_81584db2a52e52f3866ba75e19aa2787, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_fdab4bb9e20b58209d2f10d82059affc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_4d17ad3cced15a1794d9b27966f6da37, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_af153e881c5351729c075286e52c7307, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_8601e4f90f9a5b8b8ff2cf32c672635f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_0cb03fac9c205b8183ec91ee834e1a3e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_9dbb4d32529651f8a0fd687a0d8e44c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_a15676fa47665bf586ddd3cbc11106b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_542bc1b989605c44954479ca9e985206, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_785851813107589ca665d59f1b65fd9f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_0e35162241e45fe5b9b97a0ba5bfdf58, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_824e400cd5f052fcac48013f77c17368, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_52db81a8a77857e3af42fd8b6fd8e0cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_39b9452f6ac55b2cbde38fab642d5208, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_097212e6612e5f38a63ef35b0d104d09, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_3f188fa71afd555bbe1006d76ecd25be, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_86ae140359d75ddd9d5cd0c15ee07105, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_4b0c77a520d75f3f9d51a61e55452948, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_6ee6554fd592514bb29140854cc10544, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_55dbd448bea55543b75f596d3eac9b11, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_890b1d64b2e555148fe05667188caf5c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_67edcb11d9fe5908a4d5956f1762c5cb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_8d4c2e79f6b65f058649abfbefc91920, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_3a07bdc7ad085ffe8a6dd643304021d5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_102d401e30075baf9f98ef8dc9d3f8bc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_24f84e4dc1f85e05872ef9a1e38291b1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_2e9e46228368506c9145e27b8513c38d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_cf29c12ff5f2547e948018224ee09e84, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_7c830476e8c85e3bb15913f58feac76b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_433c32ada45150c5b1305a87292b251c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_f0c94a976eab5bf08e43a1a19f473fde, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_01b67e19643b5df9a2597cbf628b5a85, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_ceb8123c1812500584deeb0c83434517, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_8d599f7670cc5960a158073a6fc5bdf0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_5016ae0194a85a57b3fba34c49f63a38, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_8984f0c48c0057d9b2f9aa43eaf263d5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_bc4c1eb958dc54f2a065d9feaf48c44a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_8b855bbb836a55a4b73a0344f6752ed7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_cb2757591c055ef181fb17f0f6bb698f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_57900222f451560ab7f70117cd728b5c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_63cfa713e19457acbbebbc5b61ef8c4d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_0041a0e7b4185da5900619fb438a58f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_aabdc11c92f9578cb5842f7924e97fd4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_1116b50f38aa526d82dfca95b8f040a9, "");

}