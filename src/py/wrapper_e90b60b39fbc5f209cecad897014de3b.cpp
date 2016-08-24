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
    class ::clang::FunctionDecl  * (*method_pointer_6de1a73067d65c7bbb0ac57da38c2fb1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_bebbf99e25ea51e0a444b525d4eb5940)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_a058bbb389df581f8638b2b23a3d3efa)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_0599ce5c40b75efd8f13399728a93281)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_9272269829e5538587c1203c586c654b)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_1af6d7214c8f59daad26c88752974e4b)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_df1bc200b60d5f469c24b2c5cb5abff1)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_0d2412b3aa75565aa96867dcde60d5e2)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_e33ab5e2c50a5e16ae2575c299aa0f2d)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_ca578b3d195659ab83b6e340c1d57710)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_e473f18128625c338fdb540115c9dfc5)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_bd68583aeba756bc9da9009531a65d49)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_a05e9ee7eda25805849a180ab0598ee1)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_35d187ff2e235bbabc77381f480d5aa0)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_9b117a37c6f55632ad606c2177c33d05)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_ab41ec891ec055049772b8b4fa92e091)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_2436f87c3727563aa02997f6eaae018b)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_6f906eb989b955c895ee3a96ce3d714f)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_0deafe4e4a4c526ba4364b337da8e876)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_4f061b5e752857fab645bbd8fe953b9e)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_7709e4fc58745e1492afc8c8367ccd81)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_332a7105cb3557cb9e2417ef1b13d30f)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_c10494130ef4537bb35a60f81435fec5)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_60b71805336b5c1489247eb4342365fa)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_c3e73cd4cf21554ea48d89044c66dbc2)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_463b624f4e1354b9a8057c07289460ce)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_64dcd0388af0555ea859a0b3d946040d)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_124fc63a2731534babd17c6ccd0475ef)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_1d55b351e29b53e08f99101b2e542523)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_e2616dee7aae5fad839c425b63b7435c)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_a46d2228689e58028b0bc15342dfc3bb)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_4c9d03107ac05b06a18697c35a6b0609)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_219d91c1956d5f529f1192308f66b20b)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_803b9a7e0db45312ae978b1af5c9822d)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_dbcf87d126255dbbad1a103e0faa92e1)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_60fc14fab7ee5cc59f9e1b6a05516751)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_81364920a2b8509c84d3be83ebd280d1)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_0d4f02daffa756ecbb2ea39feafd2056)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_3eeedcafebf352ff9cb367457039386f)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_354445c29411580bbdcf1fc383b9361f)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_7df67d54508a5148b5294688c1c08ce3)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_4a1b9eb5f1635deaa3a4d976562b04e2)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_202a87e2168454a78585cbec9fce3e2c)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_fdf1a8ba10115231a61d786272830f8b)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_71e64084e18c57e9a8a26f0d995ec43d)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_b1d9a1235ff5501eaa9947641c6f97e4)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_b07789e1f1cb5413a00a2c56453feec6)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_0b3b0b55950a5ba5bbfb979ceef14cf8)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_ba3231f8dc9e5248bdc47609f50af89f)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_ef8a5f2733b75cd5b5ed976496a8ddb4)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_89683cf54c445f209560490694cb7689)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_b5b47cee95b05a758c4fae6e1df5de1f)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_660a93dd94a45f4294f2480dd3e9bf94)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_b5ff3345999f5890a238e713098c705a)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_623b1d65e63955f2af513701be723204)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_a1108b1df55051628e9d5b7c3e032b6a)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_83011011cee65cfc9d19e2e337e2cb21)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_464cd57607da5b6da56bd8cf4e79c4bf)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_e7f2411a329152018d5611303c4a69ac)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_1de38b8a71a45331a86df42a5ff0aaa8)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_e3c17b20b01c592b833424632c63c1e0)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_d4942a817b06541fad00a01c9d14dbda)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_1f86ff2aefd05b3693edf7b8270645bc)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_9d25d3d733fe55bf8604671bcf9081c7)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_6d238886032159f79da8ec3496941741)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_dfd4dc76602155e08484e93fa52e2dab)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_10a7d9dc4e105ceb9c10058cddcd20e1)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_6dec162726ac518395a18884d57444ec)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_1138054a91a35960a49b7ad0597b8b91)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_acab251e03ae5f6689d517165428e5f8)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_bc5529f2912f5fffabbcdbd10b87cfdc)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_37ee7f1e9e3856f6b0552ce983b191e8)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_eb41039444435cd08faba5fdadb0e705)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_ef8978412ba75684a652940f3e4a6f37)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_afcaa6a8cf7f5123b55989c6fc188987)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_1cc9a59f1ea0534c82eea9f2c214ae5e)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_ccde513b23095913afc588b18fbe2aca)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_9a449a63425952c1a5a8f4883535f009)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_bed10cf6f3d7553b8ee47a275138cd36)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_38930a13caa65ff58bd17aa18417d286)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_c148e3583d365ca394c30072a5c71b30)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_f0214e60576250ce84e548f577b08d54)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_6caa63e4b40858c28ad226fbd682aac9)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_25188728f5625e58ab4dbbc54127192a)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_045239f41efb5bdbb59585b6768603fe(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_c579821b0999521eb1dd348347f5a48b(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_6de1a73067d65c7bbb0ac57da38c2fb1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_bebbf99e25ea51e0a444b525d4eb5940, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_a058bbb389df581f8638b2b23a3d3efa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_0599ce5c40b75efd8f13399728a93281, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_9272269829e5538587c1203c586c654b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_1af6d7214c8f59daad26c88752974e4b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_df1bc200b60d5f469c24b2c5cb5abff1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_0d2412b3aa75565aa96867dcde60d5e2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_e33ab5e2c50a5e16ae2575c299aa0f2d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_ca578b3d195659ab83b6e340c1d57710, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_e473f18128625c338fdb540115c9dfc5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_bd68583aeba756bc9da9009531a65d49, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_a05e9ee7eda25805849a180ab0598ee1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_35d187ff2e235bbabc77381f480d5aa0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_9b117a37c6f55632ad606c2177c33d05, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_ab41ec891ec055049772b8b4fa92e091, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_2436f87c3727563aa02997f6eaae018b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_6f906eb989b955c895ee3a96ce3d714f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_0deafe4e4a4c526ba4364b337da8e876, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_4f061b5e752857fab645bbd8fe953b9e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_7709e4fc58745e1492afc8c8367ccd81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_332a7105cb3557cb9e2417ef1b13d30f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_c10494130ef4537bb35a60f81435fec5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_60b71805336b5c1489247eb4342365fa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_c3e73cd4cf21554ea48d89044c66dbc2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_463b624f4e1354b9a8057c07289460ce, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_64dcd0388af0555ea859a0b3d946040d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_124fc63a2731534babd17c6ccd0475ef, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_1d55b351e29b53e08f99101b2e542523, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_e2616dee7aae5fad839c425b63b7435c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_a46d2228689e58028b0bc15342dfc3bb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_4c9d03107ac05b06a18697c35a6b0609, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_219d91c1956d5f529f1192308f66b20b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_803b9a7e0db45312ae978b1af5c9822d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_dbcf87d126255dbbad1a103e0faa92e1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_60fc14fab7ee5cc59f9e1b6a05516751, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_81364920a2b8509c84d3be83ebd280d1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_0d4f02daffa756ecbb2ea39feafd2056, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_3eeedcafebf352ff9cb367457039386f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_354445c29411580bbdcf1fc383b9361f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_7df67d54508a5148b5294688c1c08ce3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_4a1b9eb5f1635deaa3a4d976562b04e2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_202a87e2168454a78585cbec9fce3e2c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_fdf1a8ba10115231a61d786272830f8b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_71e64084e18c57e9a8a26f0d995ec43d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_b1d9a1235ff5501eaa9947641c6f97e4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_b07789e1f1cb5413a00a2c56453feec6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_0b3b0b55950a5ba5bbfb979ceef14cf8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_ba3231f8dc9e5248bdc47609f50af89f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_ef8a5f2733b75cd5b5ed976496a8ddb4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_89683cf54c445f209560490694cb7689, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_b5b47cee95b05a758c4fae6e1df5de1f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_660a93dd94a45f4294f2480dd3e9bf94, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_b5ff3345999f5890a238e713098c705a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_623b1d65e63955f2af513701be723204, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_a1108b1df55051628e9d5b7c3e032b6a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_83011011cee65cfc9d19e2e337e2cb21, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_464cd57607da5b6da56bd8cf4e79c4bf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_e7f2411a329152018d5611303c4a69ac, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_1de38b8a71a45331a86df42a5ff0aaa8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_e3c17b20b01c592b833424632c63c1e0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_d4942a817b06541fad00a01c9d14dbda, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_1f86ff2aefd05b3693edf7b8270645bc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_9d25d3d733fe55bf8604671bcf9081c7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_6d238886032159f79da8ec3496941741, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_dfd4dc76602155e08484e93fa52e2dab, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_10a7d9dc4e105ceb9c10058cddcd20e1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_6dec162726ac518395a18884d57444ec, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_1138054a91a35960a49b7ad0597b8b91, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_acab251e03ae5f6689d517165428e5f8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_bc5529f2912f5fffabbcdbd10b87cfdc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_37ee7f1e9e3856f6b0552ce983b191e8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_eb41039444435cd08faba5fdadb0e705, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_ef8978412ba75684a652940f3e4a6f37, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_afcaa6a8cf7f5123b55989c6fc188987, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_1cc9a59f1ea0534c82eea9f2c214ae5e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_ccde513b23095913afc588b18fbe2aca, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_9a449a63425952c1a5a8f4883535f009, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_bed10cf6f3d7553b8ee47a275138cd36, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_38930a13caa65ff58bd17aa18417d286, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_c148e3583d365ca394c30072a5c71b30, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_f0214e60576250ce84e548f577b08d54, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_6caa63e4b40858c28ad226fbd682aac9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_25188728f5625e58ab4dbbc54127192a, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_045239f41efb5bdbb59585b6768603fe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_c579821b0999521eb1dd348347f5a48b, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}