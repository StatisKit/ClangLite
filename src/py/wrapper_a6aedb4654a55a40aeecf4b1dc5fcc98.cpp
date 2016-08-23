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
    void  (*method_pointer_1fbe41ec48fb50068d42d8357fec0ed2)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_8a84e7792aec5547a34df66755fe5c91)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_98d48d36e31857b6bd6da09d6cad0b6a)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_7698a37801e85c8bb60582861e10c0fe)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_38b49959bc7a54e88b92eecb6d27676a)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_578e42436ed75d2ebb5a3139daa12e5d)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_2a453ea9839b53d298ddc5783eb4d515)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_c4d811133f5c5c7db4eaab0f8d5ea012)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_bc09405e3e755e90a9f73ea125598a01)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_0bfc347d5dda556e929dcb4b8cda9206)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_d322f48302e25867bc0aafb6a86f8ae1)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_25af30079a1e5c728c222401f1806b25)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_797a3b4c7324599cbd7b49378f0c6c7f)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_3f7b88d28a5b565384459e2a121fe7a4)() = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_f74580a88fba54179fc30295173d0877)() const = &::clang::Decl::getAsFunction;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_8e7d14833f0f521c9127c9841fe60ad8)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_2bd13459aa89586681a0eaa8da9b6840)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_ec81127db0bc546685caf0aae0802bc3)() const = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_7c8de5cb123b55159a81650859fbf6dd)() = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_582ab93e5e28557195e6ba842093443c)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_f68453d0c3cf5314af1b841498209024)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_0f870ef28dd45a438d591e9b8ddfef00)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_1c300f16279d5bd197f0594b16766444)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_49ed3d17358a56d1beb969f7bbab9747)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_6be7be3bb0d05155b7df123ba2aa42e8)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_5e04301bab4a51239758889c20faa05c)() = &::clang::Decl::getLexicalDeclContext;
    unsigned int  (::clang::Decl::*method_pointer_c2ff6d1faa6b5c478b24761e256b06fe)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_a04c004e31505f06a061dd561d99aa5a)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_458c1ac58f845981b4715b34bfca8b40)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_4c47c3bb5ce8527e99f56a447f9d9273)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_7843a11685b351bd858beba15ef86e6a)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_edd7411da3135bde8ebb8dd612d6a5f9)() = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_2e7f2ba8c90958a59ce3c3d34978c139)() const = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_f1f62b3ecf405ad78fa2b4badec34326)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_f57fb693f13b5c3ea6ccf119d5ad7b6d)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_adae3ae0316e57c7ae498bb7fb6b2b7e)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_9329feddaa955fe6a1d391e2a67071fc)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_0398c012fcb2557c99feacbd61e82380)() = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_19b315327b2f594ab528ca2cf1c8bb98)() const = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_0c56bc33460c5062b0a38edfc21813c2)() = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_df6e24ede77f5b78b764caaba4ee3cac)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_7d5e0556043155bda5f70ed7d0c335ac)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_30fb3bacd92b5f8aa18beb00cbcfe7f3)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_29fa236fc29051c9b71cd3dd197761da)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_9c40f2fcceec5232ac0b33474bd8ce02)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_10847f1c3c12541e9dedcc2a999b482f)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_2cb5246202e05c0f9cf3d623e8e7566d)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_2e29772b9d7859529831c6ec03a49935)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_67beabc4cd49548a9bcd3b02f66e6b18)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_a0ac38babdd5526d938fc546e7d8008a)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_f60742e435b759228000f5ee0999a48a)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_f8d0e4b0fe3052a6ba384f976ae2f8ef)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_30fdfecca89358688278874baa17e005)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_4273dd10820a59d89f795e35f387fca2)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_314960cefc2a5b04a1301281e79c80c0)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_b1931eba9ee95db595b30b9fa899768e)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_b1441dfeb2e059e0b1cdaa9b16313ad2)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_4aa5007ff87c5245980cbf0e6e4902b4)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_c7dda11db195573fa75343063181b2b8)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_c6b051a27e44521bb014d88cf7cfb552)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_12219ec78ab054fdb3a529c26986bc1b)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_f07e0135aaf95dc19c7ae395f62beb2c)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_e24a6ace5e6d5da88bd7e54ae3035503)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_b58a8a4a2ca55899a4d8589e83815306)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_37a88e293c765dcc9c11e158fb87f933)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_4b5c5dec968a5c699a547cc4d2e59846)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_3a2563a549095ff7ac0a2e4910747340)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_8268174c6a965399b93391ccb30e76e7)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_264988aa8ab85fa2b0ff13176a536d28)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_7d8be8a0dbd05823bed3bc60197fdd60)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_6456c0dae8375506a58894354b3aeb17)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_e54f5f42ec5d5f689094b642364ddbc7)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_ca56d3eb13f95c40bd4e2c16e513b22b)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_1090b2b9563559828bc6690c314a450f)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_e11332e8f9285cafa88c3111e8cedeb4)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_8f7228defc78535f997605dbfe8feec9)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_8bfaf3b1837150179b176fb9db2bacf3)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_864a5014f7345256a8586fcef7487f96)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_4d70442aaeba5378909741cf0997caef)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_3bd7d178974a59f7988ac6f6c0771896(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_1fbe41ec48fb50068d42d8357fec0ed2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_8a84e7792aec5547a34df66755fe5c91, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_98d48d36e31857b6bd6da09d6cad0b6a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_7698a37801e85c8bb60582861e10c0fe, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_38b49959bc7a54e88b92eecb6d27676a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_578e42436ed75d2ebb5a3139daa12e5d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_2a453ea9839b53d298ddc5783eb4d515, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_c4d811133f5c5c7db4eaab0f8d5ea012, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_bc09405e3e755e90a9f73ea125598a01, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_0bfc347d5dda556e929dcb4b8cda9206, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_d322f48302e25867bc0aafb6a86f8ae1, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_25af30079a1e5c728c222401f1806b25, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_797a3b4c7324599cbd7b49378f0c6c7f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_3f7b88d28a5b565384459e2a121fe7a4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_f74580a88fba54179fc30295173d0877, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_8e7d14833f0f521c9127c9841fe60ad8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_2bd13459aa89586681a0eaa8da9b6840, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_ec81127db0bc546685caf0aae0802bc3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_7c8de5cb123b55159a81650859fbf6dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_582ab93e5e28557195e6ba842093443c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_f68453d0c3cf5314af1b841498209024, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_0f870ef28dd45a438d591e9b8ddfef00, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_1c300f16279d5bd197f0594b16766444, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_49ed3d17358a56d1beb969f7bbab9747, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_6be7be3bb0d05155b7df123ba2aa42e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_5e04301bab4a51239758889c20faa05c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_c2ff6d1faa6b5c478b24761e256b06fe, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_a04c004e31505f06a061dd561d99aa5a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_458c1ac58f845981b4715b34bfca8b40, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_4c47c3bb5ce8527e99f56a447f9d9273, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_7843a11685b351bd858beba15ef86e6a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_edd7411da3135bde8ebb8dd612d6a5f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_2e7f2ba8c90958a59ce3c3d34978c139, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_f1f62b3ecf405ad78fa2b4badec34326, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_f57fb693f13b5c3ea6ccf119d5ad7b6d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_adae3ae0316e57c7ae498bb7fb6b2b7e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_9329feddaa955fe6a1d391e2a67071fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_0398c012fcb2557c99feacbd61e82380, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_19b315327b2f594ab528ca2cf1c8bb98, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_0c56bc33460c5062b0a38edfc21813c2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_df6e24ede77f5b78b764caaba4ee3cac, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_7d5e0556043155bda5f70ed7d0c335ac, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_30fb3bacd92b5f8aa18beb00cbcfe7f3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_29fa236fc29051c9b71cd3dd197761da, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_9c40f2fcceec5232ac0b33474bd8ce02, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_10847f1c3c12541e9dedcc2a999b482f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_2cb5246202e05c0f9cf3d623e8e7566d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_2e29772b9d7859529831c6ec03a49935, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_67beabc4cd49548a9bcd3b02f66e6b18, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_a0ac38babdd5526d938fc546e7d8008a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_f60742e435b759228000f5ee0999a48a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_f8d0e4b0fe3052a6ba384f976ae2f8ef, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_30fdfecca89358688278874baa17e005, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_4273dd10820a59d89f795e35f387fca2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_314960cefc2a5b04a1301281e79c80c0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_b1931eba9ee95db595b30b9fa899768e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_b1441dfeb2e059e0b1cdaa9b16313ad2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_4aa5007ff87c5245980cbf0e6e4902b4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_c7dda11db195573fa75343063181b2b8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_c6b051a27e44521bb014d88cf7cfb552, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_12219ec78ab054fdb3a529c26986bc1b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_f07e0135aaf95dc19c7ae395f62beb2c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_e24a6ace5e6d5da88bd7e54ae3035503, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_b58a8a4a2ca55899a4d8589e83815306, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_37a88e293c765dcc9c11e158fb87f933, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_4b5c5dec968a5c699a547cc4d2e59846, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_3a2563a549095ff7ac0a2e4910747340, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_8268174c6a965399b93391ccb30e76e7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_264988aa8ab85fa2b0ff13176a536d28, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_7d8be8a0dbd05823bed3bc60197fdd60, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_6456c0dae8375506a58894354b3aeb17, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_e54f5f42ec5d5f689094b642364ddbc7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_ca56d3eb13f95c40bd4e2c16e513b22b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_1090b2b9563559828bc6690c314a450f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_e11332e8f9285cafa88c3111e8cedeb4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_8f7228defc78535f997605dbfe8feec9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_8bfaf3b1837150179b176fb9db2bacf3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_864a5014f7345256a8586fcef7487f96, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_4d70442aaeba5378909741cf0997caef, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_3bd7d178974a59f7988ac6f6c0771896, "");

}