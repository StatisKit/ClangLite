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
    bool  (::clang::DeclContext::*method_pointer_70e98fb6d12e5bef9599848bbb329e38)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_fd6c566067115a0d9ab2776eb68c6211)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_1f3f98b565fa5193a2e0604871895387)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_d33dedc7c59158c59b9fb9a2ad06700b)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_bb87230cfb9a541188c70f375026c771)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_2d5b3961b893542eac59ba4e258bf356)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_574492587e3f5b2e9af77603dafc9aa0)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_a313275670d0517d80399d946bb65c7b)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_fab82c0ed78c595aa722cadac4960e5f)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_68d664fea52954f28e404c0a28c011de)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_3afca432316c5db29984b849a755f7b8)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_dfc756b93c1659df9a3196b04a8e268a)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_fc9ce8b04f3759a8a1b915a7570912cb)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_3732b6daf5595ac692e8e22759516828)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_cd4c431d0a565e4fbcada3ecfe72e424)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_77338254ac2d5e8685a59e30a85ea55c)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_51a5bc235be85565ba2c6e3d7df50d42)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_e24127f1f57059f682f86f4062d546b0)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_3f76ef2d076b5ca7bec81d84262f98eb)() = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_e14555e0e4845a738bfb9c099fc92114)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_0837386e118d58d99a4b8004bfc8735f)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_d906b161e0925750b9884fb5f69ff582)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_74cdf4661fdd55aea070e360cc970764)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_40c5d12889b9596a810cdbc1d6ccd270)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_f0fcfb6d26b15222bb2639f684a4679b)() = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_a3927cb2fdf65dc18eb8f9e9faba4adb)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_163083e06ce35a84b83156b25f037a5a)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_e515fe1b7ce150b29fab80e194314393)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_07b51fe3a79b56809721ff9c3c891374)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_69fbe68b1ea85296998ed6e862ce962e)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_32b038dc33aa547e9718644da9561bcb)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_a693e2fa76245de785f8946ed69b628c)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_c74ccf3d26415cfda98bf6ba6d353662)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_8d81eb6f3afb50348a74befcb890668d)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_f0b99cff15fb57cdb28b265fdf4d8860)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_adcfd67dccfc5295995c338a42a983c2)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_fd0d5239aa4951b29efc75266574844a)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_bd161feb6bdd5a65aefe95e809cbc7b0)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_ff448136bf995d789b6831c0576ba5aa)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_aa7687d9f16150c8864dad45f2877928)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_a36cb431c1b75ef799cd8e6a4daed3d4)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_841460a27925549890de2d266c73a68c)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_f239f76251945ec2adb1e47409b044e5)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_8b428987d9cb57ebb1e2f546ab900ce0)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_34a938a1495d54f593cf33103b400834)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_77b7f52a19815cb681eb7966f9d3910d)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_e67c16463f12542c9667126bb92529ea)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_2cc140bc28eb57b8b6265bf6b8610acd)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_91bfccfca57f51eb9524b8e6e77f402e)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_407871b3308c56069709c05748d0a7d2)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_c5622c8e3d6356fe9ccc7371ef63fc42)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_d2d277f95ceb5baeaa9c40a745cbcc96)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_f322935193a855a9af16d7ce89767c66)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_fbaf877561f45d52bc3e1ea677c80339)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_566560f0106552e7b04afc5ca1c1369b(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_ecdcc4a912e9575293cd583ee0d70b34(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_b327989470cd5e6c84fe671df153677f(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_0a00cb9066d5529887993fddb0cf0696(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_079c594804235f1ea84639a71d767fbf(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_70e98fb6d12e5bef9599848bbb329e38, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_fd6c566067115a0d9ab2776eb68c6211, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_1f3f98b565fa5193a2e0604871895387, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_d33dedc7c59158c59b9fb9a2ad06700b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_bb87230cfb9a541188c70f375026c771, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_2d5b3961b893542eac59ba4e258bf356, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_574492587e3f5b2e9af77603dafc9aa0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_a313275670d0517d80399d946bb65c7b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_fab82c0ed78c595aa722cadac4960e5f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_68d664fea52954f28e404c0a28c011de, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_3afca432316c5db29984b849a755f7b8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_dfc756b93c1659df9a3196b04a8e268a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_fc9ce8b04f3759a8a1b915a7570912cb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_3732b6daf5595ac692e8e22759516828, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_cd4c431d0a565e4fbcada3ecfe72e424, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_77338254ac2d5e8685a59e30a85ea55c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_51a5bc235be85565ba2c6e3d7df50d42, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_e24127f1f57059f682f86f4062d546b0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_3f76ef2d076b5ca7bec81d84262f98eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_e14555e0e4845a738bfb9c099fc92114, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_0837386e118d58d99a4b8004bfc8735f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_d906b161e0925750b9884fb5f69ff582, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_74cdf4661fdd55aea070e360cc970764, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_40c5d12889b9596a810cdbc1d6ccd270, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_f0fcfb6d26b15222bb2639f684a4679b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_a3927cb2fdf65dc18eb8f9e9faba4adb, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_163083e06ce35a84b83156b25f037a5a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_e515fe1b7ce150b29fab80e194314393, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_07b51fe3a79b56809721ff9c3c891374, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_69fbe68b1ea85296998ed6e862ce962e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_32b038dc33aa547e9718644da9561bcb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_a693e2fa76245de785f8946ed69b628c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_c74ccf3d26415cfda98bf6ba6d353662, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_8d81eb6f3afb50348a74befcb890668d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_f0b99cff15fb57cdb28b265fdf4d8860, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_adcfd67dccfc5295995c338a42a983c2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_fd0d5239aa4951b29efc75266574844a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_bd161feb6bdd5a65aefe95e809cbc7b0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_ff448136bf995d789b6831c0576ba5aa, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_aa7687d9f16150c8864dad45f2877928, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_a36cb431c1b75ef799cd8e6a4daed3d4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_841460a27925549890de2d266c73a68c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_f239f76251945ec2adb1e47409b044e5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_8b428987d9cb57ebb1e2f546ab900ce0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_34a938a1495d54f593cf33103b400834, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_77b7f52a19815cb681eb7966f9d3910d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_e67c16463f12542c9667126bb92529ea, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_2cc140bc28eb57b8b6265bf6b8610acd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_91bfccfca57f51eb9524b8e6e77f402e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_407871b3308c56069709c05748d0a7d2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_c5622c8e3d6356fe9ccc7371ef63fc42, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_d2d277f95ceb5baeaa9c40a745cbcc96, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_f322935193a855a9af16d7ce89767c66, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_fbaf877561f45d52bc3e1ea677c80339, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_566560f0106552e7b04afc5ca1c1369b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_ecdcc4a912e9575293cd583ee0d70b34, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_b327989470cd5e6c84fe671df153677f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_0a00cb9066d5529887993fddb0cf0696, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_079c594804235f1ea84639a71d767fbf, "");

}