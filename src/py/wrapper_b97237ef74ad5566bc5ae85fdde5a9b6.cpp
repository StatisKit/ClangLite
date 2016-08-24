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
    bool  (::clang::DeclContext::*method_pointer_223a46d4701c5e33a74dc977736efdac)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_21cdab23dde95bf6a14f83e3dfb3547a)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_cb5054b0812857b081f04451e6249b6e)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_d791def8b8a0543f9a26e962cf8a3691)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_6f68d0655e04566686e27daa08680341)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_1855753409a55285bd306f50f7b2a22b)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_d2993ea2ac485882a07f2c964e439f62)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_d02a52f7527a5fa0a6de64b3323af1c1)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_8cf8947e3b005dcf917f7384f65fb146)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_da6841f2ef9b5b38b8317fdae35c0276)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_5dcb5605f5e45df1ba8b7cd4dd9edd8d)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_34a6276cdbfc5886afca76fd513c2d6f)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_9a7fe09e3c5f5601bcd1da3df0b75674)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_a11b7a8788a855918abaa2685b706b24)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_affaa1a95fab5277b0ed3b495cdb581a)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_f2c7bb8112f75c8181b51aa97950654b)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_f380904afd085141a492375a8e1934aa)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_ef3aecb17c895fedbaf6f2e67e703968)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_670981487b7f501693847a4ebb1ceb7a)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_98063933d650542994052d32808275e0)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_52dfd70826fd5e0fa5bbb90b28e2e99f)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_24b4b37a5cf95dc59bc8a52750e536e0)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_03c35af8c5d45ea1a9a18e15b7bda00e)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_65d1a700835e5c589800bb61f5b18f71)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_67d7200101375b78b76c8bd14194c444)() = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_9c04fa88dde7530f98ebd694d44a4162)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_d37fdb80385f545b9b4fb284c9df717a)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_292d4f32c5a6570b8cbded98e74c7478)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_a53b23dc6dde54b1b15ac0e40334feed)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_8e2c48303c1f53df9b9e21d3ed12d085)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_e16b8a78ef365a32adc3adf30e2d23f8)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_a86a56ec985556949b26298a569557a9)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_bc0ab9c4a804577095eb9ba63099da08)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_73c65aaf91005edba103b782c9fa696d)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_b79ada8b496556c3a5256295431a221b)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_d5b359048ee0539f81bcb3c3615d31d4)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_22e64ba488a252e4b0afff445f0221b4)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_ee1d53d4fe395f94b3122b27c6d1ffec)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_770f12b3ec0a58b4a58c443a17bb7aad)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_82daf5057ece5014b61a62f9dd4f3a82)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_9c111571632052e3b8f337d46fd6fa98)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_f43bc43c9fa25f2c9c31b316c0f6b471)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_4b6ed891600f5f5197650886abe333a4)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_21b756b17163576893de5204ca4d3b37)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_c4e240fc38d15bdcbfea7c532a501f46)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_f44b4d7b954453acb2c3f66dcfa1b5ff)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_7304e097b50e55fe850f6b15b1a22dd4)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_39192a48837f565f9c1a4b2d3a9a793f)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_807235a209f7508b8ed77de948c5cda0)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_27829ac1c4b4573dba8e2ca9e7bb18fe)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_3bd922a611b956bdbdc05bd63cdb13e1)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_be399a7011425d27be055df3346d5a75)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_d7df7135adbe5124a83637c5a56cea91)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_854b17cd437b5352a6b117f331fba867)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_531136d7586956b69e00d929488ae3ea(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_2b3e66f0d6825d1890c64360017f2310(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_94f9c5c2ffec5456a1d250fadb870ec4(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_1ee0be9b945a5982a1f59e79442e123f(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_ccb267f2b213508fada7a19e4ac0acfb(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_223a46d4701c5e33a74dc977736efdac, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_21cdab23dde95bf6a14f83e3dfb3547a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_cb5054b0812857b081f04451e6249b6e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_d791def8b8a0543f9a26e962cf8a3691, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_6f68d0655e04566686e27daa08680341, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_1855753409a55285bd306f50f7b2a22b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_d2993ea2ac485882a07f2c964e439f62, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_d02a52f7527a5fa0a6de64b3323af1c1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_8cf8947e3b005dcf917f7384f65fb146, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_da6841f2ef9b5b38b8317fdae35c0276, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_5dcb5605f5e45df1ba8b7cd4dd9edd8d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_34a6276cdbfc5886afca76fd513c2d6f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_9a7fe09e3c5f5601bcd1da3df0b75674, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_a11b7a8788a855918abaa2685b706b24, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_affaa1a95fab5277b0ed3b495cdb581a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_f2c7bb8112f75c8181b51aa97950654b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_f380904afd085141a492375a8e1934aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_ef3aecb17c895fedbaf6f2e67e703968, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_670981487b7f501693847a4ebb1ceb7a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_98063933d650542994052d32808275e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_52dfd70826fd5e0fa5bbb90b28e2e99f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_24b4b37a5cf95dc59bc8a52750e536e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_03c35af8c5d45ea1a9a18e15b7bda00e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_65d1a700835e5c589800bb61f5b18f71, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_67d7200101375b78b76c8bd14194c444, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_9c04fa88dde7530f98ebd694d44a4162, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_d37fdb80385f545b9b4fb284c9df717a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_292d4f32c5a6570b8cbded98e74c7478, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_a53b23dc6dde54b1b15ac0e40334feed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_8e2c48303c1f53df9b9e21d3ed12d085, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_e16b8a78ef365a32adc3adf30e2d23f8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_a86a56ec985556949b26298a569557a9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_bc0ab9c4a804577095eb9ba63099da08, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_73c65aaf91005edba103b782c9fa696d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_b79ada8b496556c3a5256295431a221b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_d5b359048ee0539f81bcb3c3615d31d4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_22e64ba488a252e4b0afff445f0221b4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_ee1d53d4fe395f94b3122b27c6d1ffec, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_770f12b3ec0a58b4a58c443a17bb7aad, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_82daf5057ece5014b61a62f9dd4f3a82, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_9c111571632052e3b8f337d46fd6fa98, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_f43bc43c9fa25f2c9c31b316c0f6b471, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_4b6ed891600f5f5197650886abe333a4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_21b756b17163576893de5204ca4d3b37, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_c4e240fc38d15bdcbfea7c532a501f46, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_f44b4d7b954453acb2c3f66dcfa1b5ff, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_7304e097b50e55fe850f6b15b1a22dd4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_39192a48837f565f9c1a4b2d3a9a793f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_807235a209f7508b8ed77de948c5cda0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_27829ac1c4b4573dba8e2ca9e7bb18fe, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_3bd922a611b956bdbdc05bd63cdb13e1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_be399a7011425d27be055df3346d5a75, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_d7df7135adbe5124a83637c5a56cea91, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_854b17cd437b5352a6b117f331fba867, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_531136d7586956b69e00d929488ae3ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_2b3e66f0d6825d1890c64360017f2310, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_94f9c5c2ffec5456a1d250fadb870ec4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_1ee0be9b945a5982a1f59e79442e123f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_ccb267f2b213508fada7a19e4ac0acfb, "");

}