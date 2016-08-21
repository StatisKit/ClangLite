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
    class ::clang::FunctionDecl  * (*method_pointer_3b2eaa3e9c5d5867917e41ea1ceae8cc)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_68e2bf873df45cf7ad8d3d3b07de4cf0)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_498501bcba635e728c3d3498bffc83dd)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_f2893cce5208595582503cf304adacdb)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_36fabb0bb7f3511aa6d1ffd3ec26191f)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_ca725e8ff3945e168cc129a4e619e9e7)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_d74645fb0f975223b405c478cdb35252)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_ad8d51e324b251e98fe6f59dd2180fab)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_18ea359e010552e989753a12660af6f5)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_ef2bce610e615bf9bca9bb9d9ce0dc6e)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_da7fe9fc8e0559c5989453898c13832d)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_7468e21ba276503fa5e56527b94140ad)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_ea29e64b613456ac8da747ccc81d3c24)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_90e71b03befb534b99061bb616b2c40c)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_b331dbfb9b6351908dc3291626520c83)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_980b518b22fc504e9c2547868b6d810b)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_e8296bc3e0505d86a5a7d2021f2b7d6b)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_01c469b0751a5b5fbb38da8d78d7d0c2)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_fe3fc8579ff35788af08e940d3071f96)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_4fb99965047756b29ed50198aa00d24f)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_254e42c340f35cf493db86b5d37193d5)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_9d8afb42d1e05fc8a0389a94266c57e7)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_ef482d9281395fcda314f2b33ad94fff)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_da6444f33fbb578d8af44b9027f8095d)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_05a33fc9eeb95050a61bd18065a5b396)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_2184f52104785bba95dc164d66b9c877)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_803e57d33a165b60a14a860ea54a968d)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_2e5ce04ca200520e8a640cd3cb840da0)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_74271c0d2cec5c3d8da834fe458a00ec)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_e632ebac0f8e5b739dad60876303a7ee)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_e26beb4c4e86571a8e42d41e7bf98287)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_39f6b0fc2f4153b1920b7bd5e212b958)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_dbad75689acc57b1b5fd294b3677af91)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_9baa48747f2c5142ac6bf598d4223c48)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_1a3efaedf9bd528dbb16d0f4ffb5a627)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_5544fc43aca1595c9be88d4fd806beac)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_b05ae4396ef55b00b3126d0ffa4bcf14)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_a97f4b4fc55e586eaab7d542da1d21b6)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_9334a9f9aadc590ca37037756cd3c9e6)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_09bd634d70c259958bb9477ba2e21846)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_efcf92d417ee527b9f6cefc8a01fe42b)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_f6573a7211315215a616dac1d9967349)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_46c21ea3affe5d24999297ac6098856d)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_f90aeafaea9352529c40e60281932262)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_28c6a543b90d5d0aa1845e06e4cba4fa)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_eb0dc4702f6d5d93b71a22f8dc8fd385)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_1d6f6fa2b7fb5b098b0e369f3d890c7f)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_a771ff849ff957818f3ba58b14f9e3a0)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_4d81c596b830526cb2c4ec6b6e523b53)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_3dc89fca290f5350be68f0bf0e7f9bf4)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_21bd46265e285556874e1da4be9601a9)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_52a3ca252d205e3fbeae73c7a30eee29)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_5377793aed49523293c6c824512a38d1)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_98c95212df5d59a7ab654f95a7c75ba8)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_93f65580f0f9596a83d6794d4a0e0ade)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_26fff88905575e38a3870873c3a72d22)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_216775b35353507da3805f71098525f8)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_3ea628886ae25ba185dbfb660bd218b7)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_ac714623fd785f588e398e8b1a92256c)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_126820e9458f59f58ae2587a303576d0)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_56923e336bdc5849ae1e0ee5626501af)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_41a96f69380e5ada97d8f3d6351a8220)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_c2b328b397af5893af463a86416e3efa)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_19249471ebce5e06a8349e8d149656ca)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_6a9fa832b6d85458b1585fc6383281b0)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_3a91eac217be54cd8884a511acbb15c8)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_8579bc1229df5bce8e198487d192e237)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_6406869293035752a3d3fa1dc085ac7a)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_4516f53ab68950cd88b7fcc8c58d7d30)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_15710b7eeb3a592d89e9c05db138ae13)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_6230ec530d0357e1be31e13e8d799980)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_43e1c007edbe5367a462a3c74ea2c837)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_33902215ebfd570da759107d94d36086)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_6b758f97cc2255a9b665ae7fe0a32a4d)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_64b518134c4f53679f7e5375fb5f912b)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_b4e5bde3ec20523a8598d6088b6380b6)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_adc0829ef9b45df2b865ed82bf7dc7c6)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_257c98f459575531bd90315576e41267)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_04ab65d257d65376afec1ca41cbd923e)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_4d1b1375f32251bc9a6b747551c14df3)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_467e63d025cc571486df84e405fba269(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_af101f218dfd51d1bd0908c601d1562e(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_3b2eaa3e9c5d5867917e41ea1ceae8cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_68e2bf873df45cf7ad8d3d3b07de4cf0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_498501bcba635e728c3d3498bffc83dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_f2893cce5208595582503cf304adacdb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_36fabb0bb7f3511aa6d1ffd3ec26191f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_ca725e8ff3945e168cc129a4e619e9e7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_d74645fb0f975223b405c478cdb35252, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_ad8d51e324b251e98fe6f59dd2180fab, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_18ea359e010552e989753a12660af6f5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_ef2bce610e615bf9bca9bb9d9ce0dc6e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_da7fe9fc8e0559c5989453898c13832d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_7468e21ba276503fa5e56527b94140ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_ea29e64b613456ac8da747ccc81d3c24, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_90e71b03befb534b99061bb616b2c40c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_b331dbfb9b6351908dc3291626520c83, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_980b518b22fc504e9c2547868b6d810b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_e8296bc3e0505d86a5a7d2021f2b7d6b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_01c469b0751a5b5fbb38da8d78d7d0c2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_fe3fc8579ff35788af08e940d3071f96, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_4fb99965047756b29ed50198aa00d24f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_254e42c340f35cf493db86b5d37193d5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_9d8afb42d1e05fc8a0389a94266c57e7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_ef482d9281395fcda314f2b33ad94fff, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_da6444f33fbb578d8af44b9027f8095d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_05a33fc9eeb95050a61bd18065a5b396, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_2184f52104785bba95dc164d66b9c877, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_803e57d33a165b60a14a860ea54a968d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_2e5ce04ca200520e8a640cd3cb840da0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_74271c0d2cec5c3d8da834fe458a00ec, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_e632ebac0f8e5b739dad60876303a7ee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_e26beb4c4e86571a8e42d41e7bf98287, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_39f6b0fc2f4153b1920b7bd5e212b958, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_dbad75689acc57b1b5fd294b3677af91, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_9baa48747f2c5142ac6bf598d4223c48, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_1a3efaedf9bd528dbb16d0f4ffb5a627, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_5544fc43aca1595c9be88d4fd806beac, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_b05ae4396ef55b00b3126d0ffa4bcf14, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_a97f4b4fc55e586eaab7d542da1d21b6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_9334a9f9aadc590ca37037756cd3c9e6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_09bd634d70c259958bb9477ba2e21846, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_efcf92d417ee527b9f6cefc8a01fe42b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_f6573a7211315215a616dac1d9967349, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_46c21ea3affe5d24999297ac6098856d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_f90aeafaea9352529c40e60281932262, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_28c6a543b90d5d0aa1845e06e4cba4fa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_eb0dc4702f6d5d93b71a22f8dc8fd385, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_1d6f6fa2b7fb5b098b0e369f3d890c7f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_a771ff849ff957818f3ba58b14f9e3a0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_4d81c596b830526cb2c4ec6b6e523b53, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_3dc89fca290f5350be68f0bf0e7f9bf4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_21bd46265e285556874e1da4be9601a9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_52a3ca252d205e3fbeae73c7a30eee29, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_5377793aed49523293c6c824512a38d1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_98c95212df5d59a7ab654f95a7c75ba8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_93f65580f0f9596a83d6794d4a0e0ade, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_26fff88905575e38a3870873c3a72d22, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_216775b35353507da3805f71098525f8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_3ea628886ae25ba185dbfb660bd218b7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_ac714623fd785f588e398e8b1a92256c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_126820e9458f59f58ae2587a303576d0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_56923e336bdc5849ae1e0ee5626501af, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_41a96f69380e5ada97d8f3d6351a8220, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_c2b328b397af5893af463a86416e3efa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_19249471ebce5e06a8349e8d149656ca, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_6a9fa832b6d85458b1585fc6383281b0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_3a91eac217be54cd8884a511acbb15c8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_8579bc1229df5bce8e198487d192e237, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_6406869293035752a3d3fa1dc085ac7a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_4516f53ab68950cd88b7fcc8c58d7d30, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_15710b7eeb3a592d89e9c05db138ae13, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_6230ec530d0357e1be31e13e8d799980, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_43e1c007edbe5367a462a3c74ea2c837, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_33902215ebfd570da759107d94d36086, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_6b758f97cc2255a9b665ae7fe0a32a4d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_64b518134c4f53679f7e5375fb5f912b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_b4e5bde3ec20523a8598d6088b6380b6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_adc0829ef9b45df2b865ed82bf7dc7c6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_257c98f459575531bd90315576e41267, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_04ab65d257d65376afec1ca41cbd923e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_4d1b1375f32251bc9a6b747551c14df3, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_467e63d025cc571486df84e405fba269, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_af101f218dfd51d1bd0908c601d1562e, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}