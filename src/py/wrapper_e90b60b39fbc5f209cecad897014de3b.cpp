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
    class ::clang::FunctionDecl  * (*method_pointer_b7143eb81297555b89fde6df35153727)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_45e53aaf9c105358b785c454a1fd5167)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_a9048a38d71b54008cb1c21113eb77ed)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_2190a02d51ce58178d46c63be7f05c11)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_3cb7b5c4adca5b36af1f999ee236bd16)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_e4a4159d96f158ccbb798d5a4e262745)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_845f0f398e535bd8a2424f3b494a1cff)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_64e74686fd335d039e599efdec64459f)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_a54683bde2d2550e8afa9c639e709e4d)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_c8f38fff39e552c0ac3d4bbab5372083)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_a62f807eafcf5cdd99ae643bf307ca29)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_18146e967edd5f3a9ead3cd58f81f070)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_b2f615db3a955a2ca4606ac9fdceb927)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_da8094f8a5785df1bc3dd2becafe528e)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_78e911fa4f0f51cda8766bf197869ab2)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_e3f6d0af692d5dad839c16b5b3337b22)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_a4136144ea595329be9add963dd06209)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_222642f4c7f750188a941e7c70728b50)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_276b22b42f3658b28e40db69587b87ce)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_f20229d792575d61a383bf3845d631a2)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_e9927aace7ce5399829ea91f8c9d829c)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_acbc1319e5ee56d998e67b52ff01bb6f)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_c065e6a111b6582293dbf6239646a67a)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_ba802bd0895b54008077d9d30e0ec7e2)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_42a5d4f1bc7e58ef881d8c8a7b2e0311)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_910adf8a451756e490c54f49a93fcb56)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_1550fb1692495c699ced0feec5440088)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_184aa2acaba858fdb9fd64fd68099e3f)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_539b003c31b65117a3cc0b9558c52536)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_716ade8aef3e5a12975c151b304df049)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_b3746cd9208757429cbf7331a5d3edb9)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_378062096e1159108fc5c4591020cce6)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_a689849642f35f47a1c6348e861d3192)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_50879eedc124536eab16640482d1898f)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_4df91dfe38755eb596f4610c81cb8302)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_8e1efe02ff575e4fa5b1131843c46e02)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_a2c03ea627e55bbe87e5915b1040977b)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_78985237c35059c0a6acba338e1c7f93)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_5652c2c901645e4faf09f302f94e1407)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_183dfdc185bb5a439724f7938d18f162)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_ab0f76a397d957e0aa6079df5201bf28)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_fb125a56bad9549fa281f30ee896825e)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_69d6d6f4e4e75bbbabac21341e275241)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_c970642b94195175a25c96b1f64135f6)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_625ad597255858c392c29bd4362173cf)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_eda0b1aada185608a4303b7eb26f7993)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_a0ef01a42cb75e9a851190a549cff4c3)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_1f9dae49f6f356c39e3c276b167e4791)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_f291885bbedd5a029101fb706056c457)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_b7652ca5a2d55b829e1bff77ff4fe366)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_7e4e4f2079ff5b4cbebb3bdd669de065)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_5a7fc352e89d5234a5897fe17bd1565c)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_37236a09848f5a948509165e4a4b0faf)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_f3f5a5f399825e6c8e0d77db5ca2d39b)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_f74e05c67e7a5af8bd47f6d79d7fc532)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_d8badb31a79a597da1bb99d753374d7d)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_776d5ae6b4b153c1ab8a00cc512411f6)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_9cffa822247955da96ff9e2d7dc5c0e6)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_a3f9ce381e615b3282c76d64d460418b)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_c259ce82155950ea8c8306f3f90a4d88)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_5cbc8cb305605101925fd5b26964e3c4)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_571336afa7a75fb3a325f0eb21bbebfc)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_d01e6db687b65a8f8bc414594ae64e18)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_ba3849dbbd7958378b45522e35d53297)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_e1005b2b10c357968bbddfec9fb8226f)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_1675ce5b8149563aa2b9529dee433b53)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_9b79d3b86e1854c4b48c1e15c4652764)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_bca90c35159c5256a4e522b6ae241789)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_cfb3f99511b550598c12785027452bdb)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_54890effb638511a8a48f431682397f5)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_933dc93548775efaaaa16adfa612954c)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_ebe1539766a35135ae8022e490d35d22)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_6376d4c9dde456b0b27c2ebd6dc19799)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_0c181a94197f5df691f40f9d2ec86634)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_8eddcb5dbd0e50c9a6f0cc737253468f)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_b345df7c4376553e917d7d9732b2cec8)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_42a0eaa778f65b44af31ccea555b152e)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_d6c2a7235c1b5137bfa8f935577c0b17)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_29f9e863e6fc5d389d0afc08e33c914c)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_51a4fe97022354109350f428e0f123ef)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_f14c8c2abdc458c58127cc9b069f4691(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_321da5cd0ba551a9bc064c72abc6cbff(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_b7143eb81297555b89fde6df35153727, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_45e53aaf9c105358b785c454a1fd5167, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_a9048a38d71b54008cb1c21113eb77ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_2190a02d51ce58178d46c63be7f05c11, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_3cb7b5c4adca5b36af1f999ee236bd16, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_e4a4159d96f158ccbb798d5a4e262745, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_845f0f398e535bd8a2424f3b494a1cff, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_64e74686fd335d039e599efdec64459f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_a54683bde2d2550e8afa9c639e709e4d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_c8f38fff39e552c0ac3d4bbab5372083, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_a62f807eafcf5cdd99ae643bf307ca29, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_18146e967edd5f3a9ead3cd58f81f070, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_b2f615db3a955a2ca4606ac9fdceb927, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_da8094f8a5785df1bc3dd2becafe528e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_78e911fa4f0f51cda8766bf197869ab2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_e3f6d0af692d5dad839c16b5b3337b22, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_a4136144ea595329be9add963dd06209, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_222642f4c7f750188a941e7c70728b50, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_276b22b42f3658b28e40db69587b87ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_f20229d792575d61a383bf3845d631a2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_e9927aace7ce5399829ea91f8c9d829c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_acbc1319e5ee56d998e67b52ff01bb6f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_c065e6a111b6582293dbf6239646a67a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_ba802bd0895b54008077d9d30e0ec7e2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_42a5d4f1bc7e58ef881d8c8a7b2e0311, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_910adf8a451756e490c54f49a93fcb56, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_1550fb1692495c699ced0feec5440088, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_184aa2acaba858fdb9fd64fd68099e3f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_539b003c31b65117a3cc0b9558c52536, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_716ade8aef3e5a12975c151b304df049, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_b3746cd9208757429cbf7331a5d3edb9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_378062096e1159108fc5c4591020cce6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_a689849642f35f47a1c6348e861d3192, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_50879eedc124536eab16640482d1898f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_4df91dfe38755eb596f4610c81cb8302, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_8e1efe02ff575e4fa5b1131843c46e02, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_a2c03ea627e55bbe87e5915b1040977b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_78985237c35059c0a6acba338e1c7f93, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_5652c2c901645e4faf09f302f94e1407, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_183dfdc185bb5a439724f7938d18f162, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_ab0f76a397d957e0aa6079df5201bf28, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_fb125a56bad9549fa281f30ee896825e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_69d6d6f4e4e75bbbabac21341e275241, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_c970642b94195175a25c96b1f64135f6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_625ad597255858c392c29bd4362173cf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_eda0b1aada185608a4303b7eb26f7993, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_a0ef01a42cb75e9a851190a549cff4c3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_1f9dae49f6f356c39e3c276b167e4791, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_f291885bbedd5a029101fb706056c457, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_b7652ca5a2d55b829e1bff77ff4fe366, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_7e4e4f2079ff5b4cbebb3bdd669de065, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_5a7fc352e89d5234a5897fe17bd1565c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_37236a09848f5a948509165e4a4b0faf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_f3f5a5f399825e6c8e0d77db5ca2d39b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_f74e05c67e7a5af8bd47f6d79d7fc532, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_d8badb31a79a597da1bb99d753374d7d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_776d5ae6b4b153c1ab8a00cc512411f6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_9cffa822247955da96ff9e2d7dc5c0e6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_a3f9ce381e615b3282c76d64d460418b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_c259ce82155950ea8c8306f3f90a4d88, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_5cbc8cb305605101925fd5b26964e3c4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_571336afa7a75fb3a325f0eb21bbebfc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_d01e6db687b65a8f8bc414594ae64e18, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_ba3849dbbd7958378b45522e35d53297, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_e1005b2b10c357968bbddfec9fb8226f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_1675ce5b8149563aa2b9529dee433b53, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_9b79d3b86e1854c4b48c1e15c4652764, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_bca90c35159c5256a4e522b6ae241789, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_cfb3f99511b550598c12785027452bdb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_54890effb638511a8a48f431682397f5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_933dc93548775efaaaa16adfa612954c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_ebe1539766a35135ae8022e490d35d22, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_6376d4c9dde456b0b27c2ebd6dc19799, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_0c181a94197f5df691f40f9d2ec86634, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_8eddcb5dbd0e50c9a6f0cc737253468f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_b345df7c4376553e917d7d9732b2cec8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_42a0eaa778f65b44af31ccea555b152e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_d6c2a7235c1b5137bfa8f935577c0b17, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_29f9e863e6fc5d389d0afc08e33c914c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_51a4fe97022354109350f428e0f123ef, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_f14c8c2abdc458c58127cc9b069f4691, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_321da5cd0ba551a9bc064c72abc6cbff, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}