#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_a6aedb4654a55a40aeecf4b1dc5fcc98()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (*method_pointer_9c74219d75785e46801cd14189a36af3)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_60836c49767e572b86ccfcf070b4b428)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_e04c4817485a561696836d9f5cc5d8af)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_4dab494788355b4c953909f3f235b736)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_044a816cbb4455a4a00ac0d40aa16208)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_d0d2f78e8700581787805b7055c9db43)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_4cb4830607c152b18f7d472e9e215975)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_0665d04fd33750a9bc1710802e799b64)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_23ba21ba13245f229109dc343c2cf836)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_20f8043a1e1c5b07ba59ae5c6749b606)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_23208660d466507a861d83a3c210d5f1)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_df6a13157c585ecdbdfd90020401f803)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_246757be87de59d1a2aeaf25378e7a62)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_32dd124ca46b5d6099b47962e11a70a5)() = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_d0002d49aeae517aa7f7b71276117ca3)() const = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_e818c8908a915466a48aa668f39f78f5)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_20d5ad04be755ea6a38f25dee305bb88)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_a4b654e598915649b630095130d338fa)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_d9f929ab7ec650bdbad43212209cf998)() const = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_0e96d3e07cab5ba4ba7acd426dfb86ee)() = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_7ab41832ef2d526d9046114bdddc1fa9)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_e0278510e5a75fba81bd174225f7c8b0)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_055bed82f09451e7bdb73e7c44bb9d54)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_33f5a59985c95860b55b5c09fe71c916)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_325afe35c34c5da48e17a1c3b0d68447)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_89cc0215bd40572fb7785d7648bb0e72)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_ece3bfa0e83f51bbaf71005cb3e5db47)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_d6b48299d46855fe92e4e93cdf60eaba)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_5d7c9ac98ded5cf086c35c299f1c3e2a)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_2da83f16fad257e285fb7d20e88e7b10)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_81e8dc9ed515583a8e761468224e4a1b)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_d59f78242440534aae7b7b05da086614)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_404fdd53afae54cf9d3866aa63a21e2a)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_f7009305dde15b79bb1b53a80dbede36)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_dfdb69048781552da4ab45fe04563bfd)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_9d320061091b5a50a80ae4240f19025a)() const = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_3e8b920a76bd54e1a7164f2aa8294226)() = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_3a24f62d33b954c0924f66dca077a175)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_dfc1575f51d957818f5f6c68435dce94)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_c3f2cbf4e4ce5e3ab9b46c5a0df227ad)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_c3d50f441b675284bd6892606dfcec5f)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_4343573c361054cc9b3fc8db96588cc7)() = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_5969994eb2a85a89828a1f28acdd1012)() = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_bd4b790093735a78b2eb64c192d27742)() const = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_a2fb947b97515b12b8f0ee9aed6ed4fa)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_622a62cd28245ca6b3680c587b3807b1)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_e0854d04bb52541c81f635f5b5f00f98)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_870ddcd597a55c9da2d9e08a85fb5c80)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_185119c37c9654768bb261dfbaf86bc1)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_835e97e261a35b34a2ce8b640e7471bb)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_314b0a23b6b45e188040f893a6dc63a3)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_92559750bf6353fd8b7acf701b390dbc)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_aa99d4c2b0205d9a86f2408aa7246768)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_5eb9c5d758de527c86cfa4592c85475c)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_946a9013cdfe5846a508f6f4ce2d21d8)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_35d3b43ec5b356a7bdf08360d6d809cc)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_367c660377e653cb9eace6f63c78c85a)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_0d2a85b2cee65a77a1782e8a2dac1c4f)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_688f6b4e59ae5c4ca3721c55b67eada2)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_3325f664d259521aa105094eddabacf2)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_392c9f00edba558abd59f3cb5a0a4d2b)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_3b2a5c23316755b9bbf7cbfc4ac4ddd1)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_7d1b51666c0e5ed897e2aee107540a97)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_6ab40116aa5350bd98547bd2bb9b2649)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_26533734bfab5d8fb5125a1ab883a08b)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_05b78b1b3e2d507b86b365a03df1b03f)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_6ad7b73b9bb9570db36f33d1f5b5683e)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_47ba6fadef9650c2987131e9c1e0f497)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_fb3774cf0864504880c575c04c43b78f)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_c369cf72af365838839be8da3b1ef888)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_34f7a9cc9321504da2b7a55f814e02bb)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_e304368da23b556ea8d37aa78d77cb34)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_01968937241d56059b84d8973e7e95c7)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_590ef59bdf5a5e02883404e2e3fb898c)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_53f5a522c2d95c348716f5e6c9f0d1a5)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_e1a5bf3646df5abda4f0336ece9a8262)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_a97597b91517589590241bd69e910935)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_279e8a52758259e48e3024b422cfbc62)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_3c768c6aa3665a31a723e5e0ad674be7)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_fc703331662b534cb4e2fa21dc3be708)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_fad88240f889557590447db90bd358cc)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_ecbe3bd7b2665c128de790a25b069385)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_a341c621fdb554e6a218d3bcebd38076)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_72a2795714c154269752e199c0a8070c)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_da7911a272b1559fb385399af9b02604(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_9c74219d75785e46801cd14189a36af3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_60836c49767e572b86ccfcf070b4b428, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_e04c4817485a561696836d9f5cc5d8af, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_4dab494788355b4c953909f3f235b736, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_044a816cbb4455a4a00ac0d40aa16208, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_d0d2f78e8700581787805b7055c9db43, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_4cb4830607c152b18f7d472e9e215975, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_0665d04fd33750a9bc1710802e799b64, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_23ba21ba13245f229109dc343c2cf836, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_20f8043a1e1c5b07ba59ae5c6749b606, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_23208660d466507a861d83a3c210d5f1, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_df6a13157c585ecdbdfd90020401f803, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_246757be87de59d1a2aeaf25378e7a62, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_32dd124ca46b5d6099b47962e11a70a5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_d0002d49aeae517aa7f7b71276117ca3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_e818c8908a915466a48aa668f39f78f5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_20d5ad04be755ea6a38f25dee305bb88, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_a4b654e598915649b630095130d338fa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_d9f929ab7ec650bdbad43212209cf998, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_0e96d3e07cab5ba4ba7acd426dfb86ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_7ab41832ef2d526d9046114bdddc1fa9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_e0278510e5a75fba81bd174225f7c8b0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_055bed82f09451e7bdb73e7c44bb9d54, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_33f5a59985c95860b55b5c09fe71c916, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_325afe35c34c5da48e17a1c3b0d68447, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_89cc0215bd40572fb7785d7648bb0e72, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_ece3bfa0e83f51bbaf71005cb3e5db47, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_d6b48299d46855fe92e4e93cdf60eaba, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_5d7c9ac98ded5cf086c35c299f1c3e2a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_2da83f16fad257e285fb7d20e88e7b10, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_81e8dc9ed515583a8e761468224e4a1b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_d59f78242440534aae7b7b05da086614, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_404fdd53afae54cf9d3866aa63a21e2a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_f7009305dde15b79bb1b53a80dbede36, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_dfdb69048781552da4ab45fe04563bfd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_9d320061091b5a50a80ae4240f19025a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_3e8b920a76bd54e1a7164f2aa8294226, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_3a24f62d33b954c0924f66dca077a175, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_dfc1575f51d957818f5f6c68435dce94, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_c3f2cbf4e4ce5e3ab9b46c5a0df227ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_c3d50f441b675284bd6892606dfcec5f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_4343573c361054cc9b3fc8db96588cc7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_5969994eb2a85a89828a1f28acdd1012, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_bd4b790093735a78b2eb64c192d27742, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_a2fb947b97515b12b8f0ee9aed6ed4fa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_622a62cd28245ca6b3680c587b3807b1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_e0854d04bb52541c81f635f5b5f00f98, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_870ddcd597a55c9da2d9e08a85fb5c80, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_185119c37c9654768bb261dfbaf86bc1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_835e97e261a35b34a2ce8b640e7471bb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_314b0a23b6b45e188040f893a6dc63a3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_92559750bf6353fd8b7acf701b390dbc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_aa99d4c2b0205d9a86f2408aa7246768, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_5eb9c5d758de527c86cfa4592c85475c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_946a9013cdfe5846a508f6f4ce2d21d8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_35d3b43ec5b356a7bdf08360d6d809cc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_367c660377e653cb9eace6f63c78c85a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_0d2a85b2cee65a77a1782e8a2dac1c4f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_688f6b4e59ae5c4ca3721c55b67eada2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_3325f664d259521aa105094eddabacf2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_392c9f00edba558abd59f3cb5a0a4d2b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_3b2a5c23316755b9bbf7cbfc4ac4ddd1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_7d1b51666c0e5ed897e2aee107540a97, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_6ab40116aa5350bd98547bd2bb9b2649, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_26533734bfab5d8fb5125a1ab883a08b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_05b78b1b3e2d507b86b365a03df1b03f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_6ad7b73b9bb9570db36f33d1f5b5683e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_47ba6fadef9650c2987131e9c1e0f497, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_fb3774cf0864504880c575c04c43b78f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_c369cf72af365838839be8da3b1ef888, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_34f7a9cc9321504da2b7a55f814e02bb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_e304368da23b556ea8d37aa78d77cb34, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_01968937241d56059b84d8973e7e95c7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_590ef59bdf5a5e02883404e2e3fb898c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_53f5a522c2d95c348716f5e6c9f0d1a5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_e1a5bf3646df5abda4f0336ece9a8262, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_a97597b91517589590241bd69e910935, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_279e8a52758259e48e3024b422cfbc62, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_3c768c6aa3665a31a723e5e0ad674be7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_fc703331662b534cb4e2fa21dc3be708, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_fad88240f889557590447db90bd358cc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_ecbe3bd7b2665c128de790a25b069385, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_a341c621fdb554e6a218d3bcebd38076, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_72a2795714c154269752e199c0a8070c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_da7911a272b1559fb385399af9b02604, "");

}