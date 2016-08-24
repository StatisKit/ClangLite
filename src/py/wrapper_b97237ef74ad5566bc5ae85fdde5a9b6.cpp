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
    bool  (::clang::DeclContext::*method_pointer_1bb3b0251c2758fdb8be200f872d34d0)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_97c00f5f868d509eb317a0df4b25ed73)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_ea655d8342f05c7b8adf10f8230c10a4)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_4909c3e2094d5b7c9eb461a16f9db9f6)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_468a3ddef31f5376a5472e0b037814ef)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_c1f1536a924c5fd9ad3168e58b9020ee)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_f7338a0eae0151d6a480f7c8e50b7c0a)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_29ae03f8181d54f2a1636201a701f924)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_8d320ba1bf765feb874a0abaad4f3f88)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_74cc1303418f5802bc151ec31781fb7b)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_d0096bd935a75a8b9d184d61d530c194)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_15909fdf4ac750d79a2784008ec73330)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_be9b565fcf7a552e8115f1bc31516045)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_4fcc0ca086e85548bb6020d20466a2ec)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_66496e1e297e53ae9c16bb855c516c45)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_41a441c9047259ad9c13ef83dd02b725)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_e6a8f9f74256526db05872e9b5ba5923)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_64e750d916de5fe48d05c14ddfcee23a)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_4eb1d6ab73585e7a8ed14d7920c8485b)() = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_3043171509035be1bc6f77f0f0a1c092)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_fd8d11f2ec3851e491cf9be6290fbe68)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_94965195b96e51229b92888c55debb89)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_1bee4cd7a6745aa78a19a69d99229fa7)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_8904b8ba6daf5f62b7ba3f5b7fe26b33)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_648067a7647654a1bf79f532872cfb60)() = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_2d15bce12c955f739b032ce91cb5cafb)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_8d72bc19a17a5b81a3876f1bf0e14453)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_cd30e56ed4f95c928c7fd58b6d003fb7)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_1959d30ea1245c1eafdc35463f32ac8c)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_d8185f8f4b0352edad177a9496b8f786)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_830afee2745f588f9b91f1713e94c26a)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_fc76b58c444d508f8311845486003204)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_4d1af7a798af5a5e8b99d2ead5575b83)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_6de8fed433315953ac681f33db497684)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_f758dacb688257efb90e391f5e0caee6)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_aee1de9f97e4509397cda32b284e979e)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_b2c24188c8225fed9789daacc821cfd5)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_574c115a72fd5277ae7fa3e0e257ae86)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_3da454c3e6f8579e91a1f346b82b9f91)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_60101fd5e6d25b54aeed0c19727aaeb9)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_e3a93b1a9ef95a05b3e7508ff0954dac)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_3c162131c9735d99a9f2e8c283a08833)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_a4a000d75017558b8db1d2e05ef1c9ef)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_31df9fc5079a54ac86f59bf9fb48ff77)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_34268364fd645323a2c40c9900cd4686)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_1aabeb2aab2057e4873e7f80d6716bcb)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_2c95a58d69ce5d03ab07308f46ea655a)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_f2e4aa9e543d5c5799ca6c5547a065b1)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_b27f3fe74d0c50929a519887600ea6cf)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_bd9ed412079f5cbd90b7f5f32c2041f9)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_c37aec7da1125812bd4c6223e75c67d7)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_a650367fb016560ab7dd701eb4dd75c6)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_8af5efdfd6cf5e0ab374ba6df74d4a13)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_bd0387f787945a29b63001beb4be9f5c)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_7738aeeda57450f298fcd4ee0031b0cb(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_2afe593857a65c15bfcff198c9aad3c6(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_219024ceae355cd7b9773ec3edc1875c(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_3f210c969e4f5772a3dcf25d74d2f757(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_56f0071f44fc5c13b2207be730927db4(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_1bb3b0251c2758fdb8be200f872d34d0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_97c00f5f868d509eb317a0df4b25ed73, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_ea655d8342f05c7b8adf10f8230c10a4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_4909c3e2094d5b7c9eb461a16f9db9f6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_468a3ddef31f5376a5472e0b037814ef, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_c1f1536a924c5fd9ad3168e58b9020ee, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_f7338a0eae0151d6a480f7c8e50b7c0a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_29ae03f8181d54f2a1636201a701f924, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_8d320ba1bf765feb874a0abaad4f3f88, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_74cc1303418f5802bc151ec31781fb7b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_d0096bd935a75a8b9d184d61d530c194, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_15909fdf4ac750d79a2784008ec73330, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_be9b565fcf7a552e8115f1bc31516045, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_4fcc0ca086e85548bb6020d20466a2ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_66496e1e297e53ae9c16bb855c516c45, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_41a441c9047259ad9c13ef83dd02b725, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_e6a8f9f74256526db05872e9b5ba5923, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_64e750d916de5fe48d05c14ddfcee23a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_4eb1d6ab73585e7a8ed14d7920c8485b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_3043171509035be1bc6f77f0f0a1c092, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_fd8d11f2ec3851e491cf9be6290fbe68, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_94965195b96e51229b92888c55debb89, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_1bee4cd7a6745aa78a19a69d99229fa7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_8904b8ba6daf5f62b7ba3f5b7fe26b33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_648067a7647654a1bf79f532872cfb60, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_2d15bce12c955f739b032ce91cb5cafb, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_8d72bc19a17a5b81a3876f1bf0e14453, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_cd30e56ed4f95c928c7fd58b6d003fb7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_1959d30ea1245c1eafdc35463f32ac8c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_d8185f8f4b0352edad177a9496b8f786, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_830afee2745f588f9b91f1713e94c26a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_fc76b58c444d508f8311845486003204, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_4d1af7a798af5a5e8b99d2ead5575b83, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_6de8fed433315953ac681f33db497684, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_f758dacb688257efb90e391f5e0caee6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_aee1de9f97e4509397cda32b284e979e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_b2c24188c8225fed9789daacc821cfd5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_574c115a72fd5277ae7fa3e0e257ae86, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_3da454c3e6f8579e91a1f346b82b9f91, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_60101fd5e6d25b54aeed0c19727aaeb9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_e3a93b1a9ef95a05b3e7508ff0954dac, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_3c162131c9735d99a9f2e8c283a08833, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_a4a000d75017558b8db1d2e05ef1c9ef, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_31df9fc5079a54ac86f59bf9fb48ff77, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_34268364fd645323a2c40c9900cd4686, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_1aabeb2aab2057e4873e7f80d6716bcb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_2c95a58d69ce5d03ab07308f46ea655a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_f2e4aa9e543d5c5799ca6c5547a065b1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_b27f3fe74d0c50929a519887600ea6cf, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_bd9ed412079f5cbd90b7f5f32c2041f9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_c37aec7da1125812bd4c6223e75c67d7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_a650367fb016560ab7dd701eb4dd75c6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_8af5efdfd6cf5e0ab374ba6df74d4a13, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_bd0387f787945a29b63001beb4be9f5c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_7738aeeda57450f298fcd4ee0031b0cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_2afe593857a65c15bfcff198c9aad3c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_219024ceae355cd7b9773ec3edc1875c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_3f210c969e4f5772a3dcf25d74d2f757, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_56f0071f44fc5c13b2207be730927db4, "");

}