#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_a6aedb4654a55a40aeecf4b1dc5fcc98()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (*method_pointer_b985369158f65c4789caaef4ec21a041)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_8a9ce330034d56c7b54aa9e07dc91646)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_128d8508bd1152398aab61c21b763073)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_94a399a69eea5ba091c12288d08f4c5c)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_b4e03c3aea535918a4eef2257bd5a0dd)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_3c61d55b9bdd57399efbc170e5c3328a)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_c576564e1bb55864bd4b0acf1a85e7e2)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_b01af7c918f4589c96561283349a8aee)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_e57af33771f85f51824218a0a0ef01b8)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_bbd4141d756a5bbebc1fbf9f53fe945d)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_dab1e51f759852f3bce43d7cdeda7d90)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_3938a7a82a295cfaa91f046f11e61323)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_27436e8ac99d550ab812787800df7918)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_e62f09e8c3e95afbbe3d19be3947a339)() const = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_9861838c109e544a9b46d1ab1329fa4e)() = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_99401268db2f5498b279bb2381f3fbcd)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_4e2f506a159656daa51add7ced576612)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_b35cb4eca29d5e68b4965a1fef37da2f)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_19d2c658c65f5544a913f985d940168d)() const = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_baeb8b73ffea5f8cbad38bd8150fadfb)() = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_f63244dd2f5850c1a0b314cbbcbdcfed)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_bec94973f9075c7aac1d615ac8c47ba3)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_4e20ab3417d156fe975d616bea9a9516)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_696c7f6857495759bf8f4632eecfd9fd)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_1e93c55644a7561f87d6fe2e3de7d532)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_498c94d721be5a168c3817a5040c8938)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_fa40810997b4561d9fe349a0eac71202)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_a1d303e8ec2d551f8a72e8c78f15ffd6)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_82c61c006894561b875904e18e97aada)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_f0aa3ca7c6c0562bb6c5361dff1a8209)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_ec5ee6e7955d509187c121f2377f4078)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_b928739785eb544299c39665885d6c7a)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_e5a7bf5ac1ed54dfa5cc52028a89d009)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_b8b9cbf04a215b5cad0f2609d1367465)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_c6079967aa9b5990a43ea344f362edf9)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_035ad95c25285c1692b8c19bd2e3a908)() const = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_39afcc2f8b2e5615b448f328a9c7582a)() = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_b72a226bf7a25c16b0142562e4f43167)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_259e2fe2ee3c5b0486a610ea48b8a6be)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_e9034ac2ef565c628edad07625f529f1)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_43d7ff4b52fe5ea9b9bfd59c3bad4cd7)() = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_f5afc411c2335850b67296f9e8a3b14a)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_4abb9b16a1aa5d9d86b2614d0b8e8667)() const = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_34e6626416c15242988ea0fa21b90e49)() = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_d0b9c117584b55b78ec6e536d8984ce0)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_5faeb925a0d05a3d8831e4d84681852e)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_1284974f513354e78a592e8a1d20334e)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_7bdcf6c2fd9b5161a2d85ffcb5cdc1e3)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_66b24e67b54152b98c17a20ec3350fba)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_622b2c913ed95fc89254ec62bdf19b7b)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_576817588d0053f1aef5d9d8c444427c)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_24310c8701b95e50b63c6df3c48a55d8)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_cfafa5c5dc93583e9c66178733b8135e)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_6865e8f9be9e5457b2a9e53fcb271211)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_a008aa1a5db7535f836bf9fc61ef433a)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_64099a3a11145407a88051e3b6e09a67)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_5a81ecf707565329b1ca81561c23af07)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_a25afbdbb50553beae1c99f919a5ac9f)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_21b61c9702e85b5db114fdf8810a4634)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_7bf10edbf2905feabe6b2ab04bcfc9ee)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_0f31e75682645b359506c44c559fe26b)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_407644e01fa8558c9a12daff0388f0cb)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_4d3e20e6eb0c51279ef07aa3bd3b25af)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_3a319b4483075283a138e925227b78a0)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_3768f84a64b357c598f1a5bcf480ac18)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_3ba4cec121985332bd9f950a2866e083)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_55b0d5085f1c5df289351e57a09977b0)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_b5308419ba805fd48c039678f2e383ff)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_7f33104e5ccc515e9498e8bad98e79b0)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_550b1d15e1c85852b7c64c3f89a62512)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_1e01e808e46c58f48e144b3918349938)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_0e22f529735a511b8c8a628653304a71)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_ceb1b0fc44525144985bc4f11e1f30df)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_decee86631db548fa381806299dc13ee)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_f0ac882756f35049a55f56692f63042b)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_bd4ce1f5ba205608825128ada7184f3b)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_bf5d13e1628f5a9da3df02b7dc7d0380)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_c172b5194c965bc0b2b7d2d23822b079)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_d8d9771696075df687a4a37d13d1f598)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_098e9f28da6d5a028bbe71e6e2174655)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_dd169c72c2285074839130a7ccf19ba1)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_303f315e2cdb52faab5819ad119d21ab)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_25e16d21d75c5eebb1182e1d81f46094)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_d0ffdbbe8bc85b1ea76ca36fde3f7a11)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_8c097574f529571da217c160ab2522b9(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_b985369158f65c4789caaef4ec21a041, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_8a9ce330034d56c7b54aa9e07dc91646, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_128d8508bd1152398aab61c21b763073, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_94a399a69eea5ba091c12288d08f4c5c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_b4e03c3aea535918a4eef2257bd5a0dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_3c61d55b9bdd57399efbc170e5c3328a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_c576564e1bb55864bd4b0acf1a85e7e2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_b01af7c918f4589c96561283349a8aee, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_e57af33771f85f51824218a0a0ef01b8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_bbd4141d756a5bbebc1fbf9f53fe945d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_dab1e51f759852f3bce43d7cdeda7d90, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_3938a7a82a295cfaa91f046f11e61323, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_27436e8ac99d550ab812787800df7918, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_e62f09e8c3e95afbbe3d19be3947a339, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_9861838c109e544a9b46d1ab1329fa4e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_99401268db2f5498b279bb2381f3fbcd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_4e2f506a159656daa51add7ced576612, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_b35cb4eca29d5e68b4965a1fef37da2f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_19d2c658c65f5544a913f985d940168d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_baeb8b73ffea5f8cbad38bd8150fadfb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_f63244dd2f5850c1a0b314cbbcbdcfed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_bec94973f9075c7aac1d615ac8c47ba3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_4e20ab3417d156fe975d616bea9a9516, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_696c7f6857495759bf8f4632eecfd9fd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_1e93c55644a7561f87d6fe2e3de7d532, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_498c94d721be5a168c3817a5040c8938, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_fa40810997b4561d9fe349a0eac71202, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_a1d303e8ec2d551f8a72e8c78f15ffd6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_82c61c006894561b875904e18e97aada, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_f0aa3ca7c6c0562bb6c5361dff1a8209, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_ec5ee6e7955d509187c121f2377f4078, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_b928739785eb544299c39665885d6c7a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_e5a7bf5ac1ed54dfa5cc52028a89d009, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_b8b9cbf04a215b5cad0f2609d1367465, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_c6079967aa9b5990a43ea344f362edf9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_035ad95c25285c1692b8c19bd2e3a908, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_39afcc2f8b2e5615b448f328a9c7582a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_b72a226bf7a25c16b0142562e4f43167, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_259e2fe2ee3c5b0486a610ea48b8a6be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_e9034ac2ef565c628edad07625f529f1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_43d7ff4b52fe5ea9b9bfd59c3bad4cd7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_f5afc411c2335850b67296f9e8a3b14a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_4abb9b16a1aa5d9d86b2614d0b8e8667, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_34e6626416c15242988ea0fa21b90e49, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_d0b9c117584b55b78ec6e536d8984ce0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_5faeb925a0d05a3d8831e4d84681852e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_1284974f513354e78a592e8a1d20334e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_7bdcf6c2fd9b5161a2d85ffcb5cdc1e3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_66b24e67b54152b98c17a20ec3350fba, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_622b2c913ed95fc89254ec62bdf19b7b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_576817588d0053f1aef5d9d8c444427c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_24310c8701b95e50b63c6df3c48a55d8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_cfafa5c5dc93583e9c66178733b8135e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_6865e8f9be9e5457b2a9e53fcb271211, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_a008aa1a5db7535f836bf9fc61ef433a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_64099a3a11145407a88051e3b6e09a67, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_5a81ecf707565329b1ca81561c23af07, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_a25afbdbb50553beae1c99f919a5ac9f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_21b61c9702e85b5db114fdf8810a4634, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_7bf10edbf2905feabe6b2ab04bcfc9ee, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_0f31e75682645b359506c44c559fe26b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_407644e01fa8558c9a12daff0388f0cb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_4d3e20e6eb0c51279ef07aa3bd3b25af, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_3a319b4483075283a138e925227b78a0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_3768f84a64b357c598f1a5bcf480ac18, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_3ba4cec121985332bd9f950a2866e083, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_55b0d5085f1c5df289351e57a09977b0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_b5308419ba805fd48c039678f2e383ff, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_7f33104e5ccc515e9498e8bad98e79b0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_550b1d15e1c85852b7c64c3f89a62512, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_1e01e808e46c58f48e144b3918349938, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_0e22f529735a511b8c8a628653304a71, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_ceb1b0fc44525144985bc4f11e1f30df, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_decee86631db548fa381806299dc13ee, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_f0ac882756f35049a55f56692f63042b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_bd4ce1f5ba205608825128ada7184f3b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_bf5d13e1628f5a9da3df02b7dc7d0380, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_c172b5194c965bc0b2b7d2d23822b079, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_d8d9771696075df687a4a37d13d1f598, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_098e9f28da6d5a028bbe71e6e2174655, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_dd169c72c2285074839130a7ccf19ba1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_303f315e2cdb52faab5819ad119d21ab, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_25e16d21d75c5eebb1182e1d81f46094, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_d0ffdbbe8bc85b1ea76ca36fde3f7a11, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_8c097574f529571da217c160ab2522b9, "");

}