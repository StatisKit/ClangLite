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
    class ::clang::FunctionDecl  * (*method_pointer_f6db55d4157a5d038a40127c7cf7de0a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_f28e5f620bc55ceb92607761b55c54b7)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_469ec4cd3fb05434a9b72e6d2346f0bb)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_bd1d2912ccfa52edaf58de42f664ba5c)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_7ca960478b835302aeb5d81140339962)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_d6433aa621595cebbf3457f0991ec0b4)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_38d0f323c9ed575ebc339ee030716e53)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_539f0126ce9d5ecd8e85c0773ba75d32)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_8afb4c469bbf5abebbe3aeac1642edaf)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_168b89610ffd555a8a7d675e334d5a20)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_fed7858803775cbf949d87a40795c4c5)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_1d50be29bc4956828589dda52d0258ae)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_61b7b8357d3e5c979ac6de44b482a0b8)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_4391a073a30258579d284705a79c6dfa)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_03bf490e3cd8514686b7b1affb4b58ab)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_05331cb97d2b5bf5b3a2c585c6677f22)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_fbc732e2b3c05458bf6f847e35a294b6)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_bdbe9bcbebdc5ed69e44223cea7cc917)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_9718fd46a38a5928a809ae3d97b88253)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_3914beeeb38952459a3d05d6dd3e6fe7)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_051702636ead55a9907b19a94f44eb99)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_bee057ecfdf15d5e9d0707bf8b200990)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_c405ddca7d825f71a418019c283914a6)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_65cbae1cd16c54c28d0999af901619b7)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_12ba12d91a275785ba3e3bc35e058943)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_98a3e1bca4d65f7dbb84678416c02c33)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_042dd8b4bea455f0961482f1051ee7a9)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_13d45c436c865803ba3cbc5e5b47c84e)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_f3c8ca7d50495e22a2e5a7e7809e2659)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_69bdf59e82fa59738574ca4b9f448669)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_36680c8d05cf5b71ab2c222f60460100)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_1c9c517f33af5d918b2326a503e060bd)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_3aecf03871ce5f589fc624b05ceff2a1)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_c26a9a8685d055e4ac6cdad88e644722)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_ec006a5f9723510c9c68ece643165082)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_d34a0c89ef67575e863cda63210e9917)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_b401b1764a3f51c7883142098f192872)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_7873bfe3e55b59c99a16212aa1da2ed0)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_e5430a9f81bb50a7832d4d94069e68b1)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_5d98ed0ca0815f538b8b989f338faabd)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_0d9760f6b340532bb37d2d676053db5e)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_ed0877379b7b5a3cad714d5bb7f4b7b6)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_4450891430c051a68d3abe428f6055a4)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_ada4ba4cae6b5d81a5c2fd9e195897a7)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_99def4ba33fb5477b11c195e285c4449)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_484a8e56de525630aece7465746515df)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_edc9d1c2916152a79c9873a493378f57)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_31a84d9d39b250d790671451ff3ca152)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_70ba2773be615f658e91c1c6d1aac5a9)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_885d24080f4d56e8a6e9d995f6130521)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_52b7720ba3845b3385bc682dcd73567e)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_fa73fd502f9d509f9d8425bb9d4ed6b7)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_ed9c50ed3dd35d4fbe54e004a38037cf)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_0e519f2a9e1d54e1b68e05d012b8f8c6)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_419f1b325474551baf62ff25be67b775)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_009e266caa375023b3c8d24789061be6)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_b7a472c2295650f1a2dd85933b33f1ec)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_3569168399285173b4fd7eaeb3bf8f2c)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_94fd576d86d957de848c01460095e631)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_bfde948aa58f5d35b77b2ec0a35ec08e)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_6a57499d71fc58e48a8e036a998fd648)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_4c7c144a97715da8ba4fd39dbd635cb8)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_b838925608f55284a798087f204a540e)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_41ef692e25305037957431f7c5f288ce)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_921183727e1d571c9cde56be22663fe9)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_e8c22e2f85b9506ead65ca99196cd133)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_8982c7fb9bc8590c8634f8b73d32a83a)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_cc5dc271efc1566a8ec15380bd7b71d5)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_d6de55a6fc7154b4b2b6379bee503030)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_e5b60bb5a94c5d95b8001691e5f89bd2)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_5e881cc30ce75f12ae8b5b0a4ce50df4)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_fe5e62fcee905afebd19b1a2e508b7b2)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_c4fdad0f038f54c58280effbe4ee0076)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_e5cffeec7e7f5b09b5141824ad348354)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_cd7fb32ada1d5fbba73fbf83ca7c30a1)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_26d300c073e55614ae5776da8534d116)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_e743ea47482b58cd817ca8ffac3e93a4)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_af10ac89b0375ad69771a84530b105a4)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_d3238428e43c5ffe8f46d740df6f63bb)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_2886f9a0a5d450e09ff42901c717b861)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_1edd1bb1c8bd509eb56ad52f2e32adba)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_210299e84b1e52338f697702775e3ee4)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_adf6c3e97e5c52db9ae0f0ddfb0b3646(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_95560cc3370e58bdbc750d830fbe4d70(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_f6db55d4157a5d038a40127c7cf7de0a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_f28e5f620bc55ceb92607761b55c54b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_469ec4cd3fb05434a9b72e6d2346f0bb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_bd1d2912ccfa52edaf58de42f664ba5c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_7ca960478b835302aeb5d81140339962, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_d6433aa621595cebbf3457f0991ec0b4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_38d0f323c9ed575ebc339ee030716e53, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_539f0126ce9d5ecd8e85c0773ba75d32, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_8afb4c469bbf5abebbe3aeac1642edaf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_168b89610ffd555a8a7d675e334d5a20, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_fed7858803775cbf949d87a40795c4c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_1d50be29bc4956828589dda52d0258ae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_61b7b8357d3e5c979ac6de44b482a0b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_4391a073a30258579d284705a79c6dfa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_03bf490e3cd8514686b7b1affb4b58ab, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_05331cb97d2b5bf5b3a2c585c6677f22, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_fbc732e2b3c05458bf6f847e35a294b6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_bdbe9bcbebdc5ed69e44223cea7cc917, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_9718fd46a38a5928a809ae3d97b88253, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_3914beeeb38952459a3d05d6dd3e6fe7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_051702636ead55a9907b19a94f44eb99, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_bee057ecfdf15d5e9d0707bf8b200990, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_c405ddca7d825f71a418019c283914a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_65cbae1cd16c54c28d0999af901619b7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_12ba12d91a275785ba3e3bc35e058943, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_98a3e1bca4d65f7dbb84678416c02c33, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_042dd8b4bea455f0961482f1051ee7a9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_13d45c436c865803ba3cbc5e5b47c84e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_f3c8ca7d50495e22a2e5a7e7809e2659, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_69bdf59e82fa59738574ca4b9f448669, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_36680c8d05cf5b71ab2c222f60460100, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_1c9c517f33af5d918b2326a503e060bd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_3aecf03871ce5f589fc624b05ceff2a1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_c26a9a8685d055e4ac6cdad88e644722, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_ec006a5f9723510c9c68ece643165082, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_d34a0c89ef67575e863cda63210e9917, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_b401b1764a3f51c7883142098f192872, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_7873bfe3e55b59c99a16212aa1da2ed0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_e5430a9f81bb50a7832d4d94069e68b1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_5d98ed0ca0815f538b8b989f338faabd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_0d9760f6b340532bb37d2d676053db5e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_ed0877379b7b5a3cad714d5bb7f4b7b6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_4450891430c051a68d3abe428f6055a4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_ada4ba4cae6b5d81a5c2fd9e195897a7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_99def4ba33fb5477b11c195e285c4449, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_484a8e56de525630aece7465746515df, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_edc9d1c2916152a79c9873a493378f57, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_31a84d9d39b250d790671451ff3ca152, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_70ba2773be615f658e91c1c6d1aac5a9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_885d24080f4d56e8a6e9d995f6130521, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_52b7720ba3845b3385bc682dcd73567e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_fa73fd502f9d509f9d8425bb9d4ed6b7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_ed9c50ed3dd35d4fbe54e004a38037cf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_0e519f2a9e1d54e1b68e05d012b8f8c6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_419f1b325474551baf62ff25be67b775, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_009e266caa375023b3c8d24789061be6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_b7a472c2295650f1a2dd85933b33f1ec, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_3569168399285173b4fd7eaeb3bf8f2c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_94fd576d86d957de848c01460095e631, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_bfde948aa58f5d35b77b2ec0a35ec08e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_6a57499d71fc58e48a8e036a998fd648, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_4c7c144a97715da8ba4fd39dbd635cb8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_b838925608f55284a798087f204a540e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_41ef692e25305037957431f7c5f288ce, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_921183727e1d571c9cde56be22663fe9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_e8c22e2f85b9506ead65ca99196cd133, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_8982c7fb9bc8590c8634f8b73d32a83a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_cc5dc271efc1566a8ec15380bd7b71d5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_d6de55a6fc7154b4b2b6379bee503030, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_e5b60bb5a94c5d95b8001691e5f89bd2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_5e881cc30ce75f12ae8b5b0a4ce50df4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_fe5e62fcee905afebd19b1a2e508b7b2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_c4fdad0f038f54c58280effbe4ee0076, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_e5cffeec7e7f5b09b5141824ad348354, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_cd7fb32ada1d5fbba73fbf83ca7c30a1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_26d300c073e55614ae5776da8534d116, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_e743ea47482b58cd817ca8ffac3e93a4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_af10ac89b0375ad69771a84530b105a4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_d3238428e43c5ffe8f46d740df6f63bb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_2886f9a0a5d450e09ff42901c717b861, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_1edd1bb1c8bd509eb56ad52f2e32adba, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_210299e84b1e52338f697702775e3ee4, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_adf6c3e97e5c52db9ae0f0ddfb0b3646, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_95560cc3370e58bdbc750d830fbe4d70, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}