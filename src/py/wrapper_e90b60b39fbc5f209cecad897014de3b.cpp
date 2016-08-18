#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_e90b60b39fbc5f209cecad897014de3b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FunctionDecl  * (*method_pointer_888d1de7363f567395c920ce95db04f0)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_25f4100f6ab755209fb5bb4965ae0dcf)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_405625431a5c531099da5dc0f70bdd66)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_fac4ccaf27245091bc8d9b3da6d76c0a)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_01ae5585fcbb5909bd5dc80030dd3da2)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_3a5fd2f7698c5d3a817a1ac9f2d49ba6)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_72f8c3a53c1d58ab95f537b25d3fb2e1)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_9c3bb9a7eb2b5d1aae18180395842106)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_44f154990761573daca193c352aa693c)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_245a14f4e43b51fd92980e99f73ae884)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_ed0cc980ec2a55ac86a61fdfe5b6c35b)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_2121ea2144c65ae39b1db15e77089fac)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_8a876a949c99591894c6a4dce1333841)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_63ba11b2ec8652daad3bdff35f623050)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_cd63d53290465fb19f4a0c4e929c35ee)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_8f385f59697b57f4b2adf73cad960f32)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_4fac95d3dad85b50932e25f6bc62adef)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_0bc48c024ddf53ea8f5c1a218f316ca3)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_de2cea67cd89557ab2aad57a6d3bb878)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_c5b3a76806ec5f2b813bc57d39c79132)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    bool  (::clang::FunctionDecl::*method_pointer_773c1981193c5e15b415c946bf281c09)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_1c91e608c05f5baca8eeed048745b0ed)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_b6df71d504e45649b3e558c8305038c2)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_13ac06791b955ee8a55fcc74b652bf6e)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_6050b3d9ec7256c993d980d6095df1e7)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_540884eee8db518482f629707a7c071d)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_dcda566241ce5178ad03fee76e4d2437)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_e149f838145a5aaebe1060e174622815)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_db3015eddd295c3ba89097352d48f8ed)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_f8a4dab1336157828432ba11d0ac2036)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_295f9c78e97f5bb89d3ccacbd57f881c)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_a085df3f1c4a520399dc5ae22dd62ba4)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_4b3b8844fb445bdb8f3f62a9a5bbea30)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_bd898a23926a58ed8f25bcebe44b7e85)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_29dfafe190835477a113f86cec93b28c)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_977957b981bf52d3b46b8f0f72802993)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_b83d03077949596998ad5f1c274ddd7e)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_f6adf4deaa0b56199b242daaff0d2090)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_eff0f5b34df854f0b3d9aebb47738206)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_b6a5391547325e9286fe8a7024c33804)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_fa055bcd750151c39b0e41bd7f635a88)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_25f7dfe1e79b5156a6aaf25de1503bd2)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_2fc8e79805365afe9fa7f6359487665f)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_67c1f5ccdf3f55bdbd7df1d105d6f584)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_f61059b090445860b83e14d56df7278d)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_d7e214e9cef55ba7a50292d858fd1efd)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_f6783ad510635b1eb1bdcab843bf885e)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_ea7952b90c31573d81f670b1c24be22a)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_a4afb0c158f15484ae6a06ef93a74895)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_d3dfbfa337c25f6489a5b65405d42e1c)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_763ec1bd5e925ff697ce81bc24ef4c5d)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_40ea62664db15ddf8288a79dbc1dde6f)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_c8e7b98ca37152f281e603432faa023e)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_cba0aa2902fb5f04bf4bcc39f683a5ba)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_e4813746b19d5f088cf75ce92ed6f61b)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_eeb1a4d1ceb4530f803563c7685d52e0)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_30a3dc850e7d5b8da70356dc6a11a33e)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_9fe0dff03f5150e49890493c87c492c5)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_96f65ba066d95d39bda945df031f0c19)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_ea4416bd12115866813f43e1f0f61bc2)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_96af1e2afb795e6794c123aee6695307)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_c9fdc283e9b350299ab6f56ca57e9cd9)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_cfb668cff5b6583a8511ff6d6d566750)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_c632098338d45ccba30f6beaff3d8368)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_57fa7dd09a255519896c8022279c353a)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_21a802178600526485ac8090307c0540)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_4c2bee7714f353e2929231e4b795e57a)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_e2cce9fda6cc52a2b3d791270cfa2c13)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_06ea2fe53a915424b12596fe823a38f7)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_8353b171f3e25a7ebbc545476edc2b65)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_296ed3be8a125b0bb00876c8311734b9)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_f69440121e925c729b1d9b8752e47670)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_95dec70bba1d52d99e2718f8e9772d45)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_a71100b4fec1558fbc9a98ee20f939d9)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_4b3821c39db95f8f9b827b6a9768e1ad)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_ce7903287cc65a42a7f5162d0bee2a3a)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_8965c22ee2f856e5ab6df3e7aefc28f3)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_97667b3d0c805ce18e571176f4673f4a)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_df99354b2fef55ea93f38d03b9ab2952)() const = &::clang::FunctionDecl::usesSEHTry;
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_888d1de7363f567395c920ce95db04f0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_25f4100f6ab755209fb5bb4965ae0dcf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_405625431a5c531099da5dc0f70bdd66, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_fac4ccaf27245091bc8d9b3da6d76c0a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_01ae5585fcbb5909bd5dc80030dd3da2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_3a5fd2f7698c5d3a817a1ac9f2d49ba6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_72f8c3a53c1d58ab95f537b25d3fb2e1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_9c3bb9a7eb2b5d1aae18180395842106, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_44f154990761573daca193c352aa693c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_245a14f4e43b51fd92980e99f73ae884, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_ed0cc980ec2a55ac86a61fdfe5b6c35b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_2121ea2144c65ae39b1db15e77089fac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_8a876a949c99591894c6a4dce1333841, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_63ba11b2ec8652daad3bdff35f623050, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_cd63d53290465fb19f4a0c4e929c35ee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_8f385f59697b57f4b2adf73cad960f32, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_4fac95d3dad85b50932e25f6bc62adef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_0bc48c024ddf53ea8f5c1a218f316ca3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_de2cea67cd89557ab2aad57a6d3bb878, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_c5b3a76806ec5f2b813bc57d39c79132, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_773c1981193c5e15b415c946bf281c09, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_1c91e608c05f5baca8eeed048745b0ed, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_b6df71d504e45649b3e558c8305038c2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_13ac06791b955ee8a55fcc74b652bf6e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_6050b3d9ec7256c993d980d6095df1e7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_540884eee8db518482f629707a7c071d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_dcda566241ce5178ad03fee76e4d2437, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_e149f838145a5aaebe1060e174622815, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_db3015eddd295c3ba89097352d48f8ed, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_f8a4dab1336157828432ba11d0ac2036, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_295f9c78e97f5bb89d3ccacbd57f881c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_a085df3f1c4a520399dc5ae22dd62ba4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_4b3b8844fb445bdb8f3f62a9a5bbea30, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_bd898a23926a58ed8f25bcebe44b7e85, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_29dfafe190835477a113f86cec93b28c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_977957b981bf52d3b46b8f0f72802993, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_b83d03077949596998ad5f1c274ddd7e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_f6adf4deaa0b56199b242daaff0d2090, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_eff0f5b34df854f0b3d9aebb47738206, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_b6a5391547325e9286fe8a7024c33804, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_fa055bcd750151c39b0e41bd7f635a88, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_25f7dfe1e79b5156a6aaf25de1503bd2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_2fc8e79805365afe9fa7f6359487665f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_67c1f5ccdf3f55bdbd7df1d105d6f584, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_f61059b090445860b83e14d56df7278d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_d7e214e9cef55ba7a50292d858fd1efd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_f6783ad510635b1eb1bdcab843bf885e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_ea7952b90c31573d81f670b1c24be22a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_a4afb0c158f15484ae6a06ef93a74895, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_d3dfbfa337c25f6489a5b65405d42e1c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_763ec1bd5e925ff697ce81bc24ef4c5d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_40ea62664db15ddf8288a79dbc1dde6f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_c8e7b98ca37152f281e603432faa023e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_cba0aa2902fb5f04bf4bcc39f683a5ba, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_e4813746b19d5f088cf75ce92ed6f61b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_eeb1a4d1ceb4530f803563c7685d52e0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_30a3dc850e7d5b8da70356dc6a11a33e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_9fe0dff03f5150e49890493c87c492c5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_96f65ba066d95d39bda945df031f0c19, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_ea4416bd12115866813f43e1f0f61bc2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_96af1e2afb795e6794c123aee6695307, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_c9fdc283e9b350299ab6f56ca57e9cd9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_cfb668cff5b6583a8511ff6d6d566750, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_c632098338d45ccba30f6beaff3d8368, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_57fa7dd09a255519896c8022279c353a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_21a802178600526485ac8090307c0540, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_4c2bee7714f353e2929231e4b795e57a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_e2cce9fda6cc52a2b3d791270cfa2c13, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_06ea2fe53a915424b12596fe823a38f7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_8353b171f3e25a7ebbc545476edc2b65, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_296ed3be8a125b0bb00876c8311734b9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_f69440121e925c729b1d9b8752e47670, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_95dec70bba1d52d99e2718f8e9772d45, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_a71100b4fec1558fbc9a98ee20f939d9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_4b3821c39db95f8f9b827b6a9768e1ad, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_ce7903287cc65a42a7f5162d0bee2a3a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_8965c22ee2f856e5ab6df3e7aefc28f3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_97667b3d0c805ce18e571176f4673f4a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_df99354b2fef55ea93f38d03b9ab2952, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}