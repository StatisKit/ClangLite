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
    void  (*method_pointer_0b6c7f41f1dd570a98e3aabd69ab562d)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_510a5b14abd25bb5876e9f0d6d2faea9)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_556819aef00259d189ba12a2c2e2b17f)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_59f58d288d2c52e38b7d0bb8053b8b1a)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_3d6e04f0cf9e52e0acaca8c54b4dadf3)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_0d5b94f73a9d5c5894aca4af28c1421d)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_f73fa5e2aeaa5ed58359a9063d2e51d9)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_986a3db9a2955a75ac6384e6683169b4)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_28d6a51dc3a45b9d8d208447e00c0dbd)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_839ce83794055da5acf392c9dde03e24)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_69f4f1a4720354b39c7c56c4873f8b54)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_0050638910795546b09143f47a8aadb3)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_1a2d6d80d1c6548a9fac60021c204f4b)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_5f303160209250488b7ac91e5dc433b1)() = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_7a5ea2c436fa53ef949109731efc6751)() const = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_93f2c823cb705ed39fa609ecb88c1847)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_2ee8a97e2d4356a7893e17a84f37be91)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_35332fc22d66523ab35c4c18f4d9593a)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_d63006bce12c50e2b114ce56ace96c13)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_c4be4641125558408801f862bac3400a)() const = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_fbbe3c57b1f85dbb8f743f93b4ce8c4e)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_63ae9dbf7f5e5ab59ba7a7034dfa6f37)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_464935cff93b5610a28fc33f546fb88b)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_5cc9bbf0ab5b5169a44cd42eeb916b61)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_7d7ecb6a29575ec794b8fc5267e8c23c)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_76d46c27160f5bd983a413a23a12248d)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_48060140a0fe54118c697163df8bc915)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_4b276151687858738763bfbd61985e16)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_b23f7f399a10544888367bbbac99aa9e)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_698491c808345f52b41bbfd8ed361468)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_0688abdf9d8757e38af1df5cba26b21a)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_d9ace8d996d458f8bd6f0de7337a9bd2)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_25b726426bb55cea8b891fd50ca13a4d)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_f012605dcda55ab0825d47c4531152ac)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_bc3c0faff25453a2bbcc3252a84bca8b)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_15dd2fd5eac55073905cb60903141988)() const = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_c420c8b6dc7254348ea635a2e09b24b9)() = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_52e7b0cff0195de59920ddc17851d5d2)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_77f98f6ac17653f198c129a6d46d8e30)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_62568fb1eb0b559b9ab02fd54826a4cb)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_9d8ccbc1e251517a92462cbaa57f745e)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_c07b016a7e49538886aa19551da641ee)() = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_1301d7c0fa7b523899ba6b3a699dc004)() const = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_1f427e76467f58aabc0d219ec0e57569)() = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_5bcf630091e254ab8b33c44a822704be)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_874d4f9fe9d959889ace4130c728132a)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_73d567555cfc5ce99cc64a9d612e45ea)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_b9c070583a1f54798794e2f11a424348)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_5b860ff6cc8a5ad098f15317b1f76cde)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_5356044c81115b699565794fb674763d)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_f96e3bfd39865bab9f50d68013e6dd93)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_9e7935d6fe535074981f48675f8bb828)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_91c7b35905f051139820528ed65d0028)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_afd709f903af55059fcbff8c09948216)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_db4d07e17d6158ae99ada3e1858e1945)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_dcf9acd4b80a57ab9878978e8840fc6e)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_5bdc242a09ed515e9c2fbbeb39f48513)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_fa926b49574d512eb1dcb058f511b272)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_a5498166fd985058b2144db35e40654d)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_1e118e22a58759dcb0d2c01e1f370a70)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_2e4a86fee2ef5af4ba3e65ec1026701b)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_b52369d4b8a254f69a451f18361ff15c)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_9aaecc61221e53209b43edc0b173a562)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_66f856b8ce6555cebbb663043d1ca1be)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_22aec74f810c55d684283aa653743f90)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_f472653241c65eefa9831d9655d4169d)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_c302e28b501d5d8e9695c9bc4ce62254)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_5fed78c9de8d54c58100f616ac5853f2)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_cab8e832df1a50c1bfd8114c1870fbd9)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_b63d7619c74e5995b175293d89c4d712)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_869c0d8f9733533c884f0576da435eab)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_5c5ab2c38acd5b6ba3a9590a1b817c44)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_b18790d23b6458bca58252c42e39c852)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_75c55b2945015ea79841b45d9c31fdcf)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_f43fb267b1985ca192949d4581237751)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_ab81d3cf025d591993c10c1aa93d3892)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_2f7433f3f38f5b619911a4c1f386a5cc)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_76d877ccc17053f2be4efa5707ffcb2c)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_dd2e94d0d3105c8897aeb4dd3bed7374)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_db18521eea225ba693e68dfbbfc4842e)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_e3390f75338650ab9937f375e7ab0ed7)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_5d5e6df23caa57e0a906ac3b1643af98)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_18dcede8539e5eb3a32966d09afda714)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_3e937b92f694593cbf396f49fcae755f)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_ec93cf3669db5358ba2c7242c331acef(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_0b6c7f41f1dd570a98e3aabd69ab562d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_510a5b14abd25bb5876e9f0d6d2faea9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_556819aef00259d189ba12a2c2e2b17f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_59f58d288d2c52e38b7d0bb8053b8b1a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_3d6e04f0cf9e52e0acaca8c54b4dadf3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_0d5b94f73a9d5c5894aca4af28c1421d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_f73fa5e2aeaa5ed58359a9063d2e51d9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_986a3db9a2955a75ac6384e6683169b4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_28d6a51dc3a45b9d8d208447e00c0dbd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_839ce83794055da5acf392c9dde03e24, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_69f4f1a4720354b39c7c56c4873f8b54, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_0050638910795546b09143f47a8aadb3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_1a2d6d80d1c6548a9fac60021c204f4b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_5f303160209250488b7ac91e5dc433b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_7a5ea2c436fa53ef949109731efc6751, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_93f2c823cb705ed39fa609ecb88c1847, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_2ee8a97e2d4356a7893e17a84f37be91, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_35332fc22d66523ab35c4c18f4d9593a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_d63006bce12c50e2b114ce56ace96c13, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_c4be4641125558408801f862bac3400a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_fbbe3c57b1f85dbb8f743f93b4ce8c4e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_63ae9dbf7f5e5ab59ba7a7034dfa6f37, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_464935cff93b5610a28fc33f546fb88b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_5cc9bbf0ab5b5169a44cd42eeb916b61, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_7d7ecb6a29575ec794b8fc5267e8c23c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_76d46c27160f5bd983a413a23a12248d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_48060140a0fe54118c697163df8bc915, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_4b276151687858738763bfbd61985e16, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_b23f7f399a10544888367bbbac99aa9e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_698491c808345f52b41bbfd8ed361468, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_0688abdf9d8757e38af1df5cba26b21a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_d9ace8d996d458f8bd6f0de7337a9bd2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_25b726426bb55cea8b891fd50ca13a4d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_f012605dcda55ab0825d47c4531152ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_bc3c0faff25453a2bbcc3252a84bca8b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_15dd2fd5eac55073905cb60903141988, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_c420c8b6dc7254348ea635a2e09b24b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_52e7b0cff0195de59920ddc17851d5d2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_77f98f6ac17653f198c129a6d46d8e30, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_62568fb1eb0b559b9ab02fd54826a4cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_9d8ccbc1e251517a92462cbaa57f745e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_c07b016a7e49538886aa19551da641ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_1301d7c0fa7b523899ba6b3a699dc004, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_1f427e76467f58aabc0d219ec0e57569, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_5bcf630091e254ab8b33c44a822704be, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_874d4f9fe9d959889ace4130c728132a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_73d567555cfc5ce99cc64a9d612e45ea, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_b9c070583a1f54798794e2f11a424348, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_5b860ff6cc8a5ad098f15317b1f76cde, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_5356044c81115b699565794fb674763d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_f96e3bfd39865bab9f50d68013e6dd93, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_9e7935d6fe535074981f48675f8bb828, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_91c7b35905f051139820528ed65d0028, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_afd709f903af55059fcbff8c09948216, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_db4d07e17d6158ae99ada3e1858e1945, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_dcf9acd4b80a57ab9878978e8840fc6e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_5bdc242a09ed515e9c2fbbeb39f48513, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_fa926b49574d512eb1dcb058f511b272, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_a5498166fd985058b2144db35e40654d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_1e118e22a58759dcb0d2c01e1f370a70, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_2e4a86fee2ef5af4ba3e65ec1026701b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_b52369d4b8a254f69a451f18361ff15c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_9aaecc61221e53209b43edc0b173a562, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_66f856b8ce6555cebbb663043d1ca1be, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_22aec74f810c55d684283aa653743f90, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_f472653241c65eefa9831d9655d4169d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_c302e28b501d5d8e9695c9bc4ce62254, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_5fed78c9de8d54c58100f616ac5853f2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_cab8e832df1a50c1bfd8114c1870fbd9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_b63d7619c74e5995b175293d89c4d712, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_869c0d8f9733533c884f0576da435eab, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_5c5ab2c38acd5b6ba3a9590a1b817c44, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_b18790d23b6458bca58252c42e39c852, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_75c55b2945015ea79841b45d9c31fdcf, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_f43fb267b1985ca192949d4581237751, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_ab81d3cf025d591993c10c1aa93d3892, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_2f7433f3f38f5b619911a4c1f386a5cc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_76d877ccc17053f2be4efa5707ffcb2c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_dd2e94d0d3105c8897aeb4dd3bed7374, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_db18521eea225ba693e68dfbbfc4842e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_e3390f75338650ab9937f375e7ab0ed7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_5d5e6df23caa57e0a906ac3b1643af98, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_18dcede8539e5eb3a32966d09afda714, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_3e937b92f694593cbf396f49fcae755f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_ec93cf3669db5358ba2c7242c331acef, "");

}