#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_b97237ef74ad5566bc5ae85fdde5a9b6()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::DeclContext::*method_pointer_f93a8338a80a51149d44e3221c77fa84)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_5b65b588c43f5e4fa62224d8be2c6a12)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_e7ed46dc072e599399eb14f234bd4863)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (*method_pointer_39e37814812056af9a8dae31f169df7a)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_60a2589fc73f506790f3cc65f0e2f6c6)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_5484261cfa7651f8abfeb51620f7c678)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_fe190a9a08025444ad6335a819ebe83d)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_9f28095d822d569f80e59c0ff688717a)() const = &::clang::DeclContext::isExternCXXContext;
    void  (::clang::DeclContext::*method_pointer_6bfd12b40ab55943bc5f5609a3f85f48)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_bc8243985bda5046bd33424ef397ca26)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_eb4b9ff3fe87556cbad24289f6d53269)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_db2559bcc6d85122bdf42264323a2fb1)() const = &::clang::DeclContext::getLexicalParent;
    bool  (::clang::DeclContext::*method_pointer_7513b929a1a352cc9e756b3202232f87)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_21273d8e78d25bcabf75e70203cdf353)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_e4edb5fb7a8656c4a866a75f4f93c94c)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    void  (::clang::DeclContext::*method_pointer_93e17779e2da563e8e8500cb487d917c)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_ea6bcbc867b65fe5ac40ab66cab30951)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_3c737a88a0495c2094d57f8c69325aaa)() = &::clang::DeclContext::getParent;
    bool  (::clang::DeclContext::*method_pointer_b8439c058e2056328d9d3ebb0e9b2f98)() const = &::clang::DeclContext::isTranslationUnit;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_2b14ad651e325c9096d0e085a29c4ac5)() const = &::clang::DeclContext::getLookupParent;
    void  (::clang::DeclContext::*method_pointer_1ee05df775765dfbb827e7a527b4a3ed)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_c669107fd702536db7c46540994f1ece)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    bool  (::clang::DeclContext::*method_pointer_4d150fbfefd15c7eaf97e0750c7aa92f)() const = &::clang::DeclContext::decls_empty;
    bool  (::clang::DeclContext::*method_pointer_0f4499d9ecc55548b8fb94acac4082fa)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_e67708e2bae95bcc8f18415bc253bda0)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_bd4dfafefafc5750b013b88d59200e15)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_4ae2570887795d7c8b14ba4df586de5e)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_ec1d00b7bee15ef8ac0c9367629d5bbe)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_2114528d9d495cbc9092d399ce8cf8f8)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_878243f726645856a2ebb888e9ca02a6)() = &::clang::DeclContext::getLexicalParent;
    void  (::clang::DeclContext::*method_pointer_eeae31fdf95f5a65a24ffe69e47d6328)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_15fab5817bc25dd98958b1cf9533ebf7)() const = &::clang::DeclContext::getParentASTContext;
    bool  (::clang::DeclContext::*method_pointer_0b015ab39f845b81925f4cda611f38f5)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_2847e3d2e425564abb4999605d14b799)() const = &::clang::DeclContext::isFunctionOrMethod;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_c4cc4b4698e256e0a83bde460150f1eb)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    bool  (::clang::DeclContext::*method_pointer_5cae389d9d105817a8869a3d4fb4d749)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_ed77ff9ea4415bfe87b7623cc59573e2)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_d1615392db79596f9bc63e7082e29854)() const = &::clang::DeclContext::getNonClosureAncestor;
    bool  (::clang::DeclContext::*method_pointer_7b457f7b034055a7924f7f14f460c9ea)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_08cf84a188745ede9c173c873d33a3ac)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    bool  (::clang::DeclContext::*method_pointer_7b7e3ed8b3165802b8a4c4ab7f4dd566)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_199ba3c02f0859b6a89889088d4c5c33)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_06fa0b1e1bfe58dda0df72d16319b71a)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_44b6be457d595a92b6b05dae938cbbab)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_7d1fe1ee4e495093b6de49ee367d69e8)() const = &::clang::DeclContext::isStdNamespace;
    bool  (*method_pointer_f24aebbb965f58639a37abbeb2b8b960)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_8beef8b593915392ad648ea4e606a0e7)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_877b88232a8555a2b438e5d7425f7f84)() = &::clang::DeclContext::getPrimaryContext;
    void  (::clang::DeclContext::*method_pointer_fbf7462661425b1aa607f3801f256668)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_ab7363410f9b54669e72d4462ee48f2b)() = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_99f09a082bba5ab9aa85e8944f1557e3)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_8ccb66ec15fa57ac8063869888ec4dfb)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    bool  (::clang::DeclContext::*method_pointer_113ae50d567358f6a840571741c3fdc1)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_b87360d757e454218de915a164bed87c)() const = &::clang::DeclContext::isObjCContainer;
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_f93a8338a80a51149d44e3221c77fa84, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_5b65b588c43f5e4fa62224d8be2c6a12, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_e7ed46dc072e599399eb14f234bd4863, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_39e37814812056af9a8dae31f169df7a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_60a2589fc73f506790f3cc65f0e2f6c6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_5484261cfa7651f8abfeb51620f7c678, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_fe190a9a08025444ad6335a819ebe83d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_9f28095d822d569f80e59c0ff688717a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_6bfd12b40ab55943bc5f5609a3f85f48, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_bc8243985bda5046bd33424ef397ca26, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_eb4b9ff3fe87556cbad24289f6d53269, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_db2559bcc6d85122bdf42264323a2fb1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_7513b929a1a352cc9e756b3202232f87, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_21273d8e78d25bcabf75e70203cdf353, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_e4edb5fb7a8656c4a866a75f4f93c94c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_93e17779e2da563e8e8500cb487d917c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_ea6bcbc867b65fe5ac40ab66cab30951, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_3c737a88a0495c2094d57f8c69325aaa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_b8439c058e2056328d9d3ebb0e9b2f98, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_2b14ad651e325c9096d0e085a29c4ac5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_1ee05df775765dfbb827e7a527b4a3ed, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_c669107fd702536db7c46540994f1ece, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_4d150fbfefd15c7eaf97e0750c7aa92f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_0f4499d9ecc55548b8fb94acac4082fa, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_e67708e2bae95bcc8f18415bc253bda0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_bd4dfafefafc5750b013b88d59200e15, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_4ae2570887795d7c8b14ba4df586de5e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_ec1d00b7bee15ef8ac0c9367629d5bbe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_2114528d9d495cbc9092d399ce8cf8f8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_878243f726645856a2ebb888e9ca02a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_eeae31fdf95f5a65a24ffe69e47d6328, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_15fab5817bc25dd98958b1cf9533ebf7, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_0b015ab39f845b81925f4cda611f38f5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_2847e3d2e425564abb4999605d14b799, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_c4cc4b4698e256e0a83bde460150f1eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_5cae389d9d105817a8869a3d4fb4d749, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_ed77ff9ea4415bfe87b7623cc59573e2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_d1615392db79596f9bc63e7082e29854, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_7b457f7b034055a7924f7f14f460c9ea, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_08cf84a188745ede9c173c873d33a3ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_7b7e3ed8b3165802b8a4c4ab7f4dd566, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_199ba3c02f0859b6a89889088d4c5c33, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_06fa0b1e1bfe58dda0df72d16319b71a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_44b6be457d595a92b6b05dae938cbbab, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_7d1fe1ee4e495093b6de49ee367d69e8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_f24aebbb965f58639a37abbeb2b8b960, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_8beef8b593915392ad648ea4e606a0e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_877b88232a8555a2b438e5d7425f7f84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_fbf7462661425b1aa607f3801f256668, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_ab7363410f9b54669e72d4462ee48f2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_99f09a082bba5ab9aa85e8944f1557e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_8ccb66ec15fa57ac8063869888ec4dfb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_113ae50d567358f6a840571741c3fdc1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_b87360d757e454218de915a164bed87c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");

}