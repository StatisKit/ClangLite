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
    bool  (::clang::DeclContext::*method_pointer_7410d77a793f56928f09e0880399c51f)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_0ecc6ffce63b57abb1328ffadc3336a2)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_590a3154c4f8578da7fbf85325290a66)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_244692b7885d52909eeb774d70b651ce)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_f03a40f8c380598c928e19b407b9247f)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_a6f0330e86b45d2a86c29b4e0d6893b9)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_ce811ffc629753999d5bfcbe456df07e)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_036393d5290e5f129f46ff4453fb2686)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_27b28a78dd2b55d582cc486a13387978)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_f2a9766524415139a03c43b507fea1f3)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_69d0d1acf8735f4c8ad04127f261ee80)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_14ae0a331ede571a98356b1801884b7f)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_7d852b96f07152afaea9d491ebb1c8b4)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_ba823d30ea53591ab6b5865cd02514e1)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_8383e332783d54669c56efc15ab8b486)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_e3c0b07717e05fa98d24c58208019c6d)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_840291a6ae3a5ac388c94c880647aa2c)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_b5367e3dea755455af6af12051c55fda)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_542a1fe4f0b7569f9fcf275981f95155)() = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_bfcdff2f7ee65dd48840dbfa4b244edb)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_84641046c08b57d7a903b7776191b129)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_0e2ddf82a3385e29a9facc8337574e1a)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_021df7751a775f2180c6270c503a8e6f)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_d60cb69d6dbd587bb23028b7b92b93d5)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_0dc211712fa65df099bcb3498b5a9b5c)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_2c01d148410f5a8590fa080e1e287ab6)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_9876ac7422c95dbfa30001efe36eaeb0)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_5ada80102bad50b7945f7b4f47fbef02)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_af73785764d855c5861f2b8549227e4e)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_2220c1e0c40857da802110a427efc993)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_9ba8bdb7eff350a7b82ce65c5cb179cf)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_cfc252e481b853439d21bdd838494bca)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_654eddef809e512cacc9f6315d457a8d)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_d3b3d90b1932544b99e5f87090f6045b)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_db515cd7eb5a556088236c1237fab6b3)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_32e26365f55e5befa8763bf80638a3f0)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_ae5410c1ae7054b9920224653ed5b7d9)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_862749db72b1589f8ac2c9ab51ad0062)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_bf47e168e81f5698b939ab85cf8ab267)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_83973cf07dc454fa940a7d63d23d97d1)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_d8047ffad96250a58aab373629619b9f)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_ea1188c819b055c4891b0595cf6700cd)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_ac5e51cdf4135a9a9f02474f497e7c80)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_749c1d7e252556debb1391e74a62515b)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_7f3564e76c4b520da0d5263715fc1101)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_e0baa04d72bb5c70afd33b376eb8b2af)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_dede701a2cc65cbda17626c5a797cfd4)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_4196a2ba3eba54daa0ac28f5ce3a13bd)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_71f0b0368f3852c5b1c493913951d18f)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_d255b82e725850eb9e31341025df8c3e)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_46e573fd26df5a77b444b8f5af9e50bb)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_16a884ab51765e68b600e03748c011c1)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_346394b1798f52d49607d447b68b2cb1)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_d13aafbbbbe854aeb9fa0c1601c92727)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_8a9cc84f4077514aacc6944245d153cd(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_3df260190a8a54c588f79becbc978e0b(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_38b153f91d3359c8844af7ba2df711e9(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_aa19c070c19d551eb3429efe556aa2e1(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_dd128c1b2c2d5e0384981d8ecac56a2c(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_7410d77a793f56928f09e0880399c51f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_0ecc6ffce63b57abb1328ffadc3336a2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_590a3154c4f8578da7fbf85325290a66, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_244692b7885d52909eeb774d70b651ce, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_f03a40f8c380598c928e19b407b9247f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_a6f0330e86b45d2a86c29b4e0d6893b9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_ce811ffc629753999d5bfcbe456df07e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_036393d5290e5f129f46ff4453fb2686, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_27b28a78dd2b55d582cc486a13387978, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_f2a9766524415139a03c43b507fea1f3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_69d0d1acf8735f4c8ad04127f261ee80, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_14ae0a331ede571a98356b1801884b7f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_7d852b96f07152afaea9d491ebb1c8b4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_ba823d30ea53591ab6b5865cd02514e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_8383e332783d54669c56efc15ab8b486, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_e3c0b07717e05fa98d24c58208019c6d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_840291a6ae3a5ac388c94c880647aa2c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_b5367e3dea755455af6af12051c55fda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_542a1fe4f0b7569f9fcf275981f95155, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_bfcdff2f7ee65dd48840dbfa4b244edb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_84641046c08b57d7a903b7776191b129, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_0e2ddf82a3385e29a9facc8337574e1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_021df7751a775f2180c6270c503a8e6f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_d60cb69d6dbd587bb23028b7b92b93d5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_0dc211712fa65df099bcb3498b5a9b5c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_2c01d148410f5a8590fa080e1e287ab6, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_9876ac7422c95dbfa30001efe36eaeb0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_5ada80102bad50b7945f7b4f47fbef02, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_af73785764d855c5861f2b8549227e4e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_2220c1e0c40857da802110a427efc993, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_9ba8bdb7eff350a7b82ce65c5cb179cf, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_cfc252e481b853439d21bdd838494bca, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_654eddef809e512cacc9f6315d457a8d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_d3b3d90b1932544b99e5f87090f6045b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_db515cd7eb5a556088236c1237fab6b3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_32e26365f55e5befa8763bf80638a3f0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_ae5410c1ae7054b9920224653ed5b7d9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_862749db72b1589f8ac2c9ab51ad0062, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_bf47e168e81f5698b939ab85cf8ab267, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_83973cf07dc454fa940a7d63d23d97d1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_d8047ffad96250a58aab373629619b9f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_ea1188c819b055c4891b0595cf6700cd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_ac5e51cdf4135a9a9f02474f497e7c80, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_749c1d7e252556debb1391e74a62515b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_7f3564e76c4b520da0d5263715fc1101, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_e0baa04d72bb5c70afd33b376eb8b2af, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_dede701a2cc65cbda17626c5a797cfd4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_4196a2ba3eba54daa0ac28f5ce3a13bd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_71f0b0368f3852c5b1c493913951d18f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_d255b82e725850eb9e31341025df8c3e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_46e573fd26df5a77b444b8f5af9e50bb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_16a884ab51765e68b600e03748c011c1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_346394b1798f52d49607d447b68b2cb1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_d13aafbbbbe854aeb9fa0c1601c92727, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_8a9cc84f4077514aacc6944245d153cd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_3df260190a8a54c588f79becbc978e0b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_38b153f91d3359c8844af7ba2df711e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_aa19c070c19d551eb3429efe556aa2e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_dd128c1b2c2d5e0384981d8ecac56a2c, "");

}