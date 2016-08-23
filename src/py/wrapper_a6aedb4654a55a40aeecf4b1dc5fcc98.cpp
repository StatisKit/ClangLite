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
    void  (*method_pointer_02635a15b76f528eaf466eb82168d506)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_efa276937abf5aafbf3f3b2dfa9e8aa5)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_94a590076f505356a96af59d9948a607)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_d46f0d5c71815e82b27dd3487604cff7)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_1c708d97f3235c6391f812e790ff48c2)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_9e33bafe136350709aaaa3d5b57f6e04)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_848a09a230f357f897b746c472463501)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_07e91ae2f90d5f1987b9e80ac5f2ec21)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_8554237564c25c61af872dadb39854b6)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_af5135e89aef5e84824dfc8d7743b3dc)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_a90f037570fd550e907a17019783160f)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_66736c7b9d1752da941416324310f688)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_a2f2e165ed6e593da7a66b30246ef9a8)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_174ceb31dde3591eb3911feb1212beca)() = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_ed036545e8dd58edb61de9d791e2cbae)() const = &::clang::Decl::getAsFunction;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_963ea2c05c1c57448a09bc542eebe147)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_84a50c8e494f552e82cd928c3f8f03f2)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_f25d1c4719ed533b974bb9b8e95db376)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_6f9d78347f735025a69ab03469320359)() const = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_221f2fa80abd503184cd2d080c06ae83)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_f21f9b19518452dcb3b5669dd6e92728)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_ef4801b1fba05e94a82d09d3045e1b68)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_7e34677e264e5b7a8dd890c2218f0269)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_c98667d039f2550483cf4dec9c8d1b91)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_b0c7ea6f77ff5fd595ce50d66ef1a2a0)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_26f5c6ba24ed5deb9a5c546ab3b56d9b)() = &::clang::Decl::getLexicalDeclContext;
    unsigned int  (::clang::Decl::*method_pointer_92be0299c50859acb192af5db0ec29aa)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_6b14bf54cbc55cf28b11a3a8a2ebc3e0)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_c266728d1cbf56439b3d69491abbf76e)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_248681781c2052caaddec01761eeec1c)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_9f82155fe8735dd1a1fa1ada4a2edaa4)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_9a5694c2d246561f9b916c4eef2faf89)() const = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_c86b18a250f05b44983382b2627548a1)() = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_f97342bd6228539aa52d530169423949)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_c80462b67360557d8ef4d86f2fff8830)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_c38dd77850f658ce8273a892ebac1920)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_df47d243c6aa52368b26f2af2d2d807f)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_16d41d2e25885f8aa9628bf3c64ee9d0)() = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_736b7cf2d2b05090ae1c74413345775a)() const = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_df6faeb22f3659d5b5464fa85131b059)() = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_773964d840915ac3a34f151fafb7c3ef)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_ad8ae63cbb9356fca8070d125b021bf2)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_6e776095f93f52e6947d2fd5c3fc34af)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_13903e25bcb25404968e968057907383)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_7e0c258220b75bce854f4bf974f00aea)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_ad66722b89125937bc97c0daa3e380c7)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_cbaf152d787553c1a60450aca37af211)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_b96b7fe3a3e45662bd592ba04cc23446)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_63f12fc8bc1551a4af2bc268afe28046)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_7f65a35a03fa5645b678369bca423a7c)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_12cdf3e4692551188ddd27eac20376c3)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_1bdffaeece2c5040b5d4fa8acc077271)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_f014b22469295d2788788146ef549de1)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_d5b4c53e25be5417bd7da3d79211fa3e)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_3c113d1c23c458bda26c7eb0aef077a9)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_54cd4dfc3515516c93eb998c03da407e)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_8c332570a67d5b74bab3d006b0a58a10)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_20ae45dccbbb51ca83f47649ac047af3)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_ee094a23ca7357f1aa3ed14216063c9a)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_27a643f25425547a978c7998091dc36f)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_01eeb03bed8e5fadb3429af7d0b2889d)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_07a4961f71515b7a896b4a5d451d3c73)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_50cdb5ed4f16539fa453346d12f2cf95)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_e366e570d89154ec8612dadfc03f13fa)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_3e26ba289c865d4d9d76e4c0fb2572f5)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_c0fe97a5eafb56d394b3ccf220021b39)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_715221de86295f028ad47a9f3a90d0cc)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_baab05abc5eb5d8c970c830719db2443)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_c1c3654b061950b98604ede506379e3c)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_073d58a5926855d5a1126042cd33edb4)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_2a71e8e789945510ad9e81b3319e79fb)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_bf665dc4204053e3b4ae5f792c36a76c)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_2b8ee919d9a45e85b391a41482b9a574)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_13935e3191845c538682c5a051e23f9c)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_529de03d0cb15ebcafc5320ff2c1b11d)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_caebd43d87c95a5cb71902e15ffa717f)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_88eb59ceff975d2e9eae003e9d77d08e)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_2a8e764a2fda51639258489819af0cbe)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_9a9aab0005c354a89956ac8bc0c80370)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_c7ddf5b8460156768e86eec42cc149d6(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_02635a15b76f528eaf466eb82168d506, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_efa276937abf5aafbf3f3b2dfa9e8aa5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_94a590076f505356a96af59d9948a607, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_d46f0d5c71815e82b27dd3487604cff7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_1c708d97f3235c6391f812e790ff48c2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_9e33bafe136350709aaaa3d5b57f6e04, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_848a09a230f357f897b746c472463501, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_07e91ae2f90d5f1987b9e80ac5f2ec21, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_8554237564c25c61af872dadb39854b6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_af5135e89aef5e84824dfc8d7743b3dc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_a90f037570fd550e907a17019783160f, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_66736c7b9d1752da941416324310f688, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_a2f2e165ed6e593da7a66b30246ef9a8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_174ceb31dde3591eb3911feb1212beca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_ed036545e8dd58edb61de9d791e2cbae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_963ea2c05c1c57448a09bc542eebe147, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_84a50c8e494f552e82cd928c3f8f03f2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_f25d1c4719ed533b974bb9b8e95db376, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_6f9d78347f735025a69ab03469320359, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_221f2fa80abd503184cd2d080c06ae83, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_f21f9b19518452dcb3b5669dd6e92728, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_ef4801b1fba05e94a82d09d3045e1b68, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_7e34677e264e5b7a8dd890c2218f0269, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_c98667d039f2550483cf4dec9c8d1b91, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_b0c7ea6f77ff5fd595ce50d66ef1a2a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_26f5c6ba24ed5deb9a5c546ab3b56d9b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_92be0299c50859acb192af5db0ec29aa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_6b14bf54cbc55cf28b11a3a8a2ebc3e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_c266728d1cbf56439b3d69491abbf76e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_248681781c2052caaddec01761eeec1c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_9f82155fe8735dd1a1fa1ada4a2edaa4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_9a5694c2d246561f9b916c4eef2faf89, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_c86b18a250f05b44983382b2627548a1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_f97342bd6228539aa52d530169423949, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_c80462b67360557d8ef4d86f2fff8830, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_c38dd77850f658ce8273a892ebac1920, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_df47d243c6aa52368b26f2af2d2d807f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_16d41d2e25885f8aa9628bf3c64ee9d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_736b7cf2d2b05090ae1c74413345775a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_df6faeb22f3659d5b5464fa85131b059, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_773964d840915ac3a34f151fafb7c3ef, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_ad8ae63cbb9356fca8070d125b021bf2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_6e776095f93f52e6947d2fd5c3fc34af, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_13903e25bcb25404968e968057907383, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_7e0c258220b75bce854f4bf974f00aea, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_ad66722b89125937bc97c0daa3e380c7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_cbaf152d787553c1a60450aca37af211, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_b96b7fe3a3e45662bd592ba04cc23446, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_63f12fc8bc1551a4af2bc268afe28046, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_7f65a35a03fa5645b678369bca423a7c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_12cdf3e4692551188ddd27eac20376c3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_1bdffaeece2c5040b5d4fa8acc077271, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_f014b22469295d2788788146ef549de1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_d5b4c53e25be5417bd7da3d79211fa3e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_3c113d1c23c458bda26c7eb0aef077a9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_54cd4dfc3515516c93eb998c03da407e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_8c332570a67d5b74bab3d006b0a58a10, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_20ae45dccbbb51ca83f47649ac047af3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_ee094a23ca7357f1aa3ed14216063c9a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_27a643f25425547a978c7998091dc36f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_01eeb03bed8e5fadb3429af7d0b2889d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_07a4961f71515b7a896b4a5d451d3c73, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_50cdb5ed4f16539fa453346d12f2cf95, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_e366e570d89154ec8612dadfc03f13fa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_3e26ba289c865d4d9d76e4c0fb2572f5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_c0fe97a5eafb56d394b3ccf220021b39, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_715221de86295f028ad47a9f3a90d0cc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_baab05abc5eb5d8c970c830719db2443, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_c1c3654b061950b98604ede506379e3c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_073d58a5926855d5a1126042cd33edb4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_2a71e8e789945510ad9e81b3319e79fb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_bf665dc4204053e3b4ae5f792c36a76c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_2b8ee919d9a45e85b391a41482b9a574, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_13935e3191845c538682c5a051e23f9c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_529de03d0cb15ebcafc5320ff2c1b11d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_caebd43d87c95a5cb71902e15ffa717f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_88eb59ceff975d2e9eae003e9d77d08e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_2a8e764a2fda51639258489819af0cbe, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_9a9aab0005c354a89956ac8bc0c80370, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_c7ddf5b8460156768e86eec42cc149d6, "");

}