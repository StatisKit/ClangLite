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
    void  (*method_pointer_2509cba7d65754aebda552848b9cb0bf)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_33d943681e05548f8e4a3192381e500a)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_fc9feb2f779256f4be980b670c1fdcca)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_c795bca4e9b25b93957da03fdbc215e7)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_23fce4c6a85451478185b359e22fcc15)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_c60c30c178205708ab58fdc1b9580275)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_f75a963253be576395652343a390abd9)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_a68fe1bfef465adb84846a2c042c3fa0)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_757f5e2709ee5d4d85f67675ea077c5a)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_02e1b61186415f58a5a5797ec7052a84)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_9d5cca0796a4505da771eab79aa71ecd)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_12e4de31a8515f1cb330e584869ebf2a)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_4c8d24474ab15f2297821fc9eac85871)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_4cc0c00678935951917a6b13d1a71d2e)() const = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_fd39c91e8ea5575b86148850a8dd7174)() = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_9354d345b5885e8c8a4e24df753f9e02)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_1e2332d22b9558eb89f5f9e83b0c1bfc)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_0d843d26e083539cb8d4b1bbd499db2f)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_20da5e53376f521c82700d3ae84b89b5)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_53057d692d7c538899afa933fbd80523)() const = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_f3d592c677e750e58d6321230381403d)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_13488188ce5f53ab91e66bafc5241cca)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_2df22a54411757a5a47e49f3cfcc0935)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_8e7f23a76ef354dbb7818bc7aaa25888)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_1e1517611efb5aff85b24ab23afe0352)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_83f7aed680fd50e9a99bc0399fc07a21)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_83d55ab977d35673af8705fd3cab07b6)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_1f25e9a5463d5698947b3fd96481a34f)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_eb824b56be6c563f9eec4ceaefedc8bd)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_fc12acf1bed759ce855f0d2523e1e33e)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_d9925808df8359f798b771292054fa28)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_31dfedd593875f2fa472cd36629b2493)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_5f6a4938751a5a5da6d1d7bc5d3153ff)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_884e0f43a4da5e4a96e7aa3b0b536696)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_eaf2a48546d951d39b5019f98da30404)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_da32d184fb105527b95393d414af70ad)() = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_81b4692bc6ab577c879d901aac0775cf)() const = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_a4767cfaae4954998270756eb50eaf06)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_b52e9013c77b5c9aa736fbbe85e8cd12)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_ba57e3487f5c58f98bc0e58587275bb6)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_c183ef5f1dd352ca95ad646df849fd8e)() = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_42bea83e25a35ebf99cb6ff430bf5ed5)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_5c9880e96f0e5908b61c955641a351ee)() = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_73b2c90fc419587c9f8a45ea81743377)() const = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_4c4fd0ac5273563fbd202b2c80a27506)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_2b578bf1cde354a58f87d734a8bf8b44)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_8ba76867c9a859e6a4065e3545b7b4b9)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_3dd5f70f48465b8c992bc0c7faa8f5b1)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_0ed6b0f4b1385c0dbb90240c0c5a806d)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_7b03b448fa0956d58ab3920dbbd5d504)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_6c00f1b3cb935ba0a6ef64ac17301fd6)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_ea20ae9ae86356e19b565f8e86d64de9)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_7b73eb91f1325ce49024d7672d2e4e2d)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_c2eaa6f836cb5af0842cee8e492f207f)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_e0f50cec5b53598e85baa9704c4bad2f)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_674d841bdf305bcea957f9d709173d1a)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_851de68e03ce570eb461201f6640eb6f)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_0c4a10b37739543a9d6c29870975f434)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_233286a1a0b954e98272ac7ba372de62)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_5e0def49c56b5eb7a29d1baa359272fc)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_aa01d30872cf59c89b0efe3d267a2b0a)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_0bdbd25b718b5c0caf4871baceb2d767)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_b32bc1a9a6ba50a29ae3b7b3de7d2655)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_7735e284231d5f1889fa3ac7e39d5dd7)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_77ba00b0d3845f1ea58e65e729a5aa5f)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_ccf05841ed1c549c82a9044caf2cd7bb)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_d857feac4f455f69927bcb0e43ce3f06)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_01ff164fe4725ba28150f650f1526e7f)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_5ac965d8e94457389a1a99bd142cc203)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_46ae2c4160805362ae9a204920d61056)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_c96164af60a857d5a0aad5b38c926aaf)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_cbd084f07a2956018bee003f368d75a6)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_a1ba3d6ecac85139bcf36fd3c4389ce2)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_a91c52ae64b35b4bb4c845fb767342b0)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_2538fff65c3a55c988cec10df292006a)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_cdaf3d9a065c542c9ce2e826bcb25e59)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_f54f5438ae1554a0b25a07ec6ba7bb51)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_e701cab0f9a85b74975ee26608283ded)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_80a274ac02925f728d96e2405969c783)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_b011ff9681b95dd7ba0524a118ba34d0)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_e7304e66994c54ef8d6d75e6ab157e63)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_62e183da1f9250babef25f39415bb56b)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_5934b4cfb2ec5ca18a26cb6a773cad35)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_dd326048d71853d5be988414d24340a3)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_f98b162f19bf55f2addb0a8f3fed7c0e(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_2509cba7d65754aebda552848b9cb0bf, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_33d943681e05548f8e4a3192381e500a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_fc9feb2f779256f4be980b670c1fdcca, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_c795bca4e9b25b93957da03fdbc215e7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_23fce4c6a85451478185b359e22fcc15, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_c60c30c178205708ab58fdc1b9580275, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_f75a963253be576395652343a390abd9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_a68fe1bfef465adb84846a2c042c3fa0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_757f5e2709ee5d4d85f67675ea077c5a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_02e1b61186415f58a5a5797ec7052a84, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_9d5cca0796a4505da771eab79aa71ecd, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_12e4de31a8515f1cb330e584869ebf2a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_4c8d24474ab15f2297821fc9eac85871, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_4cc0c00678935951917a6b13d1a71d2e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_fd39c91e8ea5575b86148850a8dd7174, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_9354d345b5885e8c8a4e24df753f9e02, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_1e2332d22b9558eb89f5f9e83b0c1bfc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_0d843d26e083539cb8d4b1bbd499db2f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_20da5e53376f521c82700d3ae84b89b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_53057d692d7c538899afa933fbd80523, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_f3d592c677e750e58d6321230381403d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_13488188ce5f53ab91e66bafc5241cca, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_2df22a54411757a5a47e49f3cfcc0935, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_8e7f23a76ef354dbb7818bc7aaa25888, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_1e1517611efb5aff85b24ab23afe0352, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_83f7aed680fd50e9a99bc0399fc07a21, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_83d55ab977d35673af8705fd3cab07b6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_1f25e9a5463d5698947b3fd96481a34f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_eb824b56be6c563f9eec4ceaefedc8bd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_fc12acf1bed759ce855f0d2523e1e33e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_d9925808df8359f798b771292054fa28, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_31dfedd593875f2fa472cd36629b2493, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_5f6a4938751a5a5da6d1d7bc5d3153ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_884e0f43a4da5e4a96e7aa3b0b536696, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_eaf2a48546d951d39b5019f98da30404, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_da32d184fb105527b95393d414af70ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_81b4692bc6ab577c879d901aac0775cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_a4767cfaae4954998270756eb50eaf06, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_b52e9013c77b5c9aa736fbbe85e8cd12, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_ba57e3487f5c58f98bc0e58587275bb6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_c183ef5f1dd352ca95ad646df849fd8e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_42bea83e25a35ebf99cb6ff430bf5ed5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_5c9880e96f0e5908b61c955641a351ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_73b2c90fc419587c9f8a45ea81743377, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_4c4fd0ac5273563fbd202b2c80a27506, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_2b578bf1cde354a58f87d734a8bf8b44, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_8ba76867c9a859e6a4065e3545b7b4b9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_3dd5f70f48465b8c992bc0c7faa8f5b1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_0ed6b0f4b1385c0dbb90240c0c5a806d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_7b03b448fa0956d58ab3920dbbd5d504, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_6c00f1b3cb935ba0a6ef64ac17301fd6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_ea20ae9ae86356e19b565f8e86d64de9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_7b73eb91f1325ce49024d7672d2e4e2d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_c2eaa6f836cb5af0842cee8e492f207f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_e0f50cec5b53598e85baa9704c4bad2f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_674d841bdf305bcea957f9d709173d1a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_851de68e03ce570eb461201f6640eb6f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_0c4a10b37739543a9d6c29870975f434, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_233286a1a0b954e98272ac7ba372de62, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_5e0def49c56b5eb7a29d1baa359272fc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_aa01d30872cf59c89b0efe3d267a2b0a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_0bdbd25b718b5c0caf4871baceb2d767, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_b32bc1a9a6ba50a29ae3b7b3de7d2655, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_7735e284231d5f1889fa3ac7e39d5dd7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_77ba00b0d3845f1ea58e65e729a5aa5f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_ccf05841ed1c549c82a9044caf2cd7bb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_d857feac4f455f69927bcb0e43ce3f06, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_01ff164fe4725ba28150f650f1526e7f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_5ac965d8e94457389a1a99bd142cc203, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_46ae2c4160805362ae9a204920d61056, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_c96164af60a857d5a0aad5b38c926aaf, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_cbd084f07a2956018bee003f368d75a6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_a1ba3d6ecac85139bcf36fd3c4389ce2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_a91c52ae64b35b4bb4c845fb767342b0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_2538fff65c3a55c988cec10df292006a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_cdaf3d9a065c542c9ce2e826bcb25e59, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_f54f5438ae1554a0b25a07ec6ba7bb51, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_e701cab0f9a85b74975ee26608283ded, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_80a274ac02925f728d96e2405969c783, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_b011ff9681b95dd7ba0524a118ba34d0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_e7304e66994c54ef8d6d75e6ab157e63, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_62e183da1f9250babef25f39415bb56b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_5934b4cfb2ec5ca18a26cb6a773cad35, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_dd326048d71853d5be988414d24340a3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_f98b162f19bf55f2addb0a8f3fed7c0e, "");

}