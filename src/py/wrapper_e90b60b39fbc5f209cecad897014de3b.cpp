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
    class ::clang::FunctionDecl  * (*method_pointer_438c6ac70c71509189ec01502cd08928)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_c75c14f1487c51d28603bc3ef2202618)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_02cf2db52dc558308f329e77000996fe)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_d6a2c8a09beb5f6f8ef387e89f5dcd50)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_fa93ded0ae425e2093061c1761dbf0d1)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_7a1785d025935ed1b75897e7df9d2560)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_52b8e2cfb2785204b63b4abfd787f59f)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_eb466b604493575683560ec259700c4d)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_4da923d3500c59b4a42ca171ac1d784f)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_227280766c735798973d6d7a5869b030)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_4240b1992d9b5b4eba03e62ecce14dd5)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_6888a2f91f175bb8ad1c13c621cc547b)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_788ce09b1dbd582689960b6a0671578b)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_c76bf3e065f45db9a50993b32ca2a191)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_41e113812db053208f06da479d6de180)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_cda1d56c1be75c9ea0e689ca00169229)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_3adad2cf8c625b938d204225748403bd)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_4d878c0f73025a4ba3faa8c9d4176c12)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_521450dc52d75dedbec2daaa49dd7a76)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_9879ae20a1a059eeb9a06be5e2340122)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_26fc27e8670c50848de964d1eb45d225)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_1fa44412bf8853079d8d2c5dc1f0cee9)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_59918f3f49755234816334157eb760b0)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_bd83f68cd69c5ea5819884048961c4d3)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_d85105516c7b5a0e998f056d87e94602)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_b3981b356227508fafee3c75c40e7a04)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_2d299d307f575cc983195f356141fe83)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_c76b6c638239588aa0d7786784c189e2)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_b9689d97b3ae56f0a31357f4427739f4)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_def969c3f33c598da63778f46d7a5617)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_0a05f4b955a855a18c6ea315b9916548)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_fbd5180e76b6504d8e629506d7b492bd)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_a8f6dc7b301d56959f5e37f557566160)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_7b577b19f7fb5ceb963cf71e17b9f591)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_3019f32b9b545f5d8b5ac324a95a13d7)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_f86850d05bd65a27b24d6ae5ae5772ba)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_e82feb2861195f8185b8bbfa11497765)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_adf46a3a1247529d9528282f88bd3b69)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_e21269563a725fcbac5ae53a468f2dc6)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_061b1e2b82925b7ebf62614a01bffef0)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_3cd17a787a1b55079b805fc72b9d8237)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_18ced5e9c24e59f0886f6791f4365ccc)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_60dd420226dc5fcf9d10f95c370a0fdd)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_280e34086687545fa58f6c97d898bc26)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_2b5364b7b33858d3b57d63c30df5a3fe)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_1a1c9c864d8553928083178556063e9d)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_6c437f45114150f493a0937b015cd154)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_0b3c08b2492f5b69a7645f5f2d978af1)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_bc21659fedfe5ce1970a2aef785f47f7)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_be2052a55c9a5f08b849a86464d349c0)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_81bf0f5d41e95f9495a64d4dfff8748e)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_e3cfc68a1e31581fb3d5db2a5fffbaea)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_2995a1cd014c5404959ce0780b61497f)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_117e1e8ae4035ee59473d39ecf80589e)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_10877ec0437959c6b70f734afda17a39)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_fa630ae2a3165dda898b0d735820fb81)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_2c367953de915089bc28ac0e77591c78)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_881c57b134905773be2e9ad9c291c819)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_2c32370557f85db1b26131be1896f7ab)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_d31ba65428fe557a828835a5029f32f9)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_5ccf556e181c5057ac48e84da35eea2e)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_12626d16284354dab3da533622ca1fad)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_b5ab07d22aab5bcaaf0276196535b964)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_3f04625bed35519aae67f97b3a365304)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_fb0fe1d26fce50a9a85242c3eae2e33e)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_710ea30156ca514eb7c96114fe8bf721)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_274fe8c7d6ad52a7bdf9ae3c750764fc)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_f39ec75ab9cf58f489ab9c9b07a0df54)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_589ef57c09195ce19e4f8770109c78f7)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_a75ae695175e597ba7d7f47b7b5812f4)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_0ec11dfea8f05e958c4d4152adb9f6a4)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_530fdbd1690b5eb1831f9a3c0e4a4abb)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_0f91ca3735475554aa8443cf9255fff0)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_7125b7870ca75bae80af98199c30c0ac)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_3d88a9f92fec513db2d05b99dfde7c95)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_d11eb6e7b16a5a9591c8ea48cc0d1daa)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_8fe8cd83a212505db9a5a755e3b57d3c)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_054c614ed7f8539b922047577e494e3a)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_d21b0fbebebc5ed7897b32e2a35c2e1b)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_0d5cb04da7085ae1a8dd155ab5eb26cf)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_aa850b6ea3a5545ba563d85881632ab4)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_c87933f67bb55d788d0437f2c500b1af)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_e581f6f573835451982ebcdd9c699722)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_71b556001af5581599c30494523af63e)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_2c6265419a0952998e06a3cc41d1836a(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_71a6055683865e3187fee743e86dd0c6(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_438c6ac70c71509189ec01502cd08928, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_c75c14f1487c51d28603bc3ef2202618, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_02cf2db52dc558308f329e77000996fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_d6a2c8a09beb5f6f8ef387e89f5dcd50, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_fa93ded0ae425e2093061c1761dbf0d1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_7a1785d025935ed1b75897e7df9d2560, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_52b8e2cfb2785204b63b4abfd787f59f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_eb466b604493575683560ec259700c4d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_4da923d3500c59b4a42ca171ac1d784f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_227280766c735798973d6d7a5869b030, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_4240b1992d9b5b4eba03e62ecce14dd5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_6888a2f91f175bb8ad1c13c621cc547b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_788ce09b1dbd582689960b6a0671578b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_c76bf3e065f45db9a50993b32ca2a191, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_41e113812db053208f06da479d6de180, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_cda1d56c1be75c9ea0e689ca00169229, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_3adad2cf8c625b938d204225748403bd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_4d878c0f73025a4ba3faa8c9d4176c12, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_521450dc52d75dedbec2daaa49dd7a76, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_9879ae20a1a059eeb9a06be5e2340122, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_26fc27e8670c50848de964d1eb45d225, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_1fa44412bf8853079d8d2c5dc1f0cee9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_59918f3f49755234816334157eb760b0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_bd83f68cd69c5ea5819884048961c4d3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_d85105516c7b5a0e998f056d87e94602, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_b3981b356227508fafee3c75c40e7a04, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_2d299d307f575cc983195f356141fe83, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_c76b6c638239588aa0d7786784c189e2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_b9689d97b3ae56f0a31357f4427739f4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_def969c3f33c598da63778f46d7a5617, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_0a05f4b955a855a18c6ea315b9916548, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_fbd5180e76b6504d8e629506d7b492bd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_a8f6dc7b301d56959f5e37f557566160, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_7b577b19f7fb5ceb963cf71e17b9f591, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_3019f32b9b545f5d8b5ac324a95a13d7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_f86850d05bd65a27b24d6ae5ae5772ba, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_e82feb2861195f8185b8bbfa11497765, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_adf46a3a1247529d9528282f88bd3b69, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_e21269563a725fcbac5ae53a468f2dc6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_061b1e2b82925b7ebf62614a01bffef0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_3cd17a787a1b55079b805fc72b9d8237, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_18ced5e9c24e59f0886f6791f4365ccc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_60dd420226dc5fcf9d10f95c370a0fdd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_280e34086687545fa58f6c97d898bc26, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_2b5364b7b33858d3b57d63c30df5a3fe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_1a1c9c864d8553928083178556063e9d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_6c437f45114150f493a0937b015cd154, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_0b3c08b2492f5b69a7645f5f2d978af1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_bc21659fedfe5ce1970a2aef785f47f7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_be2052a55c9a5f08b849a86464d349c0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_81bf0f5d41e95f9495a64d4dfff8748e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_e3cfc68a1e31581fb3d5db2a5fffbaea, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_2995a1cd014c5404959ce0780b61497f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_117e1e8ae4035ee59473d39ecf80589e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_10877ec0437959c6b70f734afda17a39, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_fa630ae2a3165dda898b0d735820fb81, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_2c367953de915089bc28ac0e77591c78, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_881c57b134905773be2e9ad9c291c819, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_2c32370557f85db1b26131be1896f7ab, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_d31ba65428fe557a828835a5029f32f9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_5ccf556e181c5057ac48e84da35eea2e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_12626d16284354dab3da533622ca1fad, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_b5ab07d22aab5bcaaf0276196535b964, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_3f04625bed35519aae67f97b3a365304, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_fb0fe1d26fce50a9a85242c3eae2e33e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_710ea30156ca514eb7c96114fe8bf721, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_274fe8c7d6ad52a7bdf9ae3c750764fc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_f39ec75ab9cf58f489ab9c9b07a0df54, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_589ef57c09195ce19e4f8770109c78f7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_a75ae695175e597ba7d7f47b7b5812f4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_0ec11dfea8f05e958c4d4152adb9f6a4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_530fdbd1690b5eb1831f9a3c0e4a4abb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_0f91ca3735475554aa8443cf9255fff0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_7125b7870ca75bae80af98199c30c0ac, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_3d88a9f92fec513db2d05b99dfde7c95, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_d11eb6e7b16a5a9591c8ea48cc0d1daa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_8fe8cd83a212505db9a5a755e3b57d3c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_054c614ed7f8539b922047577e494e3a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_d21b0fbebebc5ed7897b32e2a35c2e1b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_0d5cb04da7085ae1a8dd155ab5eb26cf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_aa850b6ea3a5545ba563d85881632ab4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_c87933f67bb55d788d0437f2c500b1af, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_e581f6f573835451982ebcdd9c699722, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_71b556001af5581599c30494523af63e, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_2c6265419a0952998e06a3cc41d1836a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_71a6055683865e3187fee743e86dd0c6, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}