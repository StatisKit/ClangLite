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
    class ::clang::FunctionDecl  * (*method_pointer_979113fd1798538d9b38a627fb2e8f51)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_d5051eaf75cf5f20b7e47e9b0bb4be7f)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_d397c0e2eb1e50918fc19d03d4d3cc8a)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_2306e4ff27a254d3b946ce439525327d)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_3875b70cbe855e09849a4740000864fb)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_1f04e9b5dfea5e9db877dacf46d91dfd)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_f27b7c4276d95b6f897994f143783b46)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_d2ce8b1f7b2d527d8f6bed83ea724d83)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_a626e89783fe5953a864beeb7a8717e2)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_03a350b7b3ae51cea716d158df07c8ef)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_c1dbda5f5319587a82f5f1f58f0f703c)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_f8d775d3f64d5d6788aaed7a24605ce1)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_f57da5fb3e385589a57f79d0eefe0cfa)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_3ebef93858e75261a6bfde1950dec5d6)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_5fe06e09841853f0bcb71375474033bb)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_b4b3cf7ea51b55518f9c60d01833d843)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_ce9a367d2bce5a91ad880e15a5c2b1e3)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_63672dbe5bb05018ad6641995559c32c)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_8b86e14d9e335253a2fa84a546f3e056)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_67f35adc1d1659d4bfdb5f6edbbf44e2)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_3a042458d6d85b4597785c17346f76f0)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_c6b3ab0ba9b45414a532030ae88a8bbc)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_b34206ed303351368c9fb624f66c70b7)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_ec1e98a984d9548883d507fd774bc77f)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_729868defabf596e9cb4f750df7e4142)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_71e8f3c9252e55fcbbc2610744287721)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_3c5c75305cee55e89212ecfb138d2cf6)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_5fa7a0f1a04c5615b4c53fbeb82c6ebd)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_eb53d6bc6fe85a3bad054a6e7ff2c94a)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_0837a05273ca50bcaf74e6d349c38e81)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_297c5e3275555c4489149bc5e400e7a7)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_7956898215b553f2a2b34b64036dc151)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_1f4d29389def5425a0b9328207ae9f6b)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_e3acc8603e7a5f8ba1793c6891746df9)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_93419a36322a5a4a9e7efe40860d70b8)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_cefc1d06cc1c50f3937c581c7fbc779f)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_40bf1aa8e65d5e6bb4e1af1c3f348890)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_6f1a14ffa1985bae83bd5b5daf1f9728)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_47fa477ba6215cabaabc8319317f1ea2)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_5be4f2eff3d45af4b08044232d033f52)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_54fdab18aaa45bd7bcee9761dc314892)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_d54b9a4453b359f38aaa16a0e65197d7)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_f7e751dcde695a38b8a1978ceef5a74c)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_4d865817b94d50c0893526c2bda68459)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_01328524bfb953279af61e0336b22a13)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_c93c443ddac55f60bcd8628187133c1e)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_b8cde768f3aa5ffa9546c4fbc4c4a930)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_e66b0ae27b4b53678395ae262fb82a09)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_0caa346173635a69937cb683c2da9ff3)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_9fefd0bd75575f9395e64a0b5ec984ad)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_c7932ed9d9545db9bc02f18da9f38923)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_4c9702edce9253b281c32b599bff9ce7)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_6449e8c5e9885199b6a170a5a39867f9)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_b23cc918d4d45bfe867f78a9cff8dcec)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_86251a66865254b3bf75cc15be94fc7d)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_ca4f04e9ad455dee88f80ebfbe3f3ff5)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_b33b894ebd20591b99cff0577e3f943e)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_a83c54e1f0db5044a031ab4553e0d8ba)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_c86c21ca74f25b8e81823e30762e6a4e)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_197dcfd1b63452c381f399ece03ab00c)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_508e32ad87d55797926d821caf534ddc)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_2d38a4bd96d45a0ab4fc9be0a7daa216)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_cb8233f16396533db976d445fc8e4ca8)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_cd3a64ebb40e555a9ce7a98ec86f4d51)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_e3f4235e517656188a5f2951a43269d8)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_23b70649ee0d507dae90fd8fc3cd4b99)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_b948769e6b7959ca88cebd0463eb8b72)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_94a7cb88ab505f34a0370e47a8337fb6)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_2fc2d88edd8659b986f904e255d74376)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_fb7845d3fc3b5f2db218c9a0feebe40a)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_42b788ebd416541491894af1dbd9d0dc)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_3f90c3beb176580783b6484c8a150f22)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_7847f77628a850de836109b1102629ca)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_c68273ca6f785c1a847ecd033d1dcd0c)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_0285ec2116a25d8291eccc13cd645a4b)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_036727972bb95a95946420374b570003)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_07bd59c8cb8c517a9033e6c1e617e41a)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_fa1e9a9c66ec5d52a9533a9a36a30b4e)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_a55849adb04f55d3a46bdb17742a3125)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_80f5c0e5b7bb589caf02dddb93589b92)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_0f48d3cacbda5e4d97096c4e7952e30e(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_81310ef0e1fe50669b1b743478475168(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_979113fd1798538d9b38a627fb2e8f51, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_d5051eaf75cf5f20b7e47e9b0bb4be7f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_d397c0e2eb1e50918fc19d03d4d3cc8a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_2306e4ff27a254d3b946ce439525327d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_3875b70cbe855e09849a4740000864fb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_1f04e9b5dfea5e9db877dacf46d91dfd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_f27b7c4276d95b6f897994f143783b46, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_d2ce8b1f7b2d527d8f6bed83ea724d83, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_a626e89783fe5953a864beeb7a8717e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_03a350b7b3ae51cea716d158df07c8ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_c1dbda5f5319587a82f5f1f58f0f703c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_f8d775d3f64d5d6788aaed7a24605ce1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_f57da5fb3e385589a57f79d0eefe0cfa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_3ebef93858e75261a6bfde1950dec5d6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_5fe06e09841853f0bcb71375474033bb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_b4b3cf7ea51b55518f9c60d01833d843, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_ce9a367d2bce5a91ad880e15a5c2b1e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_63672dbe5bb05018ad6641995559c32c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_8b86e14d9e335253a2fa84a546f3e056, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_67f35adc1d1659d4bfdb5f6edbbf44e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_3a042458d6d85b4597785c17346f76f0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_c6b3ab0ba9b45414a532030ae88a8bbc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_b34206ed303351368c9fb624f66c70b7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_ec1e98a984d9548883d507fd774bc77f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_729868defabf596e9cb4f750df7e4142, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_71e8f3c9252e55fcbbc2610744287721, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_3c5c75305cee55e89212ecfb138d2cf6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_5fa7a0f1a04c5615b4c53fbeb82c6ebd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_eb53d6bc6fe85a3bad054a6e7ff2c94a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_0837a05273ca50bcaf74e6d349c38e81, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_297c5e3275555c4489149bc5e400e7a7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_7956898215b553f2a2b34b64036dc151, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_1f4d29389def5425a0b9328207ae9f6b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_e3acc8603e7a5f8ba1793c6891746df9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_93419a36322a5a4a9e7efe40860d70b8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_cefc1d06cc1c50f3937c581c7fbc779f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_40bf1aa8e65d5e6bb4e1af1c3f348890, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_6f1a14ffa1985bae83bd5b5daf1f9728, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_47fa477ba6215cabaabc8319317f1ea2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_5be4f2eff3d45af4b08044232d033f52, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_54fdab18aaa45bd7bcee9761dc314892, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_d54b9a4453b359f38aaa16a0e65197d7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_f7e751dcde695a38b8a1978ceef5a74c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_4d865817b94d50c0893526c2bda68459, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_01328524bfb953279af61e0336b22a13, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_c93c443ddac55f60bcd8628187133c1e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_b8cde768f3aa5ffa9546c4fbc4c4a930, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_e66b0ae27b4b53678395ae262fb82a09, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_0caa346173635a69937cb683c2da9ff3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_9fefd0bd75575f9395e64a0b5ec984ad, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_c7932ed9d9545db9bc02f18da9f38923, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_4c9702edce9253b281c32b599bff9ce7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_6449e8c5e9885199b6a170a5a39867f9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_b23cc918d4d45bfe867f78a9cff8dcec, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_86251a66865254b3bf75cc15be94fc7d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_ca4f04e9ad455dee88f80ebfbe3f3ff5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_b33b894ebd20591b99cff0577e3f943e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_a83c54e1f0db5044a031ab4553e0d8ba, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_c86c21ca74f25b8e81823e30762e6a4e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_197dcfd1b63452c381f399ece03ab00c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_508e32ad87d55797926d821caf534ddc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_2d38a4bd96d45a0ab4fc9be0a7daa216, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_cb8233f16396533db976d445fc8e4ca8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_cd3a64ebb40e555a9ce7a98ec86f4d51, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_e3f4235e517656188a5f2951a43269d8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_23b70649ee0d507dae90fd8fc3cd4b99, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_b948769e6b7959ca88cebd0463eb8b72, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_94a7cb88ab505f34a0370e47a8337fb6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_2fc2d88edd8659b986f904e255d74376, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_fb7845d3fc3b5f2db218c9a0feebe40a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_42b788ebd416541491894af1dbd9d0dc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_3f90c3beb176580783b6484c8a150f22, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_7847f77628a850de836109b1102629ca, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_c68273ca6f785c1a847ecd033d1dcd0c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_0285ec2116a25d8291eccc13cd645a4b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_036727972bb95a95946420374b570003, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_07bd59c8cb8c517a9033e6c1e617e41a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_fa1e9a9c66ec5d52a9533a9a36a30b4e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_a55849adb04f55d3a46bdb17742a3125, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_80f5c0e5b7bb589caf02dddb93589b92, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_0f48d3cacbda5e4d97096c4e7952e30e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_81310ef0e1fe50669b1b743478475168, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}