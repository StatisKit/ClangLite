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
    bool  (::clang::DeclContext::*method_pointer_46d31a880dec5cb48b7994096f858b73)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_e71a1a2a850352e0a526c0952de2b56e)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_b330609bcec2500582589b429dd234d9)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_e9eb2a22ca085c44bb9f6f871c3f802c)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_1d80325bbbcc53efa70bd2d90f1ed40a)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_65b1ded8768251938c5e5c3332316503)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_f166d5bdd7cd55c9b251164828f115da)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_9420aedbed0d5884b424b7505cc649b7)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_3cafc5cb3ca658ed985efd961eca5be3)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_114bd410a1855335a6b2ee6eedceb708)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_7f2cc2e7f7825d23afe244915932adb6)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_75b14a19396e58ae826720ca1bc7eeec)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_98a8de4ff65f58d5ad8299f4cd59a700)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_bf6e7cf0a72c5ae89e0911e50d90e7d4)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_f5da5bacf9285632b18863929fa1affe)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_9df14d1c4d485a6ca1ceafc179ce4355)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_26701dba56eb5846a344104b51f3eb42)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_05f030540558556e859c05fad421fb07)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_9847ac97eafc5e549d825086917d8969)() = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_7a594552e0bd52e7b430e9ad44d6faea)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_b9c323a858235792ab38b950e91440b3)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_3446f7bf8a0252c4bc2708379ddca51e)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_d84bf831ed155933adc128f3370de19c)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_869810dfdb30577e8fee05c69fe74ade)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_b3136028bea85936aa5fde0be7841bf8)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_e2f62aadff5c5627817db8fd2677e2a3)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_3cb2087db1ee52008d58a17ea2ede6e5)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_7ad0dd3b50595724bab62e20661e43ff)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_d34b8d3859205a6ba8c1ec723afe95e1)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_160df62b9bee58d291138397ef3cc26b)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_51b3c735010b541ba4e57ee70b1b78af)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_26d4f453631a531184eeef47f89efcc4)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_ad73da9735c25f8a81cea549337169ce)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_271199f2b9ca5ede8edf56ca9a28cf74)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_d06b356cc0735f8fba4bfaf8a05f4fee)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_3a0562ab2e8c57fc96111c5bba345f41)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_876823add26b54998765c695d5e9101d)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_4186e2b9cf1752e1a674c5d3a04d9ba0)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_7a889f74fc235e4083529deb1ebb5a3d)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_a06a1ac5da3f5a43a6964baa7b650c41)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_c62734afbd065e0c8619436e9b3eb7a1)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_7ac1c81d6f1b51d09811ce70962f3678)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_71f7707c43b35e3f9f7709b6e6cd498c)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_1f30fe8697245e4ea29cd0386616d51e)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_c0061366c6af58ab8d3f2591d27b124c)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_df478de674c85fee982bcffaf7eda014)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_59f7fbff21a0506cb3ae27b24cfa8796)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_824c7eb7983e5fc6be38514747bad42f)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_0040eaa75daa5dd59355d4f7052d1196)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_3610d0d0d8ae538c842bfe60dd3b7600)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_42eba8679d0f5b3d88e0682b7151f654)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_d40cb14d314350108a544825badb92b6)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_0c4e3398fa8e5170951dbfe864ff8707)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_be94733d708952b2979454f1ab2bc764)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_3a55c995d0c15622bd6249f507b9e2ce(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_488e2a76a37e59b3a2cf6fc582cbe8b6(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_8d1eb906833c5adb937711917be6eeaa(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_903b448d91da5cb3a229a3d87d18aa3d(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_e1d0431b49305a7f81aee43c748e9894(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_46d31a880dec5cb48b7994096f858b73, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_e71a1a2a850352e0a526c0952de2b56e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_b330609bcec2500582589b429dd234d9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_e9eb2a22ca085c44bb9f6f871c3f802c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_1d80325bbbcc53efa70bd2d90f1ed40a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_65b1ded8768251938c5e5c3332316503, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_f166d5bdd7cd55c9b251164828f115da, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_9420aedbed0d5884b424b7505cc649b7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_3cafc5cb3ca658ed985efd961eca5be3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_114bd410a1855335a6b2ee6eedceb708, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_7f2cc2e7f7825d23afe244915932adb6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_75b14a19396e58ae826720ca1bc7eeec, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_98a8de4ff65f58d5ad8299f4cd59a700, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_bf6e7cf0a72c5ae89e0911e50d90e7d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_f5da5bacf9285632b18863929fa1affe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_9df14d1c4d485a6ca1ceafc179ce4355, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_26701dba56eb5846a344104b51f3eb42, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_05f030540558556e859c05fad421fb07, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_9847ac97eafc5e549d825086917d8969, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_7a594552e0bd52e7b430e9ad44d6faea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_b9c323a858235792ab38b950e91440b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_3446f7bf8a0252c4bc2708379ddca51e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_d84bf831ed155933adc128f3370de19c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_869810dfdb30577e8fee05c69fe74ade, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_b3136028bea85936aa5fde0be7841bf8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_e2f62aadff5c5627817db8fd2677e2a3, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_3cb2087db1ee52008d58a17ea2ede6e5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_7ad0dd3b50595724bab62e20661e43ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_d34b8d3859205a6ba8c1ec723afe95e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_160df62b9bee58d291138397ef3cc26b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_51b3c735010b541ba4e57ee70b1b78af, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_26d4f453631a531184eeef47f89efcc4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_ad73da9735c25f8a81cea549337169ce, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_271199f2b9ca5ede8edf56ca9a28cf74, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_d06b356cc0735f8fba4bfaf8a05f4fee, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_3a0562ab2e8c57fc96111c5bba345f41, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_876823add26b54998765c695d5e9101d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_4186e2b9cf1752e1a674c5d3a04d9ba0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_7a889f74fc235e4083529deb1ebb5a3d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_a06a1ac5da3f5a43a6964baa7b650c41, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_c62734afbd065e0c8619436e9b3eb7a1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_7ac1c81d6f1b51d09811ce70962f3678, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_71f7707c43b35e3f9f7709b6e6cd498c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_1f30fe8697245e4ea29cd0386616d51e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_c0061366c6af58ab8d3f2591d27b124c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_df478de674c85fee982bcffaf7eda014, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_59f7fbff21a0506cb3ae27b24cfa8796, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_824c7eb7983e5fc6be38514747bad42f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_0040eaa75daa5dd59355d4f7052d1196, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_3610d0d0d8ae538c842bfe60dd3b7600, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_42eba8679d0f5b3d88e0682b7151f654, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_d40cb14d314350108a544825badb92b6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_0c4e3398fa8e5170951dbfe864ff8707, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_be94733d708952b2979454f1ab2bc764, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_3a55c995d0c15622bd6249f507b9e2ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_488e2a76a37e59b3a2cf6fc582cbe8b6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_8d1eb906833c5adb937711917be6eeaa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_903b448d91da5cb3a229a3d87d18aa3d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_e1d0431b49305a7f81aee43c748e9894, "");

}