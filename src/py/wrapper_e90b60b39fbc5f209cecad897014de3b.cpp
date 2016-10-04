/**********************************************************************************/
/*                                                                                */
/* PyClangLite: Python bindings for Clang                                         */
/*                                                                                */
/* Homepage: http://pyclanglite.readthedocs.io/                                   */
/*                                                                                */
/* Copyright (c) 2016 Pierre Fernique                                             */
/*                                                                                */
/* This software is distributed under the CeCILL-C license. You should have       */
/* received a copy of the legalcode along with this work. If not, see             */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/* File authors: Pierre Fernique <pfernique@gmail.com> (36)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_e90b60b39fbc5f209cecad897014de3b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FunctionDecl  * (*method_pointer_535a00217c4b5b24b9d57d7142344efb)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_a3176605964a59c29a531c79ef4575f0)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_0d976b7e7521512c9ca636e1ad12be6e)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_1df7538487ff5b72bfd945e57003c287)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_e4354317f0bb5d2090b6cb9f74740628)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_0875697765f95d6eba92f0914c313b92)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_d3e3f70bea93518ebd4cdc34528a6230)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_7a8ca1c32fad548fb567cb5501c742cb)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_43f2a40536e35c8b80a4ec762484ee2a)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_7c72be41ee8f58dd8c0fd4b14c5e163f)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_74bf05ca57645b4eac07d51d774a2937)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_62242af0ce7850c1b9b4b408b49b8d42)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_68a7711ab55650588d09602e177d285f)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_eb77466697cb51acad700148901f20fb)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_910330811e1c535984cddcddd1dd0a27)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_825d6314d2045e75acbc93aa45f375e0)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_f9fd59cd04f05673ae29f9eb31b59a23)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_79d09458f037521caf0c18c5bfaf3ae5)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_aa6205174c0c5c2baf45f599a77860e0)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_5c1b626ca58c548aa7a7398dbb43c901)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_d98153ef990958efb7353606e74e1d80)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_a3221a159d40536785dd2451713be374)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_0318f348eb4c52f3b87a5e19e30e99fd)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_3ac22f8118ec5a3993f9627ba71bd9d4)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_b25529bc09ce59ccafb673978ad3e6cb)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_0250d5f67b1b5a23a80c1fa083102a6c)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_6f1d0171f056542d92ca350c490273e5)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_1210b7e153cc5611823a1a6961d95a93)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_6274159e6c6850ebbbe466136bab1ac5)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_c180de15dba55490924854a9e4ea64b1)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_306d5a1b6d1e5891afde47ecd465dcb5)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_1a539d0519745393b9fb479bb20cd9b7)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_cfd0d51d20b8548697f34a51d5201cb1)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_49b5c60fbac05db2a0f3a464e7e6cc53)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_cb273155596f54e597992b137343d2fa)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_94ac6939a67f514590ebe687fd5330e7)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_ec6b5feeb88358549490509dd47dd318)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_38177b09f87a5364b5856e9ce4eecaee)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_a1dd442fa4655936aa68e65849083a90)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_579c1fec639f51319cf2f819e8ea5aa2)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_2d7cbb08f6ed5f08b8d6b2d6d2e2aff1)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_083167a5862d5156acb8e364aa62311c)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_68deb82e187652478494aadbe2a1292d)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_8e5a0aaec4ff5cdf9d7dfa2f1be1b38b)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_20521179058d5b6283044744208c740e)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_dd6658a43fea5ee181910411a26c0f82)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_3afbcaa4348d525c991c2f7096d739bc)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_d2a5d2b0157b58aeb9515f6e00eae2c4)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_26a37c38132c544982ba011faade0fa1)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_0a365eed8efe5d7fac33eb9126c8317e)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_de40846905ba565fa48031dbc6061e84)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_8b69a0a6c378523f902633938abecceb)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_e97ac8ca989a54f48314fffbbcd0d480)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_036943e69e535117809fcc98e89e9f20)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_6d734f5292865d68a9c4713890bb18d4)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_2a7b53f10afc5dcabcaa619a57b22e03)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_f9fbf3813b8458c7bff23ee3c848af97)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_8f1bf01f99c0500bb745cf1486ec13d7)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_e4d9593893915e4caaacf46dbc5103be)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_efd4e4482c8a50fba778132ee6ece941)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_9e585371b27858bb93bedf192e6d0b55)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_3d1e2ed385c554148e1aca4f9d4c6b5a)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_c773a777dd715e37847f8e11970ce4db)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_df5a7765fbcb503cbd4144c4d0f2236b)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_7353d16c1bd85519be224183912c1e22)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_f66b8c8cffed58a6a1a4003f66780501)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_667fdff82fcf52b4bf9c259c50995852)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_26918a01fbee574da07937d3b02a5899)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_ef2dd24ad22c5df7af0822cc587f2c09)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_1bf3c4d0bcb554a8bd6f8bae2847e770)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_c3be150fa8f556aba50e8262d0bb9414)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_718d3d24ea2351ffbc673217a6d4cde1)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_ac86fb4fc6e95d9eab77828e922b624f)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_9b588889abcd5db1bc8f3450fe7da41e)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_02e48372127e5df6bdc5c3737a41de31)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_e3f7bfab830c5c089e9c064f0e48d01f)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_574ac94eb2335fe194e643ab65dd92d5)(uint64_t int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_bae961153ebc502daa020713d00b4d81)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_ed9cff60a6695444bcbf091a8fafa515)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_f74231489bdd541a80557672d65e3b21)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_f39c170944e85c17be854adae0a4d92c)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_0c6b43b241355a5c801c15cf8f74bfa8)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_6f6c6ef9181f544793613fe302606bc6)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_8a5cc506c0d6525bae55b1c37b0b4049)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_998709a6728352328793a4deb5fe1fa2(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_3474696ad4a357b98ea5f7f2dd1983fb(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_535a00217c4b5b24b9d57d7142344efb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_a3176605964a59c29a531c79ef4575f0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_0d976b7e7521512c9ca636e1ad12be6e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_1df7538487ff5b72bfd945e57003c287, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_e4354317f0bb5d2090b6cb9f74740628, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_0875697765f95d6eba92f0914c313b92, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_d3e3f70bea93518ebd4cdc34528a6230, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_7a8ca1c32fad548fb567cb5501c742cb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_43f2a40536e35c8b80a4ec762484ee2a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_7c72be41ee8f58dd8c0fd4b14c5e163f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_74bf05ca57645b4eac07d51d774a2937, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_62242af0ce7850c1b9b4b408b49b8d42, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_68a7711ab55650588d09602e177d285f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_eb77466697cb51acad700148901f20fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_910330811e1c535984cddcddd1dd0a27, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_825d6314d2045e75acbc93aa45f375e0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_f9fd59cd04f05673ae29f9eb31b59a23, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_79d09458f037521caf0c18c5bfaf3ae5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_aa6205174c0c5c2baf45f599a77860e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_5c1b626ca58c548aa7a7398dbb43c901, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_d98153ef990958efb7353606e74e1d80, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_a3221a159d40536785dd2451713be374, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_0318f348eb4c52f3b87a5e19e30e99fd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_3ac22f8118ec5a3993f9627ba71bd9d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_b25529bc09ce59ccafb673978ad3e6cb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_0250d5f67b1b5a23a80c1fa083102a6c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_6f1d0171f056542d92ca350c490273e5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_1210b7e153cc5611823a1a6961d95a93, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_6274159e6c6850ebbbe466136bab1ac5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_c180de15dba55490924854a9e4ea64b1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_306d5a1b6d1e5891afde47ecd465dcb5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_1a539d0519745393b9fb479bb20cd9b7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_cfd0d51d20b8548697f34a51d5201cb1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_49b5c60fbac05db2a0f3a464e7e6cc53, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_cb273155596f54e597992b137343d2fa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_94ac6939a67f514590ebe687fd5330e7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_ec6b5feeb88358549490509dd47dd318, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_38177b09f87a5364b5856e9ce4eecaee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_a1dd442fa4655936aa68e65849083a90, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_579c1fec639f51319cf2f819e8ea5aa2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_2d7cbb08f6ed5f08b8d6b2d6d2e2aff1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_083167a5862d5156acb8e364aa62311c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_68deb82e187652478494aadbe2a1292d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_8e5a0aaec4ff5cdf9d7dfa2f1be1b38b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_20521179058d5b6283044744208c740e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_dd6658a43fea5ee181910411a26c0f82, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_3afbcaa4348d525c991c2f7096d739bc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_d2a5d2b0157b58aeb9515f6e00eae2c4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_26a37c38132c544982ba011faade0fa1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_0a365eed8efe5d7fac33eb9126c8317e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_de40846905ba565fa48031dbc6061e84, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_8b69a0a6c378523f902633938abecceb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_e97ac8ca989a54f48314fffbbcd0d480, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_036943e69e535117809fcc98e89e9f20, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_6d734f5292865d68a9c4713890bb18d4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_2a7b53f10afc5dcabcaa619a57b22e03, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_f9fbf3813b8458c7bff23ee3c848af97, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_8f1bf01f99c0500bb745cf1486ec13d7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_e4d9593893915e4caaacf46dbc5103be, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_efd4e4482c8a50fba778132ee6ece941, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_9e585371b27858bb93bedf192e6d0b55, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_3d1e2ed385c554148e1aca4f9d4c6b5a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_c773a777dd715e37847f8e11970ce4db, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_df5a7765fbcb503cbd4144c4d0f2236b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_7353d16c1bd85519be224183912c1e22, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_f66b8c8cffed58a6a1a4003f66780501, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_667fdff82fcf52b4bf9c259c50995852, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_26918a01fbee574da07937d3b02a5899, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_ef2dd24ad22c5df7af0822cc587f2c09, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_1bf3c4d0bcb554a8bd6f8bae2847e770, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_c3be150fa8f556aba50e8262d0bb9414, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_718d3d24ea2351ffbc673217a6d4cde1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_ac86fb4fc6e95d9eab77828e922b624f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_9b588889abcd5db1bc8f3450fe7da41e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_02e48372127e5df6bdc5c3737a41de31, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_e3f7bfab830c5c089e9c064f0e48d01f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_574ac94eb2335fe194e643ab65dd92d5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_bae961153ebc502daa020713d00b4d81, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_ed9cff60a6695444bcbf091a8fafa515, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_f74231489bdd541a80557672d65e3b21, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_f39c170944e85c17be854adae0a4d92c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_0c6b43b241355a5c801c15cf8f74bfa8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_6f6c6ef9181f544793613fe302606bc6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_8a5cc506c0d6525bae55b1c37b0b4049, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_998709a6728352328793a4deb5fe1fa2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_3474696ad4a357b98ea5f7f2dd1983fb, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}
