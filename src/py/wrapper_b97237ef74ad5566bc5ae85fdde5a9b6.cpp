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
    bool  (::clang::DeclContext::*method_pointer_3f06e06808055be69fbf21833594b963)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_006e4c7a0f7c5723b40fe82fe38e45df)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_1fa728b071015639961c013f8f05b9bc)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_a57fecdffe4357c6858e23f72758f6db)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_c953596abba758229da1dbeaa2495990)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_3e90f78b8bb25266873f0cdae8a64afe)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_3da9d3a431a259638921f05a18e1e499)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_31c6180500d359bc85302c984d2d12f2)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_ea2aabc988f55730976446057f38064b)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_8ce4988de1fb5ba8a06bd206b9cad20a)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_8df95a9d65205007853eb2d925875b85)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_ab1c65d4c8325dd58fb050815853da84)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_d43398360d235b919bb826568b51d9e1)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_9167b2e72af05c2a899fc9dd8b314a49)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_63ad0471318154f19c0349b86368f667)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_955426a6645c5ea1b5224eb470c4bd61)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_ab67288f3e81576881c2a31b8ba8a1c8)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_5419e81880335832959855a229333b53)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_556153e94c5c5cacba3f1862555ab2c4)() = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_dc28b1e96a3a58c0ae226361e31b40e6)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_84319365af1d58378d9d117908177ce3)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_1065b994a3b25ac68cd064c60a034826)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_99b0bc442e9a5559819423b72a219fc3)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_98addfaeb054592a8148744ef8ae144c)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_6970a8fb02ba5b02a29c2a6e51697b93)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_a77ce6a78c7c566ba044a53be41d90d8)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_ee6e5518758953f5bc6f913564619c23)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_b0d239c339a25ca69ac3d91db6d304f9)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_a275370555fe51d190aae6db2c8fbcfb)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_249415b502fa552296fb02a79a0d65e0)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_872f5011b30458ebaf04b10f7b61ea7b)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_3ce643892ec953c482d84ae2a04080dc)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_cbd1389aeb9352ef81e35a893af4415d)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_637bb2bf43935656892a84f4c9a3ee98)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_4a80e0b2f9e2513086ba4f6302e15d3e)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_124692fdd6de59e5ae04bcced5f6f3de)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_f93445690ae4563b9d1ea2d6a1f96225)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_5336929e5b395e8888f1532be97ed36a)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_681fdcad90b555efa503ea23857c45ac)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_015e40f2cad35bf9bcb48adfb5f5734c)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_54973daceb1d523380e376fbd848cd92)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_a994244b71285b03b4e855d3817131cf)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_3d11057bc7b55cf9aa91f8a1a37fb735)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_5b635f34a3f35ea98b11abe37e2c8659)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_22c58d87b23955c88a4593e889df4ded)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_138ce84311825862bfebec80fcb22366)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_df85159281cd50cfae13606e57c25690)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_70476cacdf9f556a9f78b48f7bf04f36)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_6b6e518fe61a5db1a9759c659e953fa2)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_9898870f5edd5895ac31415301da78ca)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_67ef9aabe7bf5fe2a4b6ded300b36b8d)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_ba5e36e939f05faa98abc8a4d4f17000)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_29519f4dddaa5fbbbf64f1059fc7fe10)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_fa6f64eaf9095c4d912a7da8c827c28a)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_ceb6e07adf0a5318817a271c90d477cc(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_0b04cdabbb755339b546b8dee94ad2a6(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_b3b399826e19501e983953d619d3e827(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_273fe51b28dc5e698fa9fd7cd0e7aef5(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_9356569c9b2b5cd7a5b65b2247b1b60a(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_3f06e06808055be69fbf21833594b963, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_006e4c7a0f7c5723b40fe82fe38e45df, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_1fa728b071015639961c013f8f05b9bc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_a57fecdffe4357c6858e23f72758f6db, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_c953596abba758229da1dbeaa2495990, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_3e90f78b8bb25266873f0cdae8a64afe, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_3da9d3a431a259638921f05a18e1e499, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_31c6180500d359bc85302c984d2d12f2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_ea2aabc988f55730976446057f38064b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_8ce4988de1fb5ba8a06bd206b9cad20a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_8df95a9d65205007853eb2d925875b85, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_ab1c65d4c8325dd58fb050815853da84, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_d43398360d235b919bb826568b51d9e1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_9167b2e72af05c2a899fc9dd8b314a49, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_63ad0471318154f19c0349b86368f667, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_955426a6645c5ea1b5224eb470c4bd61, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_ab67288f3e81576881c2a31b8ba8a1c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_5419e81880335832959855a229333b53, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_556153e94c5c5cacba3f1862555ab2c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_dc28b1e96a3a58c0ae226361e31b40e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_84319365af1d58378d9d117908177ce3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_1065b994a3b25ac68cd064c60a034826, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_99b0bc442e9a5559819423b72a219fc3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_98addfaeb054592a8148744ef8ae144c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_6970a8fb02ba5b02a29c2a6e51697b93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_a77ce6a78c7c566ba044a53be41d90d8, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_ee6e5518758953f5bc6f913564619c23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_b0d239c339a25ca69ac3d91db6d304f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_a275370555fe51d190aae6db2c8fbcfb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_249415b502fa552296fb02a79a0d65e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_872f5011b30458ebaf04b10f7b61ea7b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_3ce643892ec953c482d84ae2a04080dc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_cbd1389aeb9352ef81e35a893af4415d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_637bb2bf43935656892a84f4c9a3ee98, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_4a80e0b2f9e2513086ba4f6302e15d3e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_124692fdd6de59e5ae04bcced5f6f3de, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_f93445690ae4563b9d1ea2d6a1f96225, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_5336929e5b395e8888f1532be97ed36a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_681fdcad90b555efa503ea23857c45ac, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_015e40f2cad35bf9bcb48adfb5f5734c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_54973daceb1d523380e376fbd848cd92, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_a994244b71285b03b4e855d3817131cf, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_3d11057bc7b55cf9aa91f8a1a37fb735, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_5b635f34a3f35ea98b11abe37e2c8659, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_22c58d87b23955c88a4593e889df4ded, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_138ce84311825862bfebec80fcb22366, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_df85159281cd50cfae13606e57c25690, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_70476cacdf9f556a9f78b48f7bf04f36, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_6b6e518fe61a5db1a9759c659e953fa2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_9898870f5edd5895ac31415301da78ca, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_67ef9aabe7bf5fe2a4b6ded300b36b8d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_ba5e36e939f05faa98abc8a4d4f17000, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_29519f4dddaa5fbbbf64f1059fc7fe10, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_fa6f64eaf9095c4d912a7da8c827c28a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_ceb6e07adf0a5318817a271c90d477cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_0b04cdabbb755339b546b8dee94ad2a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_b3b399826e19501e983953d619d3e827, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_273fe51b28dc5e698fa9fd7cd0e7aef5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_9356569c9b2b5cd7a5b65b2247b1b60a, "");

}