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
    class ::clang::FunctionDecl  * (*method_pointer_537c1c1a1b3d5108a22a0b59905eeecf)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_1f3f45de4ac95f7e929adbdffff4684e)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_cbe5950b981d5b19b8e629cde6535683)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_0cbad3f8093e5d9f8a4d1cd8b7686f9d)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_a6b479bd85d95cbd8f1f193c086bab1f)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_c8fd23decc0f55bc9268c93d3b49ba8b)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_cb9b0260b5a75af3977068db49e2d681)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_caba5a7364d258b9b9aa0a58d3e4783d)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_863b12c2ac235d11b074616c12d6f958)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_fe366e8be7ee5ddc9995c9864eea7993)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_3e9de2c70354589c9fdb67c8ea1081b4)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_e8cea6b67046555785639b950ef14f16)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_b919ef3b8fcd5632bf8d86bd2bbf1ae5)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_eb27b782959c556c89373d5d87abf69e)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_7726c18b22085c4bbea34cf9c80e58ed)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_15b091dc56725ff68269ee2a00e30604)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_59fadea0e51c512eaff184dffa7cd10f)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_a66bd9bbc4f8556ba388b6c2002e5438)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_35e1fe41436b59429c7ff1de1d1cd11b)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_eb24ca9c7e0353f6a3d5104bb9669e2d)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_375359218ede56bba455306fe28c81b2)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_13a99bd001525cc2970a94b3d57c1d27)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_32133f7ba93e5d6faa0b2e4319b13051)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_622e3d9724d5570cb8e957d3ca87219a)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_5ebe2e7ef8e856ada5b89810cad6a623)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_3dea6b65efa0531e87e2c14ffd404fd4)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_a91715eb70a45531a424612acb554d47)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_c8e754cfe82952409a8ca408128bac20)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_5faed3a6e73b58c6af7be9fee99fe9ba)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_dc6f7a002cdf5f068121e84d1c8f8464)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_6a55485dd2105f4c84b429da1acdccae)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_3b1b1e17c48158c981b844f0774afdf7)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_ea442298fe145955b86e92008533f583)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_a6089c91b706551e8f3874549a9846b1)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_619f58eec1815670815499e7cc2c466c)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_4c879304fac75017bc38c23bc77ab47a)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_f0ab066ca0af59fea36fdf4bc86dfe66)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_eee9376d4607572bb1d0e6188d995773)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_970488fb0bf85a7194beeebd96f6a25e)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_ace4aa34df6d526ea1f6f39c3101a388)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_2f15278d60a752618bb281bc5cbedf2e)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_7e05b2620c5950b28038cb8fced18055)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_8514e683f9ec568d9fdbae61897eb8d9)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_8641f8cd95565b4da239e98ac12d92b7)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_a2f6f9325d2650beb1345f9acf7eb1f2)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_77490e12482351f8924cfc2d2461228a)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_59f0bf3263de578d8801de72693749cc)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_65b8a9ba2d045b2ab3be40e0de8a4cf7)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_022d51969489595f8715ab908b5658dd)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_cc2002243ae65a9cb4119db488fb4321)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_367ec2a0fb4450c3a62433fb29834dc6)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_8c0c334fc0785b39bc8051355df0f5e7)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_83542afb7f8a5922a7dabcd7efed4d57)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_1568e4dc57fd5e0493a5c8bb0079d3a0)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_b6f430896c1558d2baf8db0867f5bd66)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_ba41c635aa4e59df998c65c8de2cc9fa)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_6627ddf019205715a04bbc6ab26388ae)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_2232607e98265db69731cd99ec73fdbb)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_63220de527b85da4b139bcd0def61287)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_6a82ca15305e53c9a6b8e87835ad53d3)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_843bd2f472635d71a7e7d4db0cff142c)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_5a5ff0939f5254ce8b43e90654baf3d6)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_1a07a1b2d61e519fa05271e21a68fe57)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_3945475622c75199b3b0590af56121e5)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_d683a4a2b4715b22ac69407b33656893)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_53e859c9c4695edab577342e63a90344)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_bb3554a1f765542aad62780b3b18beda)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_5948a9cf82775777bdae02fcebe97800)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_c1c703f4aad6558fb7eaa927d4c7c0c1)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_3a0f806762e255fc8c9619dbe5993e46)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_862d11f770b1586a88182d60f84737bf)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_c7fae11b032b55478fad78cb320e1336)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_78969a78976c5938a745d2543dbfe751)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_46eb5e8685745cc89aab07d85125ceb5)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_c7b9dde7d74258f69c0ce5a75d166a28)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_0b982acbb50d5fa8aecc668d0f000327)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_8ef137cc8128502893201e3472b40c0c)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_04511eb31b2359018e969e6b63d31d1b)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_021d59e146035c55b4bd5f5a162829ff)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_b2c1c49db43959d28be713613a0cd65f)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_3bffae7c2fb35efc81dfc825e7690eef)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_973ac5c218d752bc966168f1c5b2b204)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_ec90b13970a25806bc508e81b61cb71d)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_9b16ac7175c853a69153229e82f85d78)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_26f8e616371f53d99228ae4009730c07(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_2903993a8c3f5df8928e21b5b73eae82(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_537c1c1a1b3d5108a22a0b59905eeecf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_1f3f45de4ac95f7e929adbdffff4684e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_cbe5950b981d5b19b8e629cde6535683, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_0cbad3f8093e5d9f8a4d1cd8b7686f9d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_a6b479bd85d95cbd8f1f193c086bab1f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_c8fd23decc0f55bc9268c93d3b49ba8b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_cb9b0260b5a75af3977068db49e2d681, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_caba5a7364d258b9b9aa0a58d3e4783d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_863b12c2ac235d11b074616c12d6f958, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_fe366e8be7ee5ddc9995c9864eea7993, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_3e9de2c70354589c9fdb67c8ea1081b4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_e8cea6b67046555785639b950ef14f16, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_b919ef3b8fcd5632bf8d86bd2bbf1ae5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_eb27b782959c556c89373d5d87abf69e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_7726c18b22085c4bbea34cf9c80e58ed, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_15b091dc56725ff68269ee2a00e30604, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_59fadea0e51c512eaff184dffa7cd10f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_a66bd9bbc4f8556ba388b6c2002e5438, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_35e1fe41436b59429c7ff1de1d1cd11b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_eb24ca9c7e0353f6a3d5104bb9669e2d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_375359218ede56bba455306fe28c81b2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_13a99bd001525cc2970a94b3d57c1d27, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_32133f7ba93e5d6faa0b2e4319b13051, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_622e3d9724d5570cb8e957d3ca87219a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_5ebe2e7ef8e856ada5b89810cad6a623, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_3dea6b65efa0531e87e2c14ffd404fd4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_a91715eb70a45531a424612acb554d47, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_c8e754cfe82952409a8ca408128bac20, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_5faed3a6e73b58c6af7be9fee99fe9ba, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_dc6f7a002cdf5f068121e84d1c8f8464, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_6a55485dd2105f4c84b429da1acdccae, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_3b1b1e17c48158c981b844f0774afdf7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_ea442298fe145955b86e92008533f583, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_a6089c91b706551e8f3874549a9846b1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_619f58eec1815670815499e7cc2c466c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_4c879304fac75017bc38c23bc77ab47a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_f0ab066ca0af59fea36fdf4bc86dfe66, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_eee9376d4607572bb1d0e6188d995773, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_970488fb0bf85a7194beeebd96f6a25e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_ace4aa34df6d526ea1f6f39c3101a388, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_2f15278d60a752618bb281bc5cbedf2e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_7e05b2620c5950b28038cb8fced18055, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_8514e683f9ec568d9fdbae61897eb8d9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_8641f8cd95565b4da239e98ac12d92b7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_a2f6f9325d2650beb1345f9acf7eb1f2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_77490e12482351f8924cfc2d2461228a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_59f0bf3263de578d8801de72693749cc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_65b8a9ba2d045b2ab3be40e0de8a4cf7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_022d51969489595f8715ab908b5658dd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_cc2002243ae65a9cb4119db488fb4321, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_367ec2a0fb4450c3a62433fb29834dc6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_8c0c334fc0785b39bc8051355df0f5e7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_83542afb7f8a5922a7dabcd7efed4d57, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_1568e4dc57fd5e0493a5c8bb0079d3a0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_b6f430896c1558d2baf8db0867f5bd66, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_ba41c635aa4e59df998c65c8de2cc9fa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_6627ddf019205715a04bbc6ab26388ae, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_2232607e98265db69731cd99ec73fdbb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_63220de527b85da4b139bcd0def61287, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_6a82ca15305e53c9a6b8e87835ad53d3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_843bd2f472635d71a7e7d4db0cff142c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_5a5ff0939f5254ce8b43e90654baf3d6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_1a07a1b2d61e519fa05271e21a68fe57, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_3945475622c75199b3b0590af56121e5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_d683a4a2b4715b22ac69407b33656893, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_53e859c9c4695edab577342e63a90344, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_bb3554a1f765542aad62780b3b18beda, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_5948a9cf82775777bdae02fcebe97800, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_c1c703f4aad6558fb7eaa927d4c7c0c1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_3a0f806762e255fc8c9619dbe5993e46, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_862d11f770b1586a88182d60f84737bf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_c7fae11b032b55478fad78cb320e1336, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_78969a78976c5938a745d2543dbfe751, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_46eb5e8685745cc89aab07d85125ceb5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_c7b9dde7d74258f69c0ce5a75d166a28, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_0b982acbb50d5fa8aecc668d0f000327, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_8ef137cc8128502893201e3472b40c0c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_04511eb31b2359018e969e6b63d31d1b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_021d59e146035c55b4bd5f5a162829ff, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_b2c1c49db43959d28be713613a0cd65f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_3bffae7c2fb35efc81dfc825e7690eef, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_973ac5c218d752bc966168f1c5b2b204, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_ec90b13970a25806bc508e81b61cb71d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_9b16ac7175c853a69153229e82f85d78, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_26f8e616371f53d99228ae4009730c07, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_2903993a8c3f5df8928e21b5b73eae82, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}