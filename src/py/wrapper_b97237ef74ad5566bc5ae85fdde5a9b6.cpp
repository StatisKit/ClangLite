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
    bool  (::clang::DeclContext::*method_pointer_749945097c685a68bbf54c0786beaf66)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_c6c5104fad81589788df57c6204cda38)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_a73a35e40c695c9198a8e62af76c0ab1)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_5267ae338ccd54e8a88e727f157ec6f8)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_05763d234d8753c395edce3229542169)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_aa424230583357db80b99abc3f0e3d5f)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_8369e6960bb95f6bb4a5bce415324b58)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_6c278daf20935a409560a57d34aa1d9f)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_e5d90b957b695005b5b5e742a93347c8)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_2b6062ecabba5a51b73590256926144e)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_121c3d00543c5485b6ecc3db11a8532d)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_2af0eb9e9f2b5815aba61d20bc7645ad)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_a866074a8baa50e79a69c80a29d41c97)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_379826d5c454502eb4dec600839ecdb7)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_df7b2fb424545f76ab036ca8281dd169)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_aafb42356ce35eb8a83a4ea86288ce4c)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_7314b22ceb4057f586d21004bf283282)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_3b29f3d4920d5036a2f49ce73304c2af)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_2cef81117868528daa92322691386899)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_8c34a777b3585ea6a1bcc15a108ffbca)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_fd88149147655d7fb1831734d956f3d4)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_8fb7b6a8f98e51ff9eb817241c92e7a2)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_888c15a1ed205363af57eb58c93c08de)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_433110325e77578b917c0ac0d3d12bca)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_5acf6dc270f7563c9fd9724552c9da45)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_3018e6ac62905cf999721e8252068b78)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_da9022f69d315f17b836c71f48223917)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_9e1565c288d35d9092b7309a0dc35585)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_d13ee65ec42f57ef862755445e945c5f)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_9b3faec647395cec9ccd111786f2c84b)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_150bfe85ce0557d9954300c18e570b6e)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_bd15efa97b805536b525033d8a35dee2)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_90b9a1e790c15347b415af7aea9900dc)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_bdf3e7bbded05acebe3252a75cd951d3)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_49b67704ef785b6b8627284cc5ef5342)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_5aea6d2befcd5349a191051a83254ed6)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_11e940d7c3ea590faf50dd4449187fe7)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_080ff05b9d5d506ab69e5487011e696e)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_1516ecf6f2845e5084afd0ad5f06dc21)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_ee9812e9ed225cc080711fb0cdeaef76)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_b05e3713cd475e6d940b5a29da1db770)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_4dab63d3691951b6b475a7ac66a4de0a)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_b869805fcc0a59ff987144b3b748e9b7)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_15106715b71552239e1a3c1f261f49d8)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_c76a6b28a054508598821959fd341f75)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_a7f647b6e9b25fe88f4fd29ca7e9bbb8)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_1f8fe19158d653e0b0b181f7a7bc00fb)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_bf7ca40843ad5db2844e61c246db63a8)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_f17ca5b1d036560bb66439a2f2d46252)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_53c80b00edc65d06a2786973fe6f8844)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_3bf331ba7ad5567da59ceb1826683a9b)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::boost::python::list  function_23cb0cbd440555d484e5f4b54c5ece83(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_749945097c685a68bbf54c0786beaf66, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_c6c5104fad81589788df57c6204cda38, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_a73a35e40c695c9198a8e62af76c0ab1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_5267ae338ccd54e8a88e727f157ec6f8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_05763d234d8753c395edce3229542169, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_aa424230583357db80b99abc3f0e3d5f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_8369e6960bb95f6bb4a5bce415324b58, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_6c278daf20935a409560a57d34aa1d9f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_e5d90b957b695005b5b5e742a93347c8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_2b6062ecabba5a51b73590256926144e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_121c3d00543c5485b6ecc3db11a8532d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_2af0eb9e9f2b5815aba61d20bc7645ad, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_a866074a8baa50e79a69c80a29d41c97, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_379826d5c454502eb4dec600839ecdb7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_df7b2fb424545f76ab036ca8281dd169, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_aafb42356ce35eb8a83a4ea86288ce4c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_7314b22ceb4057f586d21004bf283282, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_3b29f3d4920d5036a2f49ce73304c2af, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_2cef81117868528daa92322691386899, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_8c34a777b3585ea6a1bcc15a108ffbca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_fd88149147655d7fb1831734d956f3d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_8fb7b6a8f98e51ff9eb817241c92e7a2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_888c15a1ed205363af57eb58c93c08de, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_433110325e77578b917c0ac0d3d12bca, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_5acf6dc270f7563c9fd9724552c9da45, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_3018e6ac62905cf999721e8252068b78, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_da9022f69d315f17b836c71f48223917, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_9e1565c288d35d9092b7309a0dc35585, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_d13ee65ec42f57ef862755445e945c5f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_9b3faec647395cec9ccd111786f2c84b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_150bfe85ce0557d9954300c18e570b6e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_bd15efa97b805536b525033d8a35dee2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_90b9a1e790c15347b415af7aea9900dc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_bdf3e7bbded05acebe3252a75cd951d3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_49b67704ef785b6b8627284cc5ef5342, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_5aea6d2befcd5349a191051a83254ed6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_11e940d7c3ea590faf50dd4449187fe7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_080ff05b9d5d506ab69e5487011e696e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_1516ecf6f2845e5084afd0ad5f06dc21, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_ee9812e9ed225cc080711fb0cdeaef76, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_b05e3713cd475e6d940b5a29da1db770, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_4dab63d3691951b6b475a7ac66a4de0a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_b869805fcc0a59ff987144b3b748e9b7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_15106715b71552239e1a3c1f261f49d8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_c76a6b28a054508598821959fd341f75, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_a7f647b6e9b25fe88f4fd29ca7e9bbb8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_1f8fe19158d653e0b0b181f7a7bc00fb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_bf7ca40843ad5db2844e61c246db63a8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_f17ca5b1d036560bb66439a2f2d46252, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_53c80b00edc65d06a2786973fe6f8844, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_3bf331ba7ad5567da59ceb1826683a9b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_23cb0cbd440555d484e5f4b54c5ece83, "");

}