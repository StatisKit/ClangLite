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
    class ::clang::FunctionDecl  * (*method_pointer_e47307aec50b503dbe382b2129d0bf14)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_a7eaafc5c63a5a09b7a7bfda8f92eb35)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_a81cfdfbf2955d3cb7da292a74ab66ff)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_1b46b4cd12c7535492a8aa35ba922746)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_5d9fe7f99eaa5e1a9e87ea2fe9c69765)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_449ebe6285315fa6b073a7e26e3b23b2)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_ac214342c0f05c71b7c7a1295b0b9989)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_6f7f258cce2b5642afa8d2847c7939da)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_a07cd79b374d5176ba566e4ba2cb8fcf)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_00317e8d7a3e5a56b2c25a62e5de4bcf)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_050310a6457b5757976f7dd3383d3f2e)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_b52126d4f44d5ea6a35372c27f48e2d4)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_33e4b87e28775cfe8ae1d8a3be93d6b1)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_547c41cfc25651a88af266935dc7e1e6)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_e099a1153ff95e619f31b00642faa5ba)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_d948c4bae2495751a9dde9510ca00ea1)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_c13af74ca5e8576d8be80ab1e17fceba)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_6e436d5d3d30558fa51c18e57f99dfec)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_2c621fac8b1350bf8f5045fee800b98c)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_06d001f3914158918049759b1830fa39)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_c63f95ecb356509b83f741c0749e0ed8)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_75042cc4e62d59d78e22fe53daafedd1)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_4e07de9613d25f4f8b60979a4827b06d)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_4f2903faf49f5e7f86c00e1caa27651b)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_405cf95cfbf55ed7a8e778b23938a243)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_201faf2190e45b3299569f65b9204fb9)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_b29c7d1046e853a684f1928ab191890f)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_aa663b56fe815fb8b546c8aec9e6b594)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_149710ff672d5d5ea16c1fee3b6dae0b)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_474c3cfe736559a4b9fe936123772719)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_89bd3c9ef31c514b8773ea8942bd3bf8)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_c908b6fc5b9f544e931b2d20b40046ee)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_f5cae46e463d5c60a19284e3ab7cfaf4)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_db7a0f0e2c0b5f0ea5668b54a62f2e5b)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_5b4d5dfeab0859a38b7123dd23a32409)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_1c730552526056489f311b62d7eb55b2)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_953d006c3c945ab991e740263e4f04c8)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_518ea458473753b285522d9bc0e4d79d)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_bf74828f9b735854933e9f127aaf5189)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_0aeb473590455f18b2ea0e41ac3933a7)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_21f725cff6dd5218baaa62c2d897eb3c)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_26b2ae4295ff5c4db006bc0cb5113090)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_9c0e834a7fe953c4a16eec0d54f618a3)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_756e6f913d4d5629821e7746fd75360c)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_a1ecf34f7295549b9549cd29d7d8d9dd)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_a1f313cbe64f57e3bf59b06c2f9f9b02)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_f5f462c0d04d5470a0234d5cc784f6b3)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_ad3819a5ca61572893c9dc38f809e819)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_a0399961701353fcb21957cbcff581d1)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_0cdcb9c0647958debc5792156ee71486)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_4959aa49dbdd543eb76a5603b97a3513)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_d6385f1441df54399dda25931ffffa46)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_c62801ea7d5a533d88e881d255d862c0)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_07ab03dcee845a2e925d3e4fe85c6070)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_f6930c4f30ff5bfe82fe3dfdb369115e)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_3e039f281e785a75976ba992ce4b2370)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_f23975e0a5665e8ca8957efc6cce3c7e)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_fb2df6b0ccc35364b38d369a6454bee3)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_89540dbca867578fbf1a4105e07b9e94)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_8528caf39a5f520c95c1f9181d439325)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_7a08e22f30495aaba7a197b0dba1697a)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_fb61fed1d95d5810aa815f555c26f3d1)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_841f686a9d4654d1955f3fa978686063)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_9b8ba4b8f1d858b2af7ace213a6cac51)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_a1c8e0b4440150cfb075924419ad855f)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_7a09237ad7ab5fba80458bc217e610a7)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_6f4b57c779a8585f9d9532aaadf97e8f)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_e90de4cb7242501bacdfe8ff0bad7946)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_6fb9d486c0d658ebb6d2533c0c6c2fc8)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_7cbdb15d18575f7aa5b77412edb02810)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_e45099b000a4534ca896e28b386b6ea1)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_c8a3585b4f3a58f4972fe69f6b8e63ce)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_fdd10a7c533e547b88463a229b964b78)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_749dfeb6214e507d8117934c8c9391af)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_5706ef8cc1835fbc83570e8f942d2291)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_2b754a22227c5429abff67475da2f8fd)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_f4df43d9b003593185c817c2d6c77b75)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_4c676a589e5b5ffc8ce7d40b91fd7220)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_83553ce079d2541f8e21b8d90150f3c9)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_60f63f768a0156daad84c0600e3e08c3)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_13ade1881b9156c9937a543228d71b5f)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_6ab7b6c9cf865d0a8f657a89ab43bc14)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_3371c9a7421b5c41b4f9ead399c042f5)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_4798380248b6569cb1d27db6dc0d12ef)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_f97d7ea30c1a5c739b04a3e74648a83c(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_9f7a99b960625f469b2664ee2a85130f(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_e47307aec50b503dbe382b2129d0bf14, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_a7eaafc5c63a5a09b7a7bfda8f92eb35, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_a81cfdfbf2955d3cb7da292a74ab66ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_1b46b4cd12c7535492a8aa35ba922746, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_5d9fe7f99eaa5e1a9e87ea2fe9c69765, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_449ebe6285315fa6b073a7e26e3b23b2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_ac214342c0f05c71b7c7a1295b0b9989, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_6f7f258cce2b5642afa8d2847c7939da, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_a07cd79b374d5176ba566e4ba2cb8fcf, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_00317e8d7a3e5a56b2c25a62e5de4bcf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_050310a6457b5757976f7dd3383d3f2e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_b52126d4f44d5ea6a35372c27f48e2d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_33e4b87e28775cfe8ae1d8a3be93d6b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_547c41cfc25651a88af266935dc7e1e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_e099a1153ff95e619f31b00642faa5ba, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_d948c4bae2495751a9dde9510ca00ea1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_c13af74ca5e8576d8be80ab1e17fceba, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_6e436d5d3d30558fa51c18e57f99dfec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_2c621fac8b1350bf8f5045fee800b98c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_06d001f3914158918049759b1830fa39, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_c63f95ecb356509b83f741c0749e0ed8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_75042cc4e62d59d78e22fe53daafedd1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_4e07de9613d25f4f8b60979a4827b06d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_4f2903faf49f5e7f86c00e1caa27651b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_405cf95cfbf55ed7a8e778b23938a243, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_201faf2190e45b3299569f65b9204fb9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_b29c7d1046e853a684f1928ab191890f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_aa663b56fe815fb8b546c8aec9e6b594, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_149710ff672d5d5ea16c1fee3b6dae0b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_474c3cfe736559a4b9fe936123772719, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_89bd3c9ef31c514b8773ea8942bd3bf8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_c908b6fc5b9f544e931b2d20b40046ee, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_f5cae46e463d5c60a19284e3ab7cfaf4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_db7a0f0e2c0b5f0ea5668b54a62f2e5b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_5b4d5dfeab0859a38b7123dd23a32409, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_1c730552526056489f311b62d7eb55b2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_953d006c3c945ab991e740263e4f04c8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_518ea458473753b285522d9bc0e4d79d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_bf74828f9b735854933e9f127aaf5189, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_0aeb473590455f18b2ea0e41ac3933a7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_21f725cff6dd5218baaa62c2d897eb3c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_26b2ae4295ff5c4db006bc0cb5113090, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_9c0e834a7fe953c4a16eec0d54f618a3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_756e6f913d4d5629821e7746fd75360c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_a1ecf34f7295549b9549cd29d7d8d9dd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_a1f313cbe64f57e3bf59b06c2f9f9b02, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_f5f462c0d04d5470a0234d5cc784f6b3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_ad3819a5ca61572893c9dc38f809e819, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_a0399961701353fcb21957cbcff581d1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_0cdcb9c0647958debc5792156ee71486, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_4959aa49dbdd543eb76a5603b97a3513, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_d6385f1441df54399dda25931ffffa46, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_c62801ea7d5a533d88e881d255d862c0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_07ab03dcee845a2e925d3e4fe85c6070, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_f6930c4f30ff5bfe82fe3dfdb369115e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_3e039f281e785a75976ba992ce4b2370, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_f23975e0a5665e8ca8957efc6cce3c7e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_fb2df6b0ccc35364b38d369a6454bee3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_89540dbca867578fbf1a4105e07b9e94, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_8528caf39a5f520c95c1f9181d439325, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_7a08e22f30495aaba7a197b0dba1697a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_fb61fed1d95d5810aa815f555c26f3d1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_841f686a9d4654d1955f3fa978686063, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_9b8ba4b8f1d858b2af7ace213a6cac51, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_a1c8e0b4440150cfb075924419ad855f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_7a09237ad7ab5fba80458bc217e610a7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_6f4b57c779a8585f9d9532aaadf97e8f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_e90de4cb7242501bacdfe8ff0bad7946, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_6fb9d486c0d658ebb6d2533c0c6c2fc8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_7cbdb15d18575f7aa5b77412edb02810, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_e45099b000a4534ca896e28b386b6ea1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_c8a3585b4f3a58f4972fe69f6b8e63ce, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_fdd10a7c533e547b88463a229b964b78, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_749dfeb6214e507d8117934c8c9391af, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_5706ef8cc1835fbc83570e8f942d2291, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_2b754a22227c5429abff67475da2f8fd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_f4df43d9b003593185c817c2d6c77b75, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_4c676a589e5b5ffc8ce7d40b91fd7220, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_83553ce079d2541f8e21b8d90150f3c9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_60f63f768a0156daad84c0600e3e08c3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_13ade1881b9156c9937a543228d71b5f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_6ab7b6c9cf865d0a8f657a89ab43bc14, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_3371c9a7421b5c41b4f9ead399c042f5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_4798380248b6569cb1d27db6dc0d12ef, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_f97d7ea30c1a5c739b04a3e74648a83c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_9f7a99b960625f469b2664ee2a85130f, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}