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
    bool  (::clang::DeclContext::*method_pointer_30fc3faa28f45d0882cdfdb3becf2665)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_1c1589d07c9255f3afc466bf5e7a4954)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_258dba7bf9be5ccd844c312d1fdb7eaf)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_36a51a0e9c6e54febfe1e6e6eb5e8cba)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_2b411583ad715a1d881faf024d134ae5)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_64f437b627ec5ecfbd43c2f93891d847)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_607d4581f2d05a70bcbc7523284cc99c)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_30ab6ffce0f05d9caecfb6cf5de30f70)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_63eb1b475ce25736b59ca4776295cc97)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_b6514ca11ba45c5fb49656009d2e37f3)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_3b20e424ea6a57fe9777922ccfedcb11)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_359aaae8e5a15d84b11812ff2e1bc21f)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_25938972917355b290d2faf00f037ec9)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_3d5b8fc4cc24525c94fdcf3785dff837)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_bc5a6e48939a5348865eef388d1cf579)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_e7856b85a2145435808cdbdd8b68c118)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_361128457e7054e8b49fb0afcca6a0e5)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_01c4a4fc12885f7bab1939bb713a2598)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_ecdfe97cda9e5379b94f9010e0b29b69)() = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_f6ebe6f14c7251ff928ed4b1cb02d70e)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_89b8208b543c556d9c66e108d74f02d0)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_39576f90cb2959dfaaac724b24198a88)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_c27237c286e85a739580ebe791416b41)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_1b59e824135357a48e79bf1ada640664)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_c175c678d0e95624bb27aa544400a76c)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_6b0f4d76ea07529d8dcd7243fb153f84)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_7a04a8dad8445d1c9da659ca7b06d7ba)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_6cd5de891eee5a0d96cd996f8d6b6f55)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_1828876228c55a52b4e2ded7e05ade2e)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_3a13ffa243a45c7e88caf26a6c6c139c)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_d559cc5ee2b258aeb364b701e2c42cd0)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_566fea56eae85c3aad91a4b3e81641e0)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_8c677981492d51879e34eb2107cf63c2)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_923430bf2ca558e49237db0d667a9360)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_5ced517d6e4f5a88b2dc26b85b70d27c)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_69a12e82be4c5f9d9a333f168a0ce32d)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_dcbc8a0093e250768f58668066e5b483)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_f29a844c6bfd5f01bd97bef55df68be8)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_ea6099f22b9c56d1bdbc1061c93e6a52)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_d3091ce7c1b75b8d9286ed714bd45c31)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_6466fd2295c05d4a8c0e87ec087c5660)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_07b4372804015eab87218fdbc5c19390)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_8318dd75f01b5737955e70918a831ef0)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_0aea88be8d625730b40c1ed8d3a973dd)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_961f2391bd75520ea839c50c13a39c47)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_1d27ff88334050c199bf1874f0027be6)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_e7ead6af3fe95e7292c40f4c13b063d1)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_1e7fc19791f15152926b3bfe36153094)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_537c53cb51ff5a45a87132bcd9a5e1d8)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_713a0a2cd915583caef612949e4ae84c)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_aa70c54247535961900e970bc847f764)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_4a3c038bb6b1547594e6e63fc148266f)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_9f1a358087345cb59e9aa3d674826bad)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_88e49a102c7b526283f38ce8d219541d)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_30fc3faa28f45d0882cdfdb3becf2665, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_1c1589d07c9255f3afc466bf5e7a4954, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_258dba7bf9be5ccd844c312d1fdb7eaf, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_36a51a0e9c6e54febfe1e6e6eb5e8cba, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_2b411583ad715a1d881faf024d134ae5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_64f437b627ec5ecfbd43c2f93891d847, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_607d4581f2d05a70bcbc7523284cc99c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_30ab6ffce0f05d9caecfb6cf5de30f70, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_63eb1b475ce25736b59ca4776295cc97, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_b6514ca11ba45c5fb49656009d2e37f3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_3b20e424ea6a57fe9777922ccfedcb11, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_359aaae8e5a15d84b11812ff2e1bc21f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_25938972917355b290d2faf00f037ec9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_3d5b8fc4cc24525c94fdcf3785dff837, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_bc5a6e48939a5348865eef388d1cf579, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_e7856b85a2145435808cdbdd8b68c118, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_361128457e7054e8b49fb0afcca6a0e5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_01c4a4fc12885f7bab1939bb713a2598, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_ecdfe97cda9e5379b94f9010e0b29b69, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_f6ebe6f14c7251ff928ed4b1cb02d70e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_89b8208b543c556d9c66e108d74f02d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_39576f90cb2959dfaaac724b24198a88, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_c27237c286e85a739580ebe791416b41, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_1b59e824135357a48e79bf1ada640664, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_c175c678d0e95624bb27aa544400a76c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_6b0f4d76ea07529d8dcd7243fb153f84, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_7a04a8dad8445d1c9da659ca7b06d7ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_6cd5de891eee5a0d96cd996f8d6b6f55, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_1828876228c55a52b4e2ded7e05ade2e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_3a13ffa243a45c7e88caf26a6c6c139c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_d559cc5ee2b258aeb364b701e2c42cd0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_566fea56eae85c3aad91a4b3e81641e0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_8c677981492d51879e34eb2107cf63c2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_923430bf2ca558e49237db0d667a9360, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_5ced517d6e4f5a88b2dc26b85b70d27c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_69a12e82be4c5f9d9a333f168a0ce32d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_dcbc8a0093e250768f58668066e5b483, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_f29a844c6bfd5f01bd97bef55df68be8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_ea6099f22b9c56d1bdbc1061c93e6a52, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_d3091ce7c1b75b8d9286ed714bd45c31, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_6466fd2295c05d4a8c0e87ec087c5660, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_07b4372804015eab87218fdbc5c19390, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_8318dd75f01b5737955e70918a831ef0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_0aea88be8d625730b40c1ed8d3a973dd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_961f2391bd75520ea839c50c13a39c47, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_1d27ff88334050c199bf1874f0027be6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_e7ead6af3fe95e7292c40f4c13b063d1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_1e7fc19791f15152926b3bfe36153094, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_537c53cb51ff5a45a87132bcd9a5e1d8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_713a0a2cd915583caef612949e4ae84c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_aa70c54247535961900e970bc847f764, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_4a3c038bb6b1547594e6e63fc148266f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_9f1a358087345cb59e9aa3d674826bad, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_88e49a102c7b526283f38ce8d219541d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");

}