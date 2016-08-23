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
    bool  (::clang::DeclContext::*method_pointer_83c850c1ed9e5dad9b0ba211f4fdcb39)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_29b36ea74b1057808ee9eb92a81e812c)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_47930c85638a58f4921e620ce4a28875)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_3e24d29fdec95f4495eae052c4156b57)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_57ab47e175b85a83a8ef179fcf6f6edc)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_24b3fae363155722b91c2a4c64e89b3f)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_b8ade8d7ed5a55eea5679a1a44bbe4f1)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_391b221c552255d6a75d36d160c58e1b)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_463f4fe7c5745ac2951ea4bab697d4af)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_eb8d3aadebac5517910927326a806207)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_b63c824ef4955ccaa56959eaf0a0120b)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_250bb6ce6ce0540e963bae2ae351f446)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_a0f6978630ea5bd88496c30b1c4a2078)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_72fd9195f3c25507b3184d2109df0baf)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_9809fda8392c5e2eb1c208ce4872a6c3)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_db0d541093cf54339f757a4c67c9cc21)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_51fa99c073b2578f957d8a7cb26b306c)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_1f0be0b0b51952b6af5ee1fdcc222c43)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_75402519ff1e51e0800f85d895f5a5f2)() = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_6b6c8abb0ba35ee1b278965cc8f3c6fd)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_87c808fa11b15abd8f3b8038e228eb22)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_fec49e271dc5599ca096ee946489cbe6)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_2c284ed0cfcc5a4ba2362cf759c880ab)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_00768d04ae1f5d7bb242bdad7cbb4b86)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_50380f705b1c5cb0b81b7eec6a84c574)() = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_6d0a5a4b2af757a5b42b25be3135ad9e)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_81beb4f5f39954ccb944edde6024203b)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_1dcdfad97a55571ba1e8a6681c753cda)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_6cb5f2bb4ccb5981918db394011b47fc)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_9f6e310ce5185215a8a7e5b91e58c2d5)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_d1c9cbd4334c520a98fc417be246e934)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_d988be573a965516a7bb2dc5a4168c65)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_3c6b3654e2775e72b1a559cb9002ad7c)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_f4ff18b3174b53f0b1d58c421954eb43)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_6fe88d626a3a56ab980b62fe233f2a9a)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_a6524ffb890e5f488ab942825945a27e)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_23f16098b9ae5634b3526067ad206104)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_4fcf73b2bc0f5e11b3907a5d94b98cf7)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_085446bd0126552698a30da21ab8dd9f)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_79e4e0043d0a55afb8ae8e7476c5f95e)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_82ac947f300f546db99fec9dca98ae95)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_f220a332bc6e50508a7098d2ce4c2138)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_2034beedb2bd559c85a5a06810dffda7)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_5a4f4c4e991f5d4a92fc497604a0d06c)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_ca48b700b1b652059683dfbc9fc24c42)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_06bf1d1b524c5a0b93ff1ede349e4907)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_6da514676a0e5370a0dba9617b0e0899)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_093faacc690a5b34b408f5c0a0a68237)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_bb24c08badf35533b6b912af8debded9)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_0b5b35a2c7ef543ea35cacc5df4fdd10)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_dab23669020e50418ac429760c3a61c1)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_35634c2384ba5e6fae0a77826b30259e)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_4f91932c03d85a4cb50e046f4dd899b0)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_636bfc1cfb7158249de91d091545c566)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_7f928abd24025fc1ae7155e82c778b70(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_ead80d74f7d45322853da6b0336f1124(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_315606c0aa8053369ba111d034cac854(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_bc249078534c515090f06baafb840950(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_90cd1368f85c5ac18d22f27304e383da(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_83c850c1ed9e5dad9b0ba211f4fdcb39, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_29b36ea74b1057808ee9eb92a81e812c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_47930c85638a58f4921e620ce4a28875, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_3e24d29fdec95f4495eae052c4156b57, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_57ab47e175b85a83a8ef179fcf6f6edc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_24b3fae363155722b91c2a4c64e89b3f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_b8ade8d7ed5a55eea5679a1a44bbe4f1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_391b221c552255d6a75d36d160c58e1b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_463f4fe7c5745ac2951ea4bab697d4af, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_eb8d3aadebac5517910927326a806207, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_b63c824ef4955ccaa56959eaf0a0120b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_250bb6ce6ce0540e963bae2ae351f446, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_a0f6978630ea5bd88496c30b1c4a2078, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_72fd9195f3c25507b3184d2109df0baf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_9809fda8392c5e2eb1c208ce4872a6c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_db0d541093cf54339f757a4c67c9cc21, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_51fa99c073b2578f957d8a7cb26b306c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_1f0be0b0b51952b6af5ee1fdcc222c43, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_75402519ff1e51e0800f85d895f5a5f2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_6b6c8abb0ba35ee1b278965cc8f3c6fd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_87c808fa11b15abd8f3b8038e228eb22, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_fec49e271dc5599ca096ee946489cbe6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_2c284ed0cfcc5a4ba2362cf759c880ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_00768d04ae1f5d7bb242bdad7cbb4b86, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_50380f705b1c5cb0b81b7eec6a84c574, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_6d0a5a4b2af757a5b42b25be3135ad9e, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_81beb4f5f39954ccb944edde6024203b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_1dcdfad97a55571ba1e8a6681c753cda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_6cb5f2bb4ccb5981918db394011b47fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_9f6e310ce5185215a8a7e5b91e58c2d5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_d1c9cbd4334c520a98fc417be246e934, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_d988be573a965516a7bb2dc5a4168c65, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_3c6b3654e2775e72b1a559cb9002ad7c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_f4ff18b3174b53f0b1d58c421954eb43, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_6fe88d626a3a56ab980b62fe233f2a9a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_a6524ffb890e5f488ab942825945a27e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_23f16098b9ae5634b3526067ad206104, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_4fcf73b2bc0f5e11b3907a5d94b98cf7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_085446bd0126552698a30da21ab8dd9f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_79e4e0043d0a55afb8ae8e7476c5f95e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_82ac947f300f546db99fec9dca98ae95, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_f220a332bc6e50508a7098d2ce4c2138, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_2034beedb2bd559c85a5a06810dffda7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_5a4f4c4e991f5d4a92fc497604a0d06c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_ca48b700b1b652059683dfbc9fc24c42, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_06bf1d1b524c5a0b93ff1ede349e4907, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_6da514676a0e5370a0dba9617b0e0899, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_093faacc690a5b34b408f5c0a0a68237, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_bb24c08badf35533b6b912af8debded9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_0b5b35a2c7ef543ea35cacc5df4fdd10, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_dab23669020e50418ac429760c3a61c1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_35634c2384ba5e6fae0a77826b30259e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_4f91932c03d85a4cb50e046f4dd899b0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_636bfc1cfb7158249de91d091545c566, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_7f928abd24025fc1ae7155e82c778b70, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_ead80d74f7d45322853da6b0336f1124, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_315606c0aa8053369ba111d034cac854, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_bc249078534c515090f06baafb840950, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_90cd1368f85c5ac18d22f27304e383da, "");

}