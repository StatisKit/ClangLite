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
    bool  (::clang::DeclContext::*method_pointer_ab116cc1b6875894b2ad02d67d33878f)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_ece6d9df0ecc55ebb4206a6dec9208d2)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_b44beb2a32ca5e87b476bade99abf161)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_a2dab0d1f1665de8bf94fbb380060ddf)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_0f608797a9be59dca8ff0a64542e004d)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_e1404e2bbe505158932d896f436d521e)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_41919ee5096052408b9553b326eb189f)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_dbdaae400a8a5f7a9d12eb2510f2b8b6)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_12bf94d8bef4516286bdf9437e720b8b)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_3acc37214fc45c9a84b4369da48dd0a8)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_cb442c31e5235473a0208cc01b5cd0d0)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_21276045ec6857c6b352f3dfb3c94eb1)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_718d46f11b22551887936fa7c680f900)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_e1dcd100244c512aa6d336e9e28384a0)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_7d2ed0e8e5675c1c9c894e88c4804886)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_e67bc36531365be79ffd2b9722cc76f2)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_c101fa8431515763917197d8c1c353b8)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_d0f80feed0b455918a8f4faffdd1f1e5)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_bed04b36be415a64b5ddb617637d5eb2)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_7ffcaad0e1675e3ea7f48b46dd958ff8)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_454fdb44172655e3a43a9bb5a7df5e87)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_e789f962aab15cff9f992ba72581aac9)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_880e149987485a15bcf3cc6922e84f41)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_fd52adc4e2695b6aa415c4d2d1c166d2)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_cc0bee44b5eb526a828be7dac2465926)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_71f45011503b5009a3cbb02d60becbb3)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_aeb06f3cc85a5c7b80ff7a19b97886d2)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_609e1928ffcb548aa22063f1d3345c7f)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_e2a576abe7865a1a8dc088ff8c76be64)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_da9fba99f58e591a9c78644933b6005a)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_b4cd4db283a059068c9853cd600e0cec)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_30c04ffe7a7e531b8de3ca7212dce9c1)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_3084a75625b05536929589559e83fbdb)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_18af986a347a5190b60f30a5ad1f6c8e)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_2f84b6daf7c2591cb70957d7437c3599)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_c7b41dcb4e7656c1acd1e7d15080dac5)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_a2b5360d799c5130828eb7b433418de8)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_0461eec2225a5854815c5349f4589a7f)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_37c71c1e1858550586962eebd0402a17)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_e91935e935a25e92925c73fc12d70abb)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_fc20f9657e725bf08351cafa67f942f5)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_65914e0d33b75100ac3a9688b9d3287f)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_702b4e1af00f569682218cd107b0c550)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_3869b7ebbaee5cc5942bacb335dfaf28)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_f785904765cd586aa4ea4c69773163f7)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_ced1cf6968d952b6a24bbe2b29ba2d5e)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_8abc68b3330e5a8ab9dc8fbcfdf73c6d)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_9c2eaee09c0a5469a9fd1b8730e6b7d3)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_e1a6250753355fa4a05b4002bcc7836e)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_1b3360e24f5e54899b71cfefa651a63f)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_ba2eab00ca7e57d39976da792d0e12bc)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_99bdb90eb3415bb28408e9f76f77e1dd)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_9fba6248321658eeab8660a201a91bd6)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_f72ead1c8d5c54ce904dc5b2263c5807)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_c5737fb22dd6588f8e88268cdc23806d(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_d8b3f28569c05cf5af60446b784395c6(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_098bfb83ff51599fb4f0ca36dc27f2aa(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_789417489a4556c49aca0cbe83c6b3ee(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_7237cbf089c651bc9c5638053d230464(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_ab116cc1b6875894b2ad02d67d33878f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_ece6d9df0ecc55ebb4206a6dec9208d2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_b44beb2a32ca5e87b476bade99abf161, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_a2dab0d1f1665de8bf94fbb380060ddf, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_0f608797a9be59dca8ff0a64542e004d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_e1404e2bbe505158932d896f436d521e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_41919ee5096052408b9553b326eb189f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_dbdaae400a8a5f7a9d12eb2510f2b8b6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_12bf94d8bef4516286bdf9437e720b8b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_3acc37214fc45c9a84b4369da48dd0a8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_cb442c31e5235473a0208cc01b5cd0d0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_21276045ec6857c6b352f3dfb3c94eb1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_718d46f11b22551887936fa7c680f900, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_e1dcd100244c512aa6d336e9e28384a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_7d2ed0e8e5675c1c9c894e88c4804886, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_e67bc36531365be79ffd2b9722cc76f2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_c101fa8431515763917197d8c1c353b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_d0f80feed0b455918a8f4faffdd1f1e5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_bed04b36be415a64b5ddb617637d5eb2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_7ffcaad0e1675e3ea7f48b46dd958ff8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_454fdb44172655e3a43a9bb5a7df5e87, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_e789f962aab15cff9f992ba72581aac9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_880e149987485a15bcf3cc6922e84f41, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_fd52adc4e2695b6aa415c4d2d1c166d2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_cc0bee44b5eb526a828be7dac2465926, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_71f45011503b5009a3cbb02d60becbb3, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_aeb06f3cc85a5c7b80ff7a19b97886d2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_609e1928ffcb548aa22063f1d3345c7f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_e2a576abe7865a1a8dc088ff8c76be64, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_da9fba99f58e591a9c78644933b6005a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_b4cd4db283a059068c9853cd600e0cec, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_30c04ffe7a7e531b8de3ca7212dce9c1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_3084a75625b05536929589559e83fbdb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_18af986a347a5190b60f30a5ad1f6c8e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_2f84b6daf7c2591cb70957d7437c3599, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_c7b41dcb4e7656c1acd1e7d15080dac5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_a2b5360d799c5130828eb7b433418de8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_0461eec2225a5854815c5349f4589a7f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_37c71c1e1858550586962eebd0402a17, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_e91935e935a25e92925c73fc12d70abb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_fc20f9657e725bf08351cafa67f942f5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_65914e0d33b75100ac3a9688b9d3287f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_702b4e1af00f569682218cd107b0c550, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_3869b7ebbaee5cc5942bacb335dfaf28, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_f785904765cd586aa4ea4c69773163f7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_ced1cf6968d952b6a24bbe2b29ba2d5e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_8abc68b3330e5a8ab9dc8fbcfdf73c6d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_9c2eaee09c0a5469a9fd1b8730e6b7d3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_e1a6250753355fa4a05b4002bcc7836e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_1b3360e24f5e54899b71cfefa651a63f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_ba2eab00ca7e57d39976da792d0e12bc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_99bdb90eb3415bb28408e9f76f77e1dd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_9fba6248321658eeab8660a201a91bd6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_f72ead1c8d5c54ce904dc5b2263c5807, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_c5737fb22dd6588f8e88268cdc23806d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_d8b3f28569c05cf5af60446b784395c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_098bfb83ff51599fb4f0ca36dc27f2aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_789417489a4556c49aca0cbe83c6b3ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_7237cbf089c651bc9c5638053d230464, "");

}