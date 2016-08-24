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
    class ::clang::FunctionDecl  * (*method_pointer_5f840b73c7505be1a45bca86cd8ba2dc)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_e26be0e27c075b6fae08effa40095f71)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_3738bb4875e951a4b86ee6985f98e614)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_a24a16001ba45719969543efacae792b)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_96fe36bf392f5469addfec21001e1e7b)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_70a2a3ad099d5fefaa6cec7fcab292fb)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_7ab9a320809754d2af908ad6a4e857e6)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_ebff01993f035c259028028bda6adba4)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_d35f08dec7f75c80b9cbb5030e27767c)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_2ad0a75c7a3354898981655598e416ff)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_bbb35a5fb6405fb58016f1960907564d)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_c1894de5c715594fa4b9ea755fff350a)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_3884f7d51ac456738de8e61b3524bac0)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_12d13a45f0b954c1bc7cf44d4a2f63ec)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_dfdfbb662a3f5530a0f9a030791f3179)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_ff6dfc6bed9850b990125cd1b9f51945)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_a2dc6a80c0dd5a1994e10a93b43ee88f)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_cca41c295af454929c0650f47525764c)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_b7358b1fbbc158598720f261e3d46158)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_b7ced3d9d625526ea5e34baccbd0e7aa)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_bac9ecd61c495c96b3aeb46d1c08ea8d)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_d745c9b322a4578aa77765004d422f04)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_f609d3e983b55f02ad96cd0eb7c4f5d5)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_5b6e02f1c2355d699057bb906b2f7b1c)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_731b17abc2b45607a7576f8ddc0aa2cb)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_f6a2bd918b615ce7961003d90313d659)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_b361b434e5d256f88e48d0c6db652c3f)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_e83722d7e0235cf797e76e2b746303b7)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_44a328c64c6d5f809ee514e2ee1b3ee3)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_6f1d58bf968a590e8377e120e768d900)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_3a8c1578d3455f3b87ecc5be82ee597c)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_320ff68b69e85f8a919138c269fc513d)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_95df2ad97ce45055ad4ddbcd5a37f002)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_3147863068b157b49b32795d8f4fed80)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_b41a3b582af157c3b753e14e382b8a1f)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_900916add17452dea328c55dd10c35d5)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_93512dbd0c3c5cc3b74551a9938949ad)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_fa817bf13bd15d7d8b1de6ad678b2c19)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_f43becaa4c025aa3a134caa9371d1215)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_e51e874a5cc45565811a022aa17e22ee)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_5211d429536e5607ad9d4292d3460076)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_d086b6631daa5c9faa4114f82c455ffc)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_43370b50759e58218df1e44b43263e4b)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_38bfaa2030775b0e81e203b33a7ff4b8)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_8b135c3ce13956838a8d1c47f50060b4)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_1a66054545bc56fdb3d2ef15963ed83d)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_9c699c149b7950d29e2b8f373393b981)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_fdc9d49bdb8f5a19a02050dc48dcc7c7)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_aaaf4d341fa5516a859ed371f3a3d809)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_450a8a7bb09f53e6b0267cf37e19aac4)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_a226d57f23d854b498711e46b51e95f2)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_758db385c0aa57c1a049f499fd40ba38)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_eea95dda7b5457a3bca9218a07682e29)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_6808d1ee63bc527db8d8bcfe8a1b26cc)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_9cf24a205a2c5529830b46a2c1b58f5b)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_3d204e5a31455a41ade525b95f6aecd6)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_e467e5feaa3758e4b5d84ba6b50b2d71)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_54e01627631c5c208dda78c3389fe3e3)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_5de27020837c599599f5862e3edcc57f)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_82031636bb1054d3babdfd039c37766c)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_bd82c325443c5a87bb7fb3c2e53840f3)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_9c9dae0a63a259d8b3352d939d73d6ed)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_b701c24db4945b749babdb7636d759de)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_d2a1423d3eb95239b2cfea3737361311)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_478fffd51b6652d28dfc9224527c83e6)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_fdac499fc51f574cae040e585f3a13ea)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_8132f30584ff5295a83c38698384d63d)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_ed387b1d916851789cd68a03a5d91a48)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_8e144778a3d55238b6eb40100e74576d)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_a4f6443446ab50d9ae138572ffdecb7a)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_d399b58fec57550a97f099969515d60a)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_cc98525b8a0a5395baaf7f3e7d66e7d3)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_6840f427647e5c8aba8423c9290cd5d1)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_afdd5bb7e2a4559dbf44d8496bfefc32)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_154436a6a29e57bfb489bc3b47c4b454)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_2150dd617cd85e64aff97612676ad245)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_a7d45056d7bc5a5e92831e10f317e55e)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_c4f2e60ffaca5368a93b2edda0a0caae)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_3fceaa7df0f1578e98f1f817fca95bad)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_775bf38ce9b05dc1a9800a175dba24d0)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_80c7f8d449ba54fba16f2d149851aead)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_f657af55d06f58edaa60f2722524f526)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_2c2b1d3d253b5b23b546d1be82ec0e5f)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_70597f133cd65a13911dcf9021c54fa8)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_c9a8ac7bb145517bb165a25c4d8da6d4(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_4d8481044b775b9e8811996db7e19b8e(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_5f840b73c7505be1a45bca86cd8ba2dc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_e26be0e27c075b6fae08effa40095f71, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_3738bb4875e951a4b86ee6985f98e614, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_a24a16001ba45719969543efacae792b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_96fe36bf392f5469addfec21001e1e7b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_70a2a3ad099d5fefaa6cec7fcab292fb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_7ab9a320809754d2af908ad6a4e857e6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_ebff01993f035c259028028bda6adba4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_d35f08dec7f75c80b9cbb5030e27767c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_2ad0a75c7a3354898981655598e416ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_bbb35a5fb6405fb58016f1960907564d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_c1894de5c715594fa4b9ea755fff350a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_3884f7d51ac456738de8e61b3524bac0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_12d13a45f0b954c1bc7cf44d4a2f63ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_dfdfbb662a3f5530a0f9a030791f3179, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_ff6dfc6bed9850b990125cd1b9f51945, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_a2dc6a80c0dd5a1994e10a93b43ee88f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_cca41c295af454929c0650f47525764c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_b7358b1fbbc158598720f261e3d46158, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_b7ced3d9d625526ea5e34baccbd0e7aa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_bac9ecd61c495c96b3aeb46d1c08ea8d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_d745c9b322a4578aa77765004d422f04, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_f609d3e983b55f02ad96cd0eb7c4f5d5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_5b6e02f1c2355d699057bb906b2f7b1c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_731b17abc2b45607a7576f8ddc0aa2cb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_f6a2bd918b615ce7961003d90313d659, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_b361b434e5d256f88e48d0c6db652c3f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_e83722d7e0235cf797e76e2b746303b7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_44a328c64c6d5f809ee514e2ee1b3ee3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_6f1d58bf968a590e8377e120e768d900, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_3a8c1578d3455f3b87ecc5be82ee597c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_320ff68b69e85f8a919138c269fc513d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_95df2ad97ce45055ad4ddbcd5a37f002, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_3147863068b157b49b32795d8f4fed80, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_b41a3b582af157c3b753e14e382b8a1f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_900916add17452dea328c55dd10c35d5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_93512dbd0c3c5cc3b74551a9938949ad, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_fa817bf13bd15d7d8b1de6ad678b2c19, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_f43becaa4c025aa3a134caa9371d1215, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_e51e874a5cc45565811a022aa17e22ee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_5211d429536e5607ad9d4292d3460076, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_d086b6631daa5c9faa4114f82c455ffc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_43370b50759e58218df1e44b43263e4b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_38bfaa2030775b0e81e203b33a7ff4b8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_8b135c3ce13956838a8d1c47f50060b4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_1a66054545bc56fdb3d2ef15963ed83d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_9c699c149b7950d29e2b8f373393b981, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_fdc9d49bdb8f5a19a02050dc48dcc7c7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_aaaf4d341fa5516a859ed371f3a3d809, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_450a8a7bb09f53e6b0267cf37e19aac4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_a226d57f23d854b498711e46b51e95f2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_758db385c0aa57c1a049f499fd40ba38, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_eea95dda7b5457a3bca9218a07682e29, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_6808d1ee63bc527db8d8bcfe8a1b26cc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_9cf24a205a2c5529830b46a2c1b58f5b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_3d204e5a31455a41ade525b95f6aecd6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_e467e5feaa3758e4b5d84ba6b50b2d71, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_54e01627631c5c208dda78c3389fe3e3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_5de27020837c599599f5862e3edcc57f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_82031636bb1054d3babdfd039c37766c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_bd82c325443c5a87bb7fb3c2e53840f3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_9c9dae0a63a259d8b3352d939d73d6ed, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_b701c24db4945b749babdb7636d759de, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_d2a1423d3eb95239b2cfea3737361311, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_478fffd51b6652d28dfc9224527c83e6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_fdac499fc51f574cae040e585f3a13ea, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_8132f30584ff5295a83c38698384d63d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_ed387b1d916851789cd68a03a5d91a48, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_8e144778a3d55238b6eb40100e74576d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_a4f6443446ab50d9ae138572ffdecb7a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_d399b58fec57550a97f099969515d60a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_cc98525b8a0a5395baaf7f3e7d66e7d3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_6840f427647e5c8aba8423c9290cd5d1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_afdd5bb7e2a4559dbf44d8496bfefc32, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_154436a6a29e57bfb489bc3b47c4b454, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_2150dd617cd85e64aff97612676ad245, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_a7d45056d7bc5a5e92831e10f317e55e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_c4f2e60ffaca5368a93b2edda0a0caae, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_3fceaa7df0f1578e98f1f817fca95bad, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_775bf38ce9b05dc1a9800a175dba24d0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_80c7f8d449ba54fba16f2d149851aead, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_f657af55d06f58edaa60f2722524f526, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_2c2b1d3d253b5b23b546d1be82ec0e5f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_70597f133cd65a13911dcf9021c54fa8, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_c9a8ac7bb145517bb165a25c4d8da6d4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_4d8481044b775b9e8811996db7e19b8e, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}