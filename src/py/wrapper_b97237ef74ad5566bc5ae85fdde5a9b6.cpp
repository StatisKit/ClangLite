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
    bool  (::clang::DeclContext::*method_pointer_276252d2c6b35aef93c7bca5038273b0)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_4f0f0f35c84355a3bf1c007392281a28)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_36dcf4beab395a3ba7837283e5b35baf)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_ac7f6c91cb995a8ca2b409b9002a77e9)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_bcbff1ff2fd354d68ca6cfeacdd7a52a)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_1cd287f4b7555c93a5142242481a26c4)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_3c0ab77cdd3758a28745cf7fbca49c47)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_e77cf0fc708657c68ec41306959d91c1)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_079b1e547c905c7b949459f0a307c803)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_bac1ccd7174d5d6995690be5af7f4ce8)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_ae03cc76f5405d7892ce779394e022d3)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_6827fd555d0a5fe2a734e14611eae432)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_d1a17c047adf5d0682e4a47fde400035)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_8ed255253f5455579a48e01cd9dea99f)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_0dd13118f8025a48b3eaccb99dcf5806)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_ef2e48b366085a438604d734272b7560)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_56f149a69bca571db6486fa6e931f556)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_17b702eecbc65c8d9c95a411f9dd9c7c)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_f6c26e28006a5d0ca890aa1688291f5e)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_b8bac9137e9a56419c81035fe6dae2e3)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_6de9a13a78be57afa9326e7c74d9da42)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_982269aff51459dbacce62cd010a3b15)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_3218d741bb6a52ea90eee2ec30248099)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_e4d11bc3cb1f5118a0bee964a9fa4ebd)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_a940e53af2a85804b113dbcadcfb29cc)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_e19f41f58b665c2999d7bac89db902b0)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_0c12a0f9f9245496ba3178343ecdbfdd)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_bb2816edcdfa520baa025490d615fc47)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_69574b04d2be54fea5a05fa74226e769)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_3b37a7d92bfa56b8aebcd627e1b4ceb2)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_011fb726a1c8565ab396ec8cd543c8b5)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_f9c925d58e2e5540ab9036001b2e53d6)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_fbd36e81f8e555119bd9cf36093d9ae3)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_fe36b1689ff7568190bc830e008279d9)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_c4af4479c07353c3aeca6a2be14a1c99)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_5f627f14163054c2bd0a04359873c726)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_962bb16676fd5db1a82c206ebaed1908)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_1bb4eafadf5e583598f88fc680e96d53)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_589182e35e0057a9bef05b29ba655131)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_93b2ad79d8345b648c54b17888e47bd0)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_6a3cd9a546b555de9aeaf0c6a2fb019a)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_1968a306738159c081161415adb7d76a)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_330223fade2e541c81c1fe05a73b6b6d)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_54cd75aeac865f10a92b364c791dbd26)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_3259dd6348be57c78c272927517be009)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_0f67af46892554629b9d66957d4e598c)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_fa58cf1d80035da78fea01694854cf0a)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_6088114ef05554c5b599d7188541d677)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_77f5ea88d5e15ab8a6356107d7718470)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_0dffcb4bd6dc5cb1be63bbb8fb82b98a)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_5b7ee602235051649358908e6dd45058)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_70fa770445a35a99b2f3f1a51e2f2394)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_acdb271923d2510c84c1413beb6ec753)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_8ffef1fcb4e053209ac7afb7ff4c55d6)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_276252d2c6b35aef93c7bca5038273b0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_4f0f0f35c84355a3bf1c007392281a28, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_36dcf4beab395a3ba7837283e5b35baf, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_ac7f6c91cb995a8ca2b409b9002a77e9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_bcbff1ff2fd354d68ca6cfeacdd7a52a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_1cd287f4b7555c93a5142242481a26c4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_3c0ab77cdd3758a28745cf7fbca49c47, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_e77cf0fc708657c68ec41306959d91c1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_079b1e547c905c7b949459f0a307c803, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_bac1ccd7174d5d6995690be5af7f4ce8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_ae03cc76f5405d7892ce779394e022d3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_6827fd555d0a5fe2a734e14611eae432, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_d1a17c047adf5d0682e4a47fde400035, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_8ed255253f5455579a48e01cd9dea99f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_0dd13118f8025a48b3eaccb99dcf5806, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_ef2e48b366085a438604d734272b7560, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_56f149a69bca571db6486fa6e931f556, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_17b702eecbc65c8d9c95a411f9dd9c7c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_f6c26e28006a5d0ca890aa1688291f5e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_b8bac9137e9a56419c81035fe6dae2e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_6de9a13a78be57afa9326e7c74d9da42, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_982269aff51459dbacce62cd010a3b15, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_3218d741bb6a52ea90eee2ec30248099, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_e4d11bc3cb1f5118a0bee964a9fa4ebd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_a940e53af2a85804b113dbcadcfb29cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_e19f41f58b665c2999d7bac89db902b0, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_0c12a0f9f9245496ba3178343ecdbfdd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_bb2816edcdfa520baa025490d615fc47, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_69574b04d2be54fea5a05fa74226e769, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_3b37a7d92bfa56b8aebcd627e1b4ceb2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_011fb726a1c8565ab396ec8cd543c8b5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_f9c925d58e2e5540ab9036001b2e53d6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_fbd36e81f8e555119bd9cf36093d9ae3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_fe36b1689ff7568190bc830e008279d9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_c4af4479c07353c3aeca6a2be14a1c99, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_5f627f14163054c2bd0a04359873c726, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_962bb16676fd5db1a82c206ebaed1908, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_1bb4eafadf5e583598f88fc680e96d53, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_589182e35e0057a9bef05b29ba655131, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_93b2ad79d8345b648c54b17888e47bd0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_6a3cd9a546b555de9aeaf0c6a2fb019a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_1968a306738159c081161415adb7d76a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_330223fade2e541c81c1fe05a73b6b6d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_54cd75aeac865f10a92b364c791dbd26, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_3259dd6348be57c78c272927517be009, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_0f67af46892554629b9d66957d4e598c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_fa58cf1d80035da78fea01694854cf0a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_6088114ef05554c5b599d7188541d677, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_77f5ea88d5e15ab8a6356107d7718470, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_0dffcb4bd6dc5cb1be63bbb8fb82b98a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_5b7ee602235051649358908e6dd45058, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_70fa770445a35a99b2f3f1a51e2f2394, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_acdb271923d2510c84c1413beb6ec753, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_8ffef1fcb4e053209ac7afb7ff4c55d6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");

}