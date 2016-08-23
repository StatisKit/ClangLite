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
    class ::clang::FunctionDecl  * (*method_pointer_e9265b75048458289e045b001e90e03e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_41169ab20d0555eda492870eb5021315)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_2386e17eb2ab5d57a648aced0e0c5f3c)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_077442223e9b5efebe2f1ed07b28f35f)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_e6d18f4c7c02545dae4e8535b3779570)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_008c3b3de9d356c9a84ec36f970d04eb)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_a4e5e1a88f1956aa901bb49fc90c1d02)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_3abf83727b285efc874b723bd42159ee)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_679ce89356c45bd58986b80283bd5fb4)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_7e42fa1349b251c8b14d24c82dd4e127)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_6ef007612f7956869ba557e9f44dd99a)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_485d4b70ec0c51feab5661bfa7fe9650)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_6d4d12cf8acf53128915efab0e439dcb)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_ca012de6298955f3aa02663daf2225d3)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_d96a6cd2fbaa527a9d535c3f528595c6)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_bf62f08a372f58e3896d6cb096a748ee)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_2f6b0a44a40a590ab2642341455cbbea)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_fd6259d90ebd5dc7ace63173e707fbf1)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_d2eda7c105415ddaa96cdbb595bac4b3)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_6ed43c9bdcfc589c99e920d360a9e48d)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_4318a697a7015363a9442130765dac97)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_bdffe6ebed4a5bcd81b4300d06e8a7ca)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_1ca23663c1bc50caba06781028e03f68)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_4aaca127af7e5aa9b545e194fdc68910)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_50b3c73480c05dc489ed59e7615a4eb6)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_cd2b1c3d5ff253cdb7512979f72b4103)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_61d9f327169459c39804b665c38fed7f)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_3a631c3e76755bbe84e3410e50b269d0)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_2e3202937a4c5a14baf0245e808b9fb6)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_8561052bc9a05cbb9b13354086b896e0)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_6d78a361b1d2515195701e814fc5712f)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_96a57d6125955a03b092d8d141ce7af3)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_7af367406b47523fb8d3f68d89393641)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_c7eb5a8b55385016a6e2bd6e83b8a419)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_04b05befd80e592a8f6ab911ec001fd0)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_68eec09d3a745c2d8dd3ced0c35b13ae)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_fac48c385c2c55169d9976f266ab3e90)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_88debbc29485572f8532bd5493dde132)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_703c4762db905700b27f8b0216b8a018)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_9d0c6e20323856808761b83bbef0cb5b)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_017b575b6e8e577e973446bea890894b)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_4fa5f687806853d48882e41e0ff91d4d)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_c1d00607623050d6b840148b72d7bee5)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_0ba4a8d7b1805725b4d9a40cc49276ec)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_f3babbfc235b57a98cb3a3dad40f9943)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_f19b7d83b48c53b6af1823c03eecdaef)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_a10b37f0a1b652c096ce9c238e0cab33)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_906868414f2755e89e2740ae2403da92)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_4c1655abb49e5dceb7a654d6eb4af27c)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_0f4fdc7283a3537284b3fed07225755b)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_627fdb9247fc5d18b97a4836672c0277)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_e1a3d54c920758a2b67d707361aae87d)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_b2e7e9afec47596882c08fc1a9e7a327)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_4add7885b4185cc3911f296cf6e88bd4)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_a369177009675541b2168fad37789fa6)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_a02924ff081f552b971f5d843e52e572)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_f1f1526c302d580ebedcaea518a9eb3f)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_bfbe0cdb388b56b6a7bdcd5201aea6a1)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_54ac77d2221c5f0bbd8bb3cdfdc8ffd5)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_e7be0c7298805ddcb126c126bd12e888)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_af6c221435475d5285ec597abf91598e)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_78fd13c353e85b8c9c0dc7f7429de536)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_155a379614c551158f1bfd4bbe3aabe5)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_82a1ce8a23475f729894bc326f34f33c)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_bdf114becf205c89b8b73795b60ba12e)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_e4363a9983055156ac1412513391943c)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_ba466ed655b251a898959ad6326e7383)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_7d73a80a36335800aa2e5c80f111c6d4)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_445d642dcabe594fbe80845d128c0c64)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_caa46ac6dde859e7ba82e62ec3695100)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_665659a33d7c54a08505c31c39633872)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_bc797bcbcc3c574c93ed7891ff2ff996)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_eb2990d74d12580398d0101d8d544c64)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_596c36f9bae45efca5ac13b8364c8635)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_18332c874d3e5d8990780e1b7e39a1a2)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_317afa58d1745543bd149e2d98073e05)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_aba7960ec4c75a219a535ca0039fa841)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_e3685d25b9c7563493952f6d869d883e)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_6bd034f652f65404bdc1fa3908c83ab0)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_ff09ae8c5e6852cf94a91ea76fe4b14e)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_a8c8b79aa4075f65860792fa72e672b6(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_292154da1d6d58d2aa008a3b4c72d237(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_e9265b75048458289e045b001e90e03e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_41169ab20d0555eda492870eb5021315, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_2386e17eb2ab5d57a648aced0e0c5f3c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_077442223e9b5efebe2f1ed07b28f35f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_e6d18f4c7c02545dae4e8535b3779570, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_008c3b3de9d356c9a84ec36f970d04eb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_a4e5e1a88f1956aa901bb49fc90c1d02, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_3abf83727b285efc874b723bd42159ee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_679ce89356c45bd58986b80283bd5fb4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_7e42fa1349b251c8b14d24c82dd4e127, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_6ef007612f7956869ba557e9f44dd99a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_485d4b70ec0c51feab5661bfa7fe9650, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_6d4d12cf8acf53128915efab0e439dcb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_ca012de6298955f3aa02663daf2225d3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_d96a6cd2fbaa527a9d535c3f528595c6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_bf62f08a372f58e3896d6cb096a748ee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_2f6b0a44a40a590ab2642341455cbbea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_fd6259d90ebd5dc7ace63173e707fbf1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_d2eda7c105415ddaa96cdbb595bac4b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_6ed43c9bdcfc589c99e920d360a9e48d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_4318a697a7015363a9442130765dac97, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_bdffe6ebed4a5bcd81b4300d06e8a7ca, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_1ca23663c1bc50caba06781028e03f68, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_4aaca127af7e5aa9b545e194fdc68910, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_50b3c73480c05dc489ed59e7615a4eb6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_cd2b1c3d5ff253cdb7512979f72b4103, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_61d9f327169459c39804b665c38fed7f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_3a631c3e76755bbe84e3410e50b269d0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_2e3202937a4c5a14baf0245e808b9fb6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_8561052bc9a05cbb9b13354086b896e0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_6d78a361b1d2515195701e814fc5712f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_96a57d6125955a03b092d8d141ce7af3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_7af367406b47523fb8d3f68d89393641, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_c7eb5a8b55385016a6e2bd6e83b8a419, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_04b05befd80e592a8f6ab911ec001fd0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_68eec09d3a745c2d8dd3ced0c35b13ae, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_fac48c385c2c55169d9976f266ab3e90, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_88debbc29485572f8532bd5493dde132, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_703c4762db905700b27f8b0216b8a018, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_9d0c6e20323856808761b83bbef0cb5b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_017b575b6e8e577e973446bea890894b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_4fa5f687806853d48882e41e0ff91d4d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_c1d00607623050d6b840148b72d7bee5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_0ba4a8d7b1805725b4d9a40cc49276ec, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_f3babbfc235b57a98cb3a3dad40f9943, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_f19b7d83b48c53b6af1823c03eecdaef, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_a10b37f0a1b652c096ce9c238e0cab33, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_906868414f2755e89e2740ae2403da92, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_4c1655abb49e5dceb7a654d6eb4af27c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_0f4fdc7283a3537284b3fed07225755b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_627fdb9247fc5d18b97a4836672c0277, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_e1a3d54c920758a2b67d707361aae87d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_b2e7e9afec47596882c08fc1a9e7a327, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_4add7885b4185cc3911f296cf6e88bd4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_a369177009675541b2168fad37789fa6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_a02924ff081f552b971f5d843e52e572, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_f1f1526c302d580ebedcaea518a9eb3f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_bfbe0cdb388b56b6a7bdcd5201aea6a1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_54ac77d2221c5f0bbd8bb3cdfdc8ffd5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_e7be0c7298805ddcb126c126bd12e888, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_af6c221435475d5285ec597abf91598e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_78fd13c353e85b8c9c0dc7f7429de536, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_155a379614c551158f1bfd4bbe3aabe5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_82a1ce8a23475f729894bc326f34f33c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_bdf114becf205c89b8b73795b60ba12e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_e4363a9983055156ac1412513391943c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_ba466ed655b251a898959ad6326e7383, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_7d73a80a36335800aa2e5c80f111c6d4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_445d642dcabe594fbe80845d128c0c64, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_caa46ac6dde859e7ba82e62ec3695100, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_665659a33d7c54a08505c31c39633872, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_bc797bcbcc3c574c93ed7891ff2ff996, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_eb2990d74d12580398d0101d8d544c64, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_596c36f9bae45efca5ac13b8364c8635, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_18332c874d3e5d8990780e1b7e39a1a2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_317afa58d1745543bd149e2d98073e05, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_aba7960ec4c75a219a535ca0039fa841, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_e3685d25b9c7563493952f6d869d883e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_6bd034f652f65404bdc1fa3908c83ab0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_ff09ae8c5e6852cf94a91ea76fe4b14e, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_a8c8b79aa4075f65860792fa72e672b6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_292154da1d6d58d2aa008a3b4c72d237, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}