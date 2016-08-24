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
    bool  (::clang::DeclContext::*method_pointer_af4a5cfc66135b68ad51c57e4117197b)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_37a4cef47ff057a8b0bb291d1afc1f29)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_14068e47928d5b6e91aae9111047cf75)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_ed6afda361b5523ea6658b02f8aacf89)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_7e8fc4f01a3c5c749292e88c52de1f0b)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_cc7e1916100450288f6590d6b5241f2e)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_83b4ac4d4d925bc79c31db00fc192358)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_3625014b3f2552fa9fe1c27f3b6f6fd3)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_26fe40510fb95648a54a8a5a246a2a59)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_a29b6f6904e85626b4569ef33cbf5a24)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_37f9df6502205e7ea6fd66d3eba123df)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_1ad78dcc0c6b5a41ae5ba452e4542f1c)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_e1df23fcb8c158f0a07a78a7def2edd0)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_1505501bb14d5f7f98d369cd02298854)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_320c898edd8559f09fea925a0a2b0586)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_ca534e3c7b69501d8ff20fa6688fe64d)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_5ecb49c8bb215f1999cc3c6b4d222c2b)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_6baf144befd65d2ebb2dcf781d72f99c)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_bf3d715b909e52a7a332a3e9bd88f1ff)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_f01a91c5c18e518684b0a21da72286ea)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_f8911f2d663052ab85f5e5acd50a716b)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_d2f34bd2377153fd81a2f49afdbd05ad)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_a45bfdd930a95b94959eedb1eb4f9bb7)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_62853e2fa9d65f30a927696a13e229af)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_c91db3916b645aa2ab9a680c02411ab2)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_f64e7891c1dc58aa88d9d046553f724c)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_09a03f2af5ff5a8d9e832167e7aeeb69)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_cd2e887ef36f5db8867a1e9e236e4ae6)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_4d567af5578b5299a758d374d6a93b8e)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_eef8ddad3b165d49b485c2071184a78e)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_dd1bfb14778d5ee1ae4732bf6394a91a)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_d3e968deeb4356ae8bd0ef6522b5dcf4)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_06b9015b1c5d5c41beafeb6a2641e083)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_4cba6f40d6a35bce9e73c8dc3db24962)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_1f0ee7c5e91956fd81f2e548482f3cf1)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_74f47696ce2a596eadeb2e3f5f070d4d)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_9ec0074c6ac2593299546e3eb8302e5a)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_ac414759fe165b50b463bf311e0373a0)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_170ce223336d5c08936738dd6ac8aea0)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_e57034b13bcc5370919fc7a91aeaca82)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_ad73b18844a25a5385e62105cd7df622)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_79a1517c28915f64a05178f6f9d973d2)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_6e3be15c30f15cd0a38974782750f754)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_38e6e8db58725f3fa93a4b7c7795d672)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_af67a383721f5562b1a7e295aa493859)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_397615c81cdd5e538a20f43069e74f5f)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_cfc1c723bd915286971d86ad48740222)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_7854575cca5959acbff3b4af5ede8630)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_a4fc002078c85585a05c97a81937ecd8)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_447f28be72fb50d3b7e6baf81f12db07)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_bc519bb515365c779be46fc08bbce28a)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_ea4b7f8bee6752d9bd977c3dc24d35bc)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_f47da9d011b45430a6055ca24055008c)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_37205b979c8b5225b4f16e5161fda39b)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_53d9e0ae3c8d5939b823d491ea4ce701(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_c61b1c2940a35b448e02cea5c0caae9e(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_e739ae85088556bcae184feb99381509(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_fa4b016f28d256259a28a0f4e9b01b60(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_b4ec153884b85bd1a88362e7078480a8(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_af4a5cfc66135b68ad51c57e4117197b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_37a4cef47ff057a8b0bb291d1afc1f29, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_14068e47928d5b6e91aae9111047cf75, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_ed6afda361b5523ea6658b02f8aacf89, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_7e8fc4f01a3c5c749292e88c52de1f0b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_cc7e1916100450288f6590d6b5241f2e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_83b4ac4d4d925bc79c31db00fc192358, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_3625014b3f2552fa9fe1c27f3b6f6fd3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_26fe40510fb95648a54a8a5a246a2a59, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_a29b6f6904e85626b4569ef33cbf5a24, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_37f9df6502205e7ea6fd66d3eba123df, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_1ad78dcc0c6b5a41ae5ba452e4542f1c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_e1df23fcb8c158f0a07a78a7def2edd0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_1505501bb14d5f7f98d369cd02298854, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_320c898edd8559f09fea925a0a2b0586, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_ca534e3c7b69501d8ff20fa6688fe64d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_5ecb49c8bb215f1999cc3c6b4d222c2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_6baf144befd65d2ebb2dcf781d72f99c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_bf3d715b909e52a7a332a3e9bd88f1ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_f01a91c5c18e518684b0a21da72286ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_f8911f2d663052ab85f5e5acd50a716b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_d2f34bd2377153fd81a2f49afdbd05ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_a45bfdd930a95b94959eedb1eb4f9bb7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_62853e2fa9d65f30a927696a13e229af, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_c91db3916b645aa2ab9a680c02411ab2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_f64e7891c1dc58aa88d9d046553f724c, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_09a03f2af5ff5a8d9e832167e7aeeb69, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_cd2e887ef36f5db8867a1e9e236e4ae6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_4d567af5578b5299a758d374d6a93b8e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_eef8ddad3b165d49b485c2071184a78e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_dd1bfb14778d5ee1ae4732bf6394a91a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_d3e968deeb4356ae8bd0ef6522b5dcf4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_06b9015b1c5d5c41beafeb6a2641e083, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_4cba6f40d6a35bce9e73c8dc3db24962, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_1f0ee7c5e91956fd81f2e548482f3cf1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_74f47696ce2a596eadeb2e3f5f070d4d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_9ec0074c6ac2593299546e3eb8302e5a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_ac414759fe165b50b463bf311e0373a0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_170ce223336d5c08936738dd6ac8aea0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_e57034b13bcc5370919fc7a91aeaca82, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_ad73b18844a25a5385e62105cd7df622, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_79a1517c28915f64a05178f6f9d973d2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_6e3be15c30f15cd0a38974782750f754, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_38e6e8db58725f3fa93a4b7c7795d672, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_af67a383721f5562b1a7e295aa493859, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_397615c81cdd5e538a20f43069e74f5f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_cfc1c723bd915286971d86ad48740222, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_7854575cca5959acbff3b4af5ede8630, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_a4fc002078c85585a05c97a81937ecd8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_447f28be72fb50d3b7e6baf81f12db07, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_bc519bb515365c779be46fc08bbce28a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_ea4b7f8bee6752d9bd977c3dc24d35bc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_f47da9d011b45430a6055ca24055008c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_37205b979c8b5225b4f16e5161fda39b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_53d9e0ae3c8d5939b823d491ea4ce701, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_c61b1c2940a35b448e02cea5c0caae9e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_e739ae85088556bcae184feb99381509, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_fa4b016f28d256259a28a0f4e9b01b60, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_b4ec153884b85bd1a88362e7078480a8, "");

}