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
    class ::clang::FunctionDecl  * (*method_pointer_e98961f584355ec8bf3d5f8712fa990f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_edae7110275c5a2e8d7928bde1a9e04c)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_2fec9290eae3561ca6f7ec0288d07fd9)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_8e81b4205135564ba401979a24721e75)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_7f590b9532cb50e08a54852e4b2a9e86)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_e51c1f9df8775a058001f853f7a5743b)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_9f96a0bc398e56a2a4570bad29965943)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_8f21e0ef903e549aa2ea697d6f514c8c)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_a4f08b555dcb5ad39b66ca61e7adb5ec)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_b8e57f367b8951d29523d720fb230bec)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_417dfbdd02e45644bd975e4de57c7506)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_be3ba74df1d958879bf5e859c65e456f)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_2a65b59af842559cb5240292c716fe3a)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_b34969dd5fd6505e9d731672685fd711)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_472ccad6c61d5d3da84ea1e32e0c0e7d)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_3c02f50e49a25b01a773ea7eb8c3a0b1)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_6d4cada066eb5dd0aff84faa27082b95)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_6723534b87015f4d80f25364f76754b9)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_d47be2f3945351518885b4021ea5d582)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_def84b6d82c65e51ae8c8f682e675980)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_083e8e41159f531ba494fdb78060c97b)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_9baa3d2cac1d592fb05b1aa9e37d5bb0)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_273f51e01dce5adaa46bb525fca901fe)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_ec9dcc0120755357b272d7ed44331d1f)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_d4895db759c15a9e910aae94c218ee17)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_f8ada4d7e2255745b1f4a92fc652eacc)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_e7371de6bd325407b31897a3a1b91058)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_6c8adcdb52855d9d8af2ffd5d97c041a)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_20d628166a6852708176782209a48b6a)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_1ebc0a114aa356ce9c40cb1fa497484b)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_6ed8a119077e5b1ca4159cec4cf48a67)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_70ee50c8aab857a1ae70ca1fa38da7a8)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_11a24431caa15f7482664859a8206ec1)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_330083eafd3156e9bfa3d82bf3c629bc)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_cad3969e09f5558da892fd23b3c59d35)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_4cebec91d1cb58c4a11539ac4f6fe709)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_d980a49fc5a751b99ddcad8638067657)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_85d0c7138cd1577c8bfe13fd8f0ac9ae)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_14716a31b6d5516f9a285bef1f219edf)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_e64835ca86f85af0a6754c6b1039c41d)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_a7608c0d468c5429927656a7bf76d3ee)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_9f640fe47e125ba6a146057995d57be4)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_20031f5e5dfc5c6a992bc9ef2a7e27fe)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_d73a2c6240d553a9b60542246dcc5571)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_3979adb9ac5c5e80924f0c1c700e1496)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_c9f43f7e956059e58d18b511917fe413)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_2d4afc17286c5252aba3a9b125cdb583)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_a053e9db992757c5b17bd09eab9c462b)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_1034cb75f73b586b81f4b8c5e029ee16)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_69d634bc180a5466ad6dc90c7bf80bab)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_ddd9c045d17e5859a12dd74b25ffdac8)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_2dade556253150c2b0f8c896550c47c6)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_d4d3caccad0b573c80600924038f5064)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_6d4e1a57756b597c81c631701d6c38b1)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_857c7cf072755205b1d90b055ba4b589)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_bd81633e6d5d565293cd254dae9560f1)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_086f1e5843e3546bbd8b879aa8e40896)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_dc3fbbebc1035aecab1d89775047f06f)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_dc31de9655ea58dcb8aacdd140fdbc1c)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_1955b15705f35af5ba64744b4cfd924c)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_781c80d1f0625127ae2eea0eae360ad0)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_2eff655f8c32595186fc8cfc50825b96)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_2369c235761c50138e73733f84cd87d7)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_bb30df03093a55089fe82ce408df645e)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_476e6917ec315686a6007ddc67fa0ca3)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_eacfd180c25b5475919da3392173b633)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_c792c90b60985acb81ee9bf567dc5e31)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_0dfcbf56c2f652dcb69051f01be84765)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_48d5f704d3e056c793b63d9515da1d12)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_628defc2fe4c531c838a9e26c788db11)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_4d702bd4e0ae5ba1bf80b19e7121acfa)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_35ba2f37a0ad54428294f7756f3abd51)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_f994f252edbc557abb617c2eff4257a6)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_b716176235fc5e9593cf80dc05aa2720)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_eb35eb6955b4549eb9a6e83cb1f35634)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_a7995bb9f8f254099d2a43df1fcee450)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_ae50ba1e28575ced9f395bba81a294fe)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_6112ddfe954c5ba2bb3481a08032bd2f)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_b470a8316312558e9c0cf861814d06f1)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_3089b23d57285345831503f18fb8623d)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_80be92d4fa6051d19c9d1bea290e82ef)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_d4be6e7b8a095854a66ad6463601ef33)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_7f98ba20852353dd9510d2f31ab13b31)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_3d937f5736325d988cdc8482cf75f942)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_76d4f0aa1b8750729973bbe187d64ab1(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_347b407aa3c057b8880bfdabe111e745(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_e98961f584355ec8bf3d5f8712fa990f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_edae7110275c5a2e8d7928bde1a9e04c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_2fec9290eae3561ca6f7ec0288d07fd9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_8e81b4205135564ba401979a24721e75, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_7f590b9532cb50e08a54852e4b2a9e86, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_e51c1f9df8775a058001f853f7a5743b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_9f96a0bc398e56a2a4570bad29965943, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_8f21e0ef903e549aa2ea697d6f514c8c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_a4f08b555dcb5ad39b66ca61e7adb5ec, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_b8e57f367b8951d29523d720fb230bec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_417dfbdd02e45644bd975e4de57c7506, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_be3ba74df1d958879bf5e859c65e456f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_2a65b59af842559cb5240292c716fe3a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_b34969dd5fd6505e9d731672685fd711, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_472ccad6c61d5d3da84ea1e32e0c0e7d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_3c02f50e49a25b01a773ea7eb8c3a0b1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_6d4cada066eb5dd0aff84faa27082b95, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_6723534b87015f4d80f25364f76754b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_d47be2f3945351518885b4021ea5d582, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_def84b6d82c65e51ae8c8f682e675980, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_083e8e41159f531ba494fdb78060c97b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_9baa3d2cac1d592fb05b1aa9e37d5bb0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_273f51e01dce5adaa46bb525fca901fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_ec9dcc0120755357b272d7ed44331d1f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_d4895db759c15a9e910aae94c218ee17, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_f8ada4d7e2255745b1f4a92fc652eacc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_e7371de6bd325407b31897a3a1b91058, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_6c8adcdb52855d9d8af2ffd5d97c041a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_20d628166a6852708176782209a48b6a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_1ebc0a114aa356ce9c40cb1fa497484b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_6ed8a119077e5b1ca4159cec4cf48a67, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_70ee50c8aab857a1ae70ca1fa38da7a8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_11a24431caa15f7482664859a8206ec1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_330083eafd3156e9bfa3d82bf3c629bc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_cad3969e09f5558da892fd23b3c59d35, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_4cebec91d1cb58c4a11539ac4f6fe709, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_d980a49fc5a751b99ddcad8638067657, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_85d0c7138cd1577c8bfe13fd8f0ac9ae, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_14716a31b6d5516f9a285bef1f219edf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_e64835ca86f85af0a6754c6b1039c41d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_a7608c0d468c5429927656a7bf76d3ee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_9f640fe47e125ba6a146057995d57be4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_20031f5e5dfc5c6a992bc9ef2a7e27fe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_d73a2c6240d553a9b60542246dcc5571, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_3979adb9ac5c5e80924f0c1c700e1496, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_c9f43f7e956059e58d18b511917fe413, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_2d4afc17286c5252aba3a9b125cdb583, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_a053e9db992757c5b17bd09eab9c462b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_1034cb75f73b586b81f4b8c5e029ee16, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_69d634bc180a5466ad6dc90c7bf80bab, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_ddd9c045d17e5859a12dd74b25ffdac8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_2dade556253150c2b0f8c896550c47c6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_d4d3caccad0b573c80600924038f5064, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_6d4e1a57756b597c81c631701d6c38b1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_857c7cf072755205b1d90b055ba4b589, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_bd81633e6d5d565293cd254dae9560f1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_086f1e5843e3546bbd8b879aa8e40896, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_dc3fbbebc1035aecab1d89775047f06f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_dc31de9655ea58dcb8aacdd140fdbc1c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_1955b15705f35af5ba64744b4cfd924c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_781c80d1f0625127ae2eea0eae360ad0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_2eff655f8c32595186fc8cfc50825b96, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_2369c235761c50138e73733f84cd87d7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_bb30df03093a55089fe82ce408df645e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_476e6917ec315686a6007ddc67fa0ca3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_eacfd180c25b5475919da3392173b633, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_c792c90b60985acb81ee9bf567dc5e31, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_0dfcbf56c2f652dcb69051f01be84765, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_48d5f704d3e056c793b63d9515da1d12, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_628defc2fe4c531c838a9e26c788db11, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_4d702bd4e0ae5ba1bf80b19e7121acfa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_35ba2f37a0ad54428294f7756f3abd51, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_f994f252edbc557abb617c2eff4257a6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_b716176235fc5e9593cf80dc05aa2720, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_eb35eb6955b4549eb9a6e83cb1f35634, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_a7995bb9f8f254099d2a43df1fcee450, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_ae50ba1e28575ced9f395bba81a294fe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_6112ddfe954c5ba2bb3481a08032bd2f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_b470a8316312558e9c0cf861814d06f1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_3089b23d57285345831503f18fb8623d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_80be92d4fa6051d19c9d1bea290e82ef, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_d4be6e7b8a095854a66ad6463601ef33, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_7f98ba20852353dd9510d2f31ab13b31, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_3d937f5736325d988cdc8482cf75f942, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_76d4f0aa1b8750729973bbe187d64ab1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_347b407aa3c057b8880bfdabe111e745, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}