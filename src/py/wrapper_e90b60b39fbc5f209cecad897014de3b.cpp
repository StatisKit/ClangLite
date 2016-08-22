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
    class ::clang::FunctionDecl  * (*method_pointer_dbb427ac1c8d51e0a0f64ec02df6f484)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_afc7092d47215dffb0b040434c81c0ab)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_6b4df37f1a3158b2ab61fa4063448d8e)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_ef535e341da75908be40a61a9529a616)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_82b9d627c48c5bbb9a0fc58611e91fc3)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_6d2eee7665df5d8c9aba890c9095e7dc)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_7a1df9a4a2855e5b8624b40073219a8b)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_50ba03b07677520693e27c2cb2d88daa)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_07bd0a5ab2a6575db82a4a3f64c3ebcf)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_f49b35e7f47f5bafa82473f1d44bf2eb)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_94a95e19aedd5cfbac99ae31b616f75d)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_096bc1eb201850019d78e3fee6cf779e)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_ec883427095a5e0796cffd5e50f9f382)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_793d364599d75fc19c2c71ed9ae9d028)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_d7a8b86ab28059ce80aa221c6a461e7f)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_442daa923df951fd89fc57c3302dec56)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_5089a2885fd05bb693418a07a56e8654)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_7ba923b8a76e593f818a3e0085148e97)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_34f18fa2fc4f5c9c9c763b531ffe22ba)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_813c82d755c55613a7e5d79a410a81b7)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    bool  (::clang::FunctionDecl::*method_pointer_b1f0eee47e6756dc868f3cc906ebbe53)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_069ea39b0d3653c7bf018134aa3b78d6)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_ffe871266e7e519f8640724ca384352a)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_59a5f7a3f8335bf699613738be306e08)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_f6fa455f09e45ee299f21c1da98c2031)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_9c426fd6b5965a96821171067820829c)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_3c868939a6075ad69bfecb6bce9fd6f0)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_b66ca42c09415aa698eed7f1477e687a)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_b6a5517fa8b051ceb0e1921c34d198dc)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_15adb22540f15e798cf0e0a68db3ae46)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_c8d3c108ca545656ac42cc678323c2c2)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_46523751359b53bd8cb37630c352b8d2)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_19bc4c5686df5e529f542ae9dbe0f9c5)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_a56a9d7769b55cc1bafe983d8f8c656c)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_906ec47811e152b78fca01fca59b1d19)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_5e264a649613564aaff3934655a413b3)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_31b2c428efa95594b843218c07a6a2fa)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_7f36f6a83b8755b68b26e52c656edde3)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_3971c3346b3f5ba389da3e2451958e7e)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_3bf2a34994ee568286fd042db6c2f0a6)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_83ee9668b30553958d1b1822b220fe50)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_5f203dc6b5675495ad85e0d65091d74c)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_5e5aa8ceaff45745aca3d678e3290d31)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_7638bde7815450658162e0492ec7ff61)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_bc659d8cc3b85057b635dc745d992b82)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_dc7625256c375f988513e7467101a936)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_555f91cd26ad5cda847df7b6e5684ce1)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_0a3a2d31816554f8926262a33c24bc4b)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_4ec7846b81465f49a9acfca3a4ffd362)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_55a6745d366f5152aadd7c9656dc6d1c)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_9d46a74a06555401b8de7ef677521da5)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_0580ca8541d35959b711167dd2880318)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_4b1450d1cf765d7e94fc344305018f3d)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_c854f79eb9065684acdfff38725f0aed)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_b8cf1046c5a6567a8210f5349a6dfcbe)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_d0dda237e86854fc92c78a341bd1af75)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_7d0b508d5f13599187df3d7264abec0a)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_d8e0443e69135b3fa23282c92e395487)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_00dcff600b82594abc494be58aa79852)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_da4f3f01c5185810a397cc96cddbdd3b)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_36a7e4c0dd3f5032844da634a296410f)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_ac53e7314cf150238dc4c65adc678470)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_8b4c85a3bd20598bbf63db97ed9feae0)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_143f6bfc7f07529eb8d51761bb20e487)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_144307c8778351419c73ebb64453e4ac)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_1e9afba737b95437a3efbeea467c9ae6)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_c0caec478d40525a82d0ecf689766105)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_71ecb8b3d96c5e11ac0c22ecfbd7f753)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_cc19134ff91a594cb9f2f6c4e3272b0b)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_5c69fcb0bef45d17b03a154b4d400b9b)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_68d83a8a078a544a9f9100b09a3deb96)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_f66ffbc659b85322a935d3ece9e0ddbd)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_2e7f6cf8f7e85d90adc4557476da75f9)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_2b37e8bc4c36594ebb5bb9e092a78fb7)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_261aa497442b598cbf9a8d4c763933e2)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_b4a4eaa2d4175504ba80be80c50d9187)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_ec7c49dac94a570f922e4effa2e9be83)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_c74def7ff00c5675acfff4c75944736c)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_f14a115735ca515aa442986bb8654577)() const = &::clang::FunctionDecl::usesSEHTry;
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_dbb427ac1c8d51e0a0f64ec02df6f484, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_afc7092d47215dffb0b040434c81c0ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_6b4df37f1a3158b2ab61fa4063448d8e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_ef535e341da75908be40a61a9529a616, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_82b9d627c48c5bbb9a0fc58611e91fc3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_6d2eee7665df5d8c9aba890c9095e7dc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_7a1df9a4a2855e5b8624b40073219a8b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_50ba03b07677520693e27c2cb2d88daa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_07bd0a5ab2a6575db82a4a3f64c3ebcf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_f49b35e7f47f5bafa82473f1d44bf2eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_94a95e19aedd5cfbac99ae31b616f75d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_096bc1eb201850019d78e3fee6cf779e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_ec883427095a5e0796cffd5e50f9f382, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_793d364599d75fc19c2c71ed9ae9d028, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_d7a8b86ab28059ce80aa221c6a461e7f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_442daa923df951fd89fc57c3302dec56, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_5089a2885fd05bb693418a07a56e8654, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_7ba923b8a76e593f818a3e0085148e97, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_34f18fa2fc4f5c9c9c763b531ffe22ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_813c82d755c55613a7e5d79a410a81b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_b1f0eee47e6756dc868f3cc906ebbe53, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_069ea39b0d3653c7bf018134aa3b78d6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_ffe871266e7e519f8640724ca384352a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_59a5f7a3f8335bf699613738be306e08, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_f6fa455f09e45ee299f21c1da98c2031, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_9c426fd6b5965a96821171067820829c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_3c868939a6075ad69bfecb6bce9fd6f0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_b66ca42c09415aa698eed7f1477e687a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_b6a5517fa8b051ceb0e1921c34d198dc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_15adb22540f15e798cf0e0a68db3ae46, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_c8d3c108ca545656ac42cc678323c2c2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_46523751359b53bd8cb37630c352b8d2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_19bc4c5686df5e529f542ae9dbe0f9c5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_a56a9d7769b55cc1bafe983d8f8c656c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_906ec47811e152b78fca01fca59b1d19, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_5e264a649613564aaff3934655a413b3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_31b2c428efa95594b843218c07a6a2fa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_7f36f6a83b8755b68b26e52c656edde3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_3971c3346b3f5ba389da3e2451958e7e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_3bf2a34994ee568286fd042db6c2f0a6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_83ee9668b30553958d1b1822b220fe50, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_5f203dc6b5675495ad85e0d65091d74c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_5e5aa8ceaff45745aca3d678e3290d31, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_7638bde7815450658162e0492ec7ff61, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_bc659d8cc3b85057b635dc745d992b82, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_dc7625256c375f988513e7467101a936, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_555f91cd26ad5cda847df7b6e5684ce1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_0a3a2d31816554f8926262a33c24bc4b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_4ec7846b81465f49a9acfca3a4ffd362, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_55a6745d366f5152aadd7c9656dc6d1c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_9d46a74a06555401b8de7ef677521da5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_0580ca8541d35959b711167dd2880318, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_4b1450d1cf765d7e94fc344305018f3d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_c854f79eb9065684acdfff38725f0aed, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_b8cf1046c5a6567a8210f5349a6dfcbe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_d0dda237e86854fc92c78a341bd1af75, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_7d0b508d5f13599187df3d7264abec0a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_d8e0443e69135b3fa23282c92e395487, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_00dcff600b82594abc494be58aa79852, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_da4f3f01c5185810a397cc96cddbdd3b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_36a7e4c0dd3f5032844da634a296410f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_ac53e7314cf150238dc4c65adc678470, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_8b4c85a3bd20598bbf63db97ed9feae0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_143f6bfc7f07529eb8d51761bb20e487, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_144307c8778351419c73ebb64453e4ac, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_1e9afba737b95437a3efbeea467c9ae6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_c0caec478d40525a82d0ecf689766105, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_71ecb8b3d96c5e11ac0c22ecfbd7f753, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_cc19134ff91a594cb9f2f6c4e3272b0b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_5c69fcb0bef45d17b03a154b4d400b9b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_68d83a8a078a544a9f9100b09a3deb96, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_f66ffbc659b85322a935d3ece9e0ddbd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_2e7f6cf8f7e85d90adc4557476da75f9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_2b37e8bc4c36594ebb5bb9e092a78fb7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_261aa497442b598cbf9a8d4c763933e2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_b4a4eaa2d4175504ba80be80c50d9187, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_ec7c49dac94a570f922e4effa2e9be83, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_c74def7ff00c5675acfff4c75944736c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_f14a115735ca515aa442986bb8654577, "");
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