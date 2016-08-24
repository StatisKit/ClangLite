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
    class ::clang::FunctionDecl  * (*method_pointer_35dabc0cbc4e59018e691809f3827745)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionDecl::CreateDeserialized;
    class ::clang::FunctionDecl  * (*method_pointer_4a250144fabb5bde9eab6c15c9c09555)(class ::clang::DeclContext  const *) = ::clang::FunctionDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_6b3ba7755ef6590088ab43ad4c179c35)(class ::clang::FunctionDecl  const *) = ::clang::FunctionDecl::castToDeclContext;
    bool  (*method_pointer_be00df886801536a9a94a96330c6b5cb)(class ::clang::Decl  const *) = ::clang::FunctionDecl::classof;
    bool  (*method_pointer_2918990d21915dd88b140a08c69e1ce6)(enum ::clang::Decl::Kind ) = ::clang::FunctionDecl::classofKind;
    bool  (::clang::FunctionDecl::*method_pointer_6c6fc04fb5bd5afbb1b06409c1372b27)() const = &::clang::FunctionDecl::doesDeclarationForceExternallyVisibleDefinition;
    bool  (::clang::FunctionDecl::*method_pointer_82b2de9bafd85dc1bae48e5812175882)() const = &::clang::FunctionDecl::doesThisDeclarationHaveABody;
    unsigned int  (::clang::FunctionDecl::*method_pointer_bae4c4ba763c547eaf2cd4107fe429ef)() const = &::clang::FunctionDecl::getBuiltinID;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_59614e700e3b514cb4ffebcb61d75dea)() const = &::clang::FunctionDecl::getCallResultType;
    class ::clang::FunctionDecl  const * (::clang::FunctionDecl::*method_pointer_6992b9c7194b55baada57b4c93ea3b00)() const = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_088820f25fd75c9b9c4e378c7ac6f0c0)() = &::clang::FunctionDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_6d27fd55549951f8b2b227b2fdeb38a8)() const = &::clang::FunctionDecl::getClassScopeSpecializationPattern;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_63311049cf6650dda802f956e76e90cc)() const = &::clang::FunctionDecl::getDescribedFunctionTemplate;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_7638bc0c2019555295b1f439b7a6d638)() const = &::clang::FunctionDecl::getInstantiatedFromMemberFunction;
    unsigned int  (::clang::FunctionDecl::*method_pointer_67f9ea79f15e55539136b33af9b56d82)() const = &::clang::FunctionDecl::getMemoryFunctionKind;
    unsigned int  (::clang::FunctionDecl::*method_pointer_874e1c4138765652988012952bcfa7b8)() const = &::clang::FunctionDecl::getMinRequiredArguments;
    unsigned int  (::clang::FunctionDecl::*method_pointer_ed2d0c9acef2509f9f5381de133e2cd1)() const = &::clang::FunctionDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::FunctionDecl::*method_pointer_c5370beb98d65da388a0b4b105ade9ff)(unsigned int ) const = &::clang::FunctionDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::FunctionDecl::*method_pointer_7c17bf7085a15cb6829df4aa411a41c1)(unsigned int ) = &::clang::FunctionDecl::getParamDecl;
    class ::clang::SourceLocation  (::clang::FunctionDecl::*method_pointer_0c7bc0eebfdc5ef18c2ea5e6f440d003)() const = &::clang::FunctionDecl::getPointOfInstantiation;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionDecl::*method_pointer_a6b2068704755e9794368b86c226da5b)() const = &::clang::FunctionDecl::getPrimaryTemplate;
    class ::clang::QualType  (::clang::FunctionDecl::*method_pointer_7f1442605e9154c5abc3bf63278a752d)() const = &::clang::FunctionDecl::getReturnType;
    class ::clang::FunctionDecl  * (::clang::FunctionDecl::*method_pointer_9071f3d965595d37acc1f9841f6a9921)() const = &::clang::FunctionDecl::getTemplateInstantiationPattern;
    class ::clang::TemplateArgumentList  const * (::clang::FunctionDecl::*method_pointer_eb68d27075cd5de385f430b66ea5c309)() const = &::clang::FunctionDecl::getTemplateSpecializationArgs;
    bool  (::clang::FunctionDecl::*method_pointer_0fce678fe5ef5cf786cfc3f16b80d170)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_5218aa5b182f5a6d9e0d0e27783cd0b4)() const = &::clang::FunctionDecl::hasBody;
    bool  (::clang::FunctionDecl::*method_pointer_c062dc13ae4152cba67d5c4c56c11974)() const = &::clang::FunctionDecl::hasImplicitReturnZero;
    bool  (::clang::FunctionDecl::*method_pointer_193d22ab7408574d98efb126326b8035)() const = &::clang::FunctionDecl::hasInheritedPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_60a90170801f56fab99002a46de8a286)() const = &::clang::FunctionDecl::hasPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_b8ca9fb17c8f5aa288cfe99faabd5b8e)() const = &::clang::FunctionDecl::hasSkippedBody;
    bool  (::clang::FunctionDecl::*method_pointer_4c96d9989e355036a096b98b8d255c70)() const = &::clang::FunctionDecl::hasTrivialBody;
    bool  (::clang::FunctionDecl::*method_pointer_3585f0edfd1b57f08d5a13dec75e812c)() const = &::clang::FunctionDecl::hasUnusedResultAttr;
    bool  (::clang::FunctionDecl::*method_pointer_9ec7eca9658b598180db8686dae541b4)() const = &::clang::FunctionDecl::hasWrittenPrototype;
    bool  (::clang::FunctionDecl::*method_pointer_648270bc11e75439a2ea965f80704025)() const = &::clang::FunctionDecl::isConstexpr;
    bool  (::clang::FunctionDecl::*method_pointer_be4d898650dd50f59ba615640f6ed8ff)() const = &::clang::FunctionDecl::isDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_88bf8fa7326351e3910a7a5700d752d4)(class ::clang::FunctionDecl  const * &) const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_14696369a0d6521dba528f2377738df4)() const = &::clang::FunctionDecl::isDefined;
    bool  (::clang::FunctionDecl::*method_pointer_e55dc729cc9c5835a025249da29ec197)() const = &::clang::FunctionDecl::isDeleted;
    bool  (::clang::FunctionDecl::*method_pointer_f1773a08859353ac9d8f0f8e97f088a3)() const = &::clang::FunctionDecl::isDeletedAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_0a304e16a8a35c44a2ca003318fa2db0)() const = &::clang::FunctionDecl::isExplicitlyDefaulted;
    bool  (::clang::FunctionDecl::*method_pointer_b1e79528225d5ee2b7a5bdb364e83166)() const = &::clang::FunctionDecl::isExternC;
    bool  (::clang::FunctionDecl::*method_pointer_201ef7abeb7150c6bc3eda2ad4fe36db)() const = &::clang::FunctionDecl::isFunctionTemplateSpecialization;
    bool  (::clang::FunctionDecl::*method_pointer_1477e1d30ae65dfb9bf27e86eecc6fd4)() const = &::clang::FunctionDecl::isGlobal;
    bool  (::clang::FunctionDecl::*method_pointer_02848e71d2355ce4865eacb9c8b230d1)() const = &::clang::FunctionDecl::isImplicitlyInstantiable;
    bool  (::clang::FunctionDecl::*method_pointer_fb69bcd661065fd1b445d39686fd4659)() const = &::clang::FunctionDecl::isInExternCContext;
    bool  (::clang::FunctionDecl::*method_pointer_e8bbf5209ffe5ff9a8a03a9e709db241)() const = &::clang::FunctionDecl::isInExternCXXContext;
    bool  (::clang::FunctionDecl::*method_pointer_3c0b5e6706bc505db4366db49350d32e)() const = &::clang::FunctionDecl::isInlineDefinitionExternallyVisible;
    bool  (::clang::FunctionDecl::*method_pointer_120b99b55c3b5de7905f08471f69110f)() const = &::clang::FunctionDecl::isInlineSpecified;
    bool  (::clang::FunctionDecl::*method_pointer_f543e3e1641f5607be7d1c046a24583c)() const = &::clang::FunctionDecl::isInlined;
    bool  (::clang::FunctionDecl::*method_pointer_32afbd0ec4c3524fbdf4748948ed4b86)() const = &::clang::FunctionDecl::isLateTemplateParsed;
    bool  (::clang::FunctionDecl::*method_pointer_d35bf5d3ade6557c8b6a0602e30469cd)() const = &::clang::FunctionDecl::isMSExternInline;
    bool  (::clang::FunctionDecl::*method_pointer_f0b582a5eb4153cb87632b9f925de62a)() const = &::clang::FunctionDecl::isMSVCRTEntryPoint;
    bool  (::clang::FunctionDecl::*method_pointer_406857c160025e85856dc36871522c4a)() const = &::clang::FunctionDecl::isMain;
    bool  (::clang::FunctionDecl::*method_pointer_be779931f5fa561a84caa07b68f8b6e4)() const = &::clang::FunctionDecl::isNoReturn;
    bool  (::clang::FunctionDecl::*method_pointer_738cb990540e530ea4bef5520e6c59af)() const = &::clang::FunctionDecl::isOutOfLine;
    bool  (::clang::FunctionDecl::*method_pointer_dd5d31c3a9de502c988db0a7a9181837)() const = &::clang::FunctionDecl::isOverloadedOperator;
    bool  (::clang::FunctionDecl::*method_pointer_65307acc711b5ae78185541072deb148)() const = &::clang::FunctionDecl::isPure;
    bool  (::clang::FunctionDecl::*method_pointer_5a2d53314ad25de48b6f20671ff2e4a3)() const = &::clang::FunctionDecl::isReplaceableGlobalAllocationFunction;
    bool  (::clang::FunctionDecl::*method_pointer_3f38eb37fde85e1e904ea126cb76c563)() const = &::clang::FunctionDecl::isReservedGlobalPlacementOperator;
    bool  (::clang::FunctionDecl::*method_pointer_d361d9316eb759858341ac04efc99f5b)() const = &::clang::FunctionDecl::isTemplateInstantiation;
    bool  (::clang::FunctionDecl::*method_pointer_af4b451ce2a9520d8ab3b3ee73ad6e7b)() const = &::clang::FunctionDecl::isThisDeclarationADefinition;
    bool  (::clang::FunctionDecl::*method_pointer_4a705db3eed150e9813cf34c982da9d5)() const = &::clang::FunctionDecl::isTrivial;
    bool  (::clang::FunctionDecl::*method_pointer_105ddb6c81a65b088ba17477e128846a)() const = &::clang::FunctionDecl::isVariadic;
    bool  (::clang::FunctionDecl::*method_pointer_01918c68dada5df9aa231cc810a15694)() const = &::clang::FunctionDecl::isVirtualAsWritten;
    unsigned int  (::clang::FunctionDecl::*method_pointer_90f65d69ec2a5344ac29abc209aaa66c)() const = &::clang::FunctionDecl::param_size;
    void  (::clang::FunctionDecl::*method_pointer_92cdf0d4e6c75bd1bef580fe0644961b)(bool ) = &::clang::FunctionDecl::setConstexpr;
    void  (::clang::FunctionDecl::*method_pointer_a4edffbb53695c76a0f835694c59f3b4)(bool ) = &::clang::FunctionDecl::setDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_5cc1cf44dbd2578d9bb5c0e431546030)(bool ) = &::clang::FunctionDecl::setDeletedAsWritten;
    void  (::clang::FunctionDecl::*method_pointer_a674fc3850e0547991bc0fab909d8efd)(class ::clang::FunctionTemplateDecl  *) = &::clang::FunctionDecl::setDescribedFunctionTemplate;
    void  (::clang::FunctionDecl::*method_pointer_23d8380cfefd51f58da17a2f672da731)(bool ) = &::clang::FunctionDecl::setExplicitlyDefaulted;
    void  (::clang::FunctionDecl::*method_pointer_9ccef2dbda87569da255f23700fa5112)(bool ) = &::clang::FunctionDecl::setHasImplicitReturnZero;
    void  (::clang::FunctionDecl::*method_pointer_7cc538b4f1e350e29bc96ebe3249166d)(bool ) = &::clang::FunctionDecl::setHasInheritedPrototype;
    void  (::clang::FunctionDecl::*method_pointer_3639ac22925c502e83e15b8f7e6d8ca0)(bool ) = &::clang::FunctionDecl::setHasSkippedBody;
    void  (::clang::FunctionDecl::*method_pointer_a5ffe5939bdc515cb80529d367632ece)() = &::clang::FunctionDecl::setImplicitlyInline;
    void  (::clang::FunctionDecl::*method_pointer_f23d97708f41582098ba7f5cc581ab7a)(bool ) = &::clang::FunctionDecl::setInlineSpecified;
    void  (::clang::FunctionDecl::*method_pointer_c2dcafe3d9355de796bff17e14b79cd8)(bool ) = &::clang::FunctionDecl::setLateTemplateParsed;
    void  (::clang::FunctionDecl::*method_pointer_5f2a07996ab85a61a2c5ede00b8a2888)(unsigned long int ) = &::clang::FunctionDecl::setLazyBody;
    void  (::clang::FunctionDecl::*method_pointer_42673841f0ad535ca4c2bdecff090805)(class ::clang::FunctionDecl  *) = &::clang::FunctionDecl::setPreviousDeclaration;
    void  (::clang::FunctionDecl::*method_pointer_0ea3d94b0d4255c8b7f415052982b1d9)(bool ) = &::clang::FunctionDecl::setPure;
    void  (::clang::FunctionDecl::*method_pointer_5fc1eee6f9dd56ff89e3790a1c0300c9)(class ::clang::SourceLocation ) = &::clang::FunctionDecl::setRangeEnd;
    void  (::clang::FunctionDecl::*method_pointer_f22f56d35c50573d9240812bdfd1c676)(bool ) = &::clang::FunctionDecl::setTrivial;
    void  (::clang::FunctionDecl::*method_pointer_33bddf538257548db525aa49ef61accd)(bool ) = &::clang::FunctionDecl::setUsesSEHTry;
    void  (::clang::FunctionDecl::*method_pointer_9012a50851cb523caef78b12a0da0feb)(bool ) = &::clang::FunctionDecl::setVirtualAsWritten;
    bool  (::clang::FunctionDecl::*method_pointer_f42f85c9fa2f5ef48357bc34ef99181a)() const = &::clang::FunctionDecl::usesSEHTry;
    struct function_group
    {
        static class ::boost::python::list  function_fb139b3d1e9e5963af9dd9ae88cf8b65(class ::clang::FunctionDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::boost::python::str  function_bbca9b39ae325de19e7cde211fafba84(class ::clang::FunctionDecl  * parameter_0)
        { return ::clanglite::get_mangling(parameter_0); }
    };
    boost::python::class_< class ::clang::FunctionDecl, autowig::HeldType< class ::clang::FunctionDecl >, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable > class_e90b60b39fbc5f209cecad897014de3b("FunctionDecl", "", boost::python::no_init);
    class_e90b60b39fbc5f209cecad897014de3b.def("create_deserialized", method_pointer_35dabc0cbc4e59018e691809f3827745, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_from_decl_context", method_pointer_4a250144fabb5bde9eab6c15c9c09555, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("cast_to_decl_context", method_pointer_6b3ba7755ef6590088ab43ad4c179c35, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof", method_pointer_be00df886801536a9a94a96330c6b5cb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("classof_kind", method_pointer_2918990d21915dd88b140a08c69e1ce6, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_declaration_force_externally_visible_definition", method_pointer_6c6fc04fb5bd5afbb1b06409c1372b27, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("does_this_declaration_have_a_body", method_pointer_82b2de9bafd85dc1bae48e5812175882, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_builtin_id", method_pointer_bae4c4ba763c547eaf2cd4107fe429ef, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_call_result_type", method_pointer_59614e700e3b514cb4ffebcb61d75dea, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_6992b9c7194b55baada57b4c93ea3b00, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_canonical_decl", method_pointer_088820f25fd75c9b9c4e378c7ac6f0c0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_class_scope_specialization_pattern", method_pointer_6d27fd55549951f8b2b227b2fdeb38a8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_described_function_template", method_pointer_63311049cf6650dda802f956e76e90cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_instantiated_from_member_function", method_pointer_7638bc0c2019555295b1f439b7a6d638, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_memory_function_kind", method_pointer_67f9ea79f15e55539136b33af9b56d82, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_min_required_arguments", method_pointer_874e1c4138765652988012952bcfa7b8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_num_params", method_pointer_ed2d0c9acef2509f9f5381de133e2cd1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_c5370beb98d65da388a0b4b105ade9ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_param_decl", method_pointer_7c17bf7085a15cb6829df4aa411a41c1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_point_of_instantiation", method_pointer_0c7bc0eebfdc5ef18c2ea5e6f440d003, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_primary_template", method_pointer_a6b2068704755e9794368b86c226da5b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_return_type", method_pointer_7f1442605e9154c5abc3bf63278a752d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_instantiation_pattern", method_pointer_9071f3d965595d37acc1f9841f6a9921, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_template_specialization_args", method_pointer_eb68d27075cd5de385f430b66ea5c309, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_0fce678fe5ef5cf786cfc3f16b80d170, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_body", method_pointer_5218aa5b182f5a6d9e0d0e27783cd0b4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_implicit_return_zero", method_pointer_c062dc13ae4152cba67d5c4c56c11974, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_inherited_prototype", method_pointer_193d22ab7408574d98efb126326b8035, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_prototype", method_pointer_60a90170801f56fab99002a46de8a286, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_skipped_body", method_pointer_b8ca9fb17c8f5aa288cfe99faabd5b8e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_trivial_body", method_pointer_4c96d9989e355036a096b98b8d255c70, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_unused_result_attr", method_pointer_3585f0edfd1b57f08d5a13dec75e812c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("has_written_prototype", method_pointer_9ec7eca9658b598180db8686dae541b4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_constexpr", method_pointer_648270bc11e75439a2ea965f80704025, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defaulted", method_pointer_be4d898650dd50f59ba615640f6ed8ff, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_88bf8fa7326351e3910a7a5700d752d4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_defined", method_pointer_14696369a0d6521dba528f2377738df4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted", method_pointer_e55dc729cc9c5835a025249da29ec197, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_deleted_as_written", method_pointer_f1773a08859353ac9d8f0f8e97f088a3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_explicitly_defaulted", method_pointer_0a304e16a8a35c44a2ca003318fa2db0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_extern_c", method_pointer_b1e79528225d5ee2b7a5bdb364e83166, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_function_template_specialization", method_pointer_201ef7abeb7150c6bc3eda2ad4fe36db, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_global", method_pointer_1477e1d30ae65dfb9bf27e86eecc6fd4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_implicitly_instantiable", method_pointer_02848e71d2355ce4865eacb9c8b230d1, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_c_context", method_pointer_fb69bcd661065fd1b445d39686fd4659, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_in_extern_cxx_context", method_pointer_e8bbf5209ffe5ff9a8a03a9e709db241, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_definition_externally_visible", method_pointer_3c0b5e6706bc505db4366db49350d32e, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inline_specified", method_pointer_120b99b55c3b5de7905f08471f69110f, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_inlined", method_pointer_f543e3e1641f5607be7d1c046a24583c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_late_template_parsed", method_pointer_32afbd0ec4c3524fbdf4748948ed4b86, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_ms_extern_inline", method_pointer_d35bf5d3ade6557c8b6a0602e30469cd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_msvcrt_entry_point", method_pointer_f0b582a5eb4153cb87632b9f925de62a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_main", method_pointer_406857c160025e85856dc36871522c4a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_no_return", method_pointer_be779931f5fa561a84caa07b68f8b6e4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_out_of_line", method_pointer_738cb990540e530ea4bef5520e6c59af, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_overloaded_operator", method_pointer_dd5d31c3a9de502c988db0a7a9181837, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_pure", method_pointer_65307acc711b5ae78185541072deb148, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_replaceable_global_allocation_function", method_pointer_5a2d53314ad25de48b6f20671ff2e4a3, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_reserved_global_placement_operator", method_pointer_3f38eb37fde85e1e904ea126cb76c563, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_template_instantiation", method_pointer_d361d9316eb759858341ac04efc99f5b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_this_declaration_a_definition", method_pointer_af4b451ce2a9520d8ab3b3ee73ad6e7b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_trivial", method_pointer_4a705db3eed150e9813cf34c982da9d5, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_variadic", method_pointer_105ddb6c81a65b088ba17477e128846a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("is_virtual_as_written", method_pointer_01918c68dada5df9aa231cc810a15694, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("param_size", method_pointer_90f65d69ec2a5344ac29abc209aaa66c, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_constexpr", method_pointer_92cdf0d4e6c75bd1bef580fe0644961b, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_defaulted", method_pointer_a4edffbb53695c76a0f835694c59f3b4, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_deleted_as_written", method_pointer_5cc1cf44dbd2578d9bb5c0e431546030, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_described_function_template", method_pointer_a674fc3850e0547991bc0fab909d8efd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_explicitly_defaulted", method_pointer_23d8380cfefd51f58da17a2f672da731, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_implicit_return_zero", method_pointer_9ccef2dbda87569da255f23700fa5112, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_inherited_prototype", method_pointer_7cc538b4f1e350e29bc96ebe3249166d, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_has_skipped_body", method_pointer_3639ac22925c502e83e15b8f7e6d8ca0, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_implicitly_inline", method_pointer_a5ffe5939bdc515cb80529d367632ece, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_inline_specified", method_pointer_f23d97708f41582098ba7f5cc581ab7a, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_late_template_parsed", method_pointer_c2dcafe3d9355de796bff17e14b79cd8, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_lazy_body", method_pointer_5f2a07996ab85a61a2c5ede00b8a2888, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_previous_declaration", method_pointer_42673841f0ad535ca4c2bdecff090805, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_pure", method_pointer_0ea3d94b0d4255c8b7f415052982b1d9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_range_end", method_pointer_5fc1eee6f9dd56ff89e3790a1c0300c9, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_trivial", method_pointer_f22f56d35c50573d9240812bdfd1c676, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_uses_seh_try", method_pointer_33bddf538257548db525aa49ef61accd, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("set_virtual_as_written", method_pointer_9012a50851cb523caef78b12a0da0feb, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("uses_seh_try", method_pointer_f42f85c9fa2f5ef48357bc34ef99181a, "");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof_kind");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("create_deserialized");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("classof");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_from_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.staticmethod("cast_to_decl_context");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_children", function_group::function_fb139b3d1e9e5963af9dd9ae88cf8b65, "");
    class_e90b60b39fbc5f209cecad897014de3b.def("get_mangling", function_group::function_bbca9b39ae325de19e7cde211fafba84, "");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}