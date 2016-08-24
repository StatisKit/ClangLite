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
    class ::clang::FunctionDecl  * (*method_pointer_c2d2ceb975945766b6062330d5db9676)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_1733c3e77a1e51d3a009a79e6956f25c)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_a61c5dff87b8512ab80c039d300ffb30)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_514f901ba25e5098975409ea63999dc1)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_12037bad8808581b8cdaa6121f61fc54)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_133319018a125927a58450a3ed05c3fb)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_25c87ae087ee59f2a9f9bdba2d66aff4)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_c5ab9507cc6d59e08f8544133c89a297)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_e68316fa467256e79d8a8550df485d20)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_fe1a9a099316557fa72aa3125ee5d888)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_53f266574f5a5ea7a51fbad3652ca376)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_198303f8c30854979d5bdeb5adadeeca)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_3725a3ffd6ed527a9de19c495360f313)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_ed1fe90e365c5219b1de96da87dfc9d5)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_45a7f9a354ff5812bd4bf9f34e75bb58)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_49120ec622495e4f976c9495bc2983e0)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_9d93733267335ec9b618fecd04ed5e07)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_8d3415857a24597b8778300b4b2092c0)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_f4b5e14deaac56c0bda49891a71369ea)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_2c8f908b4a235fcf93e30523aab1383e)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_261ed82ba7325baf8fc20a7f300782fa)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_5827e9ceee1959af8caea2481014113f)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_3df1b0f3e291505e9fef0885a9b4b283)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_df8c91eef1805e07a01a1c6bcfb324f5)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_036d7f5199425c30bdc4b17a020c8b9f)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_6e42e78e9ad9565e90270a5bf50ba9bf)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_e2c4862fec955d5a83630de6ccbd6249)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_febc6cb4a0425969b33db1fa8d69318c)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_5232b7fc0e0d55a09aa3fb62030491f8)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_25efacdd08d45caaa4c6d50d5e53fc59)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_91326db74c0258ecb5ce06ba816c8a20)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_8263641879ce5a61ab09d897bd3d79e3)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_481581e9d73b541e9e22915f6e846a69)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_365ac02645995dbb85a6d5e53b7bfca4)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_de57b3f1799c5b04a063eb8eedd81926)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_dc75ea0b776e50a6a2e08bcf62683b1a)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_840c6ebf46f55c36a8b405359f542d06)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_c419f035224555f4ba2be85a93068ce7)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_72d6cdca5d445215bceb27ca62bc7d6c)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_725fb0a0e5015a0a87a38e6a46a3e7b6)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_1f6bea0e21c050d99aa8a4d6de702ae6)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_d51b1c1b107d550a96bbfce3a6088a93)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_78b0719fb151511e97a0423a14043abd)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_1bd0bdfa23cd5bef9d4fdaa246b0b5ae)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_e879909d80c3584fa2bbda4ef6a06c14)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_3a433abf67f4531285a03454a05b16dc)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_f0033a9ebe6759f4b3f578a6cadb3424)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_2ff534076b6a535e835b406d3ef703c6)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_e044288501905c278f2bd2f44702d2af)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_881e414a399a53b29507c065e97e57a1)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_de0dfa8ffb525ab19c71eb9f33484fb6)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_39ac7bc1146f5389934b1323b231a318)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_4a3c280e25ea58539fcaafef2c240ffa)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_db803b1e396857df982994a696f0b20e)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_147cbccce04957c7b3c1c50f36fd0bd7)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_ced1de9fbf89581184f1575ebedf3825)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_db52cddc51ee551ca41329107ac57e65)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_e5aa68fa060254c1a806bb7e5aa9ae76)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_a7cac0b718935f528f94687943c81937)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_eba8cdfff1e0582e83f1ce5eeb6b1a4e)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_ece01f5772635d1098ebd61c44ecedd1)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_90cb82ee095b5a90b9cd4f61a734ddcb)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_1fb0fa17ef495f0c8f2224c7b3643364)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_f62d56c727d35e0abbff5ef4ba3f33fa)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_cd1e4feabcf5586fb86051465f3327c0)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_8ebee7a251805975b435c7a244f39c34)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_af094d234e0950fb8b94ae0ee9e281be)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_36aec96f4d61501086d554c01c5e8289)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_a55d88561f6d53f59c770983a85ffde7)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_82ee72568b2254fa99d022f1096eeaa3)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_bf56027a57455123abe3ced6a9807514)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_54aa3f31f7ff5b38b064c9f2811e5ec1)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_529f99f786c05397a15e35abe094dc82)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_1af17c1239ec554085952d46ebaf0a93)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_c0c53f2be62e56c8bad3af253f5b8834)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_32c9024b855b5237892b355eb8012148)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_eae053fa57c35386b4c669b83bdbd3ec)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_415753d302a95144a361daa511a1561a)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_83d4d58b21575d2ba48abe888c98b249)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_9d9997882b965d18952b1812257f48d0)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_2fa3396a8fb95353a9404bce74f96bc3)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_98f576029ad95d1bac5b73665a8c9b38)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_aacebaa60a39512bafab350b2f42cf46)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_764aa107bcc95e388125d84493ed2172)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_d00efc3a5ceb5780a3d9c983021f6efe(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_288fd1ac4bb952f68d038c7e82258fba(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_c2d2ceb975945766b6062330d5db9676, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_1733c3e77a1e51d3a009a79e6956f25c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_a61c5dff87b8512ab80c039d300ffb30, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_514f901ba25e5098975409ea63999dc1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_12037bad8808581b8cdaa6121f61fc54, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_133319018a125927a58450a3ed05c3fb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_25c87ae087ee59f2a9f9bdba2d66aff4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_c5ab9507cc6d59e08f8544133c89a297, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_e68316fa467256e79d8a8550df485d20, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_fe1a9a099316557fa72aa3125ee5d888, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_53f266574f5a5ea7a51fbad3652ca376, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_198303f8c30854979d5bdeb5adadeeca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_3725a3ffd6ed527a9de19c495360f313, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_ed1fe90e365c5219b1de96da87dfc9d5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_45a7f9a354ff5812bd4bf9f34e75bb58, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_49120ec622495e4f976c9495bc2983e0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_9d93733267335ec9b618fecd04ed5e07, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_8d3415857a24597b8778300b4b2092c0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_f4b5e14deaac56c0bda49891a71369ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_2c8f908b4a235fcf93e30523aab1383e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_261ed82ba7325baf8fc20a7f300782fa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_5827e9ceee1959af8caea2481014113f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_3df1b0f3e291505e9fef0885a9b4b283, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_df8c91eef1805e07a01a1c6bcfb324f5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_036d7f5199425c30bdc4b17a020c8b9f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_6e42e78e9ad9565e90270a5bf50ba9bf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_e2c4862fec955d5a83630de6ccbd6249, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_febc6cb4a0425969b33db1fa8d69318c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_5232b7fc0e0d55a09aa3fb62030491f8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_25efacdd08d45caaa4c6d50d5e53fc59, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_91326db74c0258ecb5ce06ba816c8a20, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_8263641879ce5a61ab09d897bd3d79e3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_481581e9d73b541e9e22915f6e846a69, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_365ac02645995dbb85a6d5e53b7bfca4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_de57b3f1799c5b04a063eb8eedd81926, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_dc75ea0b776e50a6a2e08bcf62683b1a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_840c6ebf46f55c36a8b405359f542d06, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_c419f035224555f4ba2be85a93068ce7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_72d6cdca5d445215bceb27ca62bc7d6c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_725fb0a0e5015a0a87a38e6a46a3e7b6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_1f6bea0e21c050d99aa8a4d6de702ae6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_d51b1c1b107d550a96bbfce3a6088a93, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_78b0719fb151511e97a0423a14043abd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_1bd0bdfa23cd5bef9d4fdaa246b0b5ae, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_e879909d80c3584fa2bbda4ef6a06c14, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_3a433abf67f4531285a03454a05b16dc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_f0033a9ebe6759f4b3f578a6cadb3424, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_2ff534076b6a535e835b406d3ef703c6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_e044288501905c278f2bd2f44702d2af, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_881e414a399a53b29507c065e97e57a1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_de0dfa8ffb525ab19c71eb9f33484fb6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_39ac7bc1146f5389934b1323b231a318, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_4a3c280e25ea58539fcaafef2c240ffa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_db803b1e396857df982994a696f0b20e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_147cbccce04957c7b3c1c50f36fd0bd7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_ced1de9fbf89581184f1575ebedf3825, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_db52cddc51ee551ca41329107ac57e65, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_e5aa68fa060254c1a806bb7e5aa9ae76, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_a7cac0b718935f528f94687943c81937, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_eba8cdfff1e0582e83f1ce5eeb6b1a4e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_ece01f5772635d1098ebd61c44ecedd1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_90cb82ee095b5a90b9cd4f61a734ddcb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_1fb0fa17ef495f0c8f2224c7b3643364, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_f62d56c727d35e0abbff5ef4ba3f33fa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_cd1e4feabcf5586fb86051465f3327c0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_8ebee7a251805975b435c7a244f39c34, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_af094d234e0950fb8b94ae0ee9e281be, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_36aec96f4d61501086d554c01c5e8289, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_a55d88561f6d53f59c770983a85ffde7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_82ee72568b2254fa99d022f1096eeaa3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_bf56027a57455123abe3ced6a9807514, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_54aa3f31f7ff5b38b064c9f2811e5ec1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_529f99f786c05397a15e35abe094dc82, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_1af17c1239ec554085952d46ebaf0a93, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_c0c53f2be62e56c8bad3af253f5b8834, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_32c9024b855b5237892b355eb8012148, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_eae053fa57c35386b4c669b83bdbd3ec, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_415753d302a95144a361daa511a1561a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_83d4d58b21575d2ba48abe888c98b249, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_9d9997882b965d18952b1812257f48d0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_2fa3396a8fb95353a9404bce74f96bc3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_98f576029ad95d1bac5b73665a8c9b38, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_aacebaa60a39512bafab350b2f42cf46, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_764aa107bcc95e388125d84493ed2172, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_d00efc3a5ceb5780a3d9c983021f6efe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_288fd1ac4bb952f68d038c7e82258fba, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}