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
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_4fae480e3651591da5eede4c06bbd201)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_be391c503df559fea42dcf7612d31755)() = &::clang::DeclContext::getPrimaryContext;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_e694a23824e051be9f8ecd50c046f625)() const = &::clang::DeclContext::getDeclKind;
    void  (::clang::DeclContext::*method_pointer_8a03f5eef5535015bf5281864af1841d)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_0ea700264c8f5c4aae885711b755ab80)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_ac32b8817f1752569f83c553959449a9)() const = &::clang::DeclContext::isClosure;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_56ce5bde376c5286afa3596c26554cfa)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_1f28081c2bdb564f892367a63253d78b)() const = &::clang::DeclContext::getNonClosureAncestor;
    bool  (::clang::DeclContext::*method_pointer_22be5568668e5c96bf3380fa05435880)() const = &::clang::DeclContext::isTranslationUnit;
    void  (::clang::DeclContext::*method_pointer_51215234612554c09dc67db1e5f78f94)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_487ea1e3cf345931b7455e9eb585447c)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_47e3c72ed65b5a2a9199540469bf5ed4)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    bool  (::clang::DeclContext::*method_pointer_8e7c733560705e8085b63a7289d7581f)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_178f6d181a4757afbde25c29a621a9d5)() const = &::clang::DeclContext::getLookupParent;
    bool  (::clang::DeclContext::*method_pointer_c9886337f3c1585a92f0dd52cf9f9638)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_98bd3c85df885ae88d17c932b27fc259)() const = &::clang::DeclContext::isNamespace;
    void  (::clang::DeclContext::*method_pointer_96937111717f5940a02636b7f63d245e)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (::clang::DeclContext::*method_pointer_374cb9c487d559eaadc18bd6f688f4d0)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_db049f17152754a4b8067a7029bef78a)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_418599f219c057068ecc3c16d0c70317)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_3285da40c56b5b8d83c52e3f18e9a11c)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    bool  (::clang::DeclContext::*method_pointer_dda3149613e65ac6a64bd869c0e5b613)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_1527b7d5a0e15c999f6f6a49445f93ba)() const = &::clang::DeclContext::getPrimaryContext;
    bool  (::clang::DeclContext::*method_pointer_b7e9d012ddda5fb8b7fb4c9ba56b578a)() const = &::clang::DeclContext::isDependentContext;
    void  (::clang::DeclContext::*method_pointer_2170692f29a951818c769cc94e38d866)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_30e595b7eae75c7bb167e4102a5adeef)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_f2599ef1e9065c45a7a21ab024bedf4b)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_88a6e8f591035abc8307b2f15a18a95a)() = &::clang::DeclContext::getLexicalParent;
    void  (::clang::DeclContext::*method_pointer_02d0e933c01253ea8425ecde9968803a)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    bool  (::clang::DeclContext::*method_pointer_54fee78092ef5d20a2b29f7081e842db)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_aa601f2b74775e1592413234acf4a0bc)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (*method_pointer_7ccdac6a8a045cfbbbda7f9135f198af)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_8c056f16923a50479bc0cefd36d67b36)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_f1bdbacbe60b5d08991a5480770227d5)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_95ddab1179375f67992d30d6aeafa758)() const = &::clang::DeclContext::isInlineNamespace;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_642876d1987f59c18cf0b04f6fce44ea)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_84e0adb5d95d596e85c6663fe2aa6e56)() = &::clang::DeclContext::getLookupParent;
    bool  (::clang::DeclContext::*method_pointer_56ef8a8498555402bb7bc922cf6a5df7)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_37eec101ba2350b885545b2e5839b24e)() const = &::clang::DeclContext::isStdNamespace;
    bool  (*method_pointer_74f0b614444e52b0b165c89b1c948c52)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    void  (::clang::DeclContext::*method_pointer_3af9ed5a4a1f559aae787d54cb49e86f)() const = &::clang::DeclContext::dumpLookups;
    bool  (::clang::DeclContext::*method_pointer_42ddcab22cd35648b97fa4256bdc2a48)() const = &::clang::DeclContext::decls_empty;
    bool  (::clang::DeclContext::*method_pointer_93f18e8cd44a5ce9a93b0e07d591dd29)() const = &::clang::DeclContext::isFunctionOrMethod;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_6ff96e16aa7857b28aef5d130fc8ae58)() const = &::clang::DeclContext::getParentASTContext;
    bool  (::clang::DeclContext::*method_pointer_f162d8d7ad2652a5bc33aff0bd6d979d)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_8742484dd9a055548f71b0564417abe9)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_153658fd8e0757ada935834e678e1462)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_47c9e2820fa653e0aa42458ff9bb99b9)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_b58fc3dc370d5f688d9d06cfaa87737c)() const = &::clang::DeclContext::getParent;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_e2e58da387e15b7891ed39d79fd4b24b)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    bool  (::clang::DeclContext::*method_pointer_302b29a2f6715835af4976bec0fe0a14)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_729b9054f8a75e1289390b8b22000844)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_aaacb0c7da46599d93720f21dc8df132)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    void  (::clang::DeclContext::*method_pointer_b974dd79d2a55f98bd4e3c68974645fa)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_4fae480e3651591da5eede4c06bbd201, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_be391c503df559fea42dcf7612d31755, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_e694a23824e051be9f8ecd50c046f625, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_8a03f5eef5535015bf5281864af1841d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_0ea700264c8f5c4aae885711b755ab80, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_ac32b8817f1752569f83c553959449a9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_56ce5bde376c5286afa3596c26554cfa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_1f28081c2bdb564f892367a63253d78b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_22be5568668e5c96bf3380fa05435880, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_51215234612554c09dc67db1e5f78f94, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_487ea1e3cf345931b7455e9eb585447c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_47e3c72ed65b5a2a9199540469bf5ed4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_8e7c733560705e8085b63a7289d7581f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_178f6d181a4757afbde25c29a621a9d5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_c9886337f3c1585a92f0dd52cf9f9638, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_98bd3c85df885ae88d17c932b27fc259, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_96937111717f5940a02636b7f63d245e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_374cb9c487d559eaadc18bd6f688f4d0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_db049f17152754a4b8067a7029bef78a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_418599f219c057068ecc3c16d0c70317, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_3285da40c56b5b8d83c52e3f18e9a11c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_dda3149613e65ac6a64bd869c0e5b613, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_1527b7d5a0e15c999f6f6a49445f93ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_b7e9d012ddda5fb8b7fb4c9ba56b578a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_2170692f29a951818c769cc94e38d866, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_30e595b7eae75c7bb167e4102a5adeef, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_f2599ef1e9065c45a7a21ab024bedf4b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_88a6e8f591035abc8307b2f15a18a95a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_02d0e933c01253ea8425ecde9968803a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_54fee78092ef5d20a2b29f7081e842db, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_aa601f2b74775e1592413234acf4a0bc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_7ccdac6a8a045cfbbbda7f9135f198af, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_8c056f16923a50479bc0cefd36d67b36, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_f1bdbacbe60b5d08991a5480770227d5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_95ddab1179375f67992d30d6aeafa758, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_642876d1987f59c18cf0b04f6fce44ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_84e0adb5d95d596e85c6663fe2aa6e56, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_56ef8a8498555402bb7bc922cf6a5df7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_37eec101ba2350b885545b2e5839b24e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_74f0b614444e52b0b165c89b1c948c52, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_3af9ed5a4a1f559aae787d54cb49e86f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_42ddcab22cd35648b97fa4256bdc2a48, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_93f18e8cd44a5ce9a93b0e07d591dd29, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_6ff96e16aa7857b28aef5d130fc8ae58, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_f162d8d7ad2652a5bc33aff0bd6d979d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_8742484dd9a055548f71b0564417abe9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_153658fd8e0757ada935834e678e1462, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_47c9e2820fa653e0aa42458ff9bb99b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_b58fc3dc370d5f688d9d06cfaa87737c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_e2e58da387e15b7891ed39d79fd4b24b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_302b29a2f6715835af4976bec0fe0a14, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_729b9054f8a75e1289390b8b22000844, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_aaacb0c7da46599d93720f21dc8df132, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_b974dd79d2a55f98bd4e3c68974645fa, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");

}