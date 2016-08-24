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
    bool  (::clang::DeclContext::*method_pointer_f9ef307cf27d5bdcb7d117d0cf5b3f2c)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_44b8755ffe855c089f5934b789216eb8)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_ec63e4e00b2e5285a0012693dab8609d)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_9edb1559443153a19286655eed8aecba)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_3efbcefee5435dc9a4d4a9d8b1f4c644)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_eb4547ec5482588ea7ab60116d29a1ff)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_997254d078cd591cb55008e86bb035a8)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_51a26a829cda5e9bbf26e01ddaf16421)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_12397a5e7eb5545ebd1b24b90b957399)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_c2b2543dec495e7a96c8208850de1fe9)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_a9b4682e12595535a8337115ffb817c2)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_4c2a7e7338255602b096fd8a1c2e5a3c)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_4deb38f87c625aed86b7b53bfdb0ce7c)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_4e6b0cd2575e58fa9f797512cba6ee00)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_288ebf52db8b547b9152ce7a04b8517a)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_7876f7e2ab2d581fb61398904146c181)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_fe4a86c6ac565f9bb5eee84ca277670a)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_89b42d4fa4b9569aa64baf86613c3b4d)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_52a970540a9d5e38be150f71ff44f024)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_e557fe3916d9544db9137dceab48378d)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_6d91cb4fed2452018fffbbec70245165)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_ac51ffbb0d10541d918c4cd620169534)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_ac504208e0755c31a5a2835d8882f4bc)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_df1a643435855381a2e641ccc7e6a8a3)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_a6c144b717da51dc8f1f89ecff666bc4)() = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_0aa905d8971e53989e0ff436a17663dd)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_10a429737ef55ccb91b8501f5d4a091d)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_eb6afb3d634c52cea69a42331e24b671)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_e4772162ba9c5d9abe9ab830709074d3)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_0c2f2371ac735a148dc9465b5d2c6124)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_68138606905c5eb7860632e404b4de55)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_6ac968efb20f57d780381a2c0fdfe1e4)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_3cda9a548d29592b8d376609288bf89a)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_076e780fcb3256bb98d24bd6fd3c83f5)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_c63cf2c3e883537fbf05d24c82464f13)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_555fa288953a57f78ae74960352af90f)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_301100c5c0fb5350b6f86717ee237723)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_eb6416a9dd9f5af09116a69cda083e07)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_d612b6accc03513a8ef7b8cd9568aee0)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_ae1d003140dc524f8ad03e377f802cb2)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_eb03f726f72753f6829069e358d9e571)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_63ff0be454015972bf4a380c44568700)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_2f9355a76af85f588676901c803c55ee)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_76c8c8a49c84511c9cabfe6bd9904379)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_3d740c4fa99d5e4081d859e712877e9e)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_f8f1ae8a51a75f7da3e7fa503171ba2c)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_4a5084a28e215f4482831a2bd525fddd)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_c73f98408a8d5c8b873430c93334d3dd)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_7643cad210775042b24d19e2eace6d82)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_0a81a3534fa65781a8e9ab75070f186a)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_ad830e986e895c319bcfcd9d6d806e14)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_8482f453f96255418665704ebf619c5c)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_7d4c1745b7415e2baa288f2cc6aa2c3e)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_c6553001db7b5c3a8998a25380e6ddf6)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_b301952973b85c9089accd12bb6b0107(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_85161af61cda5c05935beb2110741c4f(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_b6c662a7fe835b189522e84cd5d519dc(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_6ed3d5276bda5a5986997bf5d43a97e7(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_38b64254875256b88e53e6a50d6eade1(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_f9ef307cf27d5bdcb7d117d0cf5b3f2c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_44b8755ffe855c089f5934b789216eb8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_ec63e4e00b2e5285a0012693dab8609d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_9edb1559443153a19286655eed8aecba, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_3efbcefee5435dc9a4d4a9d8b1f4c644, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_eb4547ec5482588ea7ab60116d29a1ff, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_997254d078cd591cb55008e86bb035a8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_51a26a829cda5e9bbf26e01ddaf16421, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_12397a5e7eb5545ebd1b24b90b957399, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_c2b2543dec495e7a96c8208850de1fe9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_a9b4682e12595535a8337115ffb817c2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_4c2a7e7338255602b096fd8a1c2e5a3c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_4deb38f87c625aed86b7b53bfdb0ce7c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_4e6b0cd2575e58fa9f797512cba6ee00, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_288ebf52db8b547b9152ce7a04b8517a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_7876f7e2ab2d581fb61398904146c181, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_fe4a86c6ac565f9bb5eee84ca277670a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_89b42d4fa4b9569aa64baf86613c3b4d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_52a970540a9d5e38be150f71ff44f024, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_e557fe3916d9544db9137dceab48378d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_6d91cb4fed2452018fffbbec70245165, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_ac51ffbb0d10541d918c4cd620169534, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_ac504208e0755c31a5a2835d8882f4bc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_df1a643435855381a2e641ccc7e6a8a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_a6c144b717da51dc8f1f89ecff666bc4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_0aa905d8971e53989e0ff436a17663dd, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_10a429737ef55ccb91b8501f5d4a091d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_eb6afb3d634c52cea69a42331e24b671, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_e4772162ba9c5d9abe9ab830709074d3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_0c2f2371ac735a148dc9465b5d2c6124, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_68138606905c5eb7860632e404b4de55, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_6ac968efb20f57d780381a2c0fdfe1e4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_3cda9a548d29592b8d376609288bf89a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_076e780fcb3256bb98d24bd6fd3c83f5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_c63cf2c3e883537fbf05d24c82464f13, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_555fa288953a57f78ae74960352af90f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_301100c5c0fb5350b6f86717ee237723, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_eb6416a9dd9f5af09116a69cda083e07, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_d612b6accc03513a8ef7b8cd9568aee0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_ae1d003140dc524f8ad03e377f802cb2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_eb03f726f72753f6829069e358d9e571, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_63ff0be454015972bf4a380c44568700, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_2f9355a76af85f588676901c803c55ee, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_76c8c8a49c84511c9cabfe6bd9904379, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_3d740c4fa99d5e4081d859e712877e9e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_f8f1ae8a51a75f7da3e7fa503171ba2c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_4a5084a28e215f4482831a2bd525fddd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_c73f98408a8d5c8b873430c93334d3dd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_7643cad210775042b24d19e2eace6d82, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_0a81a3534fa65781a8e9ab75070f186a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_ad830e986e895c319bcfcd9d6d806e14, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_8482f453f96255418665704ebf619c5c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_7d4c1745b7415e2baa288f2cc6aa2c3e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_c6553001db7b5c3a8998a25380e6ddf6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_b301952973b85c9089accd12bb6b0107, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_85161af61cda5c05935beb2110741c4f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_b6c662a7fe835b189522e84cd5d519dc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_6ed3d5276bda5a5986997bf5d43a97e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_38b64254875256b88e53e6a50d6eade1, "");

}