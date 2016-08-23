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
    class ::clang::FunctionDecl  * (*method_pointer_2830d02352a25283a79ace3578d1370f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_6aebcc93ef8250dc99cd3bb6ac479b76)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_0a148ab2f8145c5d9039503a39f855c6)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_4d5a2227d6c35f0191250e2065074e0b)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_35b5ff39b4f55f95bd630c184dfa1d4a)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_1eef9f4a1c655f2dabf3a15643313305)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_de435294c72c52a5a964321ba88871a0)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_27c5274796e65f20b42ce40421a7dd31)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_954ed520187e5442ad22cd186c5a744a)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_5e2cbc20ae745109813d3dad7730810f)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_5acef5f77b645ea290aa4b98e24efd2d)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_e371f6f7efca516c8567e7f06700ef80)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_161a1ff441ad59fb91c1e81ab404a6ea)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_9feb03e0aa475d8582f591735417cd2f)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_c81628edfb985c738824396e831dd13a)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_89333af1a8145450a991a2f095b5ee87)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_02bdad493d2a56768c48c13ac241359c)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_a33a1e5cc3d358b18b5f6ffa9507a5ed)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_50245e2512025f6fb01eb5313262ada0)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_d076e0ba6535581d8781718699a5c173)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_8c708c37f6a65808a704217cb4cae138)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_0f175900a1645b028a3286d3515243cd)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_8c4e82b600385bbfa6e82ea147293526)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_80a1960a974f57feb661bf68ac3f3598)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_161d2703f60455e48a361cc13c319ae5)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_9a7f7e752d9b5d78852bf089740513b7)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_d8ee7820cf865f3b8c453ff63ba4e8dd)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_7940156e900d5870bb93048f1915044a)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_433e2baef74754d3bb44e3a5adbb2891)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_681cbed2a87852f685a4fa862dc95fd8)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_a6a1b1f5f35855dbb8750ff4287b244d)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_5738fa120b185ec4b4296be120f02828)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_b65edda92a28536c97a36a5a59a1c320)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_9945b3eda0db5c499eaf65c2765969b3)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_28203d225c425df3b6bac9139ebbd6f1)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_29c1cb7ee6095ab5ad9b9ec25b86ff7f)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_61833b5e2cd7597cbd29d95469451446)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_e2bef2c87ab65c1eaf75dd21561e097f)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_558375f6b5635976b9b2661591ebaea1)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_15b17f80faa452efa76a6ba7e6e966da)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_ab8bf2697cac5df291b6a1a847e0b448)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_1d604e14b8b6506cab6a8203c4497b98)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_a2d6778066e05b78b64dce966cfa43ae)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_71fec45db8c553568a6ed2328fd93d98)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_90d1e4d225b0563c8fc26183da1d498d)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_cfe89bf229b15b7cb0b9a457a0f2d5f5)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_92ae66fad7f45dab8d1234ed0c49c507)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_480ed382b2355d89a7db1d0ccdaf31cb)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_24cec7c243605c74a20e93e64b0af57f)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_d42fd2d3838057b8995e85471d279d6a)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_19eb4d92cb5d5efdb9a873194812187d)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_42c668d3782e5fd69829f7eb3d7ff809)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_ee17c79b7aef52ea90a28687659e5203)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_dff532d25d6256488a490b454e0f7fe1)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_be2f04c9033f504680ecdebf1207868d)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_14168e86de715fccb30f451ce4c16bda)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_873d4ceeeee756b9ade0c2f393801702)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_68051f5e28305877a270206772ed8afb)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_ea57d32822d9542d94fd4984638bea27)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_2c4f445194b95d738c1c1c177890ed3d)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_8643c462b9d353549e3ed317fa265970)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_b1c9e365ff635bf48ac8271a85e2acc0)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_ff6547b1a15851eb831fc296ed48d6a1)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_e95c1eb47c475d838adddb86238e8186)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_ab1a0c78eff659f48f13f869630334fe)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_1e23278ce84d58ea93071e59e63c51c4)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_bf3f1b855394534582d4895b38f89659)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_e0d4cf651e1d51cd997d0155cdd354b9)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_d3410298e135592c9c76150b870f682d)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_c06d1ae989645bfdae5b7b99ecb30f8d)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_be5016ad29dd5ecd894495ed8daaa202)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_f1b2b252e41e54479a769539e4fd98ad)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_a4e9c16aedab568abb38cf3e66dfb2e6)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_fa5a2ecf774f5ebc9d373edb180c2bc2)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_50dc036d73a85667aa90f8de3337ea78)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_147cc34f047b509096d177e10fc8a391)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_fa50e742b50c5276bc7d75bb0e87844d)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_a89807d8d56d559490c681e53694da22)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_c173b36fd60b575ea9ad74b0d14bb595)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_4760d956643a504b808d429741ac3bc2)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_44e85a5b5b0e5c089e46d5c44f10575f)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_df72074aa1455bdfb66a1868317d4564)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_18751b4eece4538293b03ff3087dd9fe(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_28ea05a99f5d52d6b60e79f79465f286(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_2830d02352a25283a79ace3578d1370f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_6aebcc93ef8250dc99cd3bb6ac479b76, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_0a148ab2f8145c5d9039503a39f855c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_4d5a2227d6c35f0191250e2065074e0b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_35b5ff39b4f55f95bd630c184dfa1d4a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_1eef9f4a1c655f2dabf3a15643313305, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_de435294c72c52a5a964321ba88871a0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_27c5274796e65f20b42ce40421a7dd31, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_954ed520187e5442ad22cd186c5a744a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_5e2cbc20ae745109813d3dad7730810f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_5acef5f77b645ea290aa4b98e24efd2d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_e371f6f7efca516c8567e7f06700ef80, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_161a1ff441ad59fb91c1e81ab404a6ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_9feb03e0aa475d8582f591735417cd2f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_c81628edfb985c738824396e831dd13a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_89333af1a8145450a991a2f095b5ee87, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_02bdad493d2a56768c48c13ac241359c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_a33a1e5cc3d358b18b5f6ffa9507a5ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_50245e2512025f6fb01eb5313262ada0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_d076e0ba6535581d8781718699a5c173, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_8c708c37f6a65808a704217cb4cae138, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_0f175900a1645b028a3286d3515243cd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_8c4e82b600385bbfa6e82ea147293526, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_80a1960a974f57feb661bf68ac3f3598, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_161d2703f60455e48a361cc13c319ae5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_9a7f7e752d9b5d78852bf089740513b7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_d8ee7820cf865f3b8c453ff63ba4e8dd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_7940156e900d5870bb93048f1915044a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_433e2baef74754d3bb44e3a5adbb2891, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_681cbed2a87852f685a4fa862dc95fd8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_a6a1b1f5f35855dbb8750ff4287b244d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_5738fa120b185ec4b4296be120f02828, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_b65edda92a28536c97a36a5a59a1c320, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_9945b3eda0db5c499eaf65c2765969b3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_28203d225c425df3b6bac9139ebbd6f1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_29c1cb7ee6095ab5ad9b9ec25b86ff7f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_61833b5e2cd7597cbd29d95469451446, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_e2bef2c87ab65c1eaf75dd21561e097f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_558375f6b5635976b9b2661591ebaea1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_15b17f80faa452efa76a6ba7e6e966da, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_ab8bf2697cac5df291b6a1a847e0b448, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_1d604e14b8b6506cab6a8203c4497b98, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_a2d6778066e05b78b64dce966cfa43ae, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_71fec45db8c553568a6ed2328fd93d98, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_90d1e4d225b0563c8fc26183da1d498d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_cfe89bf229b15b7cb0b9a457a0f2d5f5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_92ae66fad7f45dab8d1234ed0c49c507, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_480ed382b2355d89a7db1d0ccdaf31cb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_24cec7c243605c74a20e93e64b0af57f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_d42fd2d3838057b8995e85471d279d6a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_19eb4d92cb5d5efdb9a873194812187d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_42c668d3782e5fd69829f7eb3d7ff809, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_ee17c79b7aef52ea90a28687659e5203, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_dff532d25d6256488a490b454e0f7fe1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_be2f04c9033f504680ecdebf1207868d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_14168e86de715fccb30f451ce4c16bda, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_873d4ceeeee756b9ade0c2f393801702, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_68051f5e28305877a270206772ed8afb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_ea57d32822d9542d94fd4984638bea27, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_2c4f445194b95d738c1c1c177890ed3d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_8643c462b9d353549e3ed317fa265970, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_b1c9e365ff635bf48ac8271a85e2acc0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_ff6547b1a15851eb831fc296ed48d6a1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_e95c1eb47c475d838adddb86238e8186, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_ab1a0c78eff659f48f13f869630334fe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_1e23278ce84d58ea93071e59e63c51c4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_bf3f1b855394534582d4895b38f89659, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_e0d4cf651e1d51cd997d0155cdd354b9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_d3410298e135592c9c76150b870f682d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_c06d1ae989645bfdae5b7b99ecb30f8d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_be5016ad29dd5ecd894495ed8daaa202, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_f1b2b252e41e54479a769539e4fd98ad, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_a4e9c16aedab568abb38cf3e66dfb2e6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_fa5a2ecf774f5ebc9d373edb180c2bc2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_50dc036d73a85667aa90f8de3337ea78, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_147cc34f047b509096d177e10fc8a391, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_fa50e742b50c5276bc7d75bb0e87844d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_a89807d8d56d559490c681e53694da22, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_c173b36fd60b575ea9ad74b0d14bb595, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_4760d956643a504b808d429741ac3bc2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_44e85a5b5b0e5c089e46d5c44f10575f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_df72074aa1455bdfb66a1868317d4564, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_18751b4eece4538293b03ff3087dd9fe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_28ea05a99f5d52d6b60e79f79465f286, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}