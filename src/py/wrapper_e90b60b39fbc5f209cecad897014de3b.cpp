#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e90b60b39fbc5f209cecad897014de3b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FunctionDecl  * (*method_pointer_e4632e27bb94526e91c572faf74f484d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_39ac8da0bf4850ed87f7f9b4ea8f4e7a)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_5a3c8192b79b512c809e21a8eada263e)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_b0e0e7bbf8cd58c4b61749782f194a9f)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_10dfa91c034b5ead96d4b5216a0f16e5)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_9d6c28b614755c8e8fd5d94e704159eb)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_11673ee22aaf5206875c184611a83c83)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_4ceca38582655a40b4aa9ec5359efe31)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_88c37803ac6e5745a2a981584c277876)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_8098473faacc5e759df6b45882edbf90)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_239b4dc6efbd5312b310c30318d83bb4)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_9d49098be10e570fa3e5921b2e3c6561)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_1b090791ae6d5b93920112f08043a4c9)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_5b77bcf2a2cf5cbeaee44d304ee2730f)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_4173e4d91b245c2187a27377fce87cd4)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_1d81deedf88d51bf8d67e0e8a1eba24a)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_8f5e38688c6c5b5890b40b718d702151)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_0c9c06551310501b8b37310c391f3d10)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_8c415ae95c0d581bbeb24d04ea60281e)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_a7f416ac4af55febb990779255279a70)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_c1629a62976955bd8f087cf658032ceb)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_bede9ac00b7f5caa8d17d249cea996f0)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_adefa6464c3f58cf8801da7f1e324acc)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_9c758c4574cc5023acc753f447729a50)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_30383a04802e58b693730a721966ed0a)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_577477ffe239519687bdd43ebdf94962)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_9c21031fdd425329a1fabc1d3c0d04c9)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_2315cf2e350d5e2cb9e4c296b566eeed)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_3cffde8bf0295f6fb6a05d7665fc86e3)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_2a7a55ea61cd55e2b2b9f787a2ce676e)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_4d18be1f4b085877aababbddb954cbad)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_98d972d7082557fcb8778887da2a6915)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_3dd5897f006f5293992dd66defbe803f)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_c1b2c27ad741537dac7650c9feab6efb)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_e2d0149d349f59499b08a8753be29cd0)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_ba1584d85d755186adeb134657b7b2f6)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_51d2647cb04a5c61af9625aa1670727f)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_983d88d814235c1585af524a93f766d3)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_324343d0e8ff5a9386105544286c4917)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_246ef5290d815794a2752903974b0389)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_903b79d01c765b7abe264c3a197f5fef)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_cdf451def3595d98930bc5f2ceb2fd74)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_942f7b33f48359f7b681fed88b288222)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_18afdcaddc8e5b1d99534200136d6461)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_938942cfc8a75a659b704aa60ad94372)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_ef87bd1c6d9a531ba15140335ef249bb)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_194aa59b61bf5de0ad9c24caca79513c)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_63ec0d4609a358d7b5c7b83849f469f2)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_922005a2121e5f499eb6d4d6e5a6f898)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_bf7d830923905b13b2d72ce6c02b1e1d)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_bb1351d12fe155ee8f9754ab5276e7ea)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_8d507901bb9350e894864d832a2867a1)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_531ac95091435cdd914d5b2fee40d50e)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_24e973b445f95514ba846dba52514e74)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_0f19d976962554a9bc0a49830c89b1f2)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_58409a47ce62590fa3086205d8fd8d5f)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_b17891ec14b55c17827807a9029e468a)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_0e9ac319f2dd5631a04d919312edd2ab)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_69f72b0a0f9e5a3581add6e6a66121ac)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_82da4ff03ad859ffb5e362774f169e98)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_741642f6374b51c089330e788e595258)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_99178f910b0e5a45ac05d1f6d99b4b48)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_e17d36f7265c5657b21ba44527e7e254)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_d1395fc302ab567cbd8962638eff2ea6)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_75d7fa0360e456a5ade1e98558e992f9)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_d0c3a004f0b75a91930bdb896720461b)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_da08105cadc5507ca7f3b79df8a3be4d)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_2a349c58d6255c939ed4abfced6a2381)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_f8ef9ca03a8e57c1b90d4634d43e72ff)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_3b2930e31f45579890435922f3e0b1f6)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_351fedcd45855534b94c2de926f5739f)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_67cf7062199b576ab10c20cfb93d7e10)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_6ce059a0bd9a55c790d1f1411b49c0ce)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_05b7c9034bca5d3392857bbfa94cf74e)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_3e6f91b61b865972a86726ab7ce5d5c7)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_41fcd1492ce55b7398e9db050e758e21)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_ac0846e41de95079b6aa228843e9d913)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_ebec32cfb0e75a9a840cadaef9e3a4ce)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_bef7c45b033a57109a354dac95101f9d)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_176c073a63585c78b516f09bdcbb830d)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_9e0ee58e390159a5b68979b297c08670)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_2f09fe1d568a5f2699c182e056e4ba77)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_9931e2e0914f5762b0af9d0af5d21969)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_be920fea105c5d449b8a73d9ac9cf5d8)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_a9c6b6aa559355e383d32e194bc8c396(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_96088c3c4e9a5b4989fe74d7855d3761(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_e4632e27bb94526e91c572faf74f484d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_39ac8da0bf4850ed87f7f9b4ea8f4e7a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_5a3c8192b79b512c809e21a8eada263e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_b0e0e7bbf8cd58c4b61749782f194a9f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_10dfa91c034b5ead96d4b5216a0f16e5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_9d6c28b614755c8e8fd5d94e704159eb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_11673ee22aaf5206875c184611a83c83, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_4ceca38582655a40b4aa9ec5359efe31, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_88c37803ac6e5745a2a981584c277876, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_8098473faacc5e759df6b45882edbf90, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_239b4dc6efbd5312b310c30318d83bb4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_9d49098be10e570fa3e5921b2e3c6561, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_1b090791ae6d5b93920112f08043a4c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_5b77bcf2a2cf5cbeaee44d304ee2730f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_4173e4d91b245c2187a27377fce87cd4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_1d81deedf88d51bf8d67e0e8a1eba24a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_8f5e38688c6c5b5890b40b718d702151, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_0c9c06551310501b8b37310c391f3d10, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_8c415ae95c0d581bbeb24d04ea60281e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_a7f416ac4af55febb990779255279a70, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_c1629a62976955bd8f087cf658032ceb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_bede9ac00b7f5caa8d17d249cea996f0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_adefa6464c3f58cf8801da7f1e324acc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_9c758c4574cc5023acc753f447729a50, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_30383a04802e58b693730a721966ed0a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_577477ffe239519687bdd43ebdf94962, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_9c21031fdd425329a1fabc1d3c0d04c9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_2315cf2e350d5e2cb9e4c296b566eeed, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_3cffde8bf0295f6fb6a05d7665fc86e3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_2a7a55ea61cd55e2b2b9f787a2ce676e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_4d18be1f4b085877aababbddb954cbad, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_98d972d7082557fcb8778887da2a6915, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_3dd5897f006f5293992dd66defbe803f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_c1b2c27ad741537dac7650c9feab6efb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_e2d0149d349f59499b08a8753be29cd0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_ba1584d85d755186adeb134657b7b2f6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_51d2647cb04a5c61af9625aa1670727f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_983d88d814235c1585af524a93f766d3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_324343d0e8ff5a9386105544286c4917, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_246ef5290d815794a2752903974b0389, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_903b79d01c765b7abe264c3a197f5fef, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_cdf451def3595d98930bc5f2ceb2fd74, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_942f7b33f48359f7b681fed88b288222, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_18afdcaddc8e5b1d99534200136d6461, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_938942cfc8a75a659b704aa60ad94372, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_ef87bd1c6d9a531ba15140335ef249bb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_194aa59b61bf5de0ad9c24caca79513c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_63ec0d4609a358d7b5c7b83849f469f2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_922005a2121e5f499eb6d4d6e5a6f898, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_bf7d830923905b13b2d72ce6c02b1e1d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_bb1351d12fe155ee8f9754ab5276e7ea, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_8d507901bb9350e894864d832a2867a1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_531ac95091435cdd914d5b2fee40d50e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_24e973b445f95514ba846dba52514e74, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_0f19d976962554a9bc0a49830c89b1f2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_58409a47ce62590fa3086205d8fd8d5f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_b17891ec14b55c17827807a9029e468a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_0e9ac319f2dd5631a04d919312edd2ab, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_69f72b0a0f9e5a3581add6e6a66121ac, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_82da4ff03ad859ffb5e362774f169e98, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_741642f6374b51c089330e788e595258, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_99178f910b0e5a45ac05d1f6d99b4b48, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_e17d36f7265c5657b21ba44527e7e254, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_d1395fc302ab567cbd8962638eff2ea6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_75d7fa0360e456a5ade1e98558e992f9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_d0c3a004f0b75a91930bdb896720461b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_da08105cadc5507ca7f3b79df8a3be4d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_2a349c58d6255c939ed4abfced6a2381, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_f8ef9ca03a8e57c1b90d4634d43e72ff, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_3b2930e31f45579890435922f3e0b1f6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_351fedcd45855534b94c2de926f5739f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_67cf7062199b576ab10c20cfb93d7e10, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_6ce059a0bd9a55c790d1f1411b49c0ce, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_05b7c9034bca5d3392857bbfa94cf74e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_3e6f91b61b865972a86726ab7ce5d5c7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_41fcd1492ce55b7398e9db050e758e21, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_ac0846e41de95079b6aa228843e9d913, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_ebec32cfb0e75a9a840cadaef9e3a4ce, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_bef7c45b033a57109a354dac95101f9d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_176c073a63585c78b516f09bdcbb830d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_9e0ee58e390159a5b68979b297c08670, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_2f09fe1d568a5f2699c182e056e4ba77, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_9931e2e0914f5762b0af9d0af5d21969, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_be920fea105c5d449b8a73d9ac9cf5d8, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_a9c6b6aa559355e383d32e194bc8c396, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_96088c3c4e9a5b4989fe74d7855d3761, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}