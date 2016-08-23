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
    void  (*method_pointer_4bc57e8b64eb5a1bae3d28beca7c5f3a)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_b0c4cd1fad0e55efb8d22c7571b58108)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_d7b5f6db64965c1a9a862c536dbeb1fd)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_2a1b79fa8f2751a1a1a6397ba2bc9fe5)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_0883b43d91de5acda6d5e1d982193f42)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_78a7b21179015dd1aecedda47eca698f)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_689a546553335a9ea701191228b12ed4)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_ae285ad6fcdb5df69491af43a58f207f)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_480d2eb676ca5becaf963c460e7ba018)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_b2d9d0cf91a05929be08f39fad08b3d8)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_fe3495f48128585b9f1cf38128a77d0f)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_f1c33427c42751578e08a0f6b4dc8b61)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_530a288f1eab5df982ddf161969ab733)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_bb91483713195d7eb55571f54032c6d6)() const = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_5d124d15c44f57538cd7da3ec5c2ab6a)() = &::clang::Decl::getAsFunction;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_29e960cdd82954788b846ca05ee6e1e8)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_e8472eb091b85e04adce208b5b293c17)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_17a943b38c675c35839f89492305fcd9)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_04acdab25b4c570dba91721ba521c8c1)() const = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_92388ccda2715cd582ddf784ac2e575e)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_074fa9c98b3e5d4cb221788066d6a9a9)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_3efb21ece32c5baf90de644dc22261c5)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_765ea9e23dd050a8b402736a0a880b1f)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_3ce0ad12eb0b5bb7b4a5399f6b971d0e)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_0fff6575e348578ca69038984874113b)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_d551761b40cf556e9214b7b76bff4ee6)() const = &::clang::Decl::getLexicalDeclContext;
    unsigned int  (::clang::Decl::*method_pointer_1dd6f0645c875a7f90805db9d58e348f)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_7b84ddae078b5e9fa5a07e243d52a010)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_dc3adbb062645b0bb5facce9969132a1)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_f294a0146fe3551198b31bb394d367e7)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_1485fd07c6285034ac0b919aac81b375)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_e4660629d05d5c09b1efe03b9963798d)() = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_b22d4132100f55e2b3300a696820f2e2)() const = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_e377d41e755656e8831e3a8f0cab66d5)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_75bc22373600536a8cd4575e958e6cb5)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_3cfdb70e93315903a138aa8ae611e6f2)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_2bc6f0a8fd7e5f2a94b9cd374c324171)() = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_0b3e72b8affc58a1bc44d1979770a7d3)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_cf8e547e278d5b7395542c9fcf384967)() = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_b6be8a64ec475b18a27e334b3a7a03cd)() const = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_352ec38bb5ac5baf9bbc5d7b61243a88)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_ecfb4c6726c056a7937b2591ac46ab55)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_65ab70561eca56f3b686f8e6b60687b5)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_abbd207e4a5454518878c4597d8a0c1d)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_677782144b1a5573bae28a6a2fda8e93)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_365a90d945e35d8780dcf0f58a7617da)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_a52c7c0e66c05213971708ec79431cd2)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_232fe078a9d6541ca8f75d2ee18f0af3)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_774acae8f3f7574a9266b891a25ad7d3)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_49cc794a3bae5ad4b1b707ba8d0ee2eb)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_3cdb6f2b7c455d23b0216997e3c6ab0d)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_4fa3e63108e25d58b4c31c66a4bb8ef9)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_07486150f4145f59a3829be327907eb7)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_93a1a1cac72f5614a7598823853e977f)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_0ebc4a4c8cbc53519265c8c1028def79)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_18d511de36425b59b8ab732dcd5a52e7)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_39e43766004550da9b516813c06e38f6)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_0f858cea43cf5e1b920d9eafa0815991)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_89d4c5257c7554a0ad7669b88e2e5922)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_a60c0a0d8a34511aa8d050707954fa29)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_0798225db0f75e59a02cada33b10061b)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_ba640b3f6a6d5109bf8c23b57dc5c447)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_d91d048fde7e53ddb602d04ad46b9aa9)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_6cab0a543ee35b8ea9ad6522859532ee)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_aa737dfb56e25a049bbd0e9cc054b433)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_1f3af1a29e3e5c31a4cf15830069b44d)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_46c0e2818fc652628c87bd2b6c563931)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_d9804373517a5cceaa72a7e65c3a282e)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_3cfdce7a3d5e5f649d61a2ead51a5bac)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_ddfce4b29ae65a259ccacd3aa8252cc7)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_1c85d8ec4553554b97ef6027368a06a9)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_cedb5316c0c453f5852ca47704418b75)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_e13f9d6215e958c28320f258a020e606)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_23c9db950c1951aea193361d30961b45)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_c3ab5243d7a45a89969ab1a249f87032)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_c46f7d349288587c9123243f5cc39147)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_df61e489e10e5fa8b35c04b92d881aca)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_aa108a7592b35a17a468403a213d7f75)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_e6d7e9d96c7951d8a7db24f424649654)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_8a9db874265c5b37a4089f527a4cae75(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_4bc57e8b64eb5a1bae3d28beca7c5f3a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_b0c4cd1fad0e55efb8d22c7571b58108, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_d7b5f6db64965c1a9a862c536dbeb1fd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_2a1b79fa8f2751a1a1a6397ba2bc9fe5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_0883b43d91de5acda6d5e1d982193f42, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_78a7b21179015dd1aecedda47eca698f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_689a546553335a9ea701191228b12ed4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_ae285ad6fcdb5df69491af43a58f207f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_480d2eb676ca5becaf963c460e7ba018, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_b2d9d0cf91a05929be08f39fad08b3d8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_fe3495f48128585b9f1cf38128a77d0f, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_f1c33427c42751578e08a0f6b4dc8b61, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_530a288f1eab5df982ddf161969ab733, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_bb91483713195d7eb55571f54032c6d6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_5d124d15c44f57538cd7da3ec5c2ab6a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_29e960cdd82954788b846ca05ee6e1e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_e8472eb091b85e04adce208b5b293c17, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_17a943b38c675c35839f89492305fcd9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_04acdab25b4c570dba91721ba521c8c1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_92388ccda2715cd582ddf784ac2e575e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_074fa9c98b3e5d4cb221788066d6a9a9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_3efb21ece32c5baf90de644dc22261c5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_765ea9e23dd050a8b402736a0a880b1f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_3ce0ad12eb0b5bb7b4a5399f6b971d0e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_0fff6575e348578ca69038984874113b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_d551761b40cf556e9214b7b76bff4ee6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_1dd6f0645c875a7f90805db9d58e348f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_7b84ddae078b5e9fa5a07e243d52a010, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_dc3adbb062645b0bb5facce9969132a1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_f294a0146fe3551198b31bb394d367e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_1485fd07c6285034ac0b919aac81b375, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_e4660629d05d5c09b1efe03b9963798d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_b22d4132100f55e2b3300a696820f2e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_e377d41e755656e8831e3a8f0cab66d5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_75bc22373600536a8cd4575e958e6cb5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_3cfdb70e93315903a138aa8ae611e6f2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_2bc6f0a8fd7e5f2a94b9cd374c324171, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_0b3e72b8affc58a1bc44d1979770a7d3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_cf8e547e278d5b7395542c9fcf384967, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_b6be8a64ec475b18a27e334b3a7a03cd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_352ec38bb5ac5baf9bbc5d7b61243a88, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_ecfb4c6726c056a7937b2591ac46ab55, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_65ab70561eca56f3b686f8e6b60687b5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_abbd207e4a5454518878c4597d8a0c1d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_677782144b1a5573bae28a6a2fda8e93, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_365a90d945e35d8780dcf0f58a7617da, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_a52c7c0e66c05213971708ec79431cd2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_232fe078a9d6541ca8f75d2ee18f0af3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_774acae8f3f7574a9266b891a25ad7d3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_49cc794a3bae5ad4b1b707ba8d0ee2eb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_3cdb6f2b7c455d23b0216997e3c6ab0d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_4fa3e63108e25d58b4c31c66a4bb8ef9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_07486150f4145f59a3829be327907eb7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_93a1a1cac72f5614a7598823853e977f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_0ebc4a4c8cbc53519265c8c1028def79, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_18d511de36425b59b8ab732dcd5a52e7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_39e43766004550da9b516813c06e38f6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_0f858cea43cf5e1b920d9eafa0815991, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_89d4c5257c7554a0ad7669b88e2e5922, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_a60c0a0d8a34511aa8d050707954fa29, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_0798225db0f75e59a02cada33b10061b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_ba640b3f6a6d5109bf8c23b57dc5c447, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_d91d048fde7e53ddb602d04ad46b9aa9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_6cab0a543ee35b8ea9ad6522859532ee, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_aa737dfb56e25a049bbd0e9cc054b433, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_1f3af1a29e3e5c31a4cf15830069b44d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_46c0e2818fc652628c87bd2b6c563931, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_d9804373517a5cceaa72a7e65c3a282e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_3cfdce7a3d5e5f649d61a2ead51a5bac, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_ddfce4b29ae65a259ccacd3aa8252cc7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_1c85d8ec4553554b97ef6027368a06a9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_cedb5316c0c453f5852ca47704418b75, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_e13f9d6215e958c28320f258a020e606, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_23c9db950c1951aea193361d30961b45, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_c3ab5243d7a45a89969ab1a249f87032, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_c46f7d349288587c9123243f5cc39147, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_df61e489e10e5fa8b35c04b92d881aca, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_aa108a7592b35a17a468403a213d7f75, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_e6d7e9d96c7951d8a7db24f424649654, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_8a9db874265c5b37a4089f527a4cae75, "");

}