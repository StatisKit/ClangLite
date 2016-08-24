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
    class ::clang::FunctionDecl  * (*method_pointer_164e39856ac154c58daa0114a66f46d9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_84eaaba16dcc5c7797535c40b94ac780)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_33521ee8c930597b9ba28c00ec7c53ab)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_c8a69a67aaf1523f8e26670fe92b70bc)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_ea11c6deb94f54588f29574dfbb0c252)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_edc7cb1b0cd95349a8c097f6aaae4ba2)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_19ef9b8b4c3f5c4bbbba51fbb9b5e110)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_178ed847a3485563a237ab8f24208ccc)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_a39dbdf840ad5a579ce3f839bd2aabbc)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_848e38a58d4e5c77a4be3651e4c1a07c)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_f1cd9d6c97335db583409eb850fc42ae)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_e6a64e925688531186a6162ac85fa9bc)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_be3d842fe559537695cb48ad7ce9c42e)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_792180582d1b58e68960505f2a262940)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_cc464d0e05e858d2a02628d259616602)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_50f03bc8ae82518f9861a300fc022ea8)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_25d7c974bfb85de49bd2193f38c7ff74)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_294f241775e05753a06354071ff98a23)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_9416531d65495c598332b8f46c11e7da)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_0d2790d6fb8455b5ba8774b04290c3ff)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_786eaaee7d7b57769db7b5d641d3e9ad)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_6b3f86db56d15a7b97a33428c50c21ec)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_a95ef9f069d050b3b72023710b3f0205)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_4ad9397bda00585fb9440a0148e950e0)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_4661ab0f1fb15b7b91f4a3448d2fcdd2)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_4f264c8d056859ff9546a26e1f5367b0)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_c5a960a4737e55eaa8f686a15a39a9b9)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_a5c4f7ed2a165c42ab071ded00505e06)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_a03641cbdcde553c98c71678c1f2ff80)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_3a7e5668e5ee54b9b10b56926fb5e93c)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_bc71cca9e8fa5f5c8a9fd8f0de2e8016)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_24f5bb011b895a25aef88983d1fa86f4)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_f2a3f7292b5256f5b0b2d68e23d1fe01)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_8973d8929ae558649fb55fcf29211e3a)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_42dff79628ca5e3690aaab4073c661c6)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_a99bae8ab5665bf5bc03752156f6b496)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_04eb9b45c0ea54ca90c15f417602fe3d)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_27774eb0f257518a88f7088769fe4155)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_5a116834c2e5514f8cb19f4151595225)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_9c2c6e267d865c0285e39efca98139f2)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_86b18b3d49d554afb9ee606767e3399d)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_3b90be75aa7556aaac6d8c91cf0ccb73)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_59d13b1e65715603a5d7c81ab21d1af3)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_36a8fe5e946b58ee8eb94d54a1923c3a)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_36a85b2cb587509f8500a6fd3b42cf15)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_f8ce4ba4e1a75de28ec077e69b1b19f0)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_0b316aba8673537abdcc5aa77f484977)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_f8a9cbce9d3e5f82a6a3041e6e32465b)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_05993b1598765239bc94ae9741fbf78f)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_8f314b62f933555babdfadb99bf7257e)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_c87fef701b1455e5a6dce64b9ef139cc)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_4f30d02d501359e9bedc873e267545e3)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_e4759c476ba15103812d7735178c223b)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_98b99a418c8457acac67445b725e3153)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_ed38cb4f425c581885ae66f280bbde53)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_0a58e50da39f5ad79b3913eaec8bd835)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_28ac1c35a7c55feb8a304eda3275c632)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_d0c026d7f32a51c88f5bf8e7cd81d77a)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_40b713c787f35f679b9f2609829f7cc3)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_b14c1b02a4da50ffb01dc129ec9cb6ae)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_b2acd3d36b795920a657b496128254fc)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_3b648c917f175f3c8188a272d735d9c2)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_c4e1ad7f8c3e51b6a34737b0c70116bb)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_a6ba9803df4b5166a5da1b9faa846ac7)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_45367dc50f045dea8fcb006fa22ae5d4)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_1fa310b27370534199637f7c08f4a61e)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_cfa4f35be2ce5e549aa1cf9076e0d6e9)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_f3f5c57030b85c5a9954189d15c248d6)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_7e6714bfa7585706a12642d9d40e3b07)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_b5747ee0018256f59198840bcd2b84cf)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_3115fc769f9355d8a40ea087c1c1f76a)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_a8ff7aeb3a755ddda48d950066207c52)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_2f36429e5d155285930b8b7e93d93b96)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_92f77530699050758effe6cd0ad3abfe)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_e6eddfa1007c51f9b34e901c73b6c91f)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_8e5b30f29b0150adb5f4be09cc1658aa)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_8232f840f940503d87934a7e43b023c1)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_710101e85fdd52eaae7b6193949dbd61)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_607c76f488e75a0ca81c77b33ea71bee)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_44d8d4d1edcb5b11a045ae6673488fc0)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_8aa1b691e1d65eb5b9ac2fd323b436d7)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_3d9e57f502cf5e7ca2fdc996f84b37f9)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_146e02da3b995dd083d1f29a57303b10)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_fc1f743ecb6d526680baef5edcf72984)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_aadf7b53095a56d1ac2ac7adba00c904(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_347d878c9982558b81aab795c0a6cfa0(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_164e39856ac154c58daa0114a66f46d9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_84eaaba16dcc5c7797535c40b94ac780, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_33521ee8c930597b9ba28c00ec7c53ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_c8a69a67aaf1523f8e26670fe92b70bc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_ea11c6deb94f54588f29574dfbb0c252, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_edc7cb1b0cd95349a8c097f6aaae4ba2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_19ef9b8b4c3f5c4bbbba51fbb9b5e110, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_178ed847a3485563a237ab8f24208ccc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_a39dbdf840ad5a579ce3f839bd2aabbc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_848e38a58d4e5c77a4be3651e4c1a07c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_f1cd9d6c97335db583409eb850fc42ae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_e6a64e925688531186a6162ac85fa9bc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_be3d842fe559537695cb48ad7ce9c42e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_792180582d1b58e68960505f2a262940, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_cc464d0e05e858d2a02628d259616602, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_50f03bc8ae82518f9861a300fc022ea8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_25d7c974bfb85de49bd2193f38c7ff74, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_294f241775e05753a06354071ff98a23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_9416531d65495c598332b8f46c11e7da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_0d2790d6fb8455b5ba8774b04290c3ff, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_786eaaee7d7b57769db7b5d641d3e9ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_6b3f86db56d15a7b97a33428c50c21ec, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_a95ef9f069d050b3b72023710b3f0205, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_4ad9397bda00585fb9440a0148e950e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_4661ab0f1fb15b7b91f4a3448d2fcdd2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_4f264c8d056859ff9546a26e1f5367b0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_c5a960a4737e55eaa8f686a15a39a9b9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_a5c4f7ed2a165c42ab071ded00505e06, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_a03641cbdcde553c98c71678c1f2ff80, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_3a7e5668e5ee54b9b10b56926fb5e93c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_bc71cca9e8fa5f5c8a9fd8f0de2e8016, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_24f5bb011b895a25aef88983d1fa86f4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_f2a3f7292b5256f5b0b2d68e23d1fe01, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_8973d8929ae558649fb55fcf29211e3a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_42dff79628ca5e3690aaab4073c661c6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_a99bae8ab5665bf5bc03752156f6b496, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_04eb9b45c0ea54ca90c15f417602fe3d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_27774eb0f257518a88f7088769fe4155, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_5a116834c2e5514f8cb19f4151595225, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_9c2c6e267d865c0285e39efca98139f2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_86b18b3d49d554afb9ee606767e3399d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_3b90be75aa7556aaac6d8c91cf0ccb73, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_59d13b1e65715603a5d7c81ab21d1af3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_36a8fe5e946b58ee8eb94d54a1923c3a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_36a85b2cb587509f8500a6fd3b42cf15, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_f8ce4ba4e1a75de28ec077e69b1b19f0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_0b316aba8673537abdcc5aa77f484977, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_f8a9cbce9d3e5f82a6a3041e6e32465b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_05993b1598765239bc94ae9741fbf78f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_8f314b62f933555babdfadb99bf7257e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_c87fef701b1455e5a6dce64b9ef139cc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_4f30d02d501359e9bedc873e267545e3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_e4759c476ba15103812d7735178c223b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_98b99a418c8457acac67445b725e3153, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_ed38cb4f425c581885ae66f280bbde53, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_0a58e50da39f5ad79b3913eaec8bd835, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_28ac1c35a7c55feb8a304eda3275c632, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_d0c026d7f32a51c88f5bf8e7cd81d77a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_40b713c787f35f679b9f2609829f7cc3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_b14c1b02a4da50ffb01dc129ec9cb6ae, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_b2acd3d36b795920a657b496128254fc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_3b648c917f175f3c8188a272d735d9c2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_c4e1ad7f8c3e51b6a34737b0c70116bb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_a6ba9803df4b5166a5da1b9faa846ac7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_45367dc50f045dea8fcb006fa22ae5d4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_1fa310b27370534199637f7c08f4a61e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_cfa4f35be2ce5e549aa1cf9076e0d6e9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_f3f5c57030b85c5a9954189d15c248d6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_7e6714bfa7585706a12642d9d40e3b07, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_b5747ee0018256f59198840bcd2b84cf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_3115fc769f9355d8a40ea087c1c1f76a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_a8ff7aeb3a755ddda48d950066207c52, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_2f36429e5d155285930b8b7e93d93b96, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_92f77530699050758effe6cd0ad3abfe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_e6eddfa1007c51f9b34e901c73b6c91f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_8e5b30f29b0150adb5f4be09cc1658aa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_8232f840f940503d87934a7e43b023c1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_710101e85fdd52eaae7b6193949dbd61, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_607c76f488e75a0ca81c77b33ea71bee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_44d8d4d1edcb5b11a045ae6673488fc0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_8aa1b691e1d65eb5b9ac2fd323b436d7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_3d9e57f502cf5e7ca2fdc996f84b37f9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_146e02da3b995dd083d1f29a57303b10, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_fc1f743ecb6d526680baef5edcf72984, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_aadf7b53095a56d1ac2ac7adba00c904, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_347d878c9982558b81aab795c0a6cfa0, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}