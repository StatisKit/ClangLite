#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_b97237ef74ad5566bc5ae85fdde5a9b6()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::DeclContext::*method_pointer_652376f8a9215e7abcc757e27f6012da)() const = &::clang::DeclContext::dumpDeclContext;
    bool  (::clang::DeclContext::*method_pointer_b9c78b07761851608c90e14ffd6408d7)() const = &::clang::DeclContext::isStdNamespace;
    void  (::clang::DeclContext::*method_pointer_954f69ee560056ca9d37618c6ed7f211)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    bool  (::clang::DeclContext::*method_pointer_16a4db1acff45d1bae2a89a124e1af7f)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    void  (::clang::DeclContext::*method_pointer_ef14bf10f63b5b6095d6f908435f12b8)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_3e8b904ebe295ce7888ba44c4e7db35a)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    bool  (::clang::DeclContext::*method_pointer_dca32058c55c5c3ba5bea94eac5755f4)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_23369c518e4654b3a72d8a81940f361a)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (*method_pointer_eca31130ab165ac8b5af295e35eba93e)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_9f21dc3c36db5d66956defe5277fbb65)() const = &::clang::DeclContext::isInlineNamespace;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_f39cde8108f358ed9d0516b4e31b7fda)() const = &::clang::DeclContext::getLexicalParent;
    bool  (::clang::DeclContext::*method_pointer_17045e2fb136574ab61bec753f34f418)() const = &::clang::DeclContext::isDependentContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_4667eab5b2c25d6e91567c91e5fd5b7b)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_0ae4d454e728597a87ed6d31c652d886)() const = &::clang::DeclContext::getParent;
    bool  (::clang::DeclContext::*method_pointer_0d6c49f1d7365f15aff1714f2facb30f)() const = &::clang::DeclContext::isExternCContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_c0b39754ee1a58828c8d1199522013f0)() const = &::clang::DeclContext::getRedeclContext;
    void  (::clang::DeclContext::*method_pointer_90b3a14385855df7878651c751a834a1)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_567bc446a6125930b426733217af2b6c)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (::clang::DeclContext::*method_pointer_422a337331205dec9737d2ed7478e064)() const = &::clang::DeclContext::isTranslationUnit;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_b40c84bca2ba58929b3a79bff36ecabd)() = &::clang::DeclContext::getLookupParent;
    bool  (::clang::DeclContext::*method_pointer_a863ea78b35e53a3957901af69773e32)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_6abb7908c2be5f26bd0d715bb60795d2)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_5a1b0e6ae7f95487a815f3c2572a9f70)() const = &::clang::DeclContext::getDeclKind;
    bool  (::clang::DeclContext::*method_pointer_bef085365466564aaa12630cc47973cf)() const = &::clang::DeclContext::isFileContext;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_d787f2f247d8500ea9fc08ca7408b493)() = &::clang::DeclContext::getNonClosureAncestor;
    void  (::clang::DeclContext::*method_pointer_f4c90d8e52455915a1bcf505e7b8944b)() const = &::clang::DeclContext::dumpLookups;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_3adf5a8b7f02544e887dd1bd16df110b)() const = &::clang::DeclContext::getParentASTContext;
    bool  (::clang::DeclContext::*method_pointer_11ff3c1269285026a23ad33f31cba5e8)() const = &::clang::DeclContext::isObjCContainer;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_2b98059bdd865072bbdfcaeceb37cf92)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_fe4c33dd953f5e29893281a117e9cd55)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_6545422833bf555194ca999dd9692ef1)() const = &::clang::DeclContext::isTransparentContext;
    bool  (::clang::DeclContext::*method_pointer_1ab0a4e90b685fb38d1f5082f42af65d)() const = &::clang::DeclContext::isRecord;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_dee9963e43fd5b34907648a1db7e531e)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    void  (::clang::DeclContext::*method_pointer_de13182d0e9e5a5a87793678e700c424)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_4912e56a243a5cd3857a94620b8c3b6a)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_8d3abcf189245baeb718b327e3754ef4)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    void  (::clang::DeclContext::*method_pointer_133aaa7386a75e89ac454e17062acb9d)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_411d4f63b73550f3b235474cfccc18e1)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_c762b3184e165b8badccb022a601a1f8)() = &::clang::DeclContext::getParent;
    bool  (::clang::DeclContext::*method_pointer_0067f1d2c1b55f34b315e47b6550f05a)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_bc19a5c2004557449e1a75c027fd8e1d)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_ca585d75b1d756e4832ce4183c4e880d)() const = &::clang::DeclContext::decls_empty;
    bool  (::clang::DeclContext::*method_pointer_b82c2f0bd8a05b558159139596f42efa)() const = &::clang::DeclContext::isClosure;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_ad398636f25d56bab4711a9f760533ee)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_a5a2ebdc6ca958ab81895e6d029d34ad)() const = &::clang::DeclContext::getLookupParent;
    bool  (*method_pointer_11e51807ab8558dcbdf2f333a6f17a2e)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_9c60f22d2b3f52b8994d020dffbc0492)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    void  (::clang::DeclContext::*method_pointer_4ef6bcfc7f1e579a84b580c55401d70e)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_3af8ccf94662591697fe10b2b7f26324)() = &::clang::DeclContext::getPrimaryContext;
    void  (::clang::DeclContext::*method_pointer_eb15ebb48b3f5ba7a6fb33aa4d679a11)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    bool  (::clang::DeclContext::*method_pointer_3c498614185c52eb8e80355341c6d235)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_47833ca7c21a5e268643f5b522441844)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_b9677ad2517f5a1ba128233736c6f2d0)() = &::clang::DeclContext::getLexicalParent;
    bool  (::clang::DeclContext::*method_pointer_15cc756bf4135a7d9f6f7a22e6652126)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_652376f8a9215e7abcc757e27f6012da, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_b9c78b07761851608c90e14ffd6408d7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_954f69ee560056ca9d37618c6ed7f211, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_16a4db1acff45d1bae2a89a124e1af7f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_ef14bf10f63b5b6095d6f908435f12b8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_3e8b904ebe295ce7888ba44c4e7db35a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_dca32058c55c5c3ba5bea94eac5755f4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_23369c518e4654b3a72d8a81940f361a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_eca31130ab165ac8b5af295e35eba93e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_9f21dc3c36db5d66956defe5277fbb65, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_f39cde8108f358ed9d0516b4e31b7fda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_17045e2fb136574ab61bec753f34f418, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_4667eab5b2c25d6e91567c91e5fd5b7b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_0ae4d454e728597a87ed6d31c652d886, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_0d6c49f1d7365f15aff1714f2facb30f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_c0b39754ee1a58828c8d1199522013f0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_90b3a14385855df7878651c751a834a1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_567bc446a6125930b426733217af2b6c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_422a337331205dec9737d2ed7478e064, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_b40c84bca2ba58929b3a79bff36ecabd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_a863ea78b35e53a3957901af69773e32, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_6abb7908c2be5f26bd0d715bb60795d2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_5a1b0e6ae7f95487a815f3c2572a9f70, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_bef085365466564aaa12630cc47973cf, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_d787f2f247d8500ea9fc08ca7408b493, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_f4c90d8e52455915a1bcf505e7b8944b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_3adf5a8b7f02544e887dd1bd16df110b, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_11ff3c1269285026a23ad33f31cba5e8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_2b98059bdd865072bbdfcaeceb37cf92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_fe4c33dd953f5e29893281a117e9cd55, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_6545422833bf555194ca999dd9692ef1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_1ab0a4e90b685fb38d1f5082f42af65d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_dee9963e43fd5b34907648a1db7e531e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_de13182d0e9e5a5a87793678e700c424, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_4912e56a243a5cd3857a94620b8c3b6a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_8d3abcf189245baeb718b327e3754ef4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_133aaa7386a75e89ac454e17062acb9d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_411d4f63b73550f3b235474cfccc18e1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_c762b3184e165b8badccb022a601a1f8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_0067f1d2c1b55f34b315e47b6550f05a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_bc19a5c2004557449e1a75c027fd8e1d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_ca585d75b1d756e4832ce4183c4e880d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_b82c2f0bd8a05b558159139596f42efa, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_ad398636f25d56bab4711a9f760533ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_a5a2ebdc6ca958ab81895e6d029d34ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_11e51807ab8558dcbdf2f333a6f17a2e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_9c60f22d2b3f52b8994d020dffbc0492, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_4ef6bcfc7f1e579a84b580c55401d70e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_3af8ccf94662591697fe10b2b7f26324, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_eb15ebb48b3f5ba7a6fb33aa4d679a11, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_3c498614185c52eb8e80355341c6d235, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_47833ca7c21a5e268643f5b522441844, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_b9677ad2517f5a1ba128233736c6f2d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_15cc756bf4135a7d9f6f7a22e6652126, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");

}