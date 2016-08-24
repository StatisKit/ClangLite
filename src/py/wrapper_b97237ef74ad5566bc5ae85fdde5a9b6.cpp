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
    bool  (::clang::DeclContext::*method_pointer_2f90d8ea23945f5f97e15a52eca1fe24)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_e1c403316c9b5894b0114339735547d6)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_f602f56b897b5f85b5a417f64f6b4582)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_7f506e6a134e5f1d90e1da2c704f9670)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_2f7fe5776f125adeaeb8145f56babc31)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_a887937c6789565782cfdea23a82e841)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_1174935a7e1a5d2dba29b3b1ae5ad4d6)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_31170ca093035414a9fd11ce158a1844)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_dd1d6401bd2750ac99763802f9616e3e)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_8d73423ca697501ca5dce5561b97ab6c)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_653809691465505588a1b1914a2b75de)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_e9693d1bde245a2b9a5ff36ccda6e16e)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_58fa470d89285b6b86bdff515c59f02e)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_d8df595209445ad891c6ccc313b202ac)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_8087df24e252567c91ba28e837258378)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_33c53c58e5d35c79b451fcd25a9dedfe)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_d0c55938bdf353ffbb1ab123d6cf6ba9)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_57a9df7e4f5555fa985f1884db6453b5)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_1ad387f40d18564db931049706f3742c)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_73af3b9b9d3056b494a2f6d1599aaadf)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_8feda48bd08e509790dc563bc8cabd00)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_e0ff8c90e93458aa918fbc6c6afeb528)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_788fbe273e9f5523829c1b0ff0136afa)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_b66684f20e695864a63afe4581c9ac90)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_72f1cbf444bb53d8a0c7166a787bbf31)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_1a3dee02b8535cf7846428720ff63249)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_fa598356ce8b5dfeae28175c8affa731)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_5b8616983b01553598da2894a3792ace)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_e5272826884b512f919fb63869b8303d)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_44f6ef22bfa1500789ef53385a3c5b37)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_1492da577dc5593e91f24e603f19242a)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_1b6ccfd3ca1f5a7fbd32d2f5a4ce894d)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_dbede0d7a2395bd48d5f4ec0d001745d)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_1d6093a43c915ba592663ff97ecb6660)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_6874e83e05425efc9c573c1fb4ff0de9)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_c10e41e187c3562295c4aa88dfd407a8)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_a98ce55e18a65c9a9e376018707a8bdc)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_5f29930fb639578692457def06f1bc9d)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_f15721d0e77b5d32af95ae0a8dbe7fbd)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_3101dbc951245e229b7dc647aaead4d8)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_4a97a6bc1b27589cb550fea332023a73)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_336e1b14f107500ba272b8d85922e430)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_e8001821bfe850cd81c659de317ae97e)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_fb1843d36f1551a1b3ece13390c72719)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_f94b1c8520ea50a88f7b887c48fac59e)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_12d93c690967599483ac4b382076c85d)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_c7bc384d1e80521794a244683fb9a643)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_96c4e5c7d9275df8801bffc93a2f0048)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_048f555697535f0492389c102e2a2dd0)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_64793223fc2d5239bd6d3cac7003272d)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_50282148a55156c88f189b22c84910b7)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_e45bbad2597a56aaa919d830c8bb27e2)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_ed9de02dc82d57f9a6f31d5704c8b6f1)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_d2a9d6cf6f06514fad6243c17277bbe1)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_54158e815e9d588cb8fb16515d575a0d(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_97a96a3274ad51b4882b4a3d6bb23b43(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_d775d838dd4e5276858cde7405088df6(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_f57883188ada56518ba5d31f384474be(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_b0c4e03bb40555e2b6c7ec4dfea8d1ed(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_2f90d8ea23945f5f97e15a52eca1fe24, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_e1c403316c9b5894b0114339735547d6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_f602f56b897b5f85b5a417f64f6b4582, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_7f506e6a134e5f1d90e1da2c704f9670, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_2f7fe5776f125adeaeb8145f56babc31, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_a887937c6789565782cfdea23a82e841, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_1174935a7e1a5d2dba29b3b1ae5ad4d6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_31170ca093035414a9fd11ce158a1844, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_dd1d6401bd2750ac99763802f9616e3e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_8d73423ca697501ca5dce5561b97ab6c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_653809691465505588a1b1914a2b75de, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_e9693d1bde245a2b9a5ff36ccda6e16e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_58fa470d89285b6b86bdff515c59f02e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_d8df595209445ad891c6ccc313b202ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_8087df24e252567c91ba28e837258378, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_33c53c58e5d35c79b451fcd25a9dedfe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_d0c55938bdf353ffbb1ab123d6cf6ba9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_57a9df7e4f5555fa985f1884db6453b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_1ad387f40d18564db931049706f3742c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_73af3b9b9d3056b494a2f6d1599aaadf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_8feda48bd08e509790dc563bc8cabd00, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_e0ff8c90e93458aa918fbc6c6afeb528, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_788fbe273e9f5523829c1b0ff0136afa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_b66684f20e695864a63afe4581c9ac90, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_72f1cbf444bb53d8a0c7166a787bbf31, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_1a3dee02b8535cf7846428720ff63249, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_fa598356ce8b5dfeae28175c8affa731, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_5b8616983b01553598da2894a3792ace, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_e5272826884b512f919fb63869b8303d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_44f6ef22bfa1500789ef53385a3c5b37, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_1492da577dc5593e91f24e603f19242a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_1b6ccfd3ca1f5a7fbd32d2f5a4ce894d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_dbede0d7a2395bd48d5f4ec0d001745d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_1d6093a43c915ba592663ff97ecb6660, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_6874e83e05425efc9c573c1fb4ff0de9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_c10e41e187c3562295c4aa88dfd407a8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_a98ce55e18a65c9a9e376018707a8bdc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_5f29930fb639578692457def06f1bc9d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_f15721d0e77b5d32af95ae0a8dbe7fbd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_3101dbc951245e229b7dc647aaead4d8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_4a97a6bc1b27589cb550fea332023a73, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_336e1b14f107500ba272b8d85922e430, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_e8001821bfe850cd81c659de317ae97e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_fb1843d36f1551a1b3ece13390c72719, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_f94b1c8520ea50a88f7b887c48fac59e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_12d93c690967599483ac4b382076c85d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_c7bc384d1e80521794a244683fb9a643, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_96c4e5c7d9275df8801bffc93a2f0048, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_048f555697535f0492389c102e2a2dd0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_64793223fc2d5239bd6d3cac7003272d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_50282148a55156c88f189b22c84910b7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_e45bbad2597a56aaa919d830c8bb27e2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_ed9de02dc82d57f9a6f31d5704c8b6f1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_d2a9d6cf6f06514fad6243c17277bbe1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_54158e815e9d588cb8fb16515d575a0d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_97a96a3274ad51b4882b4a3d6bb23b43, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_d775d838dd4e5276858cde7405088df6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_f57883188ada56518ba5d31f384474be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_b0c4e03bb40555e2b6c7ec4dfea8d1ed, "");

}