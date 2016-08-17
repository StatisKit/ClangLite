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
    unsigned int  (::clang::FunctionDecl::*method_pointer_a2bdd66979d95e48824187def158ce21)() const = &::clang::FunctionDecl::getBuiltinID;
    bool  (::clang::FunctionDecl::*method_pointer_92dfc388101d5d5981ae39ba3a8655f9)() const = &::clang::FunctionDecl::isDefined;
    bool  (*method_pointer_f9f451087348564d93ec90382f2083c5)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_15007c83dabd577b9907ac6ce6ef14de)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_7d0649199d4955bb978c44632b34b539)(bool ) = &::clang::FunctionDecl::setTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_7421776ccfdc52d181582b0814784a0c)() const = &::clang::FunctionDecl::usesSEHTry;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_a8fdb959bb8256a58f5adf41afea8e4e)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    bool  (::clang::FunctionDecl::*method_pointer_dda0e2da05175a858042774ca50a8521)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_cfb971f7ec905954968c276db18467a2)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_3c69d9cd513959c4aea050bff98aa8ba)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_f5906e28a92b543e96860468f2be34dd)() const = &::clang::FunctionDecl::isDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_c1fdeaa243fd52d98225dd4ad2de2507)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    class ::clang::DeclContext  * (*method_pointer_f8d1a4749a2d56408d2a6cad736c7b69)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    unsigned int  (::clang::FunctionDecl::*method_pointer_99e1a3dfd2b25d72a1dd8c195250adc6)() const = &::clang::FunctionDecl::param_size;
    unsigned int  (::clang::FunctionDecl::*method_pointer_ff959db26bc95b459570e502496030e0)() const = &::clang::FunctionDecl::getNumParams;
    bool  (::clang::FunctionDecl::*method_pointer_9b07e5dc3966507d812c3ef9c18537e2)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_d5686a5464d5561bb59f89d2888458e6)() const = &::clang::FunctionDecl::isInlineSpecified;
    unsigned int  (::clang::FunctionDecl::*method_pointer_ba315e6144e25a0f9816ed674ced4323)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    bool  (::clang::FunctionDecl::*method_pointer_0f2dc565e061579880016e007cc5ae74)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    void  (::clang::FunctionDecl::*method_pointer_c9441a0e7fd450e8823d7ddc54fc62cc)(bool ) = &::clang::FunctionDecl::setPure;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_5334484e1640553c9fe7c4bb2c342316)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    bool  (::clang::FunctionDecl::*method_pointer_53fb98622abd599e80f742479cd86fee)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    class ::clang::FunctionDecl  * (*method_pointer_7b36a4c483ba503f9b6245361cc9b901)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    void  (::clang::FunctionDecl::*method_pointer_dc562af974f85d6ca1d15d324ced2db6)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    bool  (*method_pointer_db9f38c3a38358c0b560e6482f927b25)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_ad4f5d6cf05a58eea8bd2e3904b186d3)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    void  (::clang::FunctionDecl::*method_pointer_f4b58721eab1552db5bc47bf7ab0afce)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_9959b338b3dd5e4e91992f402276362d)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    unsigned int  (::clang::FunctionDecl::*method_pointer_f56233d8ca9c500a89f7897269bfef7d)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    bool  (::clang::FunctionDecl::*method_pointer_38c62d4943475b4980515fe6beeb0d34)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_042374deac725570813713f6a3e408a3)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_f261ce347576598cb2e61d93007ba32f)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_b176aa895b24569c86d79deb613ee9e0)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    bool  (::clang::FunctionDecl::*method_pointer_85d71f8536ad52e992e4d90a3057aa05)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_77541a6533545d92b3e5ad6fdbab1cc0)() const = &::clang::FunctionDecl::isExternC;
    void  (::clang::FunctionDecl::*method_pointer_50b02388973b562cab6899accf43398a)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_d2d85fae7bdb5dd39a81f9619e825b27)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    bool  (::clang::FunctionDecl::*method_pointer_6b256db582e554d5abf74b7d2c3c16c1)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_cddfa47eb2a950fb823b077bc74cd3ae)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_4a2265700ca35be6bd1cd981fc0dd779)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_2a4942e53f815ea5a00a96e4beb9c06b)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_d864e0ece1dc5cb5bf451404d7cec6ef)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_df07e953515455349dc270f50299fc2b)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_213f5911752d546384b7311e5af99a54)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    void  (::clang::FunctionDecl::*method_pointer_cbfc0b2f2a5c50c19bd1290dba08aeca)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    bool  (::clang::FunctionDecl::*method_pointer_631a80fc9a6a525cb8e326036294e0c2)() const = &::clang::FunctionDecl::isOverloadedOperator;
    void  (::clang::FunctionDecl::*method_pointer_b42bb4c9ba455e359c7ed80d388f1418)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_dd6a93b7131c5f149f095725b3f7faf4)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_7204b7b8ec8f5a27b4d10001503e9f45)() const = &::clang::FunctionDecl::isConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_c7f5286979cb50649c38c187e072d536)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    bool  (::clang::FunctionDecl::*method_pointer_79da41c8084b5b4cbc4005e72a76fe31)() const = &::clang::FunctionDecl::isInlined;
    void  (::clang::FunctionDecl::*method_pointer_5bfc7935ff2f504198082ae790005e54)(bool ) = &::clang::FunctionDecl::setDefaulted;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_d7c481783cc65ec68d71fe268454f611)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    bool  (::clang::FunctionDecl::*method_pointer_98cd2c78781651d88c3b7ae31cc13aeb)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_354ba423732c5b8cb1a4a9301cda02f4)() const = &::clang::FunctionDecl::hasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_117f257ce16f5aa7996707641574ca97)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_d0dfacef16425d89ab7426560ed87879)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    class ::clang::FunctionDecl  * (*method_pointer_1ed83cca39ae539aa4b07bf566f0efe5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    bool  (::clang::FunctionDecl::*method_pointer_74423ab91ced5704b7ae29bff22e7df7)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_0f0e08fd3eee508e80765e7e883c652a)() const = &::clang::FunctionDecl::isInExternCXXContext;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_6ce968344ed25d8091ab2a7d9d974df0)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    bool  (::clang::FunctionDecl::*method_pointer_b1d6e7cf3f935785b1cdf95e1a308f97)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    void  (::clang::FunctionDecl::*method_pointer_ac84bf2141f45d4a98a2f6333b1bf8c4)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    bool  (::clang::FunctionDecl::*method_pointer_f3943c6f1d5d5a32baf4447792294927)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_7fe7c7fbfe725c4c9ea105dbe64dc212)() const = &::clang::FunctionDecl::isVariadic;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_beb76c29bb785e8eaaf64deee89f5739)() const = &::clang::FunctionDecl::getCanonicalDecl;
    bool  (::clang::FunctionDecl::*method_pointer_bb1e4fd2b4d8523e813ce3a8e7462bb7)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_b136fbc6f3685850a4513a317de9ae70)() const = &::clang::FunctionDecl::isMain;
    void  (::clang::FunctionDecl::*method_pointer_5b9ce721c40750ccafea9c0bc5a4eca5)(bool ) = &::clang::FunctionDecl::setConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_5448deb19d385f5c8cf7e66a8e56c0d3)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_c114e4879af855c8859747a6d7f3cfd9)() const = &::clang::FunctionDecl::isOutOfLine;
    void  (::clang::FunctionDecl::*method_pointer_ba298143e3ee5e95afb4696782d09c61)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_5193db8d163e51f791eceda906342c1e)() = &::clang::FunctionDecl::getCanonicalDecl;
    bool  (::clang::FunctionDecl::*method_pointer_690e1baa4ed9518a918eee63c23c44dd)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    void  (::clang::FunctionDecl::*method_pointer_59cba36c93a6502f8bca9e70208361ef)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_05bfbccc355054b5a3c756623d736e60)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    void  (::clang::FunctionDecl::*method_pointer_4b100f9dc6c75a96909630eb17ee9519)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_de8a82d3678158a8a219ef48e3046ea5)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    bool  (::clang::FunctionDecl::*method_pointer_47a9e89bde7b576a89eb22dd72a08695)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_a2bdd66979d95e48824187def158ce21, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_92dfc388101d5d5981ae39ba3a8655f9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_f9f451087348564d93ec90382f2083c5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_15007c83dabd577b9907ac6ce6ef14de, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_7d0649199d4955bb978c44632b34b539, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_7421776ccfdc52d181582b0814784a0c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_a8fdb959bb8256a58f5adf41afea8e4e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_dda0e2da05175a858042774ca50a8521, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_cfb971f7ec905954968c276db18467a2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_3c69d9cd513959c4aea050bff98aa8ba, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_f5906e28a92b543e96860468f2be34dd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_c1fdeaa243fd52d98225dd4ad2de2507, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_f8d1a4749a2d56408d2a6cad736c7b69, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_99e1a3dfd2b25d72a1dd8c195250adc6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_ff959db26bc95b459570e502496030e0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_9b07e5dc3966507d812c3ef9c18537e2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_d5686a5464d5561bb59f89d2888458e6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_ba315e6144e25a0f9816ed674ced4323, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_0f2dc565e061579880016e007cc5ae74, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_c9441a0e7fd450e8823d7ddc54fc62cc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_5334484e1640553c9fe7c4bb2c342316, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_53fb98622abd599e80f742479cd86fee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_7b36a4c483ba503f9b6245361cc9b901, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_dc562af974f85d6ca1d15d324ced2db6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_db9f38c3a38358c0b560e6482f927b25, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_ad4f5d6cf05a58eea8bd2e3904b186d3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_f4b58721eab1552db5bc47bf7ab0afce, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_9959b338b3dd5e4e91992f402276362d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_f56233d8ca9c500a89f7897269bfef7d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_38c62d4943475b4980515fe6beeb0d34, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_042374deac725570813713f6a3e408a3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_f261ce347576598cb2e61d93007ba32f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_b176aa895b24569c86d79deb613ee9e0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_85d71f8536ad52e992e4d90a3057aa05, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_77541a6533545d92b3e5ad6fdbab1cc0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_50b02388973b562cab6899accf43398a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_d2d85fae7bdb5dd39a81f9619e825b27, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_6b256db582e554d5abf74b7d2c3c16c1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_cddfa47eb2a950fb823b077bc74cd3ae, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_4a2265700ca35be6bd1cd981fc0dd779, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_2a4942e53f815ea5a00a96e4beb9c06b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_d864e0ece1dc5cb5bf451404d7cec6ef, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_df07e953515455349dc270f50299fc2b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_213f5911752d546384b7311e5af99a54, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_cbfc0b2f2a5c50c19bd1290dba08aeca, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_631a80fc9a6a525cb8e326036294e0c2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_b42bb4c9ba455e359c7ed80d388f1418, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_dd6a93b7131c5f149f095725b3f7faf4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_7204b7b8ec8f5a27b4d10001503e9f45, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_c7f5286979cb50649c38c187e072d536, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_79da41c8084b5b4cbc4005e72a76fe31, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_5bfc7935ff2f504198082ae790005e54, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_d7c481783cc65ec68d71fe268454f611, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_98cd2c78781651d88c3b7ae31cc13aeb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_354ba423732c5b8cb1a4a9301cda02f4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_117f257ce16f5aa7996707641574ca97, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_d0dfacef16425d89ab7426560ed87879, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_1ed83cca39ae539aa4b07bf566f0efe5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_74423ab91ced5704b7ae29bff22e7df7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_0f0e08fd3eee508e80765e7e883c652a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_6ce968344ed25d8091ab2a7d9d974df0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_b1d6e7cf3f935785b1cdf95e1a308f97, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_ac84bf2141f45d4a98a2f6333b1bf8c4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_f3943c6f1d5d5a32baf4447792294927, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_7fe7c7fbfe725c4c9ea105dbe64dc212, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_beb76c29bb785e8eaaf64deee89f5739, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_bb1e4fd2b4d8523e813ce3a8e7462bb7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_b136fbc6f3685850a4513a317de9ae70, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_5b9ce721c40750ccafea9c0bc5a4eca5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_5448deb19d385f5c8cf7e66a8e56c0d3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_c114e4879af855c8859747a6d7f3cfd9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_ba298143e3ee5e95afb4696782d09c61, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_5193db8d163e51f791eceda906342c1e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_690e1baa4ed9518a918eee63c23c44dd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_59cba36c93a6502f8bca9e70208361ef, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_05bfbccc355054b5a3c756623d736e60, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_4b100f9dc6c75a96909630eb17ee9519, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_de8a82d3678158a8a219ef48e3046ea5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_47a9e89bde7b576a89eb22dd72a08695, "");
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