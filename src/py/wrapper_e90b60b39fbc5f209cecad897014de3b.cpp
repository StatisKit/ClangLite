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
    class ::clang::FunctionDecl  * (*method_pointer_863ad12e03d05404b9bfbc0e58fae0f8)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_6de71cc25c30569e9e3254e1faf237d1)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_14abcba7c3735d5cb5ad722e4d2cbdf2)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_7f0037f882d357be93d4631a8d13d000)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_6b1225156ea453e78c85c1f978bb11a9)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_e717ca6d9d9b5bab8a91ecd2a6baa14b)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_5e68d43b17515d5d95f30993fe68c375)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_307126df2bee53b18acd353b44a33294)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_fa2f1469aa425e318b86b3484a01383e)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_9fd1f8640cb1560aa96f1f88cad1df64)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_413fcf90ef075a489a57185d451e526f)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_28e05273c3ce539ea0e3d8dd1efe035e)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_aac9c994bf6359a98e2bf180649a57f9)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_a0c485ad93c65c9abe360bc53a22cd09)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_00508ae3bcbe53048b91b08ed9f0b48b)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_845651299d935415bc27065335d0d08c)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_d67ec4bfde4a5899bb5b84cc3c3ece2a)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_9f3866a3f3e5509aa3c1dbb56be4e288)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_119b828534575b0b8de401e36403ac6c)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_bffa624333475727ab8045767e85a9b0)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_fafda6754ffe53388fc43c3a6694d4ec)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_274bd157979352da8d071d2a7e06c6c1)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_26ec30629c81537e805b0b9bc491acd4)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_d815b916863e5f85ba02d1efafda887c)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_2913f44bb4755ec6a60a2fc5963b81d0)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_9593f3c5cd9852608338b1eb5dd0670c)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_fe5612bba121526cabd5fe39e117147e)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_93be85b6b6e35b4caeae356e50c1d17f)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_422ba983adc8563bb5fbaa3786c25f05)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_3050dde23a9a5410818ad6fa75f194b6)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_cc5f49e8b9a25e94842e6062fd01e220)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_76b37b3486e85ded9d4aa61d5fc34c5e)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_d6f45086f404532db4059943a305def4)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_baa041aa62c85073a33a603c567b8ce1)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_685d3f078f795bcaacb16eed93fc7ff8)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_3c8b307105b05742b1fa3998b47156f6)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_fbc9ef7554e658178f329d501406af50)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_612a0e76a54f5fb6a2544beb64ef5308)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_e4dfb3a530e35d4684a848cdf56d0a4c)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_cd00aac4eb0655b69a5bf99909280b5b)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_18f32e46a3c75fda9855c1abe50de2d7)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_9e9741299adc5593a7ee9eeef20ba5e7)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_8697787041035b049f832760be437a1c)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_7c9536067d115a44b7df45a823f3b5a4)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_35f739ce390c5b68b21672bf72df1f48)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_8758c1e1b67d543888550cbbe27fa510)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_29add0a8b01f5eaf8fd7ff945289ba6f)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_bd288c6443705d62b3eb0ab4a4b85721)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_c008df389ad95be0bc18971aae49c3d6)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_9ee34d57d2b952bba3ded3d14a51ba81)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_2cb23478269658fbb686f98b86795f0f)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_84022276fe4f5b21bfb6c2dd533baf1c)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_09fa05fc34915b2b85d3b17e047f9a2d)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_6fcae2d8e57b5fab8cf245364435e1c0)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_4e294ba977905434bba8ca21fe12f521)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_91914b3820625fe5a72bcb133cfaadd7)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_fc9d33e4cfba5dd5948b5ad915dafddd)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_b300bbd098fc50d28d43a2d2bd42f550)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_6bfd6ed7e0e75a5eb62ef1a2000315e3)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_d7df61c783be515792d72ec8523846af)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_b44af58cbe8b5918aa9430a0df86afab)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_64e808939e2d53bc98bd4dbf4ea7640e)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_a0efa4ef739055cd9966a31032925d84)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_f4b45420f69c548b9e142dc8b74bdd33)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_5784093cbef855c88c43fac7a130c083)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_e9eafc0d040f56bda45d17eac6a560e4)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_31cb73d07f2a5d228d79a1cb3a77b429)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_b60038adc7495a0aa6ab61ea1528c442)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_8e0c4c99b9545e1896ef4a2d0903aac7)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_5e32f10c35b8528486bda3a270290d07)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_619ed50f37815df89f48e258af1f63a3)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_211d23217a2250d88a5bd70a5876e6fc)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_99e84599a5825d64983db9c722a09356)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_3e37ba0e77ff5dc88594ed76361c9650)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_540b816588ea52ff91b3cd70ff4c0839)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_b85ce44c0174569ca0bec5611de6cb86)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_78b62ad996de5aef8a5f0511a4e83122)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_ecdfc7f33c7f5286a9133eefebfe5536)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_08be8ae59a0b5a139589df5f567b0375)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_b63c031de0a054ee8a2322374c3dd143)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_048713c8e623566b8a6cb516322a0e95)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_6263d9c988d959099010d71275a4de7a)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_c30f13105bd35411901b154c55894b25)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_d5361496649852e0856c30bc94b9bc8f)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_fb8e8619d0d8580392b8b5bd59733216(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_07b3731369c658369776103ebba6d385(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_863ad12e03d05404b9bfbc0e58fae0f8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_6de71cc25c30569e9e3254e1faf237d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_14abcba7c3735d5cb5ad722e4d2cbdf2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_7f0037f882d357be93d4631a8d13d000, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_6b1225156ea453e78c85c1f978bb11a9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_e717ca6d9d9b5bab8a91ecd2a6baa14b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_5e68d43b17515d5d95f30993fe68c375, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_307126df2bee53b18acd353b44a33294, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_fa2f1469aa425e318b86b3484a01383e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_9fd1f8640cb1560aa96f1f88cad1df64, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_413fcf90ef075a489a57185d451e526f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_28e05273c3ce539ea0e3d8dd1efe035e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_aac9c994bf6359a98e2bf180649a57f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_a0c485ad93c65c9abe360bc53a22cd09, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_00508ae3bcbe53048b91b08ed9f0b48b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_845651299d935415bc27065335d0d08c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_d67ec4bfde4a5899bb5b84cc3c3ece2a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_9f3866a3f3e5509aa3c1dbb56be4e288, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_119b828534575b0b8de401e36403ac6c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_bffa624333475727ab8045767e85a9b0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_fafda6754ffe53388fc43c3a6694d4ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_274bd157979352da8d071d2a7e06c6c1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_26ec30629c81537e805b0b9bc491acd4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_d815b916863e5f85ba02d1efafda887c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_2913f44bb4755ec6a60a2fc5963b81d0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_9593f3c5cd9852608338b1eb5dd0670c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_fe5612bba121526cabd5fe39e117147e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_93be85b6b6e35b4caeae356e50c1d17f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_422ba983adc8563bb5fbaa3786c25f05, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_3050dde23a9a5410818ad6fa75f194b6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_cc5f49e8b9a25e94842e6062fd01e220, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_76b37b3486e85ded9d4aa61d5fc34c5e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_d6f45086f404532db4059943a305def4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_baa041aa62c85073a33a603c567b8ce1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_685d3f078f795bcaacb16eed93fc7ff8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_3c8b307105b05742b1fa3998b47156f6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_fbc9ef7554e658178f329d501406af50, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_612a0e76a54f5fb6a2544beb64ef5308, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_e4dfb3a530e35d4684a848cdf56d0a4c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_cd00aac4eb0655b69a5bf99909280b5b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_18f32e46a3c75fda9855c1abe50de2d7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_9e9741299adc5593a7ee9eeef20ba5e7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_8697787041035b049f832760be437a1c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_7c9536067d115a44b7df45a823f3b5a4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_35f739ce390c5b68b21672bf72df1f48, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_8758c1e1b67d543888550cbbe27fa510, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_29add0a8b01f5eaf8fd7ff945289ba6f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_bd288c6443705d62b3eb0ab4a4b85721, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_c008df389ad95be0bc18971aae49c3d6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_9ee34d57d2b952bba3ded3d14a51ba81, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_2cb23478269658fbb686f98b86795f0f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_84022276fe4f5b21bfb6c2dd533baf1c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_09fa05fc34915b2b85d3b17e047f9a2d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_6fcae2d8e57b5fab8cf245364435e1c0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_4e294ba977905434bba8ca21fe12f521, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_91914b3820625fe5a72bcb133cfaadd7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_fc9d33e4cfba5dd5948b5ad915dafddd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_b300bbd098fc50d28d43a2d2bd42f550, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_6bfd6ed7e0e75a5eb62ef1a2000315e3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_d7df61c783be515792d72ec8523846af, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_b44af58cbe8b5918aa9430a0df86afab, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_64e808939e2d53bc98bd4dbf4ea7640e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_a0efa4ef739055cd9966a31032925d84, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_f4b45420f69c548b9e142dc8b74bdd33, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_5784093cbef855c88c43fac7a130c083, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_e9eafc0d040f56bda45d17eac6a560e4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_31cb73d07f2a5d228d79a1cb3a77b429, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_b60038adc7495a0aa6ab61ea1528c442, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_8e0c4c99b9545e1896ef4a2d0903aac7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_5e32f10c35b8528486bda3a270290d07, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_619ed50f37815df89f48e258af1f63a3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_211d23217a2250d88a5bd70a5876e6fc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_99e84599a5825d64983db9c722a09356, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_3e37ba0e77ff5dc88594ed76361c9650, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_540b816588ea52ff91b3cd70ff4c0839, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_b85ce44c0174569ca0bec5611de6cb86, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_78b62ad996de5aef8a5f0511a4e83122, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_ecdfc7f33c7f5286a9133eefebfe5536, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_08be8ae59a0b5a139589df5f567b0375, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_b63c031de0a054ee8a2322374c3dd143, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_048713c8e623566b8a6cb516322a0e95, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_6263d9c988d959099010d71275a4de7a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_c30f13105bd35411901b154c55894b25, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_d5361496649852e0856c30bc94b9bc8f, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_fb8e8619d0d8580392b8b5bd59733216, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_07b3731369c658369776103ebba6d385, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}