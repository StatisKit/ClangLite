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
    class ::clang::FunctionDecl  * (*method_pointer_d8f524eab46257f0986a317c1750bcad)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_4b569a55fcd55ea5b4286db4df9a9e52)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_5a8e900e416c5fa8be93a916d48b7334)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_f54f36adc69c509e9e8732e0dfd087fa)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_74d717d63b43502c943a411dcac0a528)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_51fd3c94d849595180ea8acc7bb8ca17)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_09452bbd52bb5216934ddd620d4c9b40)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_6ad0312dcb245367a4e3789b4e9b5ce1)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_56c1ff5d2c685970bab58aebbdb3824b)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_e7679910f1cf59a3a3feae94069f559e)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_d3c45c19c5aa53d69602e435b8b8ffde)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_4b82c726d2955a69abf9a853f4a65dd1)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_13d9f15abf4f540e8e3eb9196c1c7f14)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_1d65c0c0c6f75475be6bd3a7bcdab899)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_554e18b2cb835446b25d1fba0df3fb95)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_9831ca3e9b9c5ab2ac7566c6b9d0a42a)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_60ae3dec154d5e16b9271cae826aaff0)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_14016261cf375e7884bc31818d6d1edc)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_02ec8c300bd65ebb8a7c45ef4b6a5514)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_e01155029e185c56bd54d8904ff51136)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_c000dad9a75956d9b8ea9cb7f067c8c4)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_10dc8eca897f5775aac6ae4006cb7319)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_c96f95a75cce578fa33cf40c2b4b9d85)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_21dbacc960e352efbdc0372ea0495eda)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_587bf3b2c4d45a038b2efce167ee8d13)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_c3b9715e195a57119bc1b0b552942b74)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_6ee019d8252652abb40c0f395137ae52)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_c88e644218e75f58aac225bc20edbe8b)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_d8a98a09bffd564d91da6d28b2056277)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_c5bb3cea5f1d5f9eb4e94b6964ecb010)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_c997dd7c19725f38a10ad1223788cc0d)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_f76e669bbe365c99978743c0d405b77a)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_9b43b8bc9ab150b98c4ff75c9a8ce5f7)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_c35d024818ae5db5a8803d763022967d)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_2824a30a76e45b2f80f4fe796bafdcec)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_a695992d308e5b949f10b07d733bdc5e)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_2315c160837f5af9a22872d1a224c908)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_dab1377dca22580f8a27b9292f0c5235)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_64b1e7f72d055c6790b8524e5279e613)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_42b15cffdc255a1993a690cbe90b0d59)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_3e1d30d703cd51a9aad3b935cbbf41b5)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_c79a9daf6e6f5e699176bc017a094996)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_33209f84caec55a7a96ae3523a7ff324)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_8419d89522d057eeaec29ba531159ec8)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_500e54ff91805146a016cb07e15c2913)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_07656049b5c85e8bb353d1cd88e62f0a)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_7d3aaa86738c5cd690e0a3c02a90c7df)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_32631ebf95e6576d8e71c3732a0afce5)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_52f7343d1d74574ca087295f1a531fa1)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_7180a4050d0f555e82aa77acc2592bf7)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_6a3dbc42269757b7bffdb4d63111b017)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_67989ccfee885238b8386906799239d1)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_5a1f8e9ef4455d6da8736ba8524c3632)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_2e9877dbd1fd585a9b2723e79e2acf44)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_2edcd80b66345a3d9dd50f6bcc61451d)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_51ebeb13850c5eb8b61507cf76ffdfdb)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_30f2dd92deb05651ba7ae0788b7f9bfa)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_23755ae33c8a56b9a1f55c565cdc6ebe)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_2dcd9f2aa6b65bac8ffdf5401ee779ef)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_c0c80dab15c352249e9444ff71286872)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_80dd95051dd0576c98b0883d16b77522)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_c61976a262f65df18613baf108640fb7)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_7900937c7cc35bb3819e6427c4417fbd)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_3f0e835337d7536b92f27e20df09f047)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_a4720c3ebbb057b1a19dd4a59d330c2c)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_5103d1fed24f58a596a15280f736623c)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_f11dc44b3b8a538bbd972e9ff6dcc6f9)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_c55e7eb1613b5bf2ad463fbfe2234ad6)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_30012c7810945382a34a4b4277cc5e4e)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_54334c47da555aebac16c1e0a937c184)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_02e622a30aa35012928501bb9ad9a689)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_c014cc401335528699dfee7f9dc96239)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_bcfa29557e0c5abda9cbdfae779f75b1)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_2be37801b6325a8c96cd8fc2b6683e56)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_8e7a23b19d255fe9b8943feea1bba189)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_1cb9b7290e3859b1b8244722158d7d9c)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_706627f4c00057019dc2cd1c29c7b5c0)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_a44ba73c7b7950fe840946512b5b9826)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_f20553f5cc3e548e9316aca7260f5a64)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_01d35550d54b5a9f9e746412f15a9b65)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_8106b432b6485156a11a13d931979840(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_e719ba078fb5582782b9f6ae21790809(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_d8f524eab46257f0986a317c1750bcad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_4b569a55fcd55ea5b4286db4df9a9e52, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_5a8e900e416c5fa8be93a916d48b7334, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_f54f36adc69c509e9e8732e0dfd087fa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_74d717d63b43502c943a411dcac0a528, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_51fd3c94d849595180ea8acc7bb8ca17, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_09452bbd52bb5216934ddd620d4c9b40, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_6ad0312dcb245367a4e3789b4e9b5ce1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_56c1ff5d2c685970bab58aebbdb3824b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_e7679910f1cf59a3a3feae94069f559e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_d3c45c19c5aa53d69602e435b8b8ffde, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_4b82c726d2955a69abf9a853f4a65dd1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_13d9f15abf4f540e8e3eb9196c1c7f14, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_1d65c0c0c6f75475be6bd3a7bcdab899, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_554e18b2cb835446b25d1fba0df3fb95, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_9831ca3e9b9c5ab2ac7566c6b9d0a42a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_60ae3dec154d5e16b9271cae826aaff0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_14016261cf375e7884bc31818d6d1edc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_02ec8c300bd65ebb8a7c45ef4b6a5514, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_e01155029e185c56bd54d8904ff51136, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_c000dad9a75956d9b8ea9cb7f067c8c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_10dc8eca897f5775aac6ae4006cb7319, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_c96f95a75cce578fa33cf40c2b4b9d85, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_21dbacc960e352efbdc0372ea0495eda, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_587bf3b2c4d45a038b2efce167ee8d13, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_c3b9715e195a57119bc1b0b552942b74, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_6ee019d8252652abb40c0f395137ae52, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_c88e644218e75f58aac225bc20edbe8b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_d8a98a09bffd564d91da6d28b2056277, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_c5bb3cea5f1d5f9eb4e94b6964ecb010, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_c997dd7c19725f38a10ad1223788cc0d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_f76e669bbe365c99978743c0d405b77a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_9b43b8bc9ab150b98c4ff75c9a8ce5f7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_c35d024818ae5db5a8803d763022967d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_2824a30a76e45b2f80f4fe796bafdcec, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_a695992d308e5b949f10b07d733bdc5e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_2315c160837f5af9a22872d1a224c908, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_dab1377dca22580f8a27b9292f0c5235, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_64b1e7f72d055c6790b8524e5279e613, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_42b15cffdc255a1993a690cbe90b0d59, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_3e1d30d703cd51a9aad3b935cbbf41b5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_c79a9daf6e6f5e699176bc017a094996, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_33209f84caec55a7a96ae3523a7ff324, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_8419d89522d057eeaec29ba531159ec8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_500e54ff91805146a016cb07e15c2913, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_07656049b5c85e8bb353d1cd88e62f0a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_7d3aaa86738c5cd690e0a3c02a90c7df, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_32631ebf95e6576d8e71c3732a0afce5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_52f7343d1d74574ca087295f1a531fa1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_7180a4050d0f555e82aa77acc2592bf7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_6a3dbc42269757b7bffdb4d63111b017, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_67989ccfee885238b8386906799239d1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_5a1f8e9ef4455d6da8736ba8524c3632, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_2e9877dbd1fd585a9b2723e79e2acf44, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_2edcd80b66345a3d9dd50f6bcc61451d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_51ebeb13850c5eb8b61507cf76ffdfdb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_30f2dd92deb05651ba7ae0788b7f9bfa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_23755ae33c8a56b9a1f55c565cdc6ebe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_2dcd9f2aa6b65bac8ffdf5401ee779ef, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_c0c80dab15c352249e9444ff71286872, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_80dd95051dd0576c98b0883d16b77522, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_c61976a262f65df18613baf108640fb7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_7900937c7cc35bb3819e6427c4417fbd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_3f0e835337d7536b92f27e20df09f047, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_a4720c3ebbb057b1a19dd4a59d330c2c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_5103d1fed24f58a596a15280f736623c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_f11dc44b3b8a538bbd972e9ff6dcc6f9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_c55e7eb1613b5bf2ad463fbfe2234ad6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_30012c7810945382a34a4b4277cc5e4e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_54334c47da555aebac16c1e0a937c184, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_02e622a30aa35012928501bb9ad9a689, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_c014cc401335528699dfee7f9dc96239, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_bcfa29557e0c5abda9cbdfae779f75b1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_2be37801b6325a8c96cd8fc2b6683e56, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_8e7a23b19d255fe9b8943feea1bba189, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_1cb9b7290e3859b1b8244722158d7d9c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_706627f4c00057019dc2cd1c29c7b5c0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_a44ba73c7b7950fe840946512b5b9826, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_f20553f5cc3e548e9316aca7260f5a64, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_01d35550d54b5a9f9e746412f15a9b65, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_8106b432b6485156a11a13d931979840, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_e719ba078fb5582782b9f6ae21790809, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}