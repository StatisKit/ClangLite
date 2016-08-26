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
    bool  (::clang::DeclContext::*method_pointer_5a6009d87a2a5ee8bc791b2e7339ca88)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_356b0052d1af51dba6dfad54fc1f224d)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_3e6a45655b595be9bdb90fe6a6eac04e)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_f3edd5dcec005e3a81ba58111adbf9cc)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_7d176595d78f526087d4e41666e8c579)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_2a19839b999a5c6a8dcee215c3e81e57)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_025f90a8ad135cb2b3f8b3c07f6df235)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_f90038e9769f5612bb96f5f7abc5c3c6)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_4c33586bfaaa5a63aa469d115c14bf77)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_ce735b8d9b8852128cd158a8f4c3cbcb)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_fc4b48f323825190b93fb884a17aeb1d)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_87180828b30056b38390f651e4f12c3b)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_5d845bb0b8675b298be3b6008bd02992)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_29d8055f19345f7db8376e0e4e914344)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_1f1a49f36883562c93b4a5b5dfe52128)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_39d5ae8f85fb5878b6c5493c26f89264)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_61a578fcfa425d07b4ba36db99854fb4)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_a00bc1b907ea532dacfdb080f6b63039)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_b34583fb68a25f51af559d8b81700421)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_a9919815982653b5b65c84372a8fcb78)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_670131247a595ad6bba5e20b25b9f7e9)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_7c2f2d8c05b15f919c6648bebcefae6d)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_6fb118e41cc8599c8889b6aa705b79cf)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_ae15cf6e8a22591da34d0062d0fa56ba)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_1e62f624c6bd51ea9a8604e1cfe1392c)() = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_cb64d650873c50909c267bdb2829f9b8)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_a164d5951fc05fdda361f78081c691ae)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_8264e93d6de0587aacee92ba90b7766a)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_fc995c85646c52ac893cca3a022a9924)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_51fbf36f1bdd5d1380174f8aafc928f9)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_109ef7f7e7d5582185c91de575728466)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_abc16f210fee5936bd5210d84cc49404)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_9406dbc35bf05b449dc1edcf6a58a05c)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_5f3154172b085476b774c26ac8efdde8)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_58490b3f047955e58100106bc8ef41aa)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_38b2df1608b1561a9332d42d58b84a98)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_b22b2c0267b55fd7b884197331653286)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_729b277644395a7ab742a050d5bf9c1f)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_2e6bc9501e3f5f75a81d3a1b8381981b)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_9a920f63d98752428136ae50b80e6bfe)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_8bd5994c08625b71a1d198cbd9bcd15b)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_fcf7303804055de68bf54c3250e78719)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_63dce78ca2f05534801db58f72da5099)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_f0b5dacb3fa05e10a22459891a536b13)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_480a4b6277885a4aa21774fca89fe160)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_dfdf3cadb705504b999a012f37d18af9)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_a04d85f33caf5dd28191b17bff0f84e5)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_879fe5b1e3ca53aea3b8ac7abeee4e11)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_b8ed798dac4b5d1eb2199c6949a1bfd7)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_160c15ad85ad567bb907a301df7af745)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_d37748a88d8859b3a3de54e84cac44f8)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_0f8c71c66e8e5f94bd7f980f85e9bc75)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_580fa809216d57f982df13377408ef95)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_67c33260188050e8af100ddee5f5d1a0)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_67809ca3f0145b80ac3736799a8ef85f(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_c829b37089b95cd3851f5eb7e2089e85(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_a91cff33e57b5ce4b2b846b61e4717dd(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_59f54a1f89275ed8926ad4d25e817bfc(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_41a5eac8242f55aa89a14bb164497fdc(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_5a6009d87a2a5ee8bc791b2e7339ca88, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_356b0052d1af51dba6dfad54fc1f224d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_3e6a45655b595be9bdb90fe6a6eac04e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_f3edd5dcec005e3a81ba58111adbf9cc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_7d176595d78f526087d4e41666e8c579, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_2a19839b999a5c6a8dcee215c3e81e57, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_025f90a8ad135cb2b3f8b3c07f6df235, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_f90038e9769f5612bb96f5f7abc5c3c6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_4c33586bfaaa5a63aa469d115c14bf77, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_ce735b8d9b8852128cd158a8f4c3cbcb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_fc4b48f323825190b93fb884a17aeb1d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_87180828b30056b38390f651e4f12c3b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_5d845bb0b8675b298be3b6008bd02992, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_29d8055f19345f7db8376e0e4e914344, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_1f1a49f36883562c93b4a5b5dfe52128, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_39d5ae8f85fb5878b6c5493c26f89264, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_61a578fcfa425d07b4ba36db99854fb4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_a00bc1b907ea532dacfdb080f6b63039, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_b34583fb68a25f51af559d8b81700421, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_a9919815982653b5b65c84372a8fcb78, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_670131247a595ad6bba5e20b25b9f7e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_7c2f2d8c05b15f919c6648bebcefae6d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_6fb118e41cc8599c8889b6aa705b79cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_ae15cf6e8a22591da34d0062d0fa56ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_1e62f624c6bd51ea9a8604e1cfe1392c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_cb64d650873c50909c267bdb2829f9b8, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_a164d5951fc05fdda361f78081c691ae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_8264e93d6de0587aacee92ba90b7766a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_fc995c85646c52ac893cca3a022a9924, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_51fbf36f1bdd5d1380174f8aafc928f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_109ef7f7e7d5582185c91de575728466, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_abc16f210fee5936bd5210d84cc49404, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_9406dbc35bf05b449dc1edcf6a58a05c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_5f3154172b085476b774c26ac8efdde8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_58490b3f047955e58100106bc8ef41aa, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_38b2df1608b1561a9332d42d58b84a98, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_b22b2c0267b55fd7b884197331653286, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_729b277644395a7ab742a050d5bf9c1f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_2e6bc9501e3f5f75a81d3a1b8381981b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_9a920f63d98752428136ae50b80e6bfe, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_8bd5994c08625b71a1d198cbd9bcd15b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_fcf7303804055de68bf54c3250e78719, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_63dce78ca2f05534801db58f72da5099, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_f0b5dacb3fa05e10a22459891a536b13, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_480a4b6277885a4aa21774fca89fe160, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_dfdf3cadb705504b999a012f37d18af9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_a04d85f33caf5dd28191b17bff0f84e5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_879fe5b1e3ca53aea3b8ac7abeee4e11, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_b8ed798dac4b5d1eb2199c6949a1bfd7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_160c15ad85ad567bb907a301df7af745, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_d37748a88d8859b3a3de54e84cac44f8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_0f8c71c66e8e5f94bd7f980f85e9bc75, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_580fa809216d57f982df13377408ef95, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_67c33260188050e8af100ddee5f5d1a0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_67809ca3f0145b80ac3736799a8ef85f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_c829b37089b95cd3851f5eb7e2089e85, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_a91cff33e57b5ce4b2b846b61e4717dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_59f54a1f89275ed8926ad4d25e817bfc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_41a5eac8242f55aa89a14bb164497fdc, "");

}