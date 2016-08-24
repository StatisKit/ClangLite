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
    void  (*method_pointer_28d55708b01853a48c01cb9cba5f2673)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_220357d245c25b97abe3a207bd14f9a4)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_cc7dcface7595d7e9e487cc01fc417cc)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_4cfdac8fa9c05778a3b9a68ef19353fc)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_70698fa151db56dba3e6a47c0dacbec7)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_5e7c16954c1d5ac299c62a0c454b1912)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_0e83d147b2cb563c97be7ec1380642e0)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_4bb8e7842bcc5c699c58cab8e1d9cdbe)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_9421362d09c45b9195f2a5bf67d52937)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_c2cd401a2f5350d88675b72ac4c3ba9e)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_35dd5af7991c56b595384860cac37d85)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_6008d8d357045181ad0e687d6113cec4)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_1abdf51c9c2d5cd8958f9b7d3241c88e)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_325215bd6c925f9db0100d2f1519d050)() const = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_8ecff3abea8e54da988c826b9e0cf118)() = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_ed79f6e1a7f45c1d8ae74b27b36f916e)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_78b65976143d5fe6878b750ac613dae2)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_9f33926463f1576badd2c11ab271ab6d)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_8104ea5d8e8b5240996079adc1ff0452)() const = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_ea254dd039125b8cac36ba293b61f9fd)() = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_3763c013a6e4585aba443f44c6084a6f)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_a68c94cfb37f548c83a6f262498d6e6d)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_884e25d2074553dbb6477d8a4300a5f7)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_f846d8c49cfc59df8c1238caf7885266)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_b32f272806635c57afe0c0e37cae29c8)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_0322588205d25c0b89b9207891b83d21)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_71d63d30b42456af9dc4b541a56c59f4)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_86ebf3b9eb525c46819da25fe1027b5a)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_351c4408c6635b5da103a26001954dcd)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_db69020a5fa7589f821679b655ea3d8e)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_de4dca94b7a551a891a31f82634acdbf)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_bd3dce11302954ab913dd7e17e0df683)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_54aa598732725267b9dab8d4cc3321cb)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_db401e4369265c03915f20a1cc86bd23)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_05f4d4a9037d5b68a3d10e18dfce294d)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_fafcce71172159a5b421994da28b684f)() const = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_91f89eaec08f551db6a49488cfb25277)() = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_5e0bfb2cd5c35372be692f662e1c3cea)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_81602e43954f5fa2a8a10c2aaa32d3b7)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_e16fe08b65b8520492dfec32ee869196)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_7a051d5ff5ed5b959bb72c606789b289)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_8b9f623fcd86521aba34f503aec1fdd2)() = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_6df85a023a66551ca7e3747eec2ca073)() = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_feabb93625b25b41a50ef96ed19255e6)() const = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_550ceb12fc7d5279b9e1f6986bd2b5c5)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_83085d945962592f8d8fadbc44664dff)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_994ce5fd26275964ac74192703f77208)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_c13c16addbd15db389e961375e299272)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_b381a517724b5a79975956504ec9ab70)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_61ab9373e8715ee7bf9edda6f87d9dcb)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_fb6128cffb7953f69deb1398d21920c2)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_cc11c2835dcf59c4b46942be1b2a8e5c)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_21aad720b65d55e991db39a0ba646eec)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_10e488f9e980516ea58e0a4382618f3b)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_fe140dbe705754a0b4cc7959c50c651b)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_1b63ded150745077917cc16dc22ce561)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_a0589a1f44865514b315d59c48b53f0a)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_d13fa180511557c692778ee92bcc4f5b)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_e20957b64d5f5a0cb7ece0a1c58d600a)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_dd3300e78b735b13afdc3a0d5c4bdae3)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_582d13ea7faf5cc2ab68a032d953f546)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_7757db982e9c5bb8bcbe90d5d15c93c6)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_6e87c4bcc20e529c9e74cc89d48d5654)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_548e227b4b9d5c89b6b8ac2ef3a2e3f1)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_42da32a3e10a52ba8a266a227a821795)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_993a29fad1f755f08d0515be1248068a)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_95f70e1b06515af7848e6a313061b4e9)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_5ea71b3071d55fe18bbca24cf5493a66)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_5fe590ab93275a09969125ba33fad0ea)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_fcad5d73834451979874287c79dc5ab7)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_ebb0bdd3b67b52198cdf74ac45b675bf)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_e0a0b5f3f824575d9cb207df3f393ea5)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_14ab71dd7df65fe9b68604ef9b019fa6)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_a2d4f30ba9b35bf4b30fe7c3adbc5d22)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_911de1ef744a5a9b82409033834cdf67)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_2153cdc0f2525fe294bb5022c00149f2)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_eb71cf1c2f225a8997f16cca34b8f7dc)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_cfad94d81af551b48bb8e6ce98deb7b2)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_d3379a28fc325df29cd829f1b33db586)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_27784474168c5c309208abfabd3e194e)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_ffc15590a2b35107940396f401ddefc4)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_a23a1fec17b55df6b890f2cea3756268)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_09fc72e4905156d48a108bf5fb22eafb)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_224f1b81190c5b4da7a6f657c05d0668)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_3f57e8a4a3dd5e19a7efd3ad0242733e(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_28d55708b01853a48c01cb9cba5f2673, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_220357d245c25b97abe3a207bd14f9a4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_cc7dcface7595d7e9e487cc01fc417cc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_4cfdac8fa9c05778a3b9a68ef19353fc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_70698fa151db56dba3e6a47c0dacbec7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_5e7c16954c1d5ac299c62a0c454b1912, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_0e83d147b2cb563c97be7ec1380642e0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_4bb8e7842bcc5c699c58cab8e1d9cdbe, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_9421362d09c45b9195f2a5bf67d52937, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_c2cd401a2f5350d88675b72ac4c3ba9e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_35dd5af7991c56b595384860cac37d85, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_6008d8d357045181ad0e687d6113cec4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_1abdf51c9c2d5cd8958f9b7d3241c88e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_325215bd6c925f9db0100d2f1519d050, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_8ecff3abea8e54da988c826b9e0cf118, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_ed79f6e1a7f45c1d8ae74b27b36f916e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_78b65976143d5fe6878b750ac613dae2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_9f33926463f1576badd2c11ab271ab6d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_8104ea5d8e8b5240996079adc1ff0452, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_ea254dd039125b8cac36ba293b61f9fd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_3763c013a6e4585aba443f44c6084a6f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_a68c94cfb37f548c83a6f262498d6e6d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_884e25d2074553dbb6477d8a4300a5f7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_f846d8c49cfc59df8c1238caf7885266, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_b32f272806635c57afe0c0e37cae29c8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_0322588205d25c0b89b9207891b83d21, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_71d63d30b42456af9dc4b541a56c59f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_86ebf3b9eb525c46819da25fe1027b5a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_351c4408c6635b5da103a26001954dcd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_db69020a5fa7589f821679b655ea3d8e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_de4dca94b7a551a891a31f82634acdbf, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_bd3dce11302954ab913dd7e17e0df683, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_54aa598732725267b9dab8d4cc3321cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_db401e4369265c03915f20a1cc86bd23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_05f4d4a9037d5b68a3d10e18dfce294d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_fafcce71172159a5b421994da28b684f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_91f89eaec08f551db6a49488cfb25277, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_5e0bfb2cd5c35372be692f662e1c3cea, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_81602e43954f5fa2a8a10c2aaa32d3b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_e16fe08b65b8520492dfec32ee869196, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_7a051d5ff5ed5b959bb72c606789b289, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_8b9f623fcd86521aba34f503aec1fdd2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_6df85a023a66551ca7e3747eec2ca073, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_feabb93625b25b41a50ef96ed19255e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_550ceb12fc7d5279b9e1f6986bd2b5c5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_83085d945962592f8d8fadbc44664dff, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_994ce5fd26275964ac74192703f77208, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_c13c16addbd15db389e961375e299272, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_b381a517724b5a79975956504ec9ab70, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_61ab9373e8715ee7bf9edda6f87d9dcb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_fb6128cffb7953f69deb1398d21920c2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_cc11c2835dcf59c4b46942be1b2a8e5c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_21aad720b65d55e991db39a0ba646eec, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_10e488f9e980516ea58e0a4382618f3b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_fe140dbe705754a0b4cc7959c50c651b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_1b63ded150745077917cc16dc22ce561, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_a0589a1f44865514b315d59c48b53f0a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_d13fa180511557c692778ee92bcc4f5b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_e20957b64d5f5a0cb7ece0a1c58d600a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_dd3300e78b735b13afdc3a0d5c4bdae3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_582d13ea7faf5cc2ab68a032d953f546, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_7757db982e9c5bb8bcbe90d5d15c93c6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_6e87c4bcc20e529c9e74cc89d48d5654, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_548e227b4b9d5c89b6b8ac2ef3a2e3f1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_42da32a3e10a52ba8a266a227a821795, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_993a29fad1f755f08d0515be1248068a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_95f70e1b06515af7848e6a313061b4e9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_5ea71b3071d55fe18bbca24cf5493a66, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_5fe590ab93275a09969125ba33fad0ea, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_fcad5d73834451979874287c79dc5ab7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_ebb0bdd3b67b52198cdf74ac45b675bf, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_e0a0b5f3f824575d9cb207df3f393ea5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_14ab71dd7df65fe9b68604ef9b019fa6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_a2d4f30ba9b35bf4b30fe7c3adbc5d22, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_911de1ef744a5a9b82409033834cdf67, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_2153cdc0f2525fe294bb5022c00149f2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_eb71cf1c2f225a8997f16cca34b8f7dc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_cfad94d81af551b48bb8e6ce98deb7b2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_d3379a28fc325df29cd829f1b33db586, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_27784474168c5c309208abfabd3e194e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_ffc15590a2b35107940396f401ddefc4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_a23a1fec17b55df6b890f2cea3756268, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_09fc72e4905156d48a108bf5fb22eafb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_224f1b81190c5b4da7a6f657c05d0668, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_3f57e8a4a3dd5e19a7efd3ad0242733e, "");

}