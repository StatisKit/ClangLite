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
    class ::clang::FunctionDecl  * (*method_pointer_d7851626a34350cfa3b8da89971fcf3c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_0290137f9e4e5f918c5433382b38c302)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_1f39a7973255513ea37b01432c7fddcb)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_c57641179c8a536788b81b1cba2e5783)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_ea2ab13bf34957ea96acf8a02e7044a3)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_249b00fbced952c9bcdfe40006418903)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_633f1c0fad3e5f69a5b98dc401964dd6)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_eed5866370a35d3a8a4e669c3dac45f7)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_72d109dcd1595b8b970cba4a52eb5cca)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_0f9f8adf271a5be7a09b257c015b00bb)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_44004012e70556aaba1578cf6e24834d)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_f198c6a890ed572e8a5d24e3d4a5f4f0)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_f4b449bc443854b0bac4554e88bb25ee)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_8ff0823ee57a546fb3130c3f2e9e6928)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_c77c0c0dcce25a24bb05857a31134788)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_e3ae8ad7357f579c82ca4fcb0186e83d)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_0277eea1e09c50528bc558b4fc27d40b)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_9728f75157ec5593aa3f6213b4b79a48)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_0ace0830979058449cb5078e803890fc)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_18ae6dccc3d75d5f89d43da3edcd8f84)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    bool  (::clang::FunctionDecl::*method_pointer_8494c531008c5d31870a53b61e931dc6)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_ef4dca6652485ede8ffd5d8c634b7563)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_8af5621bf4365e88b9f3768f11529244)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_72f84853b08653088a957f4073cd4cd1)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_7fd6a95711065adc98c29f0ad3dd7068)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_f744b5df81835ff88a0c4768f82d9219)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_160e36033c89581cb6edca8865de2d22)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_12cbfd58b0a059bba54406cca049cf2a)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_df7899ec412a53d691759f5f213922a6)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_5383619f71f65204b1b845352262b8c0)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_c9ee169b160c5e5091f8f0d074ee60bb)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_01ada8ae93a152a7b6177832cdcbf52f)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_04dcd5c87f375e63b853439a4460f8aa)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_4c2d14ecd1ab54e69ace9f2ef9311376)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_53d9beee8e8752d79ed6a093b530b6df)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_ddf948b07ecc55de870de05a3d74ef61)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_e8c6353ce3485e9499742e1ab9919047)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_0629e3c8292f5628b291008c45ba641d)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_245560fdd66f5fcbb23a14d9dc790220)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_8b39401712e05cd398622147c189d789)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_8c38ae626cc3596c891d7ee0ff7a957d)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_15d5149f710a57cf99b763eb14f5048e)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_cefc7fdc36eb57189bbd8c03b456a73e)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_f008571a673e5d4da34c7e3abdcbcbbb)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_191cf23e277a5546a2810561c779bfda)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_d80197f73b935c56a247fbb479aedb3a)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_cbd8997fa5365b7aa0f9c367f5df4dc6)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_44df28addf6d556ea9ba8056ae1b14f9)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_1efa9ea4b43c556e8732963340a1628b)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_6a2a51137a9253f3a4c14754540dfe07)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_99182749364b53129e027db045b4cb3f)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_27e8d4183f15581b9dbcb408025917b7)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_82d06c7a6e9a586db6faf376c2719050)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_744ddf9acc1155338ab7ec1725eb7ee0)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_074d8cce0b7c51149efbf764f62cfa89)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_813587fc19495c62ab887837d5d10dc4)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_5e9e976edd2558fa9a3c24c5ec1f02b7)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_fc13f28ceaa159d898b748d4b8970554)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_a339ba7b2a475aa5a3bc3c4633d9d37f)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_6974cb84269a5b778d85ad5f794f04c5)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_c7ff8733765558c78eb1a55a634c3700)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_c7d534cc275953ad966b7f095c54c707)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_947ce51d6bee56df9507577eb4fc5401)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_279aeb8abadc5bd683916f9fe05093ce)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_02cb4d70c4395906a9d802d0e4671cb0)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_b1fe5cdd16525587bd28eda72261ab4f)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_a621de15ca4d538f936ce39a01311061)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_6cd190dec30c5422b84e20a21462f113)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_5ec175434de35588b271a1d4f8be0644)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_e3d7905d54db536fb24b764a16759497)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_20a6ac33d6c15955bf12dba9da006a8c)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_da080d8c19e952f29df51af4474b18dc)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_5b72296bf42b53dd851d86f6c8793475)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_c8e0efdacec55d36a87fdd3176ec9bce)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_9979692d8c9a50c1b6b17ee4c4bc4ea2)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_b5b697b97fcc594eaaf5d4e2dd06be6a)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_6bebe41c3d095e3da954b9eb16890153)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_30fe5214a60e54ef85277aa3736220c9)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_56bb04262fc75d71ac7ddd2dc51e7bab)() const = &::clang::FunctionDecl::usesSEHTry;
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_d7851626a34350cfa3b8da89971fcf3c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_0290137f9e4e5f918c5433382b38c302, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_1f39a7973255513ea37b01432c7fddcb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_c57641179c8a536788b81b1cba2e5783, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_ea2ab13bf34957ea96acf8a02e7044a3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_249b00fbced952c9bcdfe40006418903, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_633f1c0fad3e5f69a5b98dc401964dd6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_eed5866370a35d3a8a4e669c3dac45f7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_72d109dcd1595b8b970cba4a52eb5cca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_0f9f8adf271a5be7a09b257c015b00bb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_44004012e70556aaba1578cf6e24834d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_f198c6a890ed572e8a5d24e3d4a5f4f0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_f4b449bc443854b0bac4554e88bb25ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_8ff0823ee57a546fb3130c3f2e9e6928, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_c77c0c0dcce25a24bb05857a31134788, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_e3ae8ad7357f579c82ca4fcb0186e83d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_0277eea1e09c50528bc558b4fc27d40b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_9728f75157ec5593aa3f6213b4b79a48, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_0ace0830979058449cb5078e803890fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_18ae6dccc3d75d5f89d43da3edcd8f84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_8494c531008c5d31870a53b61e931dc6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_ef4dca6652485ede8ffd5d8c634b7563, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_8af5621bf4365e88b9f3768f11529244, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_72f84853b08653088a957f4073cd4cd1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_7fd6a95711065adc98c29f0ad3dd7068, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_f744b5df81835ff88a0c4768f82d9219, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_160e36033c89581cb6edca8865de2d22, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_12cbfd58b0a059bba54406cca049cf2a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_df7899ec412a53d691759f5f213922a6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_5383619f71f65204b1b845352262b8c0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_c9ee169b160c5e5091f8f0d074ee60bb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_01ada8ae93a152a7b6177832cdcbf52f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_04dcd5c87f375e63b853439a4460f8aa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_4c2d14ecd1ab54e69ace9f2ef9311376, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_53d9beee8e8752d79ed6a093b530b6df, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_ddf948b07ecc55de870de05a3d74ef61, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_e8c6353ce3485e9499742e1ab9919047, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_0629e3c8292f5628b291008c45ba641d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_245560fdd66f5fcbb23a14d9dc790220, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_8b39401712e05cd398622147c189d789, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_8c38ae626cc3596c891d7ee0ff7a957d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_15d5149f710a57cf99b763eb14f5048e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_cefc7fdc36eb57189bbd8c03b456a73e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_f008571a673e5d4da34c7e3abdcbcbbb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_191cf23e277a5546a2810561c779bfda, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_d80197f73b935c56a247fbb479aedb3a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_cbd8997fa5365b7aa0f9c367f5df4dc6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_44df28addf6d556ea9ba8056ae1b14f9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_1efa9ea4b43c556e8732963340a1628b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_6a2a51137a9253f3a4c14754540dfe07, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_99182749364b53129e027db045b4cb3f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_27e8d4183f15581b9dbcb408025917b7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_82d06c7a6e9a586db6faf376c2719050, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_744ddf9acc1155338ab7ec1725eb7ee0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_074d8cce0b7c51149efbf764f62cfa89, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_813587fc19495c62ab887837d5d10dc4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_5e9e976edd2558fa9a3c24c5ec1f02b7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_fc13f28ceaa159d898b748d4b8970554, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_a339ba7b2a475aa5a3bc3c4633d9d37f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_6974cb84269a5b778d85ad5f794f04c5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_c7ff8733765558c78eb1a55a634c3700, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_c7d534cc275953ad966b7f095c54c707, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_947ce51d6bee56df9507577eb4fc5401, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_279aeb8abadc5bd683916f9fe05093ce, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_02cb4d70c4395906a9d802d0e4671cb0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_b1fe5cdd16525587bd28eda72261ab4f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_a621de15ca4d538f936ce39a01311061, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_6cd190dec30c5422b84e20a21462f113, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_5ec175434de35588b271a1d4f8be0644, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_e3d7905d54db536fb24b764a16759497, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_20a6ac33d6c15955bf12dba9da006a8c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_da080d8c19e952f29df51af4474b18dc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_5b72296bf42b53dd851d86f6c8793475, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_c8e0efdacec55d36a87fdd3176ec9bce, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_9979692d8c9a50c1b6b17ee4c4bc4ea2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_b5b697b97fcc594eaaf5d4e2dd06be6a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_6bebe41c3d095e3da954b9eb16890153, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_30fe5214a60e54ef85277aa3736220c9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_56bb04262fc75d71ac7ddd2dc51e7bab, "");
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