#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_e90b60b39fbc5f209cecad897014de3b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::FunctionDecl::*method_pointer_6c22b1bf6b875b8abe75acb1e56ab62f)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (*method_pointer_f01edb2966a750f99f135e621aae6092)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    void  (::clang::FunctionDecl::*method_pointer_451c31dedbca5f39b9e70b3a31180f11)(bool ) = &::clang::FunctionDecl::setTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_e1f330ce1cdc5c48a98018c28a143aee)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_5f94191f2f995448acf2abea46d11a45)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_aa164b9739ae5ca8886528649fae0eb0)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_52561812c8dc5d05ac0c5c3068f87c38)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_ebe17e11f3ce5075b7c85bd5ccde23e9)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    void  (::clang::FunctionDecl::*method_pointer_04e6b10675dd5405bdd8e10f11276b14)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_c1724e61fa115e5a9e948a67e94d8df7)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    bool  (*method_pointer_719f917e52ea5313a9e5157be1b44144)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    void  (::clang::FunctionDecl::*method_pointer_1db2b33820d95132a385e23e3b95d8c9)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_431dc6e82ccd55cdb6f107e32db147f3)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    bool  (::clang::FunctionDecl::*method_pointer_01c8550173e75656945ed84ac1341d7d)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_e8cad5ded64c59d1aaf4f7d90255c993)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_7406aff4048e5f27b0729072d709e6ab)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_cb37150318f350569b5bf31bd2f08f1b)() const = &::clang::FunctionDecl::isMain;
    void  (::clang::FunctionDecl::*method_pointer_0cc0329a538554418639beef06a25aee)() = &::clang::FunctionDecl::setImplicitlyInline;
    bool  (::clang::FunctionDecl::*method_pointer_13bdf3fe920a5388b1c3d63a3e533f01)() const = &::clang::FunctionDecl::isInlined;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_70d69a91ed575d059127dd65deaa2b65)() const = &::clang::FunctionDecl::getCanonicalDecl;
    bool  (::clang::FunctionDecl::*method_pointer_2fe11f3a9c0757418a6aa2b9dabffdee)() const = &::clang::FunctionDecl::isOutOfLine;
    class ::clang::DeclContext  * (*method_pointer_0212ca4f98ed57d38dba50c77b42cf3e)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (::clang::FunctionDecl::*method_pointer_8b9a926844c05ba0a9c2501128ff3cdb)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_9c360e20eac951c9ad4f48c37d7cfc30)() const = &::clang::FunctionDecl::isInExternCContext;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_a1824dbd11b55a94992e6ddedc7f36e8)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    bool  (::clang::FunctionDecl::*method_pointer_422cfb26e7895595acee41e47af7838d)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_fbf27d756c505a0185e9a2f8d6adb5a7)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_5928136ecaee5823b9dea9db917adc62)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    void  (::clang::FunctionDecl::*method_pointer_2d6af0eb3959585cadc99c4e90730268)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_26c8c29115a051098b02949e1d1e4615)() const = &::clang::FunctionDecl::isTrivial;
    unsigned int  (::clang::FunctionDecl::*method_pointer_5cb5838626fb55c098756404a99edad3)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    bool  (::clang::FunctionDecl::*method_pointer_778843c1c1635439b3bcb7c95c339549)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_5b1495d1c3fb57f99cd9c9838b40f38a)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_305d9dfdebfb5ef8851647826496d8e0)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_3ad57f73ba505c6da4b06630dc9a3c0b)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    void  (::clang::FunctionDecl::*method_pointer_4d0f5f2722145691acae76150d285de4)(bool ) = &::clang::FunctionDecl::setPure;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_2c49632936e75ec29e7c19900958f5b4)() = &::clang::FunctionDecl::getCanonicalDecl;
    bool  (::clang::FunctionDecl::*method_pointer_222f4812bdfd548894c2fa098984aae3)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_0977a39828be5d48a856fdc08d1ee81c)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_2636c483e47e506fb38e56754ce3d267)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_52c79725a14c590e9a4b089ed3635a55)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    bool  (::clang::FunctionDecl::*method_pointer_41dc479d4a1b52bc93a3ef5bdb45a710)() const = &::clang::FunctionDecl::hasSkippedBody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_ecc51f2b78eb599aaa99a18fd65ce9bb)() const = &::clang::FunctionDecl::getBuiltinID;
    void  (::clang::FunctionDecl::*method_pointer_5f439fa3a9fc5a42a0024860826be795)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_cae24b1cfd5d58919ec56ea873bbc2f6)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    bool  (::clang::FunctionDecl::*method_pointer_8b3b552f93e150e2b7b58907d86fc934)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_7806f24119ff5fd792f5f073a7501bcd)() const = &::clang::FunctionDecl::hasTrivialBody;
    void  (::clang::FunctionDecl::*method_pointer_158a0987d0f057bfad98892b4fe34115)(bool ) = &::clang::FunctionDecl::setDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_48813fc357645e60992e561728d922db)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_f155dcbb4f3a589f8352f9cffde618c3)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_058ca56f5c065174bbfbd9c84e4ff3d4)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    void  (::clang::FunctionDecl::*method_pointer_25782f3ac022553cba45f4e74f341def)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_d4fac4cd3fdd58d39a56673aad7ae3d0)() const = &::clang::FunctionDecl::isMSExternInline;
    unsigned int  (::clang::FunctionDecl::*method_pointer_a4bee11fc07951408247757808f5a840)() const = &::clang::FunctionDecl::param_size;
    bool  (::clang::FunctionDecl::*method_pointer_85b47f93e8be5e3c949dcc155dd65054)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_e1aed8d56fec5f9bb8364d80764a6b05)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    bool  (::clang::FunctionDecl::*method_pointer_6794a14908d059d7958fd92aaf45aad4)() const = &::clang::FunctionDecl::isConstexpr;
    class ::clang::FunctionDecl  * (*method_pointer_ef9cdba06ced595b8b9ad62860738437)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    bool  (::clang::FunctionDecl::*method_pointer_4ca77b1e936152919b9d2a94e032ded5)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_5d205a3390365771a0681c5fa17bc95b)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    bool  (::clang::FunctionDecl::*method_pointer_f21f80ec7a5f5437b7b7aa79980a5eeb)() const = &::clang::FunctionDecl::hasPrototype;
    void  (::clang::FunctionDecl::*method_pointer_acf6a3ebdd3851938b1df368d0a4671b)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_fadb76210a9a579ebcf431b8a06fa1f5)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    bool  (::clang::FunctionDecl::*method_pointer_df8acd03cd095033a6517db5db6dd641)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_e58dd0692eed5606a951495801d089da)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_29debeac339d56698ed28685a1a87dda)() const = &::clang::FunctionDecl::usesSEHTry;
    bool  (::clang::FunctionDecl::*method_pointer_dc2d4ddd06c45e7d9161000c6991cb10)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_852b69284968559ab20f5069fdf80401)() const = &::clang::FunctionDecl::isPure;
    class ::clang::FunctionDecl  * (*method_pointer_15f52f88f11d521b983ff30906867f87)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_d794b4a83a4c5540aeb6d00fc20cadc0)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    bool  (::clang::FunctionDecl::*method_pointer_97528854e7175ce69d4afec411131bbe)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_e96c44deffa254bfbe63c399fd8eba36)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_7f75ae3c04c352e6a774bae11852a5b5)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_a1bd0e7448b852e59ed94572fae407ae)() const = &::clang::FunctionDecl::isGlobal;
    unsigned int  (::clang::FunctionDecl::*method_pointer_e5ca27171d61566ab1065f050436db82)() const = &::clang::FunctionDecl::getNumParams;
    void  (::clang::FunctionDecl::*method_pointer_95468c2b8f0b500c8ca3d13fdcd9aa92)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_1ed8eac6e50951dd99c208b405310ee4)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_1c22940bafda50839b6b68cef643b4f3)(bool ) = &::clang::FunctionDecl::setConstexpr;
    unsigned int  (::clang::FunctionDecl::*method_pointer_c515a985b6d251619c8265e3a5d0934d)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_6c22b1bf6b875b8abe75acb1e56ab62f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_f01edb2966a750f99f135e621aae6092, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_451c31dedbca5f39b9e70b3a31180f11, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_e1f330ce1cdc5c48a98018c28a143aee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_5f94191f2f995448acf2abea46d11a45, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_aa164b9739ae5ca8886528649fae0eb0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_52561812c8dc5d05ac0c5c3068f87c38, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_ebe17e11f3ce5075b7c85bd5ccde23e9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_04e6b10675dd5405bdd8e10f11276b14, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_c1724e61fa115e5a9e948a67e94d8df7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_719f917e52ea5313a9e5157be1b44144, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_1db2b33820d95132a385e23e3b95d8c9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_431dc6e82ccd55cdb6f107e32db147f3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_01c8550173e75656945ed84ac1341d7d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_e8cad5ded64c59d1aaf4f7d90255c993, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_7406aff4048e5f27b0729072d709e6ab, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_cb37150318f350569b5bf31bd2f08f1b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_0cc0329a538554418639beef06a25aee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_13bdf3fe920a5388b1c3d63a3e533f01, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_70d69a91ed575d059127dd65deaa2b65, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_2fe11f3a9c0757418a6aa2b9dabffdee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_0212ca4f98ed57d38dba50c77b42cf3e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_8b9a926844c05ba0a9c2501128ff3cdb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_9c360e20eac951c9ad4f48c37d7cfc30, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_a1824dbd11b55a94992e6ddedc7f36e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_422cfb26e7895595acee41e47af7838d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_fbf27d756c505a0185e9a2f8d6adb5a7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_5928136ecaee5823b9dea9db917adc62, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_2d6af0eb3959585cadc99c4e90730268, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_26c8c29115a051098b02949e1d1e4615, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_5cb5838626fb55c098756404a99edad3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_778843c1c1635439b3bcb7c95c339549, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_5b1495d1c3fb57f99cd9c9838b40f38a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_305d9dfdebfb5ef8851647826496d8e0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_3ad57f73ba505c6da4b06630dc9a3c0b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_4d0f5f2722145691acae76150d285de4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_2c49632936e75ec29e7c19900958f5b4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_222f4812bdfd548894c2fa098984aae3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_0977a39828be5d48a856fdc08d1ee81c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_2636c483e47e506fb38e56754ce3d267, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_52c79725a14c590e9a4b089ed3635a55, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_41dc479d4a1b52bc93a3ef5bdb45a710, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_ecc51f2b78eb599aaa99a18fd65ce9bb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_5f439fa3a9fc5a42a0024860826be795, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_cae24b1cfd5d58919ec56ea873bbc2f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_8b3b552f93e150e2b7b58907d86fc934, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_7806f24119ff5fd792f5f073a7501bcd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_158a0987d0f057bfad98892b4fe34115, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_48813fc357645e60992e561728d922db, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_f155dcbb4f3a589f8352f9cffde618c3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_058ca56f5c065174bbfbd9c84e4ff3d4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_25782f3ac022553cba45f4e74f341def, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_d4fac4cd3fdd58d39a56673aad7ae3d0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_a4bee11fc07951408247757808f5a840, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_85b47f93e8be5e3c949dcc155dd65054, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_e1aed8d56fec5f9bb8364d80764a6b05, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_6794a14908d059d7958fd92aaf45aad4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_ef9cdba06ced595b8b9ad62860738437, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_4ca77b1e936152919b9d2a94e032ded5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_5d205a3390365771a0681c5fa17bc95b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_f21f80ec7a5f5437b7b7aa79980a5eeb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_acf6a3ebdd3851938b1df368d0a4671b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_fadb76210a9a579ebcf431b8a06fa1f5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_df8acd03cd095033a6517db5db6dd641, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_e58dd0692eed5606a951495801d089da, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_29debeac339d56698ed28685a1a87dda, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_dc2d4ddd06c45e7d9161000c6991cb10, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_852b69284968559ab20f5069fdf80401, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_15f52f88f11d521b983ff30906867f87, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_d794b4a83a4c5540aeb6d00fc20cadc0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_97528854e7175ce69d4afec411131bbe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_e96c44deffa254bfbe63c399fd8eba36, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_7f75ae3c04c352e6a774bae11852a5b5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_a1bd0e7448b852e59ed94572fae407ae, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_e5ca27171d61566ab1065f050436db82, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_95468c2b8f0b500c8ca3d13fdcd9aa92, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_1ed8eac6e50951dd99c208b405310ee4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_1c22940bafda50839b6b68cef643b4f3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_c515a985b6d251619c8265e3a5d0934d, "");
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