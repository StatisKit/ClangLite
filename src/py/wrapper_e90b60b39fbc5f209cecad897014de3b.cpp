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
    class ::clang::FunctionDecl  * (*method_pointer_3a692b3aeeba5307b9148c31eb2b3e4f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_3b44fcc34b845a0e9061e164cec2ea65)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_c7f743d701845c3d80957c66b6a4feeb)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_487718a001d85bb6af3579349a2be5eb)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_3aaedee197115d2bb5a77a786786e487)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_ad141be374ae5616ba4a8259074dcba1)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_d5d90b5700e157468dedd1794d191fdb)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_1d5298a5505c521fa5cbaf86525511ce)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_94ec997bae1f5ff8b81c49fc024bd73a)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_8652659ae83f5229ad5ee52642799246)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_4cc795e13909536e9c3b873e7c6e4cb1)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_5c217d752d935511b0f7cfac6cdff9b2)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_744cbd0248c55f26af8a25c0f609a174)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_a4b615c88bc65712aae42c77d2a049dc)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_945daf6b06cb5a23bf39643256ae4348)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_676fdb3647a754e5bdff1a5cb0ab2904)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_fbc4a49f90285fbeb52a9a29af2a64e4)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_024a0879911e55269a5f194db3a416a2)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_b0726209d3dd5b3f97a1e884f3208d04)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_939e11d598695704a9ac718cb7a996bb)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_d7e2c9ee528c54178fceabc802066d04)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_6d0e4997b38c5c5f811287ab05677786)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_b2e359742e3b54cabd6fb9050298a5b4)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_0598eb1a4d9d56b5b016c73e3f165e62)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_0ab7d1c6309352d5aa3475f525bd3e7b)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_ffabc115c6635753a1ef7170b84c774e)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_cd5d7fd560eb5430aa1a3474042aa588)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_8324cca1ff8456789aea754ba8bec233)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_f920d89c2f70594d92e1e0deb2349ac6)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_fcba01427d66571bac160c1b01af03fe)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_bda4f4f81a7f5abcb23ea9171d697a90)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_28c5a07c5dca5e498829618efdba2377)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_41d9e30ae4a95b60920d3b02bcf8d0f8)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_651782bfe6dc5c9284c1f230d94f8b3c)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_196167a7bfed54119b3fef657c232109)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_141a8a625bd158d2b624c86b1d499224)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_c3d83a1cb98f512cbb32800f4c445c2f)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_3dec3015262252248316070dbba88afc)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_45e7746d56185d948b5940c3fc9b58be)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_47d6e378a8a252f9bb870b5bee21be1b)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_6a9bc6ce22c25881bda508d4ddbfcf1e)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_b9757babf5815b85bb258c83653e7a0d)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_8459ff84e8e25b498e6313107b0ed50b)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_9100ec461d675f1f9cdd9104e0a397d4)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_a3ca11f411fd59f49a5123f0ac0d9390)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_f6f0dd1ac1a650c8bef3db84c8363b30)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_9e0818da4b3e505e864763200d0f60a8)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_19b4c427ef3655b6bd76880e7176c3a4)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_25304101c3655e1d853b3f720a1ce408)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_4e60f8b48f4e5da18e0c361556692cef)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_d66a90d0a5895405922f5cc22f265fd2)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_d7e31286bb4253fea544a35e9e4dcf1c)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_9b35a70ca0685797a841c916370a15ab)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_934bbaa7f75f5027a181413b80fb9293)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_c477a0ebe5365d74896b9768c2e57346)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_17328b20efee539b9002f88a0b659b16)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_b6c825a3c1b154288d50cfef684f790e)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_ad66d330afa2555590b387e08ec2090e)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_08758c0532b65c15bafa33465e5a0bb5)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_bafa522603345f25908336871a271e36)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_8243bdf9b1ef548f939d143251f072ed)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_1bc031acdc2b5842af300c16034380f5)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_2d086d3f5af15f189579245ffdc9627d)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_799de2ed44c358f7b0e221b19e44efe0)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_ee3464864b305b0f94243aecdc9d193d)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_cf3bb2a8a55a5005a26514b0f0282572)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_c7bfa257151151b9b1a3088abb0db71f)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_d7039ce6721658fcadce5950d839fbbd)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_bcd1d0aeb1bd585da251b9dcc6d4b1a0)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_2482cf1d9bcb5b35aa7eb05074f169fa)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_f91143038b935ec080f4cac0e800bbfc)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_3b827561be8f59bb9476d61354bf0eb2)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_87ca6c25e5b457d2a547cf517285f012)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_cdfb40997af55d548e6f80804e0c5efc)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_688eb9e7fb4e546896868dad8a6f3034)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_0f3141f6904a52ce8d7ec63daa952c38)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_044c40d7b4305421a1d013c8d8eda2f4)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_1e9f933e92c15809a47fd81349eaefff)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_e7db94be172b53fdbb2978e6d0ba4ec3)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_d33eee3ba90c5a3486706fdff67d21eb)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_3e00aefd967454a1b4b099e4255cd738)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_1cd302140a4c5cffb767cfb77f05c844)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_1e7a164b2c6c5692a34dd851eff4c667)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_e02e2ecfddc55e239ae518cb9fdd9ca1)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_b74481b4ce515b63b4e182d199a9adbc(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_27ae765c904c5d9d98b624f0cabbcedf(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_3a692b3aeeba5307b9148c31eb2b3e4f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_3b44fcc34b845a0e9061e164cec2ea65, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_c7f743d701845c3d80957c66b6a4feeb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_487718a001d85bb6af3579349a2be5eb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_3aaedee197115d2bb5a77a786786e487, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_ad141be374ae5616ba4a8259074dcba1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_d5d90b5700e157468dedd1794d191fdb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_1d5298a5505c521fa5cbaf86525511ce, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_94ec997bae1f5ff8b81c49fc024bd73a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_8652659ae83f5229ad5ee52642799246, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_4cc795e13909536e9c3b873e7c6e4cb1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_5c217d752d935511b0f7cfac6cdff9b2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_744cbd0248c55f26af8a25c0f609a174, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_a4b615c88bc65712aae42c77d2a049dc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_945daf6b06cb5a23bf39643256ae4348, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_676fdb3647a754e5bdff1a5cb0ab2904, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_fbc4a49f90285fbeb52a9a29af2a64e4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_024a0879911e55269a5f194db3a416a2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_b0726209d3dd5b3f97a1e884f3208d04, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_939e11d598695704a9ac718cb7a996bb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_d7e2c9ee528c54178fceabc802066d04, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_6d0e4997b38c5c5f811287ab05677786, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_b2e359742e3b54cabd6fb9050298a5b4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_0598eb1a4d9d56b5b016c73e3f165e62, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_0ab7d1c6309352d5aa3475f525bd3e7b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_ffabc115c6635753a1ef7170b84c774e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_cd5d7fd560eb5430aa1a3474042aa588, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_8324cca1ff8456789aea754ba8bec233, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_f920d89c2f70594d92e1e0deb2349ac6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_fcba01427d66571bac160c1b01af03fe, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_bda4f4f81a7f5abcb23ea9171d697a90, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_28c5a07c5dca5e498829618efdba2377, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_41d9e30ae4a95b60920d3b02bcf8d0f8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_651782bfe6dc5c9284c1f230d94f8b3c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_196167a7bfed54119b3fef657c232109, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_141a8a625bd158d2b624c86b1d499224, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_c3d83a1cb98f512cbb32800f4c445c2f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_3dec3015262252248316070dbba88afc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_45e7746d56185d948b5940c3fc9b58be, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_47d6e378a8a252f9bb870b5bee21be1b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_6a9bc6ce22c25881bda508d4ddbfcf1e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_b9757babf5815b85bb258c83653e7a0d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_8459ff84e8e25b498e6313107b0ed50b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_9100ec461d675f1f9cdd9104e0a397d4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_a3ca11f411fd59f49a5123f0ac0d9390, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_f6f0dd1ac1a650c8bef3db84c8363b30, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_9e0818da4b3e505e864763200d0f60a8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_19b4c427ef3655b6bd76880e7176c3a4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_25304101c3655e1d853b3f720a1ce408, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_4e60f8b48f4e5da18e0c361556692cef, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_d66a90d0a5895405922f5cc22f265fd2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_d7e31286bb4253fea544a35e9e4dcf1c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_9b35a70ca0685797a841c916370a15ab, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_934bbaa7f75f5027a181413b80fb9293, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_c477a0ebe5365d74896b9768c2e57346, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_17328b20efee539b9002f88a0b659b16, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_b6c825a3c1b154288d50cfef684f790e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_ad66d330afa2555590b387e08ec2090e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_08758c0532b65c15bafa33465e5a0bb5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_bafa522603345f25908336871a271e36, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_8243bdf9b1ef548f939d143251f072ed, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_1bc031acdc2b5842af300c16034380f5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_2d086d3f5af15f189579245ffdc9627d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_799de2ed44c358f7b0e221b19e44efe0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_ee3464864b305b0f94243aecdc9d193d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_cf3bb2a8a55a5005a26514b0f0282572, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_c7bfa257151151b9b1a3088abb0db71f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_d7039ce6721658fcadce5950d839fbbd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_bcd1d0aeb1bd585da251b9dcc6d4b1a0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_2482cf1d9bcb5b35aa7eb05074f169fa, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_f91143038b935ec080f4cac0e800bbfc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_3b827561be8f59bb9476d61354bf0eb2, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_87ca6c25e5b457d2a547cf517285f012, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_cdfb40997af55d548e6f80804e0c5efc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_688eb9e7fb4e546896868dad8a6f3034, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_0f3141f6904a52ce8d7ec63daa952c38, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_044c40d7b4305421a1d013c8d8eda2f4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_1e9f933e92c15809a47fd81349eaefff, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_e7db94be172b53fdbb2978e6d0ba4ec3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_d33eee3ba90c5a3486706fdff67d21eb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_3e00aefd967454a1b4b099e4255cd738, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_1cd302140a4c5cffb767cfb77f05c844, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_1e7a164b2c6c5692a34dd851eff4c667, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_e02e2ecfddc55e239ae518cb9fdd9ca1, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_b74481b4ce515b63b4e182d199a9adbc, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_27ae765c904c5d9d98b624f0cabbcedf, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}