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
    void  (*method_pointer_20a0785c4d8b5f01a48cfe823d9252f9)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_a664b0f5b81b5c82806ce81d115d95d2)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_232e00c31f6c542a935d43274a02916d)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_8d74b38a1bdb58ad9c68ef3f3d81bb1e)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_ff8aa0cb027d5900a9b05fcec71cc49d)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_1f52f5e3085957b88119e89803fb72c5)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_0af3022a2c085683828492c8be9e27da)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_fd28bbb279f054bba84975d4ede7a23c)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_8b3692b65c1556f98c1ef409dcad2b4d)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_6b26cc1a605c5da9bc2db3054b0a209b)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_29b1402522325b5da993aff7e630af29)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_ca2bf80863aa568ea2ae9f44108414eb)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_ec9c3c389e73510fbfc1d9d7433588c6)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_d7afe5d822a257fdb07d9003db62ad8e)() = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_64d73bd27f4055f0afbe36303a81a6ed)() const = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_42615685aaf950838affb60346063f2c)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_e2d57c8627195a2f880191ae6e4912a0)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_a86e53120abe5da88a08ac86895ca55a)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_3a48193b8cd75e41a960205c564c7d61)() const = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_e96c48188f9f5da0b9336679bfe5962d)() = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_faaffea793cc5aefa2f929954bc249b7)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_b2a4083326fb5cf6a98f05ad3b6c372e)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_15f7be7a64265456b61dd4b3138aede7)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_e91950c77e4a5fb28458614a252eda00)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_a808ff71f30d5c89887e74ba91ee024a)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_518331095fb55346b45c5a5858124ba6)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_1247b9c36b835a90b33a37336aadf41e)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_5c7a9aa297c2547883587562ac41f503)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_4e34ffbc2db259ec9bdd71430ca6cf9e)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_616d844d4f3a5dcb820c504f12b9966b)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_5eda1a9005b75c3498d877f66931757e)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_ff021456202e502884990657220360ea)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_2e070272dddd5897bd0683df3226769e)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_0d33e836ed4852d2a13d28cdc0fc5387)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_2468285e2632586c849c65f992075211)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_28a1ffe6f7a75ebda5514e3931ce8aa3)() = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_557dabec44b75206bdcc42535c8ade26)() const = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_bff5f86aee115e4cb4312148acb17fec)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_ce24f0a158405bc3b76bcd29ce587ccf)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_7e7b05178e7c5358a5fc05ad21e4a3a5)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_39fba579d49b56398cb4f7dfaad7d190)() = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_18432cc1850258c1810f467ac8376bcd)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_1ad4350b7ffd5cea8a9b56bad35edbd0)() = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_fe3e2b58877c5f6d8fd507a89644bc03)() const = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_780b5e2f458e5c70aa458800ac1a6e3c)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_c8fbe80163505b4081b221fdd1db9792)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_9e086c6a80765f3b8c53d183eb6a90d8)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_6367e67292845ede8d5c9e8a58c80332)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_7935e3046ea25b4bbf4c0be2ff46c27f)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_117cc3dbabac5a9b8315a9edb66b89cb)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_1914a69a0945523093681e7cbbe80c86)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_1d7a41cfdfb9517e9830c0d820081e27)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_0e77a00f4f105faca0668677b1fc0734)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_1c428d0d82c65e24b27134a1ba28f62a)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_4c13eeb46f6e586a9760a8c71b289c9b)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_8e82b31f420d5caeb48ce087d8d248f5)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_9bf47b793c4c5864a082be4fff216681)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_bb7fa1ac6d925cfdb97360acfeb4db76)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_31a0fbdf750955b6a41774c3b50dd48d)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_2f6c81bb8d7e57feabbfb7813ec65311)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_0ed70e9eb5935feba95f3fcb778c04b6)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_fe92b05da5d25e62ad45c1d0f735a64a)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_b8b69704ec5655c9bcee879831634f55)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_f1481516d24b57b4b51554745576445b)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_0e389cfbe1cb51abb4c3c6783420f300)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_4244457020045ae3a37204c63fe93662)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_d50dc27197525317aa0e9d81d63c83f3)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_98317819bfe351a78b88f54841980b54)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_8ca71f460c9354b0bd7f0737a6f301de)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_1979b0e10d255ff0904c045fb221da5e)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_51d05c1621c55b519a448a55a980eec2)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_ea6562cae8535d2c94ff1548c6d4934b)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_3f8a13af2fc359d29ee19e0f9471f2fb)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_28add3e465e15356892b947afac06b73)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_24a4f9b94b2f5b119c0db19c17fc2de2)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_d883b5be340e58009f7b7a86fa6b14fb)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_3a061894b3a25c4abdc5579b2040c558)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_ae52acd0a10d567d8786ca41de80e756)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_1af436b358db5cdb8828d2da9df2d60b)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_ce833835beb75458a3d17e554dec9afa)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_f28b901bc34c5296b66d333fad6462d3)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_75c72cc826035d2292d19d4ccb960d0a)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_17bab37ce6af5a6d9e917ff714b5c6df)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_4c08379d043453fa97e776243f90fc17)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_6db3ff9278be50289d113936535f2818(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_20a0785c4d8b5f01a48cfe823d9252f9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_a664b0f5b81b5c82806ce81d115d95d2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_232e00c31f6c542a935d43274a02916d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_8d74b38a1bdb58ad9c68ef3f3d81bb1e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_ff8aa0cb027d5900a9b05fcec71cc49d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_1f52f5e3085957b88119e89803fb72c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_0af3022a2c085683828492c8be9e27da, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_fd28bbb279f054bba84975d4ede7a23c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_8b3692b65c1556f98c1ef409dcad2b4d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_6b26cc1a605c5da9bc2db3054b0a209b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_29b1402522325b5da993aff7e630af29, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_ca2bf80863aa568ea2ae9f44108414eb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_ec9c3c389e73510fbfc1d9d7433588c6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_d7afe5d822a257fdb07d9003db62ad8e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_64d73bd27f4055f0afbe36303a81a6ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_42615685aaf950838affb60346063f2c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_e2d57c8627195a2f880191ae6e4912a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_a86e53120abe5da88a08ac86895ca55a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_3a48193b8cd75e41a960205c564c7d61, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_e96c48188f9f5da0b9336679bfe5962d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_faaffea793cc5aefa2f929954bc249b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_b2a4083326fb5cf6a98f05ad3b6c372e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_15f7be7a64265456b61dd4b3138aede7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_e91950c77e4a5fb28458614a252eda00, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_a808ff71f30d5c89887e74ba91ee024a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_518331095fb55346b45c5a5858124ba6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_1247b9c36b835a90b33a37336aadf41e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_5c7a9aa297c2547883587562ac41f503, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_4e34ffbc2db259ec9bdd71430ca6cf9e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_616d844d4f3a5dcb820c504f12b9966b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_5eda1a9005b75c3498d877f66931757e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_ff021456202e502884990657220360ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_2e070272dddd5897bd0683df3226769e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_0d33e836ed4852d2a13d28cdc0fc5387, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_2468285e2632586c849c65f992075211, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_28a1ffe6f7a75ebda5514e3931ce8aa3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_557dabec44b75206bdcc42535c8ade26, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_bff5f86aee115e4cb4312148acb17fec, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_ce24f0a158405bc3b76bcd29ce587ccf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_7e7b05178e7c5358a5fc05ad21e4a3a5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_39fba579d49b56398cb4f7dfaad7d190, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_18432cc1850258c1810f467ac8376bcd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_1ad4350b7ffd5cea8a9b56bad35edbd0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_fe3e2b58877c5f6d8fd507a89644bc03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_780b5e2f458e5c70aa458800ac1a6e3c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_c8fbe80163505b4081b221fdd1db9792, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_9e086c6a80765f3b8c53d183eb6a90d8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_6367e67292845ede8d5c9e8a58c80332, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_7935e3046ea25b4bbf4c0be2ff46c27f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_117cc3dbabac5a9b8315a9edb66b89cb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_1914a69a0945523093681e7cbbe80c86, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_1d7a41cfdfb9517e9830c0d820081e27, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_0e77a00f4f105faca0668677b1fc0734, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_1c428d0d82c65e24b27134a1ba28f62a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_4c13eeb46f6e586a9760a8c71b289c9b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_8e82b31f420d5caeb48ce087d8d248f5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_9bf47b793c4c5864a082be4fff216681, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_bb7fa1ac6d925cfdb97360acfeb4db76, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_31a0fbdf750955b6a41774c3b50dd48d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_2f6c81bb8d7e57feabbfb7813ec65311, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_0ed70e9eb5935feba95f3fcb778c04b6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_fe92b05da5d25e62ad45c1d0f735a64a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_b8b69704ec5655c9bcee879831634f55, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_f1481516d24b57b4b51554745576445b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_0e389cfbe1cb51abb4c3c6783420f300, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_4244457020045ae3a37204c63fe93662, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_d50dc27197525317aa0e9d81d63c83f3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_98317819bfe351a78b88f54841980b54, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_8ca71f460c9354b0bd7f0737a6f301de, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_1979b0e10d255ff0904c045fb221da5e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_51d05c1621c55b519a448a55a980eec2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_ea6562cae8535d2c94ff1548c6d4934b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_3f8a13af2fc359d29ee19e0f9471f2fb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_28add3e465e15356892b947afac06b73, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_24a4f9b94b2f5b119c0db19c17fc2de2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_d883b5be340e58009f7b7a86fa6b14fb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_3a061894b3a25c4abdc5579b2040c558, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_ae52acd0a10d567d8786ca41de80e756, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_1af436b358db5cdb8828d2da9df2d60b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_ce833835beb75458a3d17e554dec9afa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_f28b901bc34c5296b66d333fad6462d3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_75c72cc826035d2292d19d4ccb960d0a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_17bab37ce6af5a6d9e917ff714b5c6df, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_4c08379d043453fa97e776243f90fc17, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_6db3ff9278be50289d113936535f2818, "");

}