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
    class ::clang::FunctionDecl  * (*method_pointer_bd5d04ae229d53e28209294ade436e41)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_b2ddcab696ca5c1d92e913ee303d58b7)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_3c6b8f0588945dae935f9f13bab6225c)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_af74cd82860655048c1f80040e77ae66)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_7770d5b8caba56d2bc87b5a017346b44)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_425981a41fe95c1dac368ce2a691bc34)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_06033e11dd6351a9bc4a33a925bc1861)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_e3afe21e5dd258089180c96776743b0a)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_6e6e604d00df57e086628d56454edf6a)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_84a92321638657c88c8368d62b6de9ea)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_cc0cf0d90c0452e0b30911654dc968f1)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_166ca617de2e5718a96070748a951bd0)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_9a8b61c0d1c155c8914a4c4b648498b2)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_ce100261120355fd98598f199fe8589f)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_213844c7f88a56908b13fd8ed16579f3)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_af8a631423a05abb8ef4458105df6dee)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_7aadd298d63158998692b6a60c70dba6)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_39ecb3e8182259fc852a103dc8bffab9)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_df1329895508558fb3f3b77219a7a4c7)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_24a819e64fce575f8f3c8d6898fd5d50)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_92a8004b4262533c91111fcbe0f59470)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_147c2b677b205db7ad4d7c66b25acc25)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_f069b32bcbb15b2c90d5643b83225e3f)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_ded4eaa4b08753c7976c110c01fb3c74)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_3276cf566e90578aa1009df6d6178c08)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_df74d32e2b525031aa83ffb896256bb5)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_5f92f85e945f5c718cddcff1278c76e6)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_435d71e6f1175bae98ed52202fb95c22)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_b2204d1eb0755194bec872b9e9fe0f6f)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_866f0a55724c57ab9dbb1bf40db84b8f)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_7c58f45b12d355f68efdda92e59deed3)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_7546de20756b56b08ee82168488f2cdb)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_29339b9981175fcd8a31a032b21153e5)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_479abfa5e52c502aaf1580ec3f568ae3)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_8abe506bd45c5c2bad8091e012d934f8)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_0066b09112a550d0bf53579360e1c254)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_4b79321046225625b3cc9cf0a10a7b40)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_f28c1e2f8a1553d4a2c298e794c42b17)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_07256bbe38435b389b0e748f469afd60)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_64b7b085dbcd521e8e03201b787344b6)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_926ab18db8655b5f8e6d2c9f6e293053)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_aea9059d6b1a58d8af50bffa4540ce1b)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_fe1ffd96af8e5404976a1e1b25ed83d8)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_3dddca07c07259c3abd0e644e68ee64e)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_3e298324e5e953b186dbc37fadabdc30)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_1e249af3497e5ad8b971074a989e4909)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_b0198bc29e5c564389d1579ba5f6f1de)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_c7b7a51d258e5f1291a5acb2d375ef4b)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_dde4cf90c869543f9b7916269be26b44)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_fbf9a87aa07c5895ae1e3dff8f3c53a3)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_8522704dfe1157ab8ef52a51ed03b6f2)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_b5a062dc369657f5a569079f6241712f)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_4743d6d68b0255e7a34f84610e4604c9)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_a9beca11f8b758ae9fb4562d8133f0b9)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_036d95b9a9ec51348e8dba39ca2cf4e9)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_436618730bcb5564aeade74ca82d4b55)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_834d45910eec5f72ae45c855baba81fe)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_1f7c5613d6c85fca8d950c4fa94a005f)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_83d7b6e444215598b0025d2342240fb7)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_5446eae38e0d5a4e8fd7b08f3018ea89)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_68205b9e4aaf59af802478f064df52ba)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_8e7bcca617e659a5b2307f9d2004907f)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_3654b53c931c5031abe2223e7cf62453)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_69a1a3692e165dd89ceb2b916bf63bf6)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_d7e775f102a05b5b92901b8e03690050)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_0e4968608b0b5e9d928f82ebfd8e86aa)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_98c2b175c2a55f52a60e53ee3b1bbea1)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_ac47fbcc78b15e47b8ea31e6e65e3267)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_b2fef2b200f459b38625fd637591c048)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_8eb3d3f8b8705e4a90a62d5d7fe5eca3)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_74fb9becf34b5f0b98469847e806d074)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_1d862d41ca1c56f088141c25adcabbc8)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_5658f3d2d8695709af3ccf763cdee482)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_d7a44d4cfb04571ba7074e010a28f21f)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_2d13bb4898795a8ca867219bd9a38c89)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_2a065fc9079d53e48ca4e738255fed21)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_c232f49827e95b28baf65fc6756aa864)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_676069b2adec54a8938cf91b8e0bdda2)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_999cb864b26c5e9aa91f4021aed997ff)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_4d5fed1cdc0453f482ed07cdcb957229)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_18145156438f50c7918518c3baa201f5)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_6b5c606fbafa59068d3cb857eadcf479)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_ee9128d48b2a50e6b26dc0161317402b)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_7bf85a053e975ab0a47c1aa036713f8c)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_a56e19078e56517b80bda1d0a3656b69(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_2863296619195bfa8a909b12cc969784(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_bd5d04ae229d53e28209294ade436e41, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_b2ddcab696ca5c1d92e913ee303d58b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_3c6b8f0588945dae935f9f13bab6225c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_af74cd82860655048c1f80040e77ae66, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_7770d5b8caba56d2bc87b5a017346b44, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_425981a41fe95c1dac368ce2a691bc34, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_06033e11dd6351a9bc4a33a925bc1861, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_e3afe21e5dd258089180c96776743b0a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_6e6e604d00df57e086628d56454edf6a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_84a92321638657c88c8368d62b6de9ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_cc0cf0d90c0452e0b30911654dc968f1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_166ca617de2e5718a96070748a951bd0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_9a8b61c0d1c155c8914a4c4b648498b2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_ce100261120355fd98598f199fe8589f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_213844c7f88a56908b13fd8ed16579f3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_af8a631423a05abb8ef4458105df6dee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_7aadd298d63158998692b6a60c70dba6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_39ecb3e8182259fc852a103dc8bffab9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_df1329895508558fb3f3b77219a7a4c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_24a819e64fce575f8f3c8d6898fd5d50, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_92a8004b4262533c91111fcbe0f59470, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_147c2b677b205db7ad4d7c66b25acc25, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_f069b32bcbb15b2c90d5643b83225e3f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_ded4eaa4b08753c7976c110c01fb3c74, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_3276cf566e90578aa1009df6d6178c08, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_df74d32e2b525031aa83ffb896256bb5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_5f92f85e945f5c718cddcff1278c76e6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_435d71e6f1175bae98ed52202fb95c22, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_b2204d1eb0755194bec872b9e9fe0f6f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_866f0a55724c57ab9dbb1bf40db84b8f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_7c58f45b12d355f68efdda92e59deed3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_7546de20756b56b08ee82168488f2cdb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_29339b9981175fcd8a31a032b21153e5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_479abfa5e52c502aaf1580ec3f568ae3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_8abe506bd45c5c2bad8091e012d934f8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_0066b09112a550d0bf53579360e1c254, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_4b79321046225625b3cc9cf0a10a7b40, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_f28c1e2f8a1553d4a2c298e794c42b17, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_07256bbe38435b389b0e748f469afd60, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_64b7b085dbcd521e8e03201b787344b6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_926ab18db8655b5f8e6d2c9f6e293053, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_aea9059d6b1a58d8af50bffa4540ce1b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_fe1ffd96af8e5404976a1e1b25ed83d8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_3dddca07c07259c3abd0e644e68ee64e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_3e298324e5e953b186dbc37fadabdc30, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_1e249af3497e5ad8b971074a989e4909, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_b0198bc29e5c564389d1579ba5f6f1de, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_c7b7a51d258e5f1291a5acb2d375ef4b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_dde4cf90c869543f9b7916269be26b44, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_fbf9a87aa07c5895ae1e3dff8f3c53a3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_8522704dfe1157ab8ef52a51ed03b6f2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_b5a062dc369657f5a569079f6241712f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_4743d6d68b0255e7a34f84610e4604c9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_a9beca11f8b758ae9fb4562d8133f0b9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_036d95b9a9ec51348e8dba39ca2cf4e9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_436618730bcb5564aeade74ca82d4b55, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_834d45910eec5f72ae45c855baba81fe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_1f7c5613d6c85fca8d950c4fa94a005f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_83d7b6e444215598b0025d2342240fb7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_5446eae38e0d5a4e8fd7b08f3018ea89, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_68205b9e4aaf59af802478f064df52ba, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_8e7bcca617e659a5b2307f9d2004907f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_3654b53c931c5031abe2223e7cf62453, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_69a1a3692e165dd89ceb2b916bf63bf6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_d7e775f102a05b5b92901b8e03690050, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_0e4968608b0b5e9d928f82ebfd8e86aa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_98c2b175c2a55f52a60e53ee3b1bbea1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_ac47fbcc78b15e47b8ea31e6e65e3267, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_b2fef2b200f459b38625fd637591c048, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_8eb3d3f8b8705e4a90a62d5d7fe5eca3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_74fb9becf34b5f0b98469847e806d074, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_1d862d41ca1c56f088141c25adcabbc8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_5658f3d2d8695709af3ccf763cdee482, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_d7a44d4cfb04571ba7074e010a28f21f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_2d13bb4898795a8ca867219bd9a38c89, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_2a065fc9079d53e48ca4e738255fed21, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_c232f49827e95b28baf65fc6756aa864, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_676069b2adec54a8938cf91b8e0bdda2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_999cb864b26c5e9aa91f4021aed997ff, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_4d5fed1cdc0453f482ed07cdcb957229, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_18145156438f50c7918518c3baa201f5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_6b5c606fbafa59068d3cb857eadcf479, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_ee9128d48b2a50e6b26dc0161317402b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_7bf85a053e975ab0a47c1aa036713f8c, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_a56e19078e56517b80bda1d0a3656b69, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_2863296619195bfa8a909b12cc969784, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}