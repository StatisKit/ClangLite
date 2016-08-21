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
    bool  (::clang::DeclContext::*method_pointer_9dc638192ba856f0a153ea2b7a87fc57)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_9786e6416f4e5e36b082eb7d944b2d00)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_f16f3899a1ed54bc9f9d7ab93882b267)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_27944dcc14335857b490776ed7bee646)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_9fe3f0ef837b556b80bf8b5d7ac563a8)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_dcb33dc991bc539099e49e47f2ce74c0)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_7c9806d942b3588283116c3410258e8a)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_54a1fca7a6c85468a4057b12b8c30afb)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_bd6a4d86237955f580e9c69dbfe47c60)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_a491c899d3195ca4935cdd28b2cced15)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_ecc4a84a56ce5751b9cff6bf85ee5982)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_91603581a468512fb412f170addeab73)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_fe82621bf34f51e4904786ca034fd409)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_bb0d064993b258c7b3ad4dc8822d4591)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_e9259567bb425c0aaa066f6169bf6378)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_e3330fc2e39c5da7b872d17ece16c752)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_65fe2b927e495769b83c280249341761)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_3ee8a55d9ad1522294981159ffac1260)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_d2219285cf475e1e875f92074ad890b1)() = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_0018fd908fef59d9aa1479a170b6eb2c)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_aeca36f79f1b543cac794a5dd7704edd)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_d5c9fbc3d3415a63b6c3d57d18439bff)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_3ea391741ce6514fa79694d73c0852dd)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_23f5b7e1a3475109bdd78bf16a4e52fa)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_874da02d315554408ca453d20d71dcfd)() = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_ea84b8066eb4559ea9691ab9fba7e060)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_2431e0ef2eb25545bb135f5e4c07c420)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_19585e4b7b5b5769a773746894b4b30f)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_34ab7c44f92e5c089e9e5e51eeec3eec)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_604d31336a1b53ad9b993a310ce15e23)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_3b27313dd82a59ee8d985ba3bd0457c4)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_5efc40e7a0ec5c03a31bbfbb2fc89303)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_c1f4afb7b7a85e9b901bad5631b65f51)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_dcc12511ac3d5a9694ccdc4882dd7dfd)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_b8e49589fdaf5834a47aae7dfc320106)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_a478a212cddb5d0d976de84443561972)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_fb595c79373352c9af9b02a2ccb798e7)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_7436ab3531c954e88d569528f5b71a5a)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_d6ed70554e1c5ea0873cddbe565475ff)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_45e291903a445437b0dc148efc858658)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_7b696c9ce1a65025b7d7302990626d0f)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_d793f12703d45cf09c0991d6c38a3632)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_d0b160f30d565a5cb2c2a10363eae912)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_c90fd68fc939509b84a318da4df9f09d)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_8716947dccb8511f82910aecb740571b)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_7159c79fb42b54f8aeea20a21a4ae236)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_5362327b773f5341ba84306505c25491)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_1ef112db8ba450f2a4612c74a3b0d241)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_511288cba36e5543b82477e8d1b3927b)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_1f03d0c638795982a68b26bb7ff6d758)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_b02daaf84edc5affbc248eaf087f5f13)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_5e88b2ffe92c5f67996112df12a40953)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_3ee69c58ec3b5812afd8a1dc1c9ef039)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_bdbfa3905d1b5f9783464587d5291afb)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_2a3d802cbd825f4b8a7e4cec3838ef8f(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_a2fbbd6e09bc58aaad36fc3d1c5ea877(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_798e6ef79f0f5af59cfad4d511514c55(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_e2da8f363edf582396edca6324d1721e(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_9cfdccbd617f56399e967c9e041e4d96(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_9dc638192ba856f0a153ea2b7a87fc57, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_9786e6416f4e5e36b082eb7d944b2d00, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_f16f3899a1ed54bc9f9d7ab93882b267, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_27944dcc14335857b490776ed7bee646, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_9fe3f0ef837b556b80bf8b5d7ac563a8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_dcb33dc991bc539099e49e47f2ce74c0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_7c9806d942b3588283116c3410258e8a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_54a1fca7a6c85468a4057b12b8c30afb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_bd6a4d86237955f580e9c69dbfe47c60, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_a491c899d3195ca4935cdd28b2cced15, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_ecc4a84a56ce5751b9cff6bf85ee5982, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_91603581a468512fb412f170addeab73, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_fe82621bf34f51e4904786ca034fd409, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_bb0d064993b258c7b3ad4dc8822d4591, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_e9259567bb425c0aaa066f6169bf6378, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_e3330fc2e39c5da7b872d17ece16c752, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_65fe2b927e495769b83c280249341761, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_3ee8a55d9ad1522294981159ffac1260, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_d2219285cf475e1e875f92074ad890b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_0018fd908fef59d9aa1479a170b6eb2c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_aeca36f79f1b543cac794a5dd7704edd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_d5c9fbc3d3415a63b6c3d57d18439bff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_3ea391741ce6514fa79694d73c0852dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_23f5b7e1a3475109bdd78bf16a4e52fa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_874da02d315554408ca453d20d71dcfd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_ea84b8066eb4559ea9691ab9fba7e060, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_2431e0ef2eb25545bb135f5e4c07c420, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_19585e4b7b5b5769a773746894b4b30f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_34ab7c44f92e5c089e9e5e51eeec3eec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_604d31336a1b53ad9b993a310ce15e23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_3b27313dd82a59ee8d985ba3bd0457c4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_5efc40e7a0ec5c03a31bbfbb2fc89303, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_c1f4afb7b7a85e9b901bad5631b65f51, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_dcc12511ac3d5a9694ccdc4882dd7dfd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_b8e49589fdaf5834a47aae7dfc320106, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_a478a212cddb5d0d976de84443561972, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_fb595c79373352c9af9b02a2ccb798e7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_7436ab3531c954e88d569528f5b71a5a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_d6ed70554e1c5ea0873cddbe565475ff, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_45e291903a445437b0dc148efc858658, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_7b696c9ce1a65025b7d7302990626d0f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_d793f12703d45cf09c0991d6c38a3632, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_d0b160f30d565a5cb2c2a10363eae912, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_c90fd68fc939509b84a318da4df9f09d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_8716947dccb8511f82910aecb740571b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_7159c79fb42b54f8aeea20a21a4ae236, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_5362327b773f5341ba84306505c25491, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_1ef112db8ba450f2a4612c74a3b0d241, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_511288cba36e5543b82477e8d1b3927b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_1f03d0c638795982a68b26bb7ff6d758, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_b02daaf84edc5affbc248eaf087f5f13, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_5e88b2ffe92c5f67996112df12a40953, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_3ee69c58ec3b5812afd8a1dc1c9ef039, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_bdbfa3905d1b5f9783464587d5291afb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_2a3d802cbd825f4b8a7e4cec3838ef8f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_a2fbbd6e09bc58aaad36fc3d1c5ea877, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_798e6ef79f0f5af59cfad4d511514c55, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_e2da8f363edf582396edca6324d1721e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_9cfdccbd617f56399e967c9e041e4d96, "");

}