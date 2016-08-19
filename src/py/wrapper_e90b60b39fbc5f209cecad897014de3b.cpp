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
    class ::clang::FunctionDecl  * (*method_pointer_a4bfc012d2395be9b142f2eadb5022dc)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_ff605ca3b3e25ef9b04eb188364331b4)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_8bf6637aad835f4ba8f933ec9f09b229)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_1d9c8e7081ad5018b75fffae21b2e937)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_e7a7390966d952a09b08e01eb4addc10)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_2986a3009c03586882d344d7a34da79c)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_1cf59117b8c25735854ef62fba3f1824)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_0f2e067d2dc65b579412e39fab0ad99b)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_44e8f7bfb98e5c25af06b015718d4d0a)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_e07ff3ed919357288b5b412573623086)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_4c5c8dc5a55058f48567be44c89f7d49)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_3dbd3e521a58574f8eda6203c25b01ee)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_dfd4334865a4568389f7c5af9e62fb1a)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_04771753df1c58968447d46ea43ae80b)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_4be51d2aa7835ff3a2e2d4d72d3c337b)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_a02d8e567d1955aeb0cb2fa555cc4d4d)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_79c231d65bdb5704ad16d0b61b7a1a2a)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_8eb14f2ec98956cab22c4db87d993645)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_e86829fa20e6581f91f8cb23e350c9a6)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_d8b309884eff5b139aee6083cbef1fae)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    bool  (::clang::FunctionDecl::*method_pointer_cbaf610dc8ff59faa7f7d21471ca8644)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_ddc0529db42353ebb229f4f682943b5f)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_24444b0d5c2154d3886d5ac4948ccd11)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_04398acbb178595c83ab502f918539b1)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_9d5526fbf0bd510b91b8f7e72684b857)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_35851327f12a508093eede1bcec8725c)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_088da61517c357c7b3be75199f75d3ef)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_fdbe3343a75d590e90f6ec83d6405405)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_23606c55fb415663a274fa401e829d0b)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_334907b6d31854c69fdb4836ae68c62b)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_a3fbdf50f4a1523d97ff2b34d2cb1854)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_87c7c7a59962588fa5175714ece00a29)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_d2926d69b1cc566d9ad9fb5c3e54e15b)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_c1d705700f125d5897f27e9d8e1ae6c1)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_6c5ae90633c354eaab9c706c5efb1ddc)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_90c9a66f3b635e35a7d2a545a253004d)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_65df0214857e550d8e478fd4c94892d9)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_026f5e64a6f35d2e84dc1f34fb2ae71a)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_0f5ca016f47c544c84d31c9c5f6820c5)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_ecb8954bcbd551d9ab1617c585850c7d)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_7a10e1a374db5a66bd951392aa5a4098)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_26662cffd2925a418f7363d063bab554)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_43953eaf5231508298b95d3179a26350)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_67a7ee7a12f7517d86932b2c3b203eb1)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_a26872a5cec05f38948887730fa36af2)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_ec7148f7ffa15223970cda90515d5c3e)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_913c858d9a8857649bd387cf29d6ae74)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_109704f3af975745b1e523f938978c1f)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_f5e426b2d8055b7894f6d4c905d3887d)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_7a2057af793656a0aa101657251a9d33)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_90896b9c0b495e168f69a747def34231)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_a4144f332c9d50f0a031772af48d92ea)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_e9870353220c54ddacadb9fbad2ac8d6)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_30336923dd3150c6aa2a0d51f7e4b4a6)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_a8e67a23e0e556cb85e2c3489664858c)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_9d340de11c715e949606c1ef9cc9fd1d)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_767ca700ba46560eac3ffcc87887e9e0)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_2cec757139ea5827970a4aff22d1dec8)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_c6a3246d51f35ba1a40839cc80d0269c)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_3be71da9e8e45cc4ae409afb537533d5)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_c40081a8dc4650e2b30663a97b5c721b)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_e4f35a441edc57b392f90da3def446e3)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_34c1b7b98bb65671a28ec83f46266d80)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_e81e6d41e019524387aaf826bcb65357)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_0ebdaa49c3855d1ea0e137bee308b50a)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_5234ea170d83569aa45d203dee1fffc4)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_db630c051c6751c29460e198049a417a)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_b36e354696175c268d4c6e42711abc5d)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_f51a5bdfb377543eaf88a3018c4af82d)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_3fbb8e8d62b7547bb788afd2d4990788)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_78677946a27752c2a2ff68b70f4d98f5)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_3d3e3af0cfa05ec3ab1707d9a6dfec41)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_3b88a93eb93456a4b991ada6a7006d25)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_fcc6e56f8d205ec1a5dadca5c3f9b6f9)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_47c6d55bcc3f5b7587d2bf0926dcab1e)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_301a69f9e3ff5ee8b506d9e306019e10)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_a56339f6eff85c64a7e32192d1ea042c)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_0b267ca5670f59968df8d1aaf36c3c37)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_1941e83e3fdb55698ed8d669ce0737e2)() const = &::clang::FunctionDecl::usesSEHTry;
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_a4bfc012d2395be9b142f2eadb5022dc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_ff605ca3b3e25ef9b04eb188364331b4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_8bf6637aad835f4ba8f933ec9f09b229, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_1d9c8e7081ad5018b75fffae21b2e937, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_e7a7390966d952a09b08e01eb4addc10, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_2986a3009c03586882d344d7a34da79c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_1cf59117b8c25735854ef62fba3f1824, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_0f2e067d2dc65b579412e39fab0ad99b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_44e8f7bfb98e5c25af06b015718d4d0a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_e07ff3ed919357288b5b412573623086, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_4c5c8dc5a55058f48567be44c89f7d49, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_3dbd3e521a58574f8eda6203c25b01ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_dfd4334865a4568389f7c5af9e62fb1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_04771753df1c58968447d46ea43ae80b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_4be51d2aa7835ff3a2e2d4d72d3c337b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_a02d8e567d1955aeb0cb2fa555cc4d4d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_79c231d65bdb5704ad16d0b61b7a1a2a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_8eb14f2ec98956cab22c4db87d993645, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_e86829fa20e6581f91f8cb23e350c9a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_d8b309884eff5b139aee6083cbef1fae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_cbaf610dc8ff59faa7f7d21471ca8644, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_ddc0529db42353ebb229f4f682943b5f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_24444b0d5c2154d3886d5ac4948ccd11, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_04398acbb178595c83ab502f918539b1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_9d5526fbf0bd510b91b8f7e72684b857, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_35851327f12a508093eede1bcec8725c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_088da61517c357c7b3be75199f75d3ef, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_fdbe3343a75d590e90f6ec83d6405405, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_23606c55fb415663a274fa401e829d0b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_334907b6d31854c69fdb4836ae68c62b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_a3fbdf50f4a1523d97ff2b34d2cb1854, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_87c7c7a59962588fa5175714ece00a29, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_d2926d69b1cc566d9ad9fb5c3e54e15b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_c1d705700f125d5897f27e9d8e1ae6c1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_6c5ae90633c354eaab9c706c5efb1ddc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_90c9a66f3b635e35a7d2a545a253004d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_65df0214857e550d8e478fd4c94892d9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_026f5e64a6f35d2e84dc1f34fb2ae71a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_0f5ca016f47c544c84d31c9c5f6820c5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_ecb8954bcbd551d9ab1617c585850c7d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_7a10e1a374db5a66bd951392aa5a4098, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_26662cffd2925a418f7363d063bab554, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_43953eaf5231508298b95d3179a26350, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_67a7ee7a12f7517d86932b2c3b203eb1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_a26872a5cec05f38948887730fa36af2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_ec7148f7ffa15223970cda90515d5c3e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_913c858d9a8857649bd387cf29d6ae74, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_109704f3af975745b1e523f938978c1f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_f5e426b2d8055b7894f6d4c905d3887d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_7a2057af793656a0aa101657251a9d33, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_90896b9c0b495e168f69a747def34231, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_a4144f332c9d50f0a031772af48d92ea, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_e9870353220c54ddacadb9fbad2ac8d6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_30336923dd3150c6aa2a0d51f7e4b4a6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_a8e67a23e0e556cb85e2c3489664858c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_9d340de11c715e949606c1ef9cc9fd1d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_767ca700ba46560eac3ffcc87887e9e0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_2cec757139ea5827970a4aff22d1dec8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_c6a3246d51f35ba1a40839cc80d0269c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_3be71da9e8e45cc4ae409afb537533d5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_c40081a8dc4650e2b30663a97b5c721b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_e4f35a441edc57b392f90da3def446e3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_34c1b7b98bb65671a28ec83f46266d80, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_e81e6d41e019524387aaf826bcb65357, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_0ebdaa49c3855d1ea0e137bee308b50a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_5234ea170d83569aa45d203dee1fffc4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_db630c051c6751c29460e198049a417a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_b36e354696175c268d4c6e42711abc5d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_f51a5bdfb377543eaf88a3018c4af82d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_3fbb8e8d62b7547bb788afd2d4990788, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_78677946a27752c2a2ff68b70f4d98f5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_3d3e3af0cfa05ec3ab1707d9a6dfec41, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_3b88a93eb93456a4b991ada6a7006d25, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_fcc6e56f8d205ec1a5dadca5c3f9b6f9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_47c6d55bcc3f5b7587d2bf0926dcab1e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_301a69f9e3ff5ee8b506d9e306019e10, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_a56339f6eff85c64a7e32192d1ea042c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_0b267ca5670f59968df8d1aaf36c3c37, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_1941e83e3fdb55698ed8d669ce0737e2, "");
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