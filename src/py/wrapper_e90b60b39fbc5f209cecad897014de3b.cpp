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
    class ::clang::FunctionDecl  * (*method_pointer_e70fee43f768501f9b95488083e31abd)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_b5bec726e7e85e43b4b46e53742902ba)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_d1fb046c38745eb4a04e22460d507ddd)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_d5f8a04160c356f69bbd5f69d52125e2)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_a0c4cf36a8ca54e7a1991ee43b691c3d)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_e2d7ccd8731657e3b09ea7d19e237a7d)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_f9788486db185d8eb14be2c038a577b0)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_27e07175d6ba541daeb4af381bcbf00c)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_0699fe50e1685f3a97c45bf7171bb92b)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_b47f889937b055f4b9b6219400e8c500)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_e3481139828c58b4ae0d0f93ab3f4021)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_04bcb74ca51e5955a96f327474d3ee11)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_8f45eff426875a79b61c098ce0e51daf)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_1e2dfdf63306579c98b0f534d34aafd9)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_63416bd6a4875050ae2c620ff81ea676)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_8ca8079a0f875bdd8397a837860bfe1f)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_f174a8403cc254fc9bd5705e0af21ca7)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_805f7d7309265c669ace0fcdd95bfae9)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_946d112f10f5562d89b1cde71a67c864)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_0af29deb43db53629aaffb34ccc86234)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_f1e179c40f98503193ddaa757449409b)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_be67e1a11b3b5819805712af95d2ad76)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_7d5007f8f4c05624b89dfbae20ef302f)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_f7706589614d50f380e320a1f509382f)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_b5cc8bb40999524a9f9b70b474d69d7b)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_e99c11490ef452f2afc9f0a66ce7cba8)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_7ed8b8a05aec543b8f93fd81cbb51bcb)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_f607d56effb259db8b10798994ffb2a6)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_cac2605f304853ea9ed037792da6c923)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_e51a9d7f101158138cc9fc945b79e863)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_cd12cd9ce8d257f68c617a1db77a28f1)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_971d8217730e5153a9a351983907f116)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_e3e6b52c4b0d51ad9d327d8afba68249)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_688a24ed0e72567db8fad10b0f610985)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_023a6bb0cdea53f99c9d489d519fd78e)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_be8f7dd37f5d579f8dcb640060ea0531)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_69f3231884b75e72bb7d83c4c9f80b87)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_4de7c2c80df358c6962a6b0eaba65591)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_56a73c18c29a53ef91ded54f500432f5)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_2704b981037456d7acc32c96479361ab)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_72a472c8529b5d1086d36c39ef57b43b)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_dd997ca5636458a19528efad27373e70)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_ed6a33b4744e5b4b83e043a3722e3498)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_53c8d05300a7550bac60bdd933e54e62)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_1d89132dc40d589c8c96cd911a3c233b)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_da31fb27aadc538eb1e2851e09694822)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_b6dfcd52bae65bdd8771fe5126c237ce)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_0b6e6effbfca55778c87e6b4f0638906)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_577c0e113d5c5e3d927bbbf186965879)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_57ffb01557bd5c8caed61574ec31c33f)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_16c7abbf4a6e5383956d87afadb8aae7)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_56d16bd22be25e1da70291042916c836)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_edc5756e15685afda870290d5fc305d4)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_c3bff6a978915d8b9abe35fe75c0b77e)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_2a2bbb09ea45552d80a7594a075d37dd)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_e2b91a4431b252fe93138820bda935a1)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_bf255d223bb959bfb4ef029aea01b125)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_7455241bc83e500eb6473308c3675a1e)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_c7143a8e2df55943a176fbdcd91cdec5)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_a6d5b5b031dc5c76ba597a1532da4b86)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_0416db88212e5a7a92f03a73d5cdc7d0)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_4ba07c2d68635ee6a81ca1c03464ef35)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_3ae5ba1c640f5d02a5a8541829125693)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_8c06cf7f2e7657cc8c9723554b4cd889)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_a758e7e70d3b593388f2f0497206454c)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_80214f6f6e865e52b99036b648d68f9d)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_b7d6f3ab675f579c9cec18570f84fb54)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_fd4bcc741b1f5d8dbb885b5efea9e9aa)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_8971dbd8b7f25e5caf482724b229bcda)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_3506e1bea8e05531a78697654b450363)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_1d95922822b75acf8b171de9fa7843f8)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_8068a29b8c335552970936f67d912fe3)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_c64316692fff58cbbfabede8e0e3d310)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_abd80412185d5dccbb8211ae6eddc7c3)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_aa2daae334a95eca8a26475974841fab)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_ef6ea9d3139f56a7a71f51ab9aee1da3)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_daa0eb8e7489572493f06be0cc22757f)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_7889f67ae42e5669b49cad18f99aa26a)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_bbe9e815874958b9acd69663be2d4304)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_22f042cb628a59d183d3812c107f3627)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_1085394ac69f5d89ad2a415ee9d8bdc9)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_1f07fe8961e95b6b8b53ec268bcdc34b)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_1aa22ce3443554698d3f53643f568962)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_aeb8f7ca1ee154faa1136adbd92f1f5c)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_1bf22420dd125832a3cc072ecbf77e67(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_2219247897e553ed99f119b18b46c9ba(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_e70fee43f768501f9b95488083e31abd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_b5bec726e7e85e43b4b46e53742902ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_d1fb046c38745eb4a04e22460d507ddd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_d5f8a04160c356f69bbd5f69d52125e2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_a0c4cf36a8ca54e7a1991ee43b691c3d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_e2d7ccd8731657e3b09ea7d19e237a7d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_f9788486db185d8eb14be2c038a577b0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_27e07175d6ba541daeb4af381bcbf00c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_0699fe50e1685f3a97c45bf7171bb92b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_b47f889937b055f4b9b6219400e8c500, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_e3481139828c58b4ae0d0f93ab3f4021, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_04bcb74ca51e5955a96f327474d3ee11, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_8f45eff426875a79b61c098ce0e51daf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_1e2dfdf63306579c98b0f534d34aafd9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_63416bd6a4875050ae2c620ff81ea676, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_8ca8079a0f875bdd8397a837860bfe1f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_f174a8403cc254fc9bd5705e0af21ca7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_805f7d7309265c669ace0fcdd95bfae9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_946d112f10f5562d89b1cde71a67c864, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_0af29deb43db53629aaffb34ccc86234, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_f1e179c40f98503193ddaa757449409b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_be67e1a11b3b5819805712af95d2ad76, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_7d5007f8f4c05624b89dfbae20ef302f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_f7706589614d50f380e320a1f509382f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_b5cc8bb40999524a9f9b70b474d69d7b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_e99c11490ef452f2afc9f0a66ce7cba8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_7ed8b8a05aec543b8f93fd81cbb51bcb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_f607d56effb259db8b10798994ffb2a6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_cac2605f304853ea9ed037792da6c923, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_e51a9d7f101158138cc9fc945b79e863, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_cd12cd9ce8d257f68c617a1db77a28f1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_971d8217730e5153a9a351983907f116, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_e3e6b52c4b0d51ad9d327d8afba68249, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_688a24ed0e72567db8fad10b0f610985, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_023a6bb0cdea53f99c9d489d519fd78e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_be8f7dd37f5d579f8dcb640060ea0531, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_69f3231884b75e72bb7d83c4c9f80b87, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_4de7c2c80df358c6962a6b0eaba65591, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_56a73c18c29a53ef91ded54f500432f5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_2704b981037456d7acc32c96479361ab, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_72a472c8529b5d1086d36c39ef57b43b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_dd997ca5636458a19528efad27373e70, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_ed6a33b4744e5b4b83e043a3722e3498, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_53c8d05300a7550bac60bdd933e54e62, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_1d89132dc40d589c8c96cd911a3c233b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_da31fb27aadc538eb1e2851e09694822, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_b6dfcd52bae65bdd8771fe5126c237ce, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_0b6e6effbfca55778c87e6b4f0638906, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_577c0e113d5c5e3d927bbbf186965879, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_57ffb01557bd5c8caed61574ec31c33f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_16c7abbf4a6e5383956d87afadb8aae7, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_56d16bd22be25e1da70291042916c836, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_edc5756e15685afda870290d5fc305d4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_c3bff6a978915d8b9abe35fe75c0b77e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_2a2bbb09ea45552d80a7594a075d37dd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_e2b91a4431b252fe93138820bda935a1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_bf255d223bb959bfb4ef029aea01b125, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_7455241bc83e500eb6473308c3675a1e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_c7143a8e2df55943a176fbdcd91cdec5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_a6d5b5b031dc5c76ba597a1532da4b86, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_0416db88212e5a7a92f03a73d5cdc7d0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_4ba07c2d68635ee6a81ca1c03464ef35, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_3ae5ba1c640f5d02a5a8541829125693, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_8c06cf7f2e7657cc8c9723554b4cd889, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_a758e7e70d3b593388f2f0497206454c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_80214f6f6e865e52b99036b648d68f9d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_b7d6f3ab675f579c9cec18570f84fb54, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_fd4bcc741b1f5d8dbb885b5efea9e9aa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_8971dbd8b7f25e5caf482724b229bcda, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_3506e1bea8e05531a78697654b450363, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_1d95922822b75acf8b171de9fa7843f8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_8068a29b8c335552970936f67d912fe3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_c64316692fff58cbbfabede8e0e3d310, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_abd80412185d5dccbb8211ae6eddc7c3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_aa2daae334a95eca8a26475974841fab, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_ef6ea9d3139f56a7a71f51ab9aee1da3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_daa0eb8e7489572493f06be0cc22757f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_7889f67ae42e5669b49cad18f99aa26a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_bbe9e815874958b9acd69663be2d4304, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_22f042cb628a59d183d3812c107f3627, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_1085394ac69f5d89ad2a415ee9d8bdc9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_1f07fe8961e95b6b8b53ec268bcdc34b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_1aa22ce3443554698d3f53643f568962, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_aeb8f7ca1ee154faa1136adbd92f1f5c, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_1bf22420dd125832a3cc072ecbf77e67, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_2219247897e553ed99f119b18b46c9ba, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}