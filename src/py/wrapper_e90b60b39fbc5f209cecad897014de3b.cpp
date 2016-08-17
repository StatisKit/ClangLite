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
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_bcb789b0ba935843bc590cd9898860d3)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    bool  (::clang::FunctionDecl::*method_pointer_a56056a35f2b58938384db2fac94d1ee)() const = &::clang::FunctionDecl::isGlobal;
    bool  (*method_pointer_becb52cd58cb570fa7f43dec321be7d7)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (::clang::FunctionDecl::*method_pointer_bca8b31912df58d591b8ede71684178c)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_7a9405bbe9f95baabd3a467e453c404a)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_542e18d2252a5a2194ae1e67b66fbf50)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_d65b6a91eda8581ea14825b1fe479078)() const = &::clang::FunctionDecl::isPure;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_c30f9285605956c0a6ebe72e0a62fbdb)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    void  (::clang::FunctionDecl::*method_pointer_7f0b797ed6b55e56b5463eacccbc9174)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_4ad24cea7c215fb98ed4f659b3521ccc)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_da5e0cb02a455e949d06fa292ceb3784)() const = &::clang::FunctionDecl::getBuiltinID;
    void  (::clang::FunctionDecl::*method_pointer_2b119643e06c5faf9e643feb3751a215)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_a2447c2b096c55339a8163c568982243)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_657b30a3b2ce50849c95998b2c799344)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_7153611d4f805672a836254a1dc52b00)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_f0f3326a94cf5fc8bf06617ad97fb5fc)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    void  (::clang::FunctionDecl::*method_pointer_071727382b7c5f3eb75a76adfead496a)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    bool  (::clang::FunctionDecl::*method_pointer_0b84f65cd5f65c198979085088f64314)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_0d5e9c987b9c5d1798b78bc880c3d091)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_92bb90fa85905ced86546413f1bec83b)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    bool  (::clang::FunctionDecl::*method_pointer_b9fef8f44fb750b8b7037cc33ae8662a)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_f80f2a82b9375508a30572bbda7f988d)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_0feea8143fa85b0a8218cbe368ec2499)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_a638429bf29958dc920a42e70991c64d)() const = &::clang::FunctionDecl::isInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_1258d390c3665601895f3b076d59b236)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_5b91258c19525b4e9345f6d8a8358508)() const = &::clang::FunctionDecl::usesSEHTry;
    bool  (::clang::FunctionDecl::*method_pointer_a5c34d5d480d54f78f97c7a7422f7337)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_510eb1ef701b5e18b7de07d95c4cc2e4)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_c8d9b1b6e7e3516e8de971b3832935ba)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_e58989e031ae550bba040e0ed7b0c633)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_5965b609dd3e5e109e2e558073dc10f3)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_b6329dde85735210a57082feb6fa1d24)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    bool  (::clang::FunctionDecl::*method_pointer_a77374126ff3501dad219acfdab1f7c2)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_14b27e6c273c5303be4bb5f826cbe8ea)() const = &::clang::FunctionDecl::hasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_268b1f38a08c5f809fda993709f61af0)(bool ) = &::clang::FunctionDecl::setDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_9148d215aaeb589a8838443969f45b29)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    bool  (::clang::FunctionDecl::*method_pointer_e8955440e6205b77aec7926eecc10617)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_418e1997a1635b28a22d7449a66cb704)() const = &::clang::FunctionDecl::isMain;
    bool  (*method_pointer_ca068debcd7d5a47b9d2371e8e96b7df)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_0ed599444a0959d8822a24f19e47487d)() const = &::clang::FunctionDecl::isMSExternInline;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_bd0bbdbc2f3b5bd58b69c084b75fd8ab)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    void  (::clang::FunctionDecl::*method_pointer_8bb7e0c79b9854ecb75a710734e6afd5)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_e00b7281ca8954b3be52735cb550c702)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_2ec7b369ba5554e3af4a9bb255cfb1b4)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_8b119fe157645a2783b56e17241a1072)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_bf7a049ff44f5ee4b8c664efceb0a8c9)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_bea1717b276958b1b1b60bfe770494b5)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_41dd4fb317cf579ba2658f620acdb1ac)() const = &::clang::FunctionDecl::isExternC;
    void  (::clang::FunctionDecl::*method_pointer_c121917ffc4955f8aa9d7b17da3bb632)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_dfbbe668e1e95a028d35b247a6d6fe2b)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    void  (::clang::FunctionDecl::*method_pointer_ed1c092979425f97902e454fbb1dffca)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    bool  (::clang::FunctionDecl::*method_pointer_2663ec2b3b5c57aa930f4e4394bb6df3)() const = &::clang::FunctionDecl::isInExternCXXContext;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_8a68ae316b6f532c91945c2672e52477)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    bool  (::clang::FunctionDecl::*method_pointer_67ef02f442dc5eff953204af1ccf9fc9)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_5a3aafa4109457a59ec9dea06bf6f252)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    class ::clang::FunctionDecl  * (*method_pointer_088d56dbf076562887052c7c74e524a6)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    unsigned int  (::clang::FunctionDecl::*method_pointer_5056cdaa8391523f872b5506cb6fe257)() const = &::clang::FunctionDecl::getNumParams;
    bool  (::clang::FunctionDecl::*method_pointer_7f2d834bc83a591fb8283d65daedd974)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_4d6b4da3a61253c192920f806e8c7bc1)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_037b411e140e5c0fb72c749e685abb05)() const = &::clang::FunctionDecl::isTrivial;
    void  (::clang::FunctionDecl::*method_pointer_6c52e87fe1365243a08a3e4344c38533)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    class ::clang::FunctionDecl  * (*method_pointer_afbfbafc22e25282866ef813026cc40e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    bool  (::clang::FunctionDecl::*method_pointer_6e696524342851ff9a13a282837d2e40)() const = &::clang::FunctionDecl::hasTrivialBody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_9b4b97bd66c958a9901b0ce81c3c4fdf)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    bool  (::clang::FunctionDecl::*method_pointer_fc3643a265b65a758819b7ffda9f5d3e)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    class ::clang::DeclContext  * (*method_pointer_904f1f8af34951eb80818476cde85860)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    unsigned int  (::clang::FunctionDecl::*method_pointer_f2d8d81b2f9651c79c1afc85207f8252)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_b3c143a0f2d55d8a86cace6ebce58258)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_bb119f5af7005cdfa0a1b73f0e9b1f1c)() = &::clang::FunctionDecl::setImplicitlyInline;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_68c2fbeec39f53a0b085bbbb6c3e7e86)() = &::clang::FunctionDecl::getCanonicalDecl;
    bool  (::clang::FunctionDecl::*method_pointer_43ef596312495e83914697590c12784e)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_facbb434956853b28be62751b254b2e5)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_15f8f85d36035fd59951bf7aa5bcf642)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_21671fc8793c51ad9dfa5056427574ec)() const = &::clang::FunctionDecl::getCanonicalDecl;
    void  (::clang::FunctionDecl::*method_pointer_f56bc63f3f6253548542ae3bbd407a60)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_d88ca24fbd065595a435ed67018019fe)(bool ) = &::clang::FunctionDecl::setTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_31efcb44333c5cfc831f87778bbfad55)() const = &::clang::FunctionDecl::isInlined;
    unsigned int  (::clang::FunctionDecl::*method_pointer_0b5a46a5429155d5a3c3ec7f3b7cbe3e)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    bool  (::clang::FunctionDecl::*method_pointer_4610febdc48f59be82c9acb34032d743)() const = &::clang::FunctionDecl::isInExternCContext;
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_bcb789b0ba935843bc590cd9898860d3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_a56056a35f2b58938384db2fac94d1ee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_becb52cd58cb570fa7f43dec321be7d7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_bca8b31912df58d591b8ede71684178c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_7a9405bbe9f95baabd3a467e453c404a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_542e18d2252a5a2194ae1e67b66fbf50, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_d65b6a91eda8581ea14825b1fe479078, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_c30f9285605956c0a6ebe72e0a62fbdb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_7f0b797ed6b55e56b5463eacccbc9174, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_4ad24cea7c215fb98ed4f659b3521ccc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_da5e0cb02a455e949d06fa292ceb3784, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_2b119643e06c5faf9e643feb3751a215, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_a2447c2b096c55339a8163c568982243, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_657b30a3b2ce50849c95998b2c799344, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_7153611d4f805672a836254a1dc52b00, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_f0f3326a94cf5fc8bf06617ad97fb5fc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_071727382b7c5f3eb75a76adfead496a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_0b84f65cd5f65c198979085088f64314, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_0d5e9c987b9c5d1798b78bc880c3d091, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_92bb90fa85905ced86546413f1bec83b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_b9fef8f44fb750b8b7037cc33ae8662a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_f80f2a82b9375508a30572bbda7f988d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_0feea8143fa85b0a8218cbe368ec2499, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_a638429bf29958dc920a42e70991c64d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_1258d390c3665601895f3b076d59b236, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_5b91258c19525b4e9345f6d8a8358508, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_a5c34d5d480d54f78f97c7a7422f7337, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_510eb1ef701b5e18b7de07d95c4cc2e4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_c8d9b1b6e7e3516e8de971b3832935ba, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_e58989e031ae550bba040e0ed7b0c633, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_5965b609dd3e5e109e2e558073dc10f3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_b6329dde85735210a57082feb6fa1d24, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_a77374126ff3501dad219acfdab1f7c2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_14b27e6c273c5303be4bb5f826cbe8ea, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_268b1f38a08c5f809fda993709f61af0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_9148d215aaeb589a8838443969f45b29, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_e8955440e6205b77aec7926eecc10617, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_418e1997a1635b28a22d7449a66cb704, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_ca068debcd7d5a47b9d2371e8e96b7df, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_0ed599444a0959d8822a24f19e47487d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_bd0bbdbc2f3b5bd58b69c084b75fd8ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_8bb7e0c79b9854ecb75a710734e6afd5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_e00b7281ca8954b3be52735cb550c702, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_2ec7b369ba5554e3af4a9bb255cfb1b4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_8b119fe157645a2783b56e17241a1072, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_bf7a049ff44f5ee4b8c664efceb0a8c9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_bea1717b276958b1b1b60bfe770494b5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_41dd4fb317cf579ba2658f620acdb1ac, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_c121917ffc4955f8aa9d7b17da3bb632, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_dfbbe668e1e95a028d35b247a6d6fe2b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_ed1c092979425f97902e454fbb1dffca, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_2663ec2b3b5c57aa930f4e4394bb6df3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_8a68ae316b6f532c91945c2672e52477, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_67ef02f442dc5eff953204af1ccf9fc9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_5a3aafa4109457a59ec9dea06bf6f252, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_088d56dbf076562887052c7c74e524a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_5056cdaa8391523f872b5506cb6fe257, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_7f2d834bc83a591fb8283d65daedd974, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_4d6b4da3a61253c192920f806e8c7bc1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_037b411e140e5c0fb72c749e685abb05, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_6c52e87fe1365243a08a3e4344c38533, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_afbfbafc22e25282866ef813026cc40e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_6e696524342851ff9a13a282837d2e40, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_9b4b97bd66c958a9901b0ce81c3c4fdf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_fc3643a265b65a758819b7ffda9f5d3e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_904f1f8af34951eb80818476cde85860, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_f2d8d81b2f9651c79c1afc85207f8252, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_b3c143a0f2d55d8a86cace6ebce58258, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_bb119f5af7005cdfa0a1b73f0e9b1f1c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_68c2fbeec39f53a0b085bbbb6c3e7e86, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_43ef596312495e83914697590c12784e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_facbb434956853b28be62751b254b2e5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_15f8f85d36035fd59951bf7aa5bcf642, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_21671fc8793c51ad9dfa5056427574ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_f56bc63f3f6253548542ae3bbd407a60, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_d88ca24fbd065595a435ed67018019fe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_31efcb44333c5cfc831f87778bbfad55, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_0b5a46a5429155d5a3c3ec7f3b7cbe3e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_4610febdc48f59be82c9acb34032d743, "");
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