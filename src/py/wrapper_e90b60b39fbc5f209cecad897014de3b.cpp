#include "_clanglite.h"


namespace autowig
{
}


void wrapper_e90b60b39fbc5f209cecad897014de3b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FunctionDecl  * (*method_pointer_25286c94bbae5c32b6a299c422ba95ca)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_dea8407ea5e658918c043ab1f5165208)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_30eab39c05145a2583b1fca18e438ee3)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_f8b51266d7e45657a88ff633e14a1af2)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_9dcb80d85fa253039fee0698a7d4387d)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_a5f0ce6b4593599082db4da7b30ec24a)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_0e6fa2005a7b58daa2afd1fea13afcb7)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_849d5c0ea3c75a7da4b2b0225e8fd487)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_89638c04edbb5f28baef18008897fd70)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_2cbcc6719d815be48de190380189d8a4)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_aa39c2c191d15b089b9432f36ae2516d)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_7bb1e81c15425d6a943c65f152d7661e)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_f559f2bb95a85ca9841da97b6182f8a8)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_e9dc44732a915e5b84e350f262a25cc9)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_be019443a1b1526ea4e69ff6fdb8baa1)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_9122a5a01cee5cdd8598b1f88e4b13c1)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_dcf75a0607c150b3b48d505c41dd6ddb)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_7cab0a87b08f5576be53213e83945b53)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_f6e0bdea99d4528c955c8e2700bd29da)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_848040fa9a315ffe9555b1da676ac26c)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_29ff5ae830d85baa9897ce93564bee96)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_c4b2fe8cfebb57e48e380f1be8e99d05)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_602bfd03b06f5a109fd5b57b29b38d98)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_0858e08800325fccbc326956ec75afdc)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_1c350ebe62ab598bb6744a41d63a7e2e)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_008be0540d8255068047892cefb37c96)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_20687729294d52839ad289efaf394eb1)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_9e2f9bb46a4d5d7ba805ee5ff5dfa17c)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_bd7c41a5836e54949e1dd35559d7f58b)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_17697c3267b25269ac19c44870c67ca2)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_6e4cf454ef4c501ea9f221d2e452b8f8)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_1267a7109d5553bda9af47a84ed2c3dc)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_7218d36cd5485f0e93d912790d770407)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_ad549fc219045167bcd81a82c6d35405)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_09c91af8a62d5d0996d4567614e19954)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_61436f43854b5c10a85d201340377cd5)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_f2a2f5ca8b9b56faa518fa0b9a956e89)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_8fefa90b2c5c5be99622bf6c776f69cc)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_cfc7553b1f945df58f06308a4f5c6b3f)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_e79adf9cae545dccadb36149b77ff6b9)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_49347114d21b5c56908bff1c60e722e2)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_e5702ed835805c4d9b5731c44cd0b7c9)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_225bb9c5efd75457bc23c0af502e677f)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_88f9cef0696b5a2eae8454b6a84963dd)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_9f20a076506f5b55927facdc37150091)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_f5f59d1b1a785b5c9da42858ffef3c84)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_f555a93ba052531a9f57d5f0af6dd566)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_2b3e52d8753a51a3bfe607edec5279ab)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_9999327f286d54d2adb6155177133241)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_bbe4eca2b30a552aa101b553ab17a19a)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_30935e20adcb5d9ca0f629a18496db04)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_1fc87fbadcda56e1be291510a1eb3165)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_6b91993663e85726bec229730e8a356d)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_167449b1dc655c14a9ed93e9e90e6854)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_be90632520ec591c81e8718a060b6b90)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_1f279aaefda752a1862a47dde5c652b8)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_9404bbaa9c5451fda4fbe40f381c89e2)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_755905a9d3395eaf87337948ccfbddaa)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_174e1388e173500f9d2bff1a7a04d600)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_d81f5563ac7e5576bbff0f1fe09a4fb2)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_c69095b24ec852508f0957690e4442c9)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_71bf5186f22c55dba5aee8ce0c1cefd7)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_54632631637f5260b77b487319c348fe)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_7c68ba4bfc3e5b2d8e9afcb405a736f3)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_d4de0d65005956ccbbf6d4b37d6d2850)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_add56245283752099906c2b9bea1e385)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_2e96a4a1af005d2e894e7d43ed1c0607)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_073907f9b0cc519d94b49635c3259c36)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_71aaea3bca5a5793ade0ef9d44d35743)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_33c5a2852d7e5db49b6c191e19e118aa)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_e875e0abfeab51e493c6c1c49f210547)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_74a0fa2eb14b5a488b9258f4eb74410e)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_d0ba74b65e3e532f8687dff863ec485d)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_c601afc84fe554ad96c11049a6ae4b2b)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_1d289921d5065c42a1a20cff47b8f35e)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_5be6806c924451958e634fd5c4d4232d)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_6ab5d91d282f553e8430497b9fa2c9f4)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_e60175b8294b549c8138a6cef1bf4e56)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_ed36b37d8c4451f2a43f3bfb75bbd6b1)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_774c2bb7152d5dcd9e698105e1349b91)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_cc74566523d257b1bbf93eed0ec6eadb)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_818f3666b0cd5da7a8d5d0fed27100c2)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_94f0c4c2f5175a6f90301c4955d96f0c)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_1741690107c158888007ebc533c9ad6e)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_723615cfdbbd55e1b036d2e7a4d39b92(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_8f5bdbaf496c55f992652c29532b8e30(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_25286c94bbae5c32b6a299c422ba95ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_dea8407ea5e658918c043ab1f5165208, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_30eab39c05145a2583b1fca18e438ee3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_f8b51266d7e45657a88ff633e14a1af2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_9dcb80d85fa253039fee0698a7d4387d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_a5f0ce6b4593599082db4da7b30ec24a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_0e6fa2005a7b58daa2afd1fea13afcb7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_849d5c0ea3c75a7da4b2b0225e8fd487, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_89638c04edbb5f28baef18008897fd70, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_2cbcc6719d815be48de190380189d8a4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_aa39c2c191d15b089b9432f36ae2516d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_7bb1e81c15425d6a943c65f152d7661e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_f559f2bb95a85ca9841da97b6182f8a8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_e9dc44732a915e5b84e350f262a25cc9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_be019443a1b1526ea4e69ff6fdb8baa1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_9122a5a01cee5cdd8598b1f88e4b13c1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_dcf75a0607c150b3b48d505c41dd6ddb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_7cab0a87b08f5576be53213e83945b53, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_f6e0bdea99d4528c955c8e2700bd29da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_848040fa9a315ffe9555b1da676ac26c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_29ff5ae830d85baa9897ce93564bee96, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_c4b2fe8cfebb57e48e380f1be8e99d05, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_602bfd03b06f5a109fd5b57b29b38d98, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_0858e08800325fccbc326956ec75afdc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_1c350ebe62ab598bb6744a41d63a7e2e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_008be0540d8255068047892cefb37c96, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_20687729294d52839ad289efaf394eb1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_9e2f9bb46a4d5d7ba805ee5ff5dfa17c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_bd7c41a5836e54949e1dd35559d7f58b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_17697c3267b25269ac19c44870c67ca2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_6e4cf454ef4c501ea9f221d2e452b8f8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_1267a7109d5553bda9af47a84ed2c3dc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_7218d36cd5485f0e93d912790d770407, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_ad549fc219045167bcd81a82c6d35405, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_09c91af8a62d5d0996d4567614e19954, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_61436f43854b5c10a85d201340377cd5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_f2a2f5ca8b9b56faa518fa0b9a956e89, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_8fefa90b2c5c5be99622bf6c776f69cc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_cfc7553b1f945df58f06308a4f5c6b3f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_e79adf9cae545dccadb36149b77ff6b9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_49347114d21b5c56908bff1c60e722e2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_e5702ed835805c4d9b5731c44cd0b7c9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_225bb9c5efd75457bc23c0af502e677f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_88f9cef0696b5a2eae8454b6a84963dd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_9f20a076506f5b55927facdc37150091, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_f5f59d1b1a785b5c9da42858ffef3c84, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_f555a93ba052531a9f57d5f0af6dd566, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_2b3e52d8753a51a3bfe607edec5279ab, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_9999327f286d54d2adb6155177133241, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_bbe4eca2b30a552aa101b553ab17a19a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_30935e20adcb5d9ca0f629a18496db04, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_1fc87fbadcda56e1be291510a1eb3165, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_6b91993663e85726bec229730e8a356d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_167449b1dc655c14a9ed93e9e90e6854, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_be90632520ec591c81e8718a060b6b90, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_1f279aaefda752a1862a47dde5c652b8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_9404bbaa9c5451fda4fbe40f381c89e2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_755905a9d3395eaf87337948ccfbddaa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_174e1388e173500f9d2bff1a7a04d600, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_d81f5563ac7e5576bbff0f1fe09a4fb2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_c69095b24ec852508f0957690e4442c9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_71bf5186f22c55dba5aee8ce0c1cefd7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_54632631637f5260b77b487319c348fe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_7c68ba4bfc3e5b2d8e9afcb405a736f3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_d4de0d65005956ccbbf6d4b37d6d2850, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_add56245283752099906c2b9bea1e385, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_2e96a4a1af005d2e894e7d43ed1c0607, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_073907f9b0cc519d94b49635c3259c36, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_71aaea3bca5a5793ade0ef9d44d35743, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_33c5a2852d7e5db49b6c191e19e118aa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_e875e0abfeab51e493c6c1c49f210547, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_74a0fa2eb14b5a488b9258f4eb74410e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_d0ba74b65e3e532f8687dff863ec485d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_c601afc84fe554ad96c11049a6ae4b2b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_1d289921d5065c42a1a20cff47b8f35e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_5be6806c924451958e634fd5c4d4232d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_6ab5d91d282f553e8430497b9fa2c9f4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_e60175b8294b549c8138a6cef1bf4e56, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_ed36b37d8c4451f2a43f3bfb75bbd6b1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_774c2bb7152d5dcd9e698105e1349b91, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_cc74566523d257b1bbf93eed0ec6eadb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_818f3666b0cd5da7a8d5d0fed27100c2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_94f0c4c2f5175a6f90301c4955d96f0c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_1741690107c158888007ebc533c9ad6e, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_723615cfdbbd55e1b036d2e7a4d39b92, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_8f5bdbaf496c55f992652c29532b8e30, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}