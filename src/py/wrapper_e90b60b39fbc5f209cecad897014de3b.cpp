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
    class ::clang::FunctionDecl  * (*method_pointer_89098f2c3e425f5a958915a15da3006b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_6f09257dfade5d1d9a167c2593770f5f)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_2a8da8f7b0f55484bd889d7ceef6f521)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_22e77bb8f0325fc4a75ac9b1fa54b17a)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_45e659a6585950778a7f97632030422b)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_b138c2832fec5df1ac43eb96b73f4c85)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_e5b2c2a6e70f5bbaa4e793df98962c6e)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_29ef8b954a5b5f4cb3d6393fd4c30fd8)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_e42818956af657ce8ae853b6c265e183)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_90a2d5e9017c5f0d81607bebc94616e4)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_3bae541b1a4b56869b89cb73e91cef2f)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_536f0c490f0b52daa9a121d1eeff0f71)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_1564205bcc735cd1ac0c47c79d51046a)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_c2323b3e25fb5afc9710bd75df052c79)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_6e40deeea4ff57ddb8dac5240b8844da)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_dc01b9cad029568798d5eb82c0600d14)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_b184c3c2b6ea5b619b1c604c07ae751b)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_05036010c6fd5a9a80faa99f5d6dc31e)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_ce014207064955cfb9da648e1bf49795)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_299ff318cd4959b09d66a20691d4cbd4)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_965f4067a2145c529369a0f5d51f84b5)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_35cd497ae21556d0a87036ab58d2fa30)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_6b7ca2ef3b995c44adead1e288669623)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_44f74eeb7d045bdb95ebb55759976bf3)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_fddffa9cfbc3598ab6e454c2a0b3ac69)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_b2dd8858aed45b5685301585d07c14a1)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_e944720a0e905f618e4288f9ff8afd98)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_1f978c3ec64f55b393f13719bc7e963c)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_61d862aef6b55323a91a6dcf3a87a9ac)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_33798b9608bb58ce9ed00f8918bc1b7d)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_3024f0c2209b5f55b16c6c2862d059a6)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_4c6041f455975bbab0f258d98df8f3c5)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_407e657f7b9756908ec2780374882c26)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_8c8a2dbf210e52129de9b768d50f9663)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_5e64d4bb86e85a9ab4e267167c573022)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_c808654403c55058891db784b8952346)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_00fdecc4960b564287fad1f2afb57e5c)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_4d369200daeb54839137a7945e6c29c5)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_736626878a6a5a52ad3f99522c0ebd97)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_96415d4b359d59ff8f1d851e7f5450b0)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_c12ad7a1828752409171f516818d00af)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_8e95a0ab7b9e5b7c974e216a96de2993)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_435b755406585730b628f17d89d9c8b4)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_ce46236083085d5299fba82bb3e6f8ef)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_2bdab644e91752cd8da26a81386b030b)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_2a1371a0c6505802a50069ebe9786cd7)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_64660e5711365571a40e121eed40cec9)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_35bb1b1114375cfeb00b620ed6498dc8)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_793eb2f7d3495d4c93d1cffbb57252d0)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_824f96eb46a35ad980e82b39516092d4)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_f39bf23b619553b8b7f77267cb69075c)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_40d8dbd3dff75b8caa06f21db79d52a1)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_01c2c8a0ee275735abbeec948b03c541)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_36bf58b4611e5ca4806872d62f9db175)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_c552f5dac9625009a79fa130263e4820)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_a5f871d5764c5997bd6eedd77469b28e)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_8fc8988a52235db5a825e01ae3e40a7b)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_df26c8a7fa2756eaa277412a2e5d3a0e)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_5a20f4c62cbb5782adf0ba2039ee548b)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_1f74c0c1579d5d5f8313208ca8bcbcee)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_024e5251d4ac5809a5052212c62be349)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_d8c4174e4cad5a6f9902f35d0365840a)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_f81c427d14b650d8b2c8b944c335460d)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_6527da30aab55b1bbe93d947824badbb)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_a49bec2bc8f85f5fb490d67b40f424e2)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_86a269cb17a55828b9690b9385004af3)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_a5973559685d51aa924493c5fda9b6d1)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_ccfa8e57a0c05ee5be21681f5364ea84)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_d07466f1551e55e29ef3cef4a138c2b7)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_3423a05f175555a69599a54d0d2cb85a)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_a37ef734b25a5eac88dc3203082e2e76)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_daf9656d90e35de4af88011dcab528ee)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_78656b2bd3ca5fd8a2926a283e01f115)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_f79fcad728ae5052ab5ec991b36efab4)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_262fb036393e53338f7f1737e41195f7)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_fc4cce3a7c4159ecbf01305b2288d624)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_c52694de95615fe3a3be4692c0d411a1)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_b288000a118e547e8bebbfbec25e19b4)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_b11db9429265583cbab8c9797d9cbb6a)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_25a1a07b47085094bb6879d9cad5c57a)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_7f223f4912515bf68f502ea5b3a1fb5b(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_61da742f88a25b4ea17b84dc689466ed(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_89098f2c3e425f5a958915a15da3006b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_6f09257dfade5d1d9a167c2593770f5f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_2a8da8f7b0f55484bd889d7ceef6f521, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_22e77bb8f0325fc4a75ac9b1fa54b17a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_45e659a6585950778a7f97632030422b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_b138c2832fec5df1ac43eb96b73f4c85, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_e5b2c2a6e70f5bbaa4e793df98962c6e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_29ef8b954a5b5f4cb3d6393fd4c30fd8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_e42818956af657ce8ae853b6c265e183, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_90a2d5e9017c5f0d81607bebc94616e4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_3bae541b1a4b56869b89cb73e91cef2f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_536f0c490f0b52daa9a121d1eeff0f71, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_1564205bcc735cd1ac0c47c79d51046a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_c2323b3e25fb5afc9710bd75df052c79, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_6e40deeea4ff57ddb8dac5240b8844da, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_dc01b9cad029568798d5eb82c0600d14, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_b184c3c2b6ea5b619b1c604c07ae751b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_05036010c6fd5a9a80faa99f5d6dc31e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_ce014207064955cfb9da648e1bf49795, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_299ff318cd4959b09d66a20691d4cbd4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_965f4067a2145c529369a0f5d51f84b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_35cd497ae21556d0a87036ab58d2fa30, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_6b7ca2ef3b995c44adead1e288669623, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_44f74eeb7d045bdb95ebb55759976bf3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_fddffa9cfbc3598ab6e454c2a0b3ac69, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_b2dd8858aed45b5685301585d07c14a1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_e944720a0e905f618e4288f9ff8afd98, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_1f978c3ec64f55b393f13719bc7e963c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_61d862aef6b55323a91a6dcf3a87a9ac, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_33798b9608bb58ce9ed00f8918bc1b7d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_3024f0c2209b5f55b16c6c2862d059a6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_4c6041f455975bbab0f258d98df8f3c5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_407e657f7b9756908ec2780374882c26, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_8c8a2dbf210e52129de9b768d50f9663, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_5e64d4bb86e85a9ab4e267167c573022, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_c808654403c55058891db784b8952346, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_00fdecc4960b564287fad1f2afb57e5c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_4d369200daeb54839137a7945e6c29c5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_736626878a6a5a52ad3f99522c0ebd97, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_96415d4b359d59ff8f1d851e7f5450b0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_c12ad7a1828752409171f516818d00af, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_8e95a0ab7b9e5b7c974e216a96de2993, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_435b755406585730b628f17d89d9c8b4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_ce46236083085d5299fba82bb3e6f8ef, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_2bdab644e91752cd8da26a81386b030b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_2a1371a0c6505802a50069ebe9786cd7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_64660e5711365571a40e121eed40cec9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_35bb1b1114375cfeb00b620ed6498dc8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_793eb2f7d3495d4c93d1cffbb57252d0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_824f96eb46a35ad980e82b39516092d4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_f39bf23b619553b8b7f77267cb69075c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_40d8dbd3dff75b8caa06f21db79d52a1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_01c2c8a0ee275735abbeec948b03c541, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_36bf58b4611e5ca4806872d62f9db175, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_c552f5dac9625009a79fa130263e4820, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_a5f871d5764c5997bd6eedd77469b28e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_8fc8988a52235db5a825e01ae3e40a7b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_df26c8a7fa2756eaa277412a2e5d3a0e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_5a20f4c62cbb5782adf0ba2039ee548b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_1f74c0c1579d5d5f8313208ca8bcbcee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_024e5251d4ac5809a5052212c62be349, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_d8c4174e4cad5a6f9902f35d0365840a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_f81c427d14b650d8b2c8b944c335460d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_6527da30aab55b1bbe93d947824badbb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_a49bec2bc8f85f5fb490d67b40f424e2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_86a269cb17a55828b9690b9385004af3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_a5973559685d51aa924493c5fda9b6d1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_ccfa8e57a0c05ee5be21681f5364ea84, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_d07466f1551e55e29ef3cef4a138c2b7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_3423a05f175555a69599a54d0d2cb85a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_a37ef734b25a5eac88dc3203082e2e76, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_daf9656d90e35de4af88011dcab528ee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_78656b2bd3ca5fd8a2926a283e01f115, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_f79fcad728ae5052ab5ec991b36efab4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_262fb036393e53338f7f1737e41195f7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_fc4cce3a7c4159ecbf01305b2288d624, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_c52694de95615fe3a3be4692c0d411a1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_b288000a118e547e8bebbfbec25e19b4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_b11db9429265583cbab8c9797d9cbb6a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_25a1a07b47085094bb6879d9cad5c57a, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_7f223f4912515bf68f502ea5b3a1fb5b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_61da742f88a25b4ea17b84dc689466ed, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}