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
    bool  (::clang::DeclContext::*method_pointer_6f56b54f4ad959b6a4d8e6a15e7bf8ff)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_af9689987b725211a0c7799efac00176)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_ea79d20f5be15b8a8755d2aad071f849)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_c86cdb71c6c851e3892a676561c65071)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_9648eac8c03853d98ea8c5288d9cd199)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_f4d709f09b7653388663eae11658a0d6)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_a66e58386e2e5330ba81724b2df3739f)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_52637d62bafd5db2a9f411db03b17034)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_7b5ab76587185780945f3c4cbfbd2bf6)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_e05050d35937502daaafce521263cdcf)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_7c90635873db5e2d869f61022daa3f76)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_448946e1b85d5577870aac464aaa8ba4)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_31cc15dc82db5bbe917f12c690bb4fec)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_5601335eabed55d8ae839f177854a977)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_0e4a609eee385d0da9320e8af0866d4c)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_9b6c51387b3b5ac9b1765c242994fd34)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_7927ce7aead55113974ea14142b9b9f5)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_a2a4deb388125b389f8b9866cf47a993)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_0d20d311488757dd8cd17096822dc556)() = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_4780f5a88da05f3e96b00f5923aa0870)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_8d61ad85de935118a655cd95fe2a9b5a)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_9f7bd05b02c650ae8a86a0306c59430b)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_a1a0802bf013573ea6e57160dc212560)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_4f9b494edeae5301b2a7ab57ead60469)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_aebc956efb7752909df12c24b5e4b5e9)() = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_ba496e1c535a568f9ef5e219a183e586)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_38fa88ce64b75fb9bca67383f1330bca)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_c7862a233b3c52f3b5c99363111362e9)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_72f0348a613c58e3a0b4a220f893fd81)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_dc0239964e9b524fa05fe5958534efbd)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_5df71e7b17215880b79633eec820f0c3)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_7cd0f47ec26450568605c8c3f9588e66)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_4ec86776583e56f89ba91be8f0274c05)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_7b92a69f1afc50129bd307454b722ae5)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_7c015d99dc6753528fe3221f427e2e0b)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_338530f425be5f3892a854e38c6124dd)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_0683b8d411655ce89db7696bb8bf938c)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_3c052e2f35375bf3a621d37cbc4d6b48)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_0f9ca9f13c4f5e0b94589c19115dcd48)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_05d03817deb3540eab05db79870298b6)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_2e39cf66cb4e5f2faef2ac532fba57be)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_d5de63a2778359d3ac2377a7cd4a7412)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_9da2ea25827c5dc98c5a28ae15c6b4e6)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_d8cf080584095b24a10f117d92bd2e4c)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_6e2bd28a6c00521c95f2c9c1306efa44)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_919b90c5ff195232ab9c7148e3c817f8)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_4e347ba1895a5f9ba2df20f6876e8ddd)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_b3baf4f41bc95b0db6b25d11f61cfdaf)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_41129967abe751c4828a94a5d3962d69)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_f5559555c7455b78b3e9ab98e67b52c7)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_9632cfd17a335bbdac129ef6df97f7b6)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_75e254207a2653e68f5cc7729bcea95e)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_8825c78fe92459269b6ed7ecc6f420a8)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_364d0d3c598d50159bb67e14f68fbd7a)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_6f56b54f4ad959b6a4d8e6a15e7bf8ff, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_af9689987b725211a0c7799efac00176, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_ea79d20f5be15b8a8755d2aad071f849, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_c86cdb71c6c851e3892a676561c65071, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_9648eac8c03853d98ea8c5288d9cd199, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_f4d709f09b7653388663eae11658a0d6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_a66e58386e2e5330ba81724b2df3739f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_52637d62bafd5db2a9f411db03b17034, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_7b5ab76587185780945f3c4cbfbd2bf6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_e05050d35937502daaafce521263cdcf, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_7c90635873db5e2d869f61022daa3f76, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_448946e1b85d5577870aac464aaa8ba4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_31cc15dc82db5bbe917f12c690bb4fec, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_5601335eabed55d8ae839f177854a977, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_0e4a609eee385d0da9320e8af0866d4c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_9b6c51387b3b5ac9b1765c242994fd34, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_7927ce7aead55113974ea14142b9b9f5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_a2a4deb388125b389f8b9866cf47a993, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_0d20d311488757dd8cd17096822dc556, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_4780f5a88da05f3e96b00f5923aa0870, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_8d61ad85de935118a655cd95fe2a9b5a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_9f7bd05b02c650ae8a86a0306c59430b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_a1a0802bf013573ea6e57160dc212560, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_4f9b494edeae5301b2a7ab57ead60469, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_aebc956efb7752909df12c24b5e4b5e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_ba496e1c535a568f9ef5e219a183e586, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_38fa88ce64b75fb9bca67383f1330bca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_c7862a233b3c52f3b5c99363111362e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_72f0348a613c58e3a0b4a220f893fd81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_dc0239964e9b524fa05fe5958534efbd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_5df71e7b17215880b79633eec820f0c3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_7cd0f47ec26450568605c8c3f9588e66, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_4ec86776583e56f89ba91be8f0274c05, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_7b92a69f1afc50129bd307454b722ae5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_7c015d99dc6753528fe3221f427e2e0b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_338530f425be5f3892a854e38c6124dd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_0683b8d411655ce89db7696bb8bf938c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_3c052e2f35375bf3a621d37cbc4d6b48, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_0f9ca9f13c4f5e0b94589c19115dcd48, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_05d03817deb3540eab05db79870298b6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_2e39cf66cb4e5f2faef2ac532fba57be, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_d5de63a2778359d3ac2377a7cd4a7412, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_9da2ea25827c5dc98c5a28ae15c6b4e6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_d8cf080584095b24a10f117d92bd2e4c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_6e2bd28a6c00521c95f2c9c1306efa44, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_919b90c5ff195232ab9c7148e3c817f8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_4e347ba1895a5f9ba2df20f6876e8ddd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_b3baf4f41bc95b0db6b25d11f61cfdaf, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_41129967abe751c4828a94a5d3962d69, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_f5559555c7455b78b3e9ab98e67b52c7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_9632cfd17a335bbdac129ef6df97f7b6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_75e254207a2653e68f5cc7729bcea95e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_8825c78fe92459269b6ed7ecc6f420a8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_364d0d3c598d50159bb67e14f68fbd7a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");

}