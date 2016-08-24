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
    void  (*method_pointer_50c51b3a0fe0562a8329ecb4950a7a62)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_b7a417a02b1a588b902d1f445db91a56)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_207d699f0e695400ab216bd5fd7324bd)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_d5cf5b3f8af959a299a2c34afeb05818)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_dff11851f9d85056a32845517bbb5142)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_2aff74221f8359faa76390b5274c65ad)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_16099608d456597287fa195df01e9100)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_89b981fe73595a27822759601bc62faa)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_eae13e79c4fb5f70b7c0dcbcdf63399c)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_2a92d6fc627f58f4b8210458abe88618)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_38fd51b574b2549fbb1ffac59461511d)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_4828f482194853b098c39999822d31c5)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_c19798982c755df0843c6d8fb780ab6d)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_49bd7568d6705d22bb0033c7d9c3c3af)() = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_529afa435c57566eaf01a41cacf7f97b)() const = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_dfa8cd0bc21e56db8ab5a7b023226a67)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_233cb066334253428ee1f2e945b3af11)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_a6eef94dab8b5063b05fc29d9cec3dd5)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_e4df0cc888455fb0b08b0561d1b232c2)() const = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_044ce7fc85815bafae8b54cbd7a3baca)() = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_2e8d5c5d19225c27a1d16352b7b3c93f)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_25667e9ff9395ac8af1a707cc780af7f)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_5004e3cc89f954e6b64f2d5695135d7b)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_af9a1b362ff15aef88e0bc61a8697d50)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_20171514a7bb5b25abcdba2c3e2d32c6)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_2789368a9cac5c81a5c60d8e3dedb9ed)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_288952f66ee4525eb95899eb869f3036)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_933af4af167c52ae87dbaf4081e73faa)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_5018a2432aac5fc69e00f40004f68605)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_0495619d080e542b8adf78eb4be5bf85)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_ec460b7ccac9577fa8fe5ac58e275949)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_8deab0d6b26d5faebc1577591ecaa87b)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_0603b7b3f6b3565ea76bece81ad68b93)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_d423ce3c163758bfafee422a1f36f43f)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_8fab3d4cf4d25004bdfe93a8e6e75be9)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_e8926c58fc4c57dba9170c0986760a11)() = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_be94bd8083db50ff84b4bc6595e5b593)() const = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_f87096726e1b533594737ad65c3e9993)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_280b87dbe2365580a11ffb66d6c2735e)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_af584086b07956978478576037572978)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_289e07cd32f158da93acd4dbbb19ab5b)() = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_65c4cd6a22fd5b4eacf2ba1ae2745f11)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_88c4e234b3145684b4b9118b1a5b8d13)() const = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_033712ef7f31566bb4901612e3c04899)() = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_abc79e536d2e5dbb8b64d52abf63bd34)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_986cb7af30805a2d8397e947b6077099)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_8f064dd644615cee85e1d14f374e95bd)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_7b5557088b8f544ab995c810a173a778)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_2fd89edbd18d5636934f3a68e21d296d)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_d22322697fd25c68a1ed65f5d9e8e009)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_e474760de6b95a6589e14774465ae76e)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_82d469c33b18522b8faa3621ec6e750d)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_4a5f5b8ecc3e5b998ec77d255df5fce3)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_345b1b0024d352589eabc01f44fdc6b9)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_ad7a85cc48d75bc9947b6f204a127cef)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_ae0da59bda0f5fa9a9172515d2bec659)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_959a62163e3f5082a6189cc5a9356fc3)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_dbcdbb468ea2589a89edc734b32e048a)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_4bf3ddff26e65a7aafa6b2927b547953)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_06798707c22b5a279285a45d958ce228)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_7afc1b3e8e175e9e8a8de43144bf1656)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_adb134e5d9ee5a649f13c3e3e2c4ba01)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_b9cace81c1c0561ebd0d0ea11d00fe35)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_ad72801ae9e25ea0979d7317f644fb87)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_4a1ce702003d5f2e884614736ce26bdd)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_d3d475641d9751f991299ceef342652a)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_45028737e3d45c0eb83878a1d0e55c4f)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_b0a230320c78503ea8bf80397b9a4d5a)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_e52a026ed1ad5529baaddb0631a86a12)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_59b15e5eee7358c58f12c071b5dca7a5)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_27fc578a0c035f94adb415d0c80fa722)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_7ab915eb128c502c914bd07ab63d8fbc)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_01f72bbf9c7b5a5e8ac06433833aa1c3)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_fe0f0dbb833f5e18be20d85cfbb1d448)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_64b679c0f29d57d58ad1ff81cf36eb6d)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_da4c8ceb9c605484bf1571a81fbca4af)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_1033b622114c527e98980a0bfe928010)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_ea95cdd6b2bd50a08296c39508bb943e)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_e14980de1e2d5f27b2bdc38582c1bb2d)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_4b56d6d4e0885676adf26549f0f10e69)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_894f07b1664f58f18516559ce8522b98)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_ae0e12debcd3585f9d15499480c661cc)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_3f207dd42c6256b480e2603a22ebbfdb)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_79877c6c1f215b63983567ed3225a4aa)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_e41919d3ef265868b8f4fd1e3871f136(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_50c51b3a0fe0562a8329ecb4950a7a62, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_b7a417a02b1a588b902d1f445db91a56, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_207d699f0e695400ab216bd5fd7324bd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_d5cf5b3f8af959a299a2c34afeb05818, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_dff11851f9d85056a32845517bbb5142, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_2aff74221f8359faa76390b5274c65ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_16099608d456597287fa195df01e9100, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_89b981fe73595a27822759601bc62faa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_eae13e79c4fb5f70b7c0dcbcdf63399c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_2a92d6fc627f58f4b8210458abe88618, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_38fd51b574b2549fbb1ffac59461511d, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_4828f482194853b098c39999822d31c5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_c19798982c755df0843c6d8fb780ab6d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_49bd7568d6705d22bb0033c7d9c3c3af, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_529afa435c57566eaf01a41cacf7f97b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_dfa8cd0bc21e56db8ab5a7b023226a67, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_233cb066334253428ee1f2e945b3af11, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_a6eef94dab8b5063b05fc29d9cec3dd5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_e4df0cc888455fb0b08b0561d1b232c2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_044ce7fc85815bafae8b54cbd7a3baca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_2e8d5c5d19225c27a1d16352b7b3c93f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_25667e9ff9395ac8af1a707cc780af7f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_5004e3cc89f954e6b64f2d5695135d7b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_af9a1b362ff15aef88e0bc61a8697d50, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_20171514a7bb5b25abcdba2c3e2d32c6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_2789368a9cac5c81a5c60d8e3dedb9ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_288952f66ee4525eb95899eb869f3036, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_933af4af167c52ae87dbaf4081e73faa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_5018a2432aac5fc69e00f40004f68605, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_0495619d080e542b8adf78eb4be5bf85, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_ec460b7ccac9577fa8fe5ac58e275949, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_8deab0d6b26d5faebc1577591ecaa87b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_0603b7b3f6b3565ea76bece81ad68b93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_d423ce3c163758bfafee422a1f36f43f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_8fab3d4cf4d25004bdfe93a8e6e75be9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_e8926c58fc4c57dba9170c0986760a11, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_be94bd8083db50ff84b4bc6595e5b593, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_f87096726e1b533594737ad65c3e9993, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_280b87dbe2365580a11ffb66d6c2735e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_af584086b07956978478576037572978, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_289e07cd32f158da93acd4dbbb19ab5b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_65c4cd6a22fd5b4eacf2ba1ae2745f11, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_88c4e234b3145684b4b9118b1a5b8d13, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_033712ef7f31566bb4901612e3c04899, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_abc79e536d2e5dbb8b64d52abf63bd34, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_986cb7af30805a2d8397e947b6077099, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_8f064dd644615cee85e1d14f374e95bd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_7b5557088b8f544ab995c810a173a778, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_2fd89edbd18d5636934f3a68e21d296d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_d22322697fd25c68a1ed65f5d9e8e009, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_e474760de6b95a6589e14774465ae76e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_82d469c33b18522b8faa3621ec6e750d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_4a5f5b8ecc3e5b998ec77d255df5fce3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_345b1b0024d352589eabc01f44fdc6b9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_ad7a85cc48d75bc9947b6f204a127cef, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_ae0da59bda0f5fa9a9172515d2bec659, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_959a62163e3f5082a6189cc5a9356fc3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_dbcdbb468ea2589a89edc734b32e048a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_4bf3ddff26e65a7aafa6b2927b547953, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_06798707c22b5a279285a45d958ce228, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_7afc1b3e8e175e9e8a8de43144bf1656, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_adb134e5d9ee5a649f13c3e3e2c4ba01, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_b9cace81c1c0561ebd0d0ea11d00fe35, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_ad72801ae9e25ea0979d7317f644fb87, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_4a1ce702003d5f2e884614736ce26bdd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_d3d475641d9751f991299ceef342652a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_45028737e3d45c0eb83878a1d0e55c4f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_b0a230320c78503ea8bf80397b9a4d5a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_e52a026ed1ad5529baaddb0631a86a12, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_59b15e5eee7358c58f12c071b5dca7a5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_27fc578a0c035f94adb415d0c80fa722, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_7ab915eb128c502c914bd07ab63d8fbc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_01f72bbf9c7b5a5e8ac06433833aa1c3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_fe0f0dbb833f5e18be20d85cfbb1d448, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_64b679c0f29d57d58ad1ff81cf36eb6d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_da4c8ceb9c605484bf1571a81fbca4af, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_1033b622114c527e98980a0bfe928010, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_ea95cdd6b2bd50a08296c39508bb943e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_e14980de1e2d5f27b2bdc38582c1bb2d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_4b56d6d4e0885676adf26549f0f10e69, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_894f07b1664f58f18516559ce8522b98, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_ae0e12debcd3585f9d15499480c661cc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_3f207dd42c6256b480e2603a22ebbfdb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_79877c6c1f215b63983567ed3225a4aa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_e41919d3ef265868b8f4fd1e3871f136, "");

}