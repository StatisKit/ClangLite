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
    class ::clang::FunctionDecl  * (*method_pointer_bf6c957e2ba252a9930538e591b6c67e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_302dfd7f0a9a590582e6a8306dd0318f)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_388c5cc553615ce6a0ccc41cd99d6a71)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_50b572d71fd35f32b6a4392d9f622bca)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_4ec56544072a5ca8b68eb3171f1a4943)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_9fe8d41af338544a8db121b0c25a15ec)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_c3cff5bcd4735bd887effe41e101cc8b)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_7da09e9ff53f55f8a78db7d832a87585)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_1b778a4ced6b56189d8383c1192a63b6)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_b066e4e411615401ad1767dd30c5bdc2)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_1d30c048477b5da8b42bac47f3372341)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_bb937cd70bca5b1b87a5781e65f9266e)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_89746c0e35ad5eaca07d776f0ae395c6)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_92efbdf3f73853b6964917d424ea5bf0)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_8ed76b76f6c05151be80cab5797a5e92)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_7ce7bfd0384a5c5a929ebb45dcc7bb70)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_d55678fbaad95871a126ec6318b964b4)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_2bbd151026675602bb88e24912db7be6)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_f55eda43bd485c6c8afbac138532515c)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_876347ea5b0b5adf90d85c30499fbeb9)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_24e7d2d226885ec48d6bc289456b19fb)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_32ae7b54130a5659a35dd1795f961931)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_d19587e921ac5d66a2fe26944740dcbc)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_420619b0ca285729a96cb7d174294d77)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_a569074be3a2537496f6e2b4a0b409a9)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_2eb501ad06275309badc7e76432d375e)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_662e2a87fc1d55af92b6bb4b8adf3d97)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_d25d90d7af43544f8209e8352b76517c)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_9bfdc8bfc8a257138711ac2d100e32ba)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_72c6afa685435fcd80440c401382ae3a)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_0d7917c56c3b544684817783552fda1c)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_bdee562d7cb050cd862a87a4a0dce50c)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_4909f096a442527ea1f1f38efd2ebd05)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_5949ae2773ce56cc996ad394bc9b18ad)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_1a04ab04547b5fb3a8df94bf62c27dac)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_8a7c2bc18873578a9792cdd29e6af088)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_a25e34a67d865bedb7586eab7ad03f0b)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_04f3f317513d5a1dad6eb26f360e55dc)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_9ffa83cf7eda50b5b625f3d48659fdbf)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_3b9d7ba13f32553f912b51aaf30ab989)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_2dd7cccdf5b158a78c67ef4858a12bcf)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_b198cae0ed22523aa28cd2806aca7ebb)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_d0fd86b0e1bc577a91502e6fa26a509e)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_c323592a36a75277b747ec702edb45e5)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_258f92272a72544889638d2f1fee6ce7)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_30cb9aa862ac595abbb73a8fe1328979)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_c9edc794c8035cc8bb04b0793df833f7)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_aa07d91979c45c5c901d2e9459ee89d7)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_288d8d8cffac5d96a8528be1044ca4eb)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_da0e92f895ee5473acf42c248b7892a0)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_5970cc6e78ab5bdabe6cf8b4a760737f)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_18277ac6b7fa5fecb1b282eeb788d6d9)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_964230195b3e5436b17faaf2c46e1534)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_09fb7facfa7b5e5996c328b68d5ded3b)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_cc6a9f4ac609550e84fcb0a24ba22baf)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_97d27cfc41df54438f8ce12a61add0aa)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_638d8decbe975a0eb82f207e7681eb9a)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_a35ed8a4ce1957e9a569f1764665664c)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_a2c09636750b5cda91bb277df261e804)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_19cbb8b938fd5456bf2f2a999975a500)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_4904c702614c544db891b4a9cb1b5e82)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_3c29e46a7ffa56699b7eb278bc21c0fa)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_8ddf67754ead5d0c80c1c3ba39a86d3f)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_8c644609744a54b798d30c27117eb82e)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_5660dd64f60050308762042d10283f55)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_44e122d8053c5a36bbeb0754e2182764)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_f3bee04ad3dd50699baa8666205597a0)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_36296cc33ce85745adb6959c1b8c8c50)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_5f2be78902b6543eab97202cf2630f6d)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_e70bb6257dd45a0283283d067a8e5c00)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_8587b8619415506ebe89d42a0ed2f227)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_11e6f1b4007858baa53dc37f4a9f4a52)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_8d1337592cc253c493dd2d44591dd2d0)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_aa99dd9ae3bc56b5a660c9884237f4a1)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_5234816032da50c1be46415415ec4dc8)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_36588472fd5d52cb9ab749429d5aac84)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_8641a3be6625522b92e01cc36d855033)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_2ea04bcfc4065eb8ae6ee716f6f6d3db)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_0ce804d445d05432a968eae842526b08)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_504b7fc05c6d5ddfafb802285d0d68ed)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_f825b981c599562eafb226781b282bdf)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_64c5e27eabd75f2292d0703485da14d4)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_7a3413fc8ee5588882564c6555a923ea)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_504186ac7dbe5ff09781e3f0b5f4f7f6)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_a293da5774f05235ae8888392993ad9b(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_9e5b8f332fd05ec1a4c31c1d2165bf33(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_bf6c957e2ba252a9930538e591b6c67e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_302dfd7f0a9a590582e6a8306dd0318f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_388c5cc553615ce6a0ccc41cd99d6a71, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_50b572d71fd35f32b6a4392d9f622bca, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_4ec56544072a5ca8b68eb3171f1a4943, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_9fe8d41af338544a8db121b0c25a15ec, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_c3cff5bcd4735bd887effe41e101cc8b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_7da09e9ff53f55f8a78db7d832a87585, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_1b778a4ced6b56189d8383c1192a63b6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_b066e4e411615401ad1767dd30c5bdc2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_1d30c048477b5da8b42bac47f3372341, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_bb937cd70bca5b1b87a5781e65f9266e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_89746c0e35ad5eaca07d776f0ae395c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_92efbdf3f73853b6964917d424ea5bf0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_8ed76b76f6c05151be80cab5797a5e92, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_7ce7bfd0384a5c5a929ebb45dcc7bb70, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_d55678fbaad95871a126ec6318b964b4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_2bbd151026675602bb88e24912db7be6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_f55eda43bd485c6c8afbac138532515c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_876347ea5b0b5adf90d85c30499fbeb9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_24e7d2d226885ec48d6bc289456b19fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_32ae7b54130a5659a35dd1795f961931, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_d19587e921ac5d66a2fe26944740dcbc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_420619b0ca285729a96cb7d174294d77, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_a569074be3a2537496f6e2b4a0b409a9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_2eb501ad06275309badc7e76432d375e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_662e2a87fc1d55af92b6bb4b8adf3d97, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_d25d90d7af43544f8209e8352b76517c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_9bfdc8bfc8a257138711ac2d100e32ba, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_72c6afa685435fcd80440c401382ae3a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_0d7917c56c3b544684817783552fda1c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_bdee562d7cb050cd862a87a4a0dce50c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_4909f096a442527ea1f1f38efd2ebd05, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_5949ae2773ce56cc996ad394bc9b18ad, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_1a04ab04547b5fb3a8df94bf62c27dac, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_8a7c2bc18873578a9792cdd29e6af088, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_a25e34a67d865bedb7586eab7ad03f0b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_04f3f317513d5a1dad6eb26f360e55dc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_9ffa83cf7eda50b5b625f3d48659fdbf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_3b9d7ba13f32553f912b51aaf30ab989, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_2dd7cccdf5b158a78c67ef4858a12bcf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_b198cae0ed22523aa28cd2806aca7ebb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_d0fd86b0e1bc577a91502e6fa26a509e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_c323592a36a75277b747ec702edb45e5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_258f92272a72544889638d2f1fee6ce7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_30cb9aa862ac595abbb73a8fe1328979, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_c9edc794c8035cc8bb04b0793df833f7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_aa07d91979c45c5c901d2e9459ee89d7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_288d8d8cffac5d96a8528be1044ca4eb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_da0e92f895ee5473acf42c248b7892a0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_5970cc6e78ab5bdabe6cf8b4a760737f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_18277ac6b7fa5fecb1b282eeb788d6d9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_964230195b3e5436b17faaf2c46e1534, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_09fb7facfa7b5e5996c328b68d5ded3b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_cc6a9f4ac609550e84fcb0a24ba22baf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_97d27cfc41df54438f8ce12a61add0aa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_638d8decbe975a0eb82f207e7681eb9a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_a35ed8a4ce1957e9a569f1764665664c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_a2c09636750b5cda91bb277df261e804, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_19cbb8b938fd5456bf2f2a999975a500, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_4904c702614c544db891b4a9cb1b5e82, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_3c29e46a7ffa56699b7eb278bc21c0fa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_8ddf67754ead5d0c80c1c3ba39a86d3f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_8c644609744a54b798d30c27117eb82e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_5660dd64f60050308762042d10283f55, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_44e122d8053c5a36bbeb0754e2182764, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_f3bee04ad3dd50699baa8666205597a0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_36296cc33ce85745adb6959c1b8c8c50, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_5f2be78902b6543eab97202cf2630f6d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_e70bb6257dd45a0283283d067a8e5c00, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_8587b8619415506ebe89d42a0ed2f227, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_11e6f1b4007858baa53dc37f4a9f4a52, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_8d1337592cc253c493dd2d44591dd2d0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_aa99dd9ae3bc56b5a660c9884237f4a1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_5234816032da50c1be46415415ec4dc8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_36588472fd5d52cb9ab749429d5aac84, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_8641a3be6625522b92e01cc36d855033, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_2ea04bcfc4065eb8ae6ee716f6f6d3db, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_0ce804d445d05432a968eae842526b08, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_504b7fc05c6d5ddfafb802285d0d68ed, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_f825b981c599562eafb226781b282bdf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_64c5e27eabd75f2292d0703485da14d4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_7a3413fc8ee5588882564c6555a923ea, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_504186ac7dbe5ff09781e3f0b5f4f7f6, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_a293da5774f05235ae8888392993ad9b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_9e5b8f332fd05ec1a4c31c1d2165bf33, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}