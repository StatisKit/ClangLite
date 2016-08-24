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
    void  (*method_pointer_09882ff33cc550d9a62e1d7888a85172)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_798078c69b6b5986a7e20599339370d9)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_74c8588d9b1a5f858bf5716e6719829a)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_7abdb6539dce55ebb984774b5456f5f7)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_580a1d6188895ac6bca73fcc0ab0d039)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_c616188241105fe9a6ccd072362e75c4)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_680caa2a159d51a5a95de9c0198a5397)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_73ff48d7b64b599abee918695749ec30)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_f52cc7e4c9535439b6cb526923f1b4bf)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_4f303cbb39ce5526b4f258c0e7f82021)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_1cd3bcb03efe579ea16bd66a955e271c)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_bf299ca7ee855bb58fa3632c96474a3c)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_8ff5a7927eeb545b834119c755972cf2)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_7c7ba513fa145c5098bf723dee989cd1)() = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_8f3531fdb77e573cb9b33364dd078c81)() const = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_a5a8e0b4cb5257a1af33f9927ea487c8)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_1111b256501e56a59247b212832716ef)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_4cfd1963dbfb5d539bdf079837275584)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_ae3b05062242550590d602ef08e0257c)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_8e31de052d1358c3bc24cc47e774536b)() const = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_e8c008d44dac553a8327bb3ef67a2e9c)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_09172f74067f5d6c828712946f23320f)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_d0cdf45b84ab57a89313741dc3503c86)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_b07923b1795a5173889bbe236343c625)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_f462dd78bed45cc295c91f2e90e93748)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_7062e8f7fccb5677b3952b81502a67a3)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_55a8a0b0d05b53b58a37d336ae5f0a9c)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_620c683d996f50e59e930ff7802a686d)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_1a37bbec00b25030837e04e4e66d3ff4)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_9e51987d9a2d5aeea294b5a28b14a9c8)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_52febc4a5503579c82f2586216378b85)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_74673b1dd0415bdbbbfb705092809f25)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_ab776946169f538cae564544d77b2e79)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_ae1816a675cb5a3fbc98858deaa18384)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_413c4913d43b57569a862c471fad5241)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_0304055a144558cdb33180891bccc3b9)() const = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_b912c143cb64592587bcedf9b9bd0fbf)() = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_cab60bcc70f5588f810815d99892344e)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_9ea1eba5f9095990b6d6a3b294fb7858)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_f78e99709080572088ca5abc8c7bae88)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_6da84113cfa151b19ca179e0b7c4e2fc)() = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_ec8371476a3c531baa0dcf48bf40f54e)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_a0bf7f5a0fbe52bb855047bd389c3fef)() const = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_c8a2a0c8dc86507bb5e49b2adc4220f4)() = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_a6d824176e015953bcb1ce76e9137e3f)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_021be0234c885ba0bb4ab25d3affc728)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_061f3ffb9cc4562ea3bbf171a3574786)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_c59cbceb0e7f5ec3b2b0a7460b7cb98e)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_8657a3bf1bfc5708a27e88ca5948e04e)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_f38e6a74aea65887a9e44cf2ea5ab3c8)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_b5c6d9ffefff52f0a57fe754f644073f)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_cf50f08058895ffeb256f95a3b9c5814)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_2d0f01e1b5f75a039e51f513c208e441)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_1a1a6772f23b5ebaafa98fc9959caaba)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_58f34b3b40cd556199a7913a6cfdd1ff)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_37d28e0f49495ece8afb628c591cd3a4)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_33defba5e00852e2a32d328f5176ff83)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_ec1a564baad4517e828435fe77f3ef89)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_52637737dc61524e8dc7f71fd7249947)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_24177f3d16a557aaaf2891b1ccde91e9)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_941327a7834e53deb77c0b4c422490b3)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_2ee15b8f367756abb5bc675eaabb77a1)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_0971bd1089385481b6053cd06716f76f)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_107924cbed5e5eb98c2f2031a746f6a6)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_ce2031cd336357f49962d73794f05dc3)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_2ae37556c6145dc1bceae283a0b06e33)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_c45fd67aa45c55bca58bf61e21efb701)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_ee5da3960f7b5448aceaa3cfe4fdb537)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_2a5948577a66517e933367b88ad5de31)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_79ba8506283853d2a120b28568dc5eda)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_2baca2e2b0075a7d82dc6aa7b346df14)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_36c16352220c544cb3bb0d115fec5ed4)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_21e04e7e06f3578abc80f046b5d0e814)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_8b79abd6756854188c1d18f65bc822ef)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_0cbec3129903547d89528982011ff512)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_86c1eb18f057508a97c1b0cbca168c7d)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_5e7db7817522539cba9a8f26b428de12)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_82637561b1b855a4857d9147c30f476f)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_b56a5f09b06f56ee8e7a90ba691d56f7)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_cd0694f025b455608908c1e8b9ac7dfe)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_00b0470a196d55ef8b33f0d6d3b4a546)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_acd1e9ba19ee55609fd6a4dcc79b0c70)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_5cc83767971655b7848efbcdb717115f)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_5cb5db9272025538a02bcbc23fcb10b5)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_3256d4e8de0e5ac984c573c1293354b9(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_09882ff33cc550d9a62e1d7888a85172, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_798078c69b6b5986a7e20599339370d9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_74c8588d9b1a5f858bf5716e6719829a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_7abdb6539dce55ebb984774b5456f5f7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_580a1d6188895ac6bca73fcc0ab0d039, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_c616188241105fe9a6ccd072362e75c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_680caa2a159d51a5a95de9c0198a5397, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_73ff48d7b64b599abee918695749ec30, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_f52cc7e4c9535439b6cb526923f1b4bf, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_4f303cbb39ce5526b4f258c0e7f82021, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_1cd3bcb03efe579ea16bd66a955e271c, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_bf299ca7ee855bb58fa3632c96474a3c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_8ff5a7927eeb545b834119c755972cf2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_7c7ba513fa145c5098bf723dee989cd1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_8f3531fdb77e573cb9b33364dd078c81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_a5a8e0b4cb5257a1af33f9927ea487c8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_1111b256501e56a59247b212832716ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_4cfd1963dbfb5d539bdf079837275584, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_ae3b05062242550590d602ef08e0257c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_8e31de052d1358c3bc24cc47e774536b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_e8c008d44dac553a8327bb3ef67a2e9c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_09172f74067f5d6c828712946f23320f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_d0cdf45b84ab57a89313741dc3503c86, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_b07923b1795a5173889bbe236343c625, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_f462dd78bed45cc295c91f2e90e93748, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_7062e8f7fccb5677b3952b81502a67a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_55a8a0b0d05b53b58a37d336ae5f0a9c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_620c683d996f50e59e930ff7802a686d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_1a37bbec00b25030837e04e4e66d3ff4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_9e51987d9a2d5aeea294b5a28b14a9c8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_52febc4a5503579c82f2586216378b85, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_74673b1dd0415bdbbbfb705092809f25, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_ab776946169f538cae564544d77b2e79, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_ae1816a675cb5a3fbc98858deaa18384, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_413c4913d43b57569a862c471fad5241, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_0304055a144558cdb33180891bccc3b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_b912c143cb64592587bcedf9b9bd0fbf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_cab60bcc70f5588f810815d99892344e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_9ea1eba5f9095990b6d6a3b294fb7858, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_f78e99709080572088ca5abc8c7bae88, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_6da84113cfa151b19ca179e0b7c4e2fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_ec8371476a3c531baa0dcf48bf40f54e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_a0bf7f5a0fbe52bb855047bd389c3fef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_c8a2a0c8dc86507bb5e49b2adc4220f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_a6d824176e015953bcb1ce76e9137e3f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_021be0234c885ba0bb4ab25d3affc728, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_061f3ffb9cc4562ea3bbf171a3574786, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_c59cbceb0e7f5ec3b2b0a7460b7cb98e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_8657a3bf1bfc5708a27e88ca5948e04e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_f38e6a74aea65887a9e44cf2ea5ab3c8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_b5c6d9ffefff52f0a57fe754f644073f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_cf50f08058895ffeb256f95a3b9c5814, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_2d0f01e1b5f75a039e51f513c208e441, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_1a1a6772f23b5ebaafa98fc9959caaba, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_58f34b3b40cd556199a7913a6cfdd1ff, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_37d28e0f49495ece8afb628c591cd3a4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_33defba5e00852e2a32d328f5176ff83, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_ec1a564baad4517e828435fe77f3ef89, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_52637737dc61524e8dc7f71fd7249947, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_24177f3d16a557aaaf2891b1ccde91e9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_941327a7834e53deb77c0b4c422490b3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_2ee15b8f367756abb5bc675eaabb77a1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_0971bd1089385481b6053cd06716f76f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_107924cbed5e5eb98c2f2031a746f6a6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_ce2031cd336357f49962d73794f05dc3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_2ae37556c6145dc1bceae283a0b06e33, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_c45fd67aa45c55bca58bf61e21efb701, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_ee5da3960f7b5448aceaa3cfe4fdb537, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_2a5948577a66517e933367b88ad5de31, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_79ba8506283853d2a120b28568dc5eda, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_2baca2e2b0075a7d82dc6aa7b346df14, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_36c16352220c544cb3bb0d115fec5ed4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_21e04e7e06f3578abc80f046b5d0e814, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_8b79abd6756854188c1d18f65bc822ef, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_0cbec3129903547d89528982011ff512, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_86c1eb18f057508a97c1b0cbca168c7d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_5e7db7817522539cba9a8f26b428de12, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_82637561b1b855a4857d9147c30f476f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_b56a5f09b06f56ee8e7a90ba691d56f7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_cd0694f025b455608908c1e8b9ac7dfe, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_00b0470a196d55ef8b33f0d6d3b4a546, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_acd1e9ba19ee55609fd6a4dcc79b0c70, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_5cc83767971655b7848efbcdb717115f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_5cb5db9272025538a02bcbc23fcb10b5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_3256d4e8de0e5ac984c573c1293354b9, "");

}