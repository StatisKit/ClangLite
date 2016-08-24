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
    class ::clang::FunctionDecl  * (*method_pointer_1b8c923859665273aba9cc5c92a0f067)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_4e4edab9bb5451e39e1c3621fd37cb9f)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_efed41aa19e9557596f523479b03f288)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_2a3b323604005c8aa192bc7b147990f7)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_7e8ae9120fab527094d88b6acd4a4d51)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_49bda981de87596ea60fb1f4b5a2889b)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_fe56532116885980a6ebc27683ddad1a)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_71b33d0b760e58108db1d414777e4ad4)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_5286834f6f765dd9860bf5cd30f970f5)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_78f71e2aa82a5adf8014decdcca32942)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_3f518240af645722a513601b8a04bdbb)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_34794e27ab30546a80a03b85fb268b8b)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_ce621f3f14365a8da1c0205ad432c36c)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_84eb862f9d245f288e7557d69bdc8836)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_eb31866f0a9a5882b6bec005b844c252)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_6e109aec67105b3e8a1a33dab669677d)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_765cded303965a36a22bf662e20d0668)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_aa0cf4609d6b57159df2b6fa898c2ff9)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_4aa59823b248500ab092ac24d5192a59)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_669d81aeeaca5b20959c55b6024021cc)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_fac024e5748352be9c738a2c5a074e49)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_ebdba9c0120d55828c3873ea5ad232fa)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_5da089f3fdce5f3e846addff09467920)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_2443f68296915756abab9dbfe12184dc)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_e430b270b4835cbea1a19214017392c7)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_f23e2c46813c5e7faa493bbb12fe3b7c)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_58ae45130e435924a94c7969f9105f43)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_13f47497593f5f32860a5b300b6af5e7)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_9d6929eb35105856b1d1c2b894478fdf)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_636dbc28e6645da3a1a0a3a1a6d3aedc)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_78e2d5ee78015ed3b237cca7d7762f65)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_4f7fbc0a1187539cabadec650ec8a7a8)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_be1f949da0bb534b9d2eaf4b4988cfd0)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_85208b00cd0f5f58a999a6d981ebca99)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_1672e63562675dcfa494fdc990f09820)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_5aef137de1875cc48f31230b9c00bb29)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_92f67da4a4ee5058a1c35052827c7c6c)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_093527ccaa2e53f2aac5fac95a463fbe)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_7506ccb3502954da917b0090de0b5251)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_f85a353a3b0d5e279995c1a6bbb8ecce)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_ad76275b08075c068b971d9c62b107c7)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_fb8b6264be3052a683dfffc98eebc469)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_4224b1d22ad85f7c9569bed9009079a8)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_c0b02e9d66535cf5be0e2bec04548228)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_15b64ef355175aecaecdfa31c180c852)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_11674bab741855a0b6ac769b1c52a111)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_74860c533e3c5fed966457469bd14392)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_c5f9afa2c621542aa5fe0a74fcc4d610)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_e490504003d05bdbb4bf691fb57aeb67)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_e9e92d583465570c853bc742ef54f2dd)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_014d6aeb35fc58eabbbd0f70c40f23f9)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_e4dfd7ee8c1054dea83a066c04b6e150)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_29e488cb34c65b32af1fd17bbdc5fc6c)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_02e0df8e59995fb4a9f166fec737fd80)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_58f02801848758d7b61bcf435d0a0df0)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_e08d319c229c590abe62756adeffd40a)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_99ec9b5382715412a4519471e0dd30c2)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_38ea132fb5d653879177fda802e041a3)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_622b0dfb087354fea145d2854f5ee881)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_b1bfdb050c0f5d02bae94456874dbd21)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_5e4fdb9546f25c719827fd96824f5b0a)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_edaaeeb17ade57fd9025b54332389893)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_b9c715627418516c93ce6a136ea0167d)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_bd1b17d9727e542d9599ae3ca0ad5cea)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_5197131c87075e9b8ae76cd16ba2df71)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_0cd180a55f8a56bf810bc69fa80fa992)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_049b57748b275d28beeb45d06c233ebc)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_402a2d2de3c8536893c34493bf7e2e00)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_6ba2383dc193590a9f316c98ed4f45cb)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_08324d891b2050e29d44a3ca29b5627e)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_c0bf6ffc5bcf591b8e9b429e69795e07)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_0fc2906cfa0c5bdc825d3c981d427edd)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_559ef04970ec5a87a18e38098060f1ad)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_deda194be55553e3bb67d655de83bc61)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_56f644f5ab995521932fac4d534b617c)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_0c2e75a07b355202b6732d5ab202f0d1)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_94b753e59fd853cea97bfd567ed2d551)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_5c7df5509508581fb8470fbbeb50e0bf)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_90f8428c56835a60ae6646f6d633d448)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_4b72ed7f793a5a46ac3803e5c14e2aab)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_b8d4cf7187a059a0900c916bca3263ad)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_f7fcca5a473c5d3db75c1d1ab40e7654)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_a2cd89aa16575bf4b26adf606d456227)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_74e31b1702c55945992783747affe409)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_d817bb1ad05f5bbbaa84b55ab36908d7(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_8959e6caf15e5e938aa3a026adbf6120(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_1b8c923859665273aba9cc5c92a0f067, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_4e4edab9bb5451e39e1c3621fd37cb9f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_efed41aa19e9557596f523479b03f288, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_2a3b323604005c8aa192bc7b147990f7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_7e8ae9120fab527094d88b6acd4a4d51, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_49bda981de87596ea60fb1f4b5a2889b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_fe56532116885980a6ebc27683ddad1a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_71b33d0b760e58108db1d414777e4ad4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_5286834f6f765dd9860bf5cd30f970f5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_78f71e2aa82a5adf8014decdcca32942, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_3f518240af645722a513601b8a04bdbb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_34794e27ab30546a80a03b85fb268b8b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_ce621f3f14365a8da1c0205ad432c36c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_84eb862f9d245f288e7557d69bdc8836, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_eb31866f0a9a5882b6bec005b844c252, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_6e109aec67105b3e8a1a33dab669677d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_765cded303965a36a22bf662e20d0668, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_aa0cf4609d6b57159df2b6fa898c2ff9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_4aa59823b248500ab092ac24d5192a59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_669d81aeeaca5b20959c55b6024021cc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_fac024e5748352be9c738a2c5a074e49, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_ebdba9c0120d55828c3873ea5ad232fa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_5da089f3fdce5f3e846addff09467920, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_2443f68296915756abab9dbfe12184dc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_e430b270b4835cbea1a19214017392c7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_f23e2c46813c5e7faa493bbb12fe3b7c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_58ae45130e435924a94c7969f9105f43, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_13f47497593f5f32860a5b300b6af5e7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_9d6929eb35105856b1d1c2b894478fdf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_636dbc28e6645da3a1a0a3a1a6d3aedc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_78e2d5ee78015ed3b237cca7d7762f65, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_4f7fbc0a1187539cabadec650ec8a7a8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_be1f949da0bb534b9d2eaf4b4988cfd0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_85208b00cd0f5f58a999a6d981ebca99, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_1672e63562675dcfa494fdc990f09820, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_5aef137de1875cc48f31230b9c00bb29, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_92f67da4a4ee5058a1c35052827c7c6c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_093527ccaa2e53f2aac5fac95a463fbe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_7506ccb3502954da917b0090de0b5251, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_f85a353a3b0d5e279995c1a6bbb8ecce, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_ad76275b08075c068b971d9c62b107c7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_fb8b6264be3052a683dfffc98eebc469, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_4224b1d22ad85f7c9569bed9009079a8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_c0b02e9d66535cf5be0e2bec04548228, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_15b64ef355175aecaecdfa31c180c852, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_11674bab741855a0b6ac769b1c52a111, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_74860c533e3c5fed966457469bd14392, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_c5f9afa2c621542aa5fe0a74fcc4d610, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_e490504003d05bdbb4bf691fb57aeb67, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_e9e92d583465570c853bc742ef54f2dd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_014d6aeb35fc58eabbbd0f70c40f23f9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_e4dfd7ee8c1054dea83a066c04b6e150, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_29e488cb34c65b32af1fd17bbdc5fc6c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_02e0df8e59995fb4a9f166fec737fd80, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_58f02801848758d7b61bcf435d0a0df0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_e08d319c229c590abe62756adeffd40a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_99ec9b5382715412a4519471e0dd30c2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_38ea132fb5d653879177fda802e041a3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_622b0dfb087354fea145d2854f5ee881, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_b1bfdb050c0f5d02bae94456874dbd21, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_5e4fdb9546f25c719827fd96824f5b0a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_edaaeeb17ade57fd9025b54332389893, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_b9c715627418516c93ce6a136ea0167d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_bd1b17d9727e542d9599ae3ca0ad5cea, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_5197131c87075e9b8ae76cd16ba2df71, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_0cd180a55f8a56bf810bc69fa80fa992, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_049b57748b275d28beeb45d06c233ebc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_402a2d2de3c8536893c34493bf7e2e00, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_6ba2383dc193590a9f316c98ed4f45cb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_08324d891b2050e29d44a3ca29b5627e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_c0bf6ffc5bcf591b8e9b429e69795e07, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_0fc2906cfa0c5bdc825d3c981d427edd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_559ef04970ec5a87a18e38098060f1ad, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_deda194be55553e3bb67d655de83bc61, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_56f644f5ab995521932fac4d534b617c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_0c2e75a07b355202b6732d5ab202f0d1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_94b753e59fd853cea97bfd567ed2d551, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_5c7df5509508581fb8470fbbeb50e0bf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_90f8428c56835a60ae6646f6d633d448, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_4b72ed7f793a5a46ac3803e5c14e2aab, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_b8d4cf7187a059a0900c916bca3263ad, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_f7fcca5a473c5d3db75c1d1ab40e7654, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_a2cd89aa16575bf4b26adf606d456227, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_74e31b1702c55945992783747affe409, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_d817bb1ad05f5bbbaa84b55ab36908d7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_8959e6caf15e5e938aa3a026adbf6120, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}