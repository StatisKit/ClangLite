#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::FunctionDecl const volatile * get_pointer<class ::clang::FunctionDecl const volatile >(class ::clang::FunctionDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e90b60b39fbc5f209cecad897014de3b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FunctionDecl * (*method_pointer_0d7be7e1692f59e0b685dba612bcbca1)(class ::clang::ASTContext &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    void  (::clang::FunctionDecl::*method_pointer_bb34093cfd975c6fb0cf3a9a0cb980db)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    bool  (::clang::FunctionDecl::*method_pointer_2a7c5e641b9c5092bcd5b35c9052076e)(class ::clang::FunctionDecl const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_3a2a42c9f55b5f0da2cdf21c15d4832e)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_f66fb7d7eae3551c9ea2415cd35018c5)(class ::clang::FunctionDecl const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_01f84be8d34e52de8a6bb4d8a5fb6a47)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_d7d6bb381d535e66abf93ca9d953816f)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_a2a8a75f3cff541fb0b62f3320ea13f3)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    void  (::clang::FunctionDecl::*method_pointer_aaadac25ed1c5b3796f61958d5ede888)(::uint64_t ) = &::clang::FunctionDecl::setLazyBody;
    bool  (::clang::FunctionDecl::*method_pointer_913e44da536452b0826fd985003eb847)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_d7df48f1616c5618b9cb5d38736d1d3f)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_1392cc9de151585ebdc9c248eedb1093)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_f404e2749725585a91cb033b5ae0c20d)() const = &::clang::FunctionDecl::isPure;
    void  (::clang::FunctionDecl::*method_pointer_c0c30cc295905a18b62f9620d17641d4)(bool ) = &::clang::FunctionDecl::setPure;
    bool  (::clang::FunctionDecl::*method_pointer_325805a728e25d9595f042cc95d07155)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_e13a3b993b60592da1e4c95c6f11f2f2)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_7863606c83475104bd1d17a4c0327e52)() const = &::clang::FunctionDecl::isTrivial;
    void  (::clang::FunctionDecl::*method_pointer_aeffa7d9dc4e57b99fa95aa2984feb8c)(bool ) = &::clang::FunctionDecl::setTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_cc224ec17a845ed59b044deeb977a1be)() const = &::clang::FunctionDecl::isDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_5b6895c05746597eb228aade137256a7)(bool ) = &::clang::FunctionDecl::setDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_0d44516050185de2868c7ec08c4124ee)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_71329c94e0cb53b686811acc1cc5b519)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_fb51cb2163d451f8aa02448c4c439db3)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_926e86fd24c25cab8d99386f61372230)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_cb79e22a2aba5f1791ffd1671ad51d35)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_771868c44b5b5c89a73edacb0b950bd4)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_642da98e109b5c108c75e35e9739a06f)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_df841193ecf257a5903f6162bbbeb67f)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_0af862d9758a5fa8a35c0e8c597a7584)() const = &::clang::FunctionDecl::isConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_cbeb4e7e03fe55cf8810bffd0ed92a4f)(bool ) = &::clang::FunctionDecl::setConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_5ada4b979dca5143b552cb28df259ab4)() const = &::clang::FunctionDecl::usesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_ce95da8429045cceb539c1f058652d7b)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    bool  (::clang::FunctionDecl::*method_pointer_798d46f8d9d35e3887c27d0ddfe3fc8c)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_9be2c2e353de5b5c99bbaebf1b991123)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_1a4b6beae4215b089eedf73d73e61031)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_50219b5328e95193bae70ab2ac21ec74)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_49582bb0aacb53cc98c7ab64c52c3920)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_a24a34c9cdfd54cbb33abc263f617330)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_780145c2bd215a669fce8567b0c8280f)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_3853f9c565625c2482a345c36facb1b8)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_d38f005de2ed58a4a2bfd2f994a33e9e)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_a4722d11ad9e5a1a839f112ae21aaaf3)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_e4cd01babbd85675ba504af787d469c4)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_567f55b936975332b92387f3421f04fd)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_5f17133595475f82b98f4ca5044c025c)() const = &::clang::FunctionDecl::hasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_dcee77ee5fe657de8b7c30280630d017)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_26351b8e13365baca4d598206f8881d9)(class ::clang::FunctionDecl *) = &::clang::FunctionDecl::setPreviousDeclaration;
    class ::clang::FunctionDecl * (::clang::FunctionDecl::*method_pointer_d78dec94b1f75827a8f9edf9fdeef5ca)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl const * (::clang::FunctionDecl::*method_pointer_8996864d081550acbd9726b44ff3b26a)() const = &::clang::FunctionDecl::getCanonicalDecl;
    unsigned int  (::clang::FunctionDecl::*method_pointer_99f1ef6caf9f5258ac4f08b2b7b110b8)() const = &::clang::FunctionDecl::getBuiltinID;
    unsigned int  (::clang::FunctionDecl::*method_pointer_b564b5384ddd57258872e1a537a02ff6)() const = &::clang::FunctionDecl::param_size;
    unsigned int  (::clang::FunctionDecl::*method_pointer_df62631bc1755b1bb54e4bc386715182)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl const * (::clang::FunctionDecl::*method_pointer_0a77e3a9dfb659d88db1dfaba37e46ff)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl * (::clang::FunctionDecl::*method_pointer_4ca29ec0650c5e1ea902227f202abbfd)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    unsigned int  (::clang::FunctionDecl::*method_pointer_b2c47ad32b745de585dd60cd09ca66e5)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_380a74411ee8592183e3d812d033385e)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_8bfb50393d695fb1ad8ba5db51cd7c57)() const = &::clang::FunctionDecl::getCallResultType;
    bool  (::clang::FunctionDecl::*method_pointer_28b4ced46c3754bb88c2fcbcb8ea0818)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_6445dedffca056589b37e9fbb51357bf)() const = &::clang::FunctionDecl::isInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_df38eea21d635b1ca9c9f599ef7db409)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_cf11f60c35155507af3dfc2dfdbbdb7f)() = &::clang::FunctionDecl::setImplicitlyInline;
    bool  (::clang::FunctionDecl::*method_pointer_3c28f17fbef0590f97acbf9796be5c69)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_c45159a749f85294ad83b5a626909bac)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_5d11bea9ab4951f99304ad83aebf5e90)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_b20579289f975da8ae25e86219e8b0e7)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_0c0c6c7ced58591b88ef9c7c1f1b9fa4)() const = &::clang::FunctionDecl::isOverloadedOperator;
    class ::clang::FunctionDecl * (::clang::FunctionDecl::*method_pointer_87059141febe5f79be7332c6d6e85c96)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    class ::clang::FunctionTemplateDecl * (::clang::FunctionDecl::*method_pointer_721e301da7b6537cb4dd490e44fc92f1)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_aef2be2a76315967a5435392b8113828)(class ::clang::FunctionTemplateDecl *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    bool  (::clang::FunctionDecl::*method_pointer_424bb7d671f95f27b3fa8790c949a437)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    class ::clang::FunctionDecl * (::clang::FunctionDecl::*method_pointer_edfa110567dd5580907178f990c534fe)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    bool  (::clang::FunctionDecl::*method_pointer_65162e3da0f6574d910c3a979091d967)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_716e622cad895566b20c688869dee6b3)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    class ::clang::FunctionDecl * (::clang::FunctionDecl::*method_pointer_4f93756835c651eb99a3ce601adee699)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::FunctionTemplateDecl * (::clang::FunctionDecl::*method_pointer_e8dfc810d7445218aba09da8643db813)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::TemplateArgumentList const * (::clang::FunctionDecl::*method_pointer_e6d5ae10ed08532cbfdf05ab07113c1a)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_aa81cb5ffca259fd8f0016c9601d8342)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    unsigned int  (::clang::FunctionDecl::*method_pointer_088d6ff2886c5bf0badcbe0b493ed1ce)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    bool  (*method_pointer_153e82377a9c543ea2bd7a3a0da2ff7a)(class ::clang::Decl const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_b6c736d181745390a0d3ad3e96b1393b)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    class ::clang::DeclContext * (*method_pointer_e18d2a295c1151cab6faeb357a2a6337)(class ::clang::FunctionDecl const *) = ::clang::FunctionDecl::castToDeclContext;
    class ::clang::FunctionDecl * (*method_pointer_9c81b74a4c0a527f9f2d5275486ee482)(class ::clang::DeclContext const *) = ::clang::FunctionDecl::castFromDeclContext;
    struct function_group
    {
        static class ::boost::python::list  function_32afdada88775068adda23862cabaa3c(class ::clang::FunctionDecl & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_515ffcd756c25cfdb3d894f6b795cb27(class ::clang::FunctionDecl * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::Held< class ::clang::FunctionDecl >::Type, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_0d7be7e1692f59e0b685dba612bcbca1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_bb34093cfd975c6fb0cf3a9a0cb980db, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_2a7c5e641b9c5092bcd5b35c9052076e, "Returns true if the function has a body (definition). The function body\nmight be in any of the (re-)declarations of this function. The variant\nthat accepts a FunctionDecl pointer will set that function declaration\nto the actual declaration containing the body (if there is one).\n\n:Parameter:\n    `Definition` (:py:class:`clanglite.clang.FunctionDecl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_3a2a42c9f55b5f0da2cdf21c15d4832e, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_f66fb7d7eae3551c9ea2415cd35018c5, ":Parameter:\n    `Definition` (:py:class:`clanglite.clang.FunctionDecl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_01f84be8d34e52de8a6bb4d8a5fb6a47, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_d7d6bb381d535e66abf93ca9d953816f, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_a2a8a75f3cff541fb0b62f3320ea13f3, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_aaadac25ed1c5b3796f61958d5ede888, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_913e44da536452b0826fd985003eb847, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_d7df48f1616c5618b9cb5d38736d1d3f, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_1392cc9de151585ebdc9c248eedb1093, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_f404e2749725585a91cb033b5ae0c20d, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_c0c30cc295905a18b62f9620d17641d4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_325805a728e25d9595f042cc95d07155, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_e13a3b993b60592da1e4c95c6f11f2f2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_7863606c83475104bd1d17a4c0327e52, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_aeffa7d9dc4e57b99fa95aa2984feb8c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_cc224ec17a845ed59b044deeb977a1be, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_5b6895c05746597eb228aade137256a7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_0d44516050185de2868c7ec08c4124ee, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_71329c94e0cb53b686811acc1cc5b519, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_fb51cb2163d451f8aa02448c4c439db3, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_926e86fd24c25cab8d99386f61372230, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_cb79e22a2aba5f1791ffd1671ad51d35, "Whether this function has a prototype, either because one was explicitly\nwritten or because it was 'inherited' by merging a declaration without a\nprototype with a declaration that has a prototype.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_771868c44b5b5c89a73edacb0b950bd4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_642da98e109b5c108c75e35e9739a06f, "Whether this function inherited its prototype from a previous\ndeclaration.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_df841193ecf257a5903f6162bbbeb67f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_0af862d9758a5fa8a35c0e8c597a7584, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_cbeb4e7e03fe55cf8810bffd0ed92a4f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_5ada4b979dca5143b552cb28df259ab4, "Indicates the function uses \\_\\_try.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_ce95da8429045cceb539c1f058652d7b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_798d46f8d9d35e3887c27d0ddfe3fc8c, "Whether this function has been deleted.\n\nA function that is 'deleted' (via the C++0x '= delete' syntax) acts like\na normal function, except that it cannot actually be called or have its\naddress taken. Deleted functions are typically used in C++ overload\nresolution to attract arguments whose type or lvalue/rvalue-ness would\npermit the use of a different overload that would behave incorrectly.\nFor example, one might use deleted functions to ban implicit conversion\nfrom a floating-point number to an Integer type:\n\n@code struct Integer { Integer(long); // construct from a long\nInteger(double) = delete; // no construction from float or double\nInteger(long double) = delete; // no construction from long double };\n@endcode\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_9be2c2e353de5b5c99bbaebf1b991123, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_1a4b6beae4215b089eedf73d73e61031, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_50219b5328e95193bae70ab2ac21ec74, "Determines whether this function is 'main', which is the entry point\ninto an executable program.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_49582bb0aacb53cc98c7ab64c52c3920, "Determines whether this function is a MSVCRT user defined entry point.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_a24a34c9cdfd54cbb33abc263f617330, "Determines whether this operator new or delete is one of the reserved\nglobal placement operators: void *operator new(size\\_t, void *); void\n*operator new\\ ` <size_t,%20void%20*>`__; void operator delete(void *,\nvoid \\*); void operator delete\\ ` <void%20*,%20void%20*>`__; These\nfunctions have special behavior under [new.delete.placement]: These\nfunctions are reserved, a C++ program may not define functions that\ndisplace the versions in the Standard C++ library. The provisions of\n[basic.stc.dynamic] do not apply to these reserved placement forms of\noperator new and operator delete.\n\nThis function must be an allocation or deallocation function.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_780145c2bd215a669fce8567b0c8280f, "Determines whether this function is one of the replaceable global\nallocation functions: void *operator new(size\\_t); void *\\ operator\nnew(size\\_t, const std::nothrow\\_t &) noexcept; void *operator\nnew\\ ` <size_t>`__; void *\\ operator\nnew\\ ` <size_t,%20const%20std::nothrow_t%20&>`__ noexcept; void operator\ndelete(void *) noexcept; void operator delete(void *, std::size\\_t)\nnoexcept; [C++1y] void operator delete(void \\*, const std::nothrow\\_t &)\nnoexcept; void operator delete\\ ` <void%20*>`__ noexcept; void operator\ndelete\\ ` <void%20*,%20std::size_t>`__ noexcept; [C++1y] void operator\ndelete\\ ` <void%20*,%20const%20std::nothrow_t%20&>`__ noexcept; These\nfunctions have special behavior under C++1y [expr.new]: An\nimplementation is allowed to omit a call to a replaceable global\nallocation function. [...]\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_3853f9c565625c2482a345c36facb1b8, "Determines whether this function is a function with external, C linkage.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_d38f005de2ed58a4a2bfd2f994a33e9e, "Determines whether this function's context is, or is nested within, a\nC++ extern 'C' linkage spec.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_a4722d11ad9e5a1a839f112ae21aaaf3, "Determines whether this function's context is, or is nested within, a\nC++ extern 'C++' linkage spec.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_e4cd01babbd85675ba504af787d469c4, "Determines whether this is a global function.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_567f55b936975332b92387f3421f04fd, "Determines whether this function is known to be 'noreturn', through an\nattribute on its declaration or its type.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_5f17133595475f82b98f4ca5044c025c, "True if the function was a definition but its body was skipped.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_dcee77ee5fe657de8b7c30280630d017, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_26351b8e13365baca4d598206f8881d9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_d78dec94b1f75827a8f9edf9fdeef5ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_8996864d081550acbd9726b44ff3b26a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_99f1ef6caf9f5258ac4f08b2b7b110b8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_b564b5384ddd57258872e1a537a02ff6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_df62631bc1755b1bb54e4bc386715182, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_0a77e3a9dfb659d88db1dfaba37e46ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_4ca29ec0650c5e1ea902227f202abbfd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_b2c47ad32b745de585dd60cd09ca66e5, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_380a74411ee8592183e3d812d033385e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_8bfb50393d695fb1ad8ba5db51cd7c57, "Determine the type of an expression that calls this function.\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_28b4ced46c3754bb88c2fcbcb8ea0818, "Returns true if this function or its return type has the\nwarn\\_unused\\_result attribute. If the return type has the attribute and\nthis function is a method of the return type's class, then false will be\nreturned to avoid spurious warnings on member methods such as assignment\noperators.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_6445dedffca056589b37e9fbb51357bf, "Determine whether the 'inline' keyword was specified for this function.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_df38eea21d635b1ca9c9f599ef7db409, ":Parameter:\n    `I` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_cf11f60c35155507af3dfc2dfdbbdb7f, ":Return Type:\n    :cpp:any:`void`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_3c28f17fbef0590f97acbf9796be5c69, "Determine whether this function should be inlined, because it is either\nmarked 'inline' or 'constexpr' or is a member function of a class that\nwas defined in the class body.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_c45159a749f85294ad83b5a626909bac, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_5d11bea9ab4951f99304ad83aebf5e90, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_b20579289f975da8ae25e86219e8b0e7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_0c0c6c7ced58591b88ef9c7c1f1b9fa4, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_87059141febe5f79be7332c6d6e85c96, boost::python::return_value_policy< boost::python::reference_existing_object >(), "If this function is an instantiation of a member function of a class\ntemplate specialization, retrieves the function from which it was\ninstantiated.\n\nThis routine will return non-NULL for (non-templated) member functions\nof class templates and for instantiations of function templates. For\nexample, given:\n\n:Return Type:\n    :py:class:`clanglite.clang.FunctionDecl`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_721e301da7b6537cb4dd490e44fc92f1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieves the function template that is described by this function\ndeclaration.\n\nEvery function template is represented as a FunctionTemplateDecl and a\nFunctionDecl (or something derived from FunctionDecl). The former\ncontains template properties (such as the template parameter lists)\nwhile the latter contains the actual description of the template's\ncontents. FunctionTemplateDecl::getTemplatedDecl() retrieves the\nFunctionDecl that describes the function template,\ngetDescribedFunctionTemplate() retrieves the FunctionTemplateDecl from a\nFunctionDecl.\n\n:Return Type:\n    :py:class:`clanglite.clang.FunctionTemplateDecl`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_aef2be2a76315967a5435392b8113828, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_424bb7d671f95f27b3fa8790c949a437, "Determine whether this function is a function template specialization.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_edfa110567dd5580907178f990c534fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the class scope template pattern that this function template\nspecialization is instantiated from.\n\n:Return Type:\n    :py:class:`clanglite.clang.FunctionDecl`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_65162e3da0f6574d910c3a979091d967, "Determines whether this function is a function template specialization\nor a member of a class template specialization that can be implicitly\ninstantiated.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_716e622cad895566b20c688869dee6b3, "Determines if the given function was instantiated from a function\ntemplate.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_4f93756835c651eb99a3ce601adee699, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the function declaration from which this function could be\ninstantiated, if it is an instantiation (rather than a non-template or a\nspecialization, for example).\n\n:Return Type:\n    :py:class:`clanglite.clang.FunctionDecl`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_e8dfc810d7445218aba09da8643db813, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the primary template that this function template specialization\neither specializes or was instantiated from.\n\nIf this function declaration is not a function template specialization,\nreturns NULL.\n\n:Return Type:\n    :py:class:`clanglite.clang.FunctionTemplateDecl`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_e6d5ae10ed08532cbfdf05ab07113c1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the template arguments used to produce this function template\nspecialization from the primary template.\n\nIf this function declaration is not a function template specialization,\nreturns NULL.\n\n:Return Type:\n    :py:class:`clanglite.clang.TemplateArgumentList`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_aa81cb5ffca259fd8f0016c9601d8342, "Retrieve the (first) point of instantiation of a function template\nspecialization or a member of a class template specialization.\n\n:Returns:\n    the first point of instantiation, if this function was instantiated from\n    a template; otherwise, returns an invalid source location.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_088d6ff2886c5bf0badcbe0b493ed1ce, "Identify a memory copying or setting function. If the given function is\na memory copy or setting function, returns the corresponding Builtin ID.\nIf the function is not a memory function, returns 0.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_153e82377a9c543ea2bd7a3a0da2ff7a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_b6c736d181745390a0d3ad3e96b1393b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_e18d2a295c1151cab6faeb357a2a6337, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_9c81b74a4c0a527f9f2d5275486ee482, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_32afdada88775068adda23862cabaa3c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_515ffcd756c25cfdb3d894f6b795cb27, "");

    if(autowig::Held< class ::clang::FunctionDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::FunctionDecl >::Type, autowig::Held< class ::clang::DeclaratorDecl >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::clang::FunctionDecl >::Type, autowig::Held< class ::clang::DeclContext >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::FunctionDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::FunctionDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::FunctionDecl >::Type, class ::clang::FunctionDecl > > >();
    }

}