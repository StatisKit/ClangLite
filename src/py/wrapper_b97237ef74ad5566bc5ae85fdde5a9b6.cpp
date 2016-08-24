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
    bool  (::clang::DeclContext::*method_pointer_30c91ac4a9155e30a0357d7b530965f9)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_146b7cad82f351038a55cb8c1ddc0429)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_d8f4d28042775efc9bd6dca196ed965d)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_370aa6d0e56d53a6bb34bece07828312)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_86e3aec250df58dc9163d7e094abcbd6)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_de0691a065b15bbc9544b108c2e03851)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_27e4cc9de9a3539780937ed26b2b4dad)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_f089b1bd51ca5dbc8b969413d4fffb33)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_d178473c38e151af936a421ff65cc523)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_667ec40d693b5f78b3a9675f8b4ea2d0)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_37de228819215ad8869f36a4aff02d36)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_de49ebbf875f57309bef63508ee50ad2)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_db877bd2816e5d65bab5b4683bfc0415)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_2fc86fd0561e5bc98761c65468accd16)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_0363f7d5e58953e9a20efdee1b83fae8)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_7323cc65eb485900b2927bb8e1833379)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_13f74c2c954a5a1a9135d3d1278f9ca0)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_19ae7bedb8fe53bcb6952b7c0126e9cb)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_6037fdec74b5564bad06d797a9330d76)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_f89dbe4ec1cf5a40b53fb9d83740601f)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_bbced907f6035521bae47dc5993b1bf2)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_6254494c60cf5e2f8f6de490e2a5f3d8)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_c546374d7f005c3e8a5da81082a4dad2)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_2eb296a9eafe5672a0ef403e42c6a90f)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_2a8225c1637b571aa32b1522f9b3b399)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_31877a6e46415d9fb3db0c347477dc6b)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_a2f1ba81808f59d6b1acb3fc363e7fea)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_b29cb1f7bc1f5eeab6ea75eadc735114)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_a110fb55cba95ed7a75fbc92c64be612)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_d92198b0e6345ec691e93bf73b2dd9ec)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_854dc3ec54835d2f9a9bdc75fea6117b)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_ab8b5d3741ab57db975a70fc355af1a5)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_af86971b0b4a554e84314160cb80cb39)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_85f13ab379385a52b291671680e57ee8)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_8eff1f96d84f58509a8c8c0b12b90e24)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_2c54d340b58755d19890bafb0e5f3b42)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_448793df5f165d8b850836fa7d080038)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_944d4ffd0ed254069c45b683e31bf332)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_311c1a4f657e5e338172c2343d626aa1)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_2e97d9ba5d88546c98722bb2e7b8f624)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_71a99773bdbf546bad403cd6e0f4ddcc)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_26750cc3bb29588bafeb976c52185c97)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_371daac5cf22567ca0e2cc300f15675a)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_0abedc01e2d951fea494518ee0fbcc34)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_6c4f3c2e78b854829a99663b8d4abc18)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_2e2fb9b9144858bba962f9603458b56c)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_93ff82e1713d52dd94effa77189e650c)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_a57aea236e36590bac2872a7b1fa6fa0)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_0d8d13f0d71e53dc93d5885ada8bcefc)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_693b8eb1fac057df82f7a5c5bed15c58)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_44afbff2af1d5c889e1db7edc7d0aecd)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_fd17bb4d39a558e4aa5e637784c0994b)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_bf99d4fe86925d579aa8ad5386b593cf)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_d8c2bff5377953c9b761d9108823bbfb)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_d4c54dc3ce79569b9e1942c569223bd7(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_2cbe8af6ce0051c285edab4bcec7a1f9(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_881aea5c18b55fa98650b47c8ffb9836(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_d7d66418bff3555bb6062c9007211124(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_279ff4df59f55223a6cf1a7b002b4105(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_30c91ac4a9155e30a0357d7b530965f9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_146b7cad82f351038a55cb8c1ddc0429, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_d8f4d28042775efc9bd6dca196ed965d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_370aa6d0e56d53a6bb34bece07828312, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_86e3aec250df58dc9163d7e094abcbd6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_de0691a065b15bbc9544b108c2e03851, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_27e4cc9de9a3539780937ed26b2b4dad, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_f089b1bd51ca5dbc8b969413d4fffb33, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_d178473c38e151af936a421ff65cc523, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_667ec40d693b5f78b3a9675f8b4ea2d0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_37de228819215ad8869f36a4aff02d36, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_de49ebbf875f57309bef63508ee50ad2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_db877bd2816e5d65bab5b4683bfc0415, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_2fc86fd0561e5bc98761c65468accd16, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_0363f7d5e58953e9a20efdee1b83fae8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_7323cc65eb485900b2927bb8e1833379, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_13f74c2c954a5a1a9135d3d1278f9ca0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_19ae7bedb8fe53bcb6952b7c0126e9cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_6037fdec74b5564bad06d797a9330d76, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_f89dbe4ec1cf5a40b53fb9d83740601f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_bbced907f6035521bae47dc5993b1bf2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_6254494c60cf5e2f8f6de490e2a5f3d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_c546374d7f005c3e8a5da81082a4dad2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_2eb296a9eafe5672a0ef403e42c6a90f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_2a8225c1637b571aa32b1522f9b3b399, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_31877a6e46415d9fb3db0c347477dc6b, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_a2f1ba81808f59d6b1acb3fc363e7fea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_b29cb1f7bc1f5eeab6ea75eadc735114, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_a110fb55cba95ed7a75fbc92c64be612, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_d92198b0e6345ec691e93bf73b2dd9ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_854dc3ec54835d2f9a9bdc75fea6117b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_ab8b5d3741ab57db975a70fc355af1a5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_af86971b0b4a554e84314160cb80cb39, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_85f13ab379385a52b291671680e57ee8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_8eff1f96d84f58509a8c8c0b12b90e24, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_2c54d340b58755d19890bafb0e5f3b42, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_448793df5f165d8b850836fa7d080038, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_944d4ffd0ed254069c45b683e31bf332, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_311c1a4f657e5e338172c2343d626aa1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_2e97d9ba5d88546c98722bb2e7b8f624, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_71a99773bdbf546bad403cd6e0f4ddcc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_26750cc3bb29588bafeb976c52185c97, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_371daac5cf22567ca0e2cc300f15675a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_0abedc01e2d951fea494518ee0fbcc34, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_6c4f3c2e78b854829a99663b8d4abc18, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_2e2fb9b9144858bba962f9603458b56c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_93ff82e1713d52dd94effa77189e650c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_a57aea236e36590bac2872a7b1fa6fa0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_0d8d13f0d71e53dc93d5885ada8bcefc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_693b8eb1fac057df82f7a5c5bed15c58, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_44afbff2af1d5c889e1db7edc7d0aecd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_fd17bb4d39a558e4aa5e637784c0994b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_bf99d4fe86925d579aa8ad5386b593cf, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_d8c2bff5377953c9b761d9108823bbfb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_d4c54dc3ce79569b9e1942c569223bd7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_2cbe8af6ce0051c285edab4bcec7a1f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_881aea5c18b55fa98650b47c8ffb9836, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_d7d66418bff3555bb6062c9007211124, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_279ff4df59f55223a6cf1a7b002b4105, "");

}