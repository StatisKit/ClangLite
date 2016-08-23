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
    class ::clang::FunctionDecl  * (*method_pointer_cc3954a014c85bd0ae85d46fd723111a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_b116e98fec765ede9fee5e75f902002e)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_a3afafd7ab6658fab19d57ec61f474a9)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_d6daff8dd4375ed78d6667af78f720bf)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_0d8f77b396c05528849aaf13c32774ca)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_55375bad3a4e5dbc976021b3efdba824)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_782b54a140845ac3b0e4edda6730cb4f)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_66aaf3d627505ace827adb1045b3381a)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_46800a62253559f68ef19e4e502eb507)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_6dcd1b6c93f05353845fc9af9aa58966)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_9ec95ea1945e5ddd803295ea230d3529)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_d2c7b191d55559c98fd8cb683a260ebf)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_fb26c5bf687e563493bc2515172fc6bd)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_fb947d3aa2105fdb8376bbd1a5b07644)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_142e51ff27e75d04b4f0e4487376e89d)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_578db248328d5368a5960e1a7ab1b53b)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_d0beb8fcc7ad59f88ca5cd9325497c05)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_5caa6837eabc546bb2e9727a90bb7fa6)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_94a6f3da1d94545ab8ad1af78b86f4c7)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_1d2e5897e5df581196a7d65b19f9485c)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_9e634b555e9158dca64582a1d2615555)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_f04ad84e7df2588ab5c29934bbf923cf)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_9704333e888553938e80880600d5e7a0)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_bd4be0ccd52e512faf57781e563119f2)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_3889e842c7cc53fdaa4d36e041097a16)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_6f89446dc973510d8758843aa55818e5)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_7a87915e698f53e0b69019e84b587c32)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_6eebe44aa87c5c808cc08154c6355541)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_c716dc0486d754faae04c0fc83113765)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_6affc9dacda75c058d468d2f46d2c3fb)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_d8326f5c4e8d59968dfd0be966eb4178)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_54c82de906af5f46b33cd4299c11ff41)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_231a98c2e87a5034ac5357fbef4f91dd)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_b2b65cd4ea6652c9baacaa3d7a460806)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_9caa31c710d05233b9d68e65e2b69767)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_68d510e549615ebf98ab8ce32aed6102)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_15e4158a6dc7556abdecbe61bfa0e30a)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_0c831bb451385d0ca15e0fd3b54abf69)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_83be6a980094527f9751e083d14301c3)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_f6c73e6a8a5e5037b80eaf0c127ecfba)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_9619210f0a3c519589940cb9a2eae518)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_2262ad766943560cbf22d6f11ca36059)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_cdd9dc9aadc25673abcda56784ab8baf)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_3b986e57cf765321926cb16ddb0bc869)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_227ee52dcb2356f7af01183425d07d46)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_b3640e1d13d558058b387c1169659f86)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_2300460f5d9c5a45ae14f333f09b524a)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_44e2e56af1485f5094e8e9c55f127f4d)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_d324599390535903883ff7b844d0ed07)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_d28c785fb3eb5c5fa4b68174900eb2e0)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_e3a1b6dc7faf5c56a23d5c4c5f6857cc)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_3a9289b8747e5633b39a757b772cabcc)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_0888ad1a8ff5566cbe25b0eb94870200)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_da9ecc256a0b5e07976a5856fa716db1)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_e527ffea224654f1b7a18fff8feec4e3)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_9237b880af0e5e45b59890d69c5bd7af)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_0e30b216f3aa56448c8ad61586591dfd)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_03f8503adbcf51c98062b640007b6109)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_d8f3e5399d4456a5b300557f2176eb9a)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_aff690dc65445e738aa61b33fff115f0)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_cf306dd9ddb2549294c4cc06033eb5f3)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_00fa4fc05eee54218f5360e646065942)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_a93a7663165650eea639ab00456fe3c9)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_cbc588bb56235b49a6829cf5cc5a02dc)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_1e94fcd004fe58e79d4922cb7e77fa34)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_617ec797e5b150dbaeeafff1fad11e3c)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_10feb8fa64b05cf086824fe2e6a6223c)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_a21b9fa020f55403baaa2d3292230c54)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_fa83901bf0025d60a4d0aec9a9875f7e)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_87701084d7125aec957ed36995804cb7)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_3516cb2f8257594aa6e888e8773a78cb)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_6b40cb1302a15a298b62371f573ab54e)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_1b41f2ca4d2c580cbd3cddd2a0aa3533)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_f053f07ab8485df3b068a4c3b3ed8694)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_ea79ba93f77a5284882f36a0ff31a5df)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_57e13592f6365353890a0c32a9989c05)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_7c8b1eb265bc5b50bed70934be13a3a1)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_671424f8c44d5a61bc5121542fa74feb)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_aef69f701d965d269ea9c399e13b1e3d)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_48eb45403e1159588419a1a1ecd0fae4)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_845e3c28ed2a5a6a8a4d1bb8438e6c43)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_e89190b05f5e5c72bd478c628b694496)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_058469f4a5835417a19fa927eab2f8e7(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_3f4a9e8cb93b5df0a955e858a8c7eb51(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_cc3954a014c85bd0ae85d46fd723111a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_b116e98fec765ede9fee5e75f902002e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_a3afafd7ab6658fab19d57ec61f474a9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_d6daff8dd4375ed78d6667af78f720bf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_0d8f77b396c05528849aaf13c32774ca, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_55375bad3a4e5dbc976021b3efdba824, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_782b54a140845ac3b0e4edda6730cb4f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_66aaf3d627505ace827adb1045b3381a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_46800a62253559f68ef19e4e502eb507, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_6dcd1b6c93f05353845fc9af9aa58966, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_9ec95ea1945e5ddd803295ea230d3529, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_d2c7b191d55559c98fd8cb683a260ebf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_fb26c5bf687e563493bc2515172fc6bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_fb947d3aa2105fdb8376bbd1a5b07644, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_142e51ff27e75d04b4f0e4487376e89d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_578db248328d5368a5960e1a7ab1b53b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_d0beb8fcc7ad59f88ca5cd9325497c05, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_5caa6837eabc546bb2e9727a90bb7fa6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_94a6f3da1d94545ab8ad1af78b86f4c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_1d2e5897e5df581196a7d65b19f9485c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_9e634b555e9158dca64582a1d2615555, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_f04ad84e7df2588ab5c29934bbf923cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_9704333e888553938e80880600d5e7a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_bd4be0ccd52e512faf57781e563119f2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_3889e842c7cc53fdaa4d36e041097a16, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_6f89446dc973510d8758843aa55818e5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_7a87915e698f53e0b69019e84b587c32, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_6eebe44aa87c5c808cc08154c6355541, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_c716dc0486d754faae04c0fc83113765, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_6affc9dacda75c058d468d2f46d2c3fb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_d8326f5c4e8d59968dfd0be966eb4178, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_54c82de906af5f46b33cd4299c11ff41, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_231a98c2e87a5034ac5357fbef4f91dd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_b2b65cd4ea6652c9baacaa3d7a460806, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_9caa31c710d05233b9d68e65e2b69767, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_68d510e549615ebf98ab8ce32aed6102, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_15e4158a6dc7556abdecbe61bfa0e30a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_0c831bb451385d0ca15e0fd3b54abf69, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_83be6a980094527f9751e083d14301c3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_f6c73e6a8a5e5037b80eaf0c127ecfba, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_9619210f0a3c519589940cb9a2eae518, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_2262ad766943560cbf22d6f11ca36059, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_cdd9dc9aadc25673abcda56784ab8baf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_3b986e57cf765321926cb16ddb0bc869, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_227ee52dcb2356f7af01183425d07d46, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_b3640e1d13d558058b387c1169659f86, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_2300460f5d9c5a45ae14f333f09b524a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_44e2e56af1485f5094e8e9c55f127f4d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_d324599390535903883ff7b844d0ed07, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_d28c785fb3eb5c5fa4b68174900eb2e0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_e3a1b6dc7faf5c56a23d5c4c5f6857cc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_3a9289b8747e5633b39a757b772cabcc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_0888ad1a8ff5566cbe25b0eb94870200, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_da9ecc256a0b5e07976a5856fa716db1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_e527ffea224654f1b7a18fff8feec4e3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_9237b880af0e5e45b59890d69c5bd7af, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_0e30b216f3aa56448c8ad61586591dfd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_03f8503adbcf51c98062b640007b6109, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_d8f3e5399d4456a5b300557f2176eb9a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_aff690dc65445e738aa61b33fff115f0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_cf306dd9ddb2549294c4cc06033eb5f3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_00fa4fc05eee54218f5360e646065942, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_a93a7663165650eea639ab00456fe3c9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_cbc588bb56235b49a6829cf5cc5a02dc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_1e94fcd004fe58e79d4922cb7e77fa34, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_617ec797e5b150dbaeeafff1fad11e3c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_10feb8fa64b05cf086824fe2e6a6223c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_a21b9fa020f55403baaa2d3292230c54, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_fa83901bf0025d60a4d0aec9a9875f7e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_87701084d7125aec957ed36995804cb7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_3516cb2f8257594aa6e888e8773a78cb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_6b40cb1302a15a298b62371f573ab54e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_1b41f2ca4d2c580cbd3cddd2a0aa3533, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_f053f07ab8485df3b068a4c3b3ed8694, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_ea79ba93f77a5284882f36a0ff31a5df, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_57e13592f6365353890a0c32a9989c05, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_7c8b1eb265bc5b50bed70934be13a3a1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_671424f8c44d5a61bc5121542fa74feb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_aef69f701d965d269ea9c399e13b1e3d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_48eb45403e1159588419a1a1ecd0fae4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_845e3c28ed2a5a6a8a4d1bb8438e6c43, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_e89190b05f5e5c72bd478c628b694496, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_058469f4a5835417a19fa927eab2f8e7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_3f4a9e8cb93b5df0a955e858a8c7eb51, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}