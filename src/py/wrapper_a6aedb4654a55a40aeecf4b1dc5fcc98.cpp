#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_a6aedb4654a55a40aeecf4b1dc5fcc98()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (*method_pointer_9021c90d8ae35250a5963e302355f206)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_b4c494eaf44755b79729aea223a286e3)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_cdbe4bcd408855b19857240973956188)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_550aa9b64da653efbb5c7c578ff129b7)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_05289c4ea27f5a628c9ee96428770ad9)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_4cca585771b15118bac09782fe711e79)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_6ae37a42f8ce5e1397c40a0384ba988b)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_2ee76c8afd345abaabfa40c0986d83eb)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_2cca6bc8154454849e9534172cce6d2d)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_cd1151db16e35ae5a0bd343041e0f0cd)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_2ee0e85d731059ee805f8eb678356c6a)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_474c29a5846e509abd4a9826e540ab79)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_7332aba15e33565dbc0f6bd8f9b55cb1)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_08458baeb43b589184cde8e501222dba)() = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_8e91f32bb8e451b887d372b9a03742ae)() const = &::clang::Decl::getAsFunction;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_2c7e70b796a45889a4e719ebf08e8c54)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_0eb3907a34b355e189f43942e165d4c5)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_7e83df95ce115499951f3d691d4103e9)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_5aa15be61492573ebfebd23d99dc76b1)() const = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_ee676e4551ef5f52abd6429c21f8318a)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_d030ecd9fa045e2f9f504c3983f6dc02)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_e5670bf0700a5b3b9f45176b4e8d43b7)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_1d1f3cfd54685eafa4e02a0a83b64afc)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_a152ac9e2b3854b9a55768f3e983749d)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_227e99189bb65679ae85b7dce52e4b8c)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_4b6cf8736b815140b51835a139d56e46)() const = &::clang::Decl::getLexicalDeclContext;
    unsigned int  (::clang::Decl::*method_pointer_9a5c16b58f6b520bad1ce2369586697a)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_ac93fd147d2752a4b91ed9ea7944c937)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_0c671d6d76c0545a8ec19c61ff2ef772)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_84e26a4392c75314a97379f1df62997c)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_254fda3f6cd451f2a7d97ae2774c00cf)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_4ab96280e41f5a72866f8c180417d7e5)() = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_952d98675e06565f9e0f079662e8de67)() const = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_ca297cad3d365813882d23cdb8d7e8b3)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_ee131b37bd0a56c4b063652a957e028d)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_d9a118fd637553c0bd61f8a359557092)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_a76386d16a4650a6983f397ae964ce51)() = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_262d3ce7a9f4556dbc578540e8f79da2)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_5c976c710ebd5e9b9c4f8685b7619a32)() const = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_de7e65d920b85895b4985a13b3071dd3)() = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_7f29b7391afb57b4906a810f97cecd0e)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_74d3fd76b033583ebb5a00f2248ed5c9)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_4c66c9631176519d9713227676536795)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_fec7278fd36454debc4210860d01e560)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_81d516e902355d1cadac67b188a389be)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_2e4da46a454f54a19f3a5f374b3cc439)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_e963eef699f556a384bfae6c6243763c)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_f6217be9642253168db18c33b6dd5c27)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_08d634797cc2554ba0853d15abf3a203)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_d6ed50e7b91352ee9b90f90731142d5f)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_502b509466c459b58fc4ba0a006fde77)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_c6535dd2ca58562694a5b41eec1a00dd)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_f0a7717f339858d1b6bdadea654e7163)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_4d454536c8f85445828cf6e8b11961b3)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_07ee82e6a26856f3aaae7620a79cf4ba)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_d953e1b1a52859fd856cac4c4c6f5c22)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_bc2b38fca9a05f0fbcbdcb2f8f7abd0f)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_bd598ca1b3e454b79f74775cb3ef7c40)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_4b639aad5a4e532c95c29b56ac6f1509)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_466f54f4533e53c8bb7cd7689209288f)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_31c6dd13a4575ea08b459e1b8d08be3b)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_d4b616fc348b5928ad765e9e15f469e7)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_de893bb95b0d53e9819658d7660864a6)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_0171b902d7225b3e88555e52ce12c28e)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_36710d446d8f5b7499c3da08246d1587)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_419d1434a1595df6be2624ebaedfd7fa)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_28541730089a56a9aaae90c098224c2b)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_bc375fec233055e89f6455cbff5bfc99)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_f88406b658c351bbbf856c7d4555dd45)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_f3febb72413454c4b9d3f8abee17b62a)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_eb9e61f97f4852fca86c9770d93fe125)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_bf23759499d35221bb50f0484f0d4f73)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_33c1d681dbcb5b39b35bce9f8428907b)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_2104b53d9e6256e39d32a8d4d590dd60)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_40b4f61ac2f355f3a2cbae5c47c31750)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_442165aa87305e169d7681b595caa42a)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_fc6caea740975376897e3df741e1955f)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_2359c48b18b35c0bbad26f8813f3d752)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_d400692e86b458eb9f252c54610dd707)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_68aad821b873587b8b52d532e4059a6c(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_9021c90d8ae35250a5963e302355f206, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_b4c494eaf44755b79729aea223a286e3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_cdbe4bcd408855b19857240973956188, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_550aa9b64da653efbb5c7c578ff129b7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_05289c4ea27f5a628c9ee96428770ad9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_4cca585771b15118bac09782fe711e79, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_6ae37a42f8ce5e1397c40a0384ba988b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_2ee76c8afd345abaabfa40c0986d83eb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_2cca6bc8154454849e9534172cce6d2d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_cd1151db16e35ae5a0bd343041e0f0cd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_2ee0e85d731059ee805f8eb678356c6a, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_474c29a5846e509abd4a9826e540ab79, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_7332aba15e33565dbc0f6bd8f9b55cb1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_08458baeb43b589184cde8e501222dba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_8e91f32bb8e451b887d372b9a03742ae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_2c7e70b796a45889a4e719ebf08e8c54, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_0eb3907a34b355e189f43942e165d4c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_7e83df95ce115499951f3d691d4103e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_5aa15be61492573ebfebd23d99dc76b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_ee676e4551ef5f52abd6429c21f8318a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_d030ecd9fa045e2f9f504c3983f6dc02, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_e5670bf0700a5b3b9f45176b4e8d43b7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_1d1f3cfd54685eafa4e02a0a83b64afc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_a152ac9e2b3854b9a55768f3e983749d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_227e99189bb65679ae85b7dce52e4b8c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_4b6cf8736b815140b51835a139d56e46, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_9a5c16b58f6b520bad1ce2369586697a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_ac93fd147d2752a4b91ed9ea7944c937, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_0c671d6d76c0545a8ec19c61ff2ef772, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_84e26a4392c75314a97379f1df62997c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_254fda3f6cd451f2a7d97ae2774c00cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_4ab96280e41f5a72866f8c180417d7e5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_952d98675e06565f9e0f079662e8de67, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_ca297cad3d365813882d23cdb8d7e8b3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_ee131b37bd0a56c4b063652a957e028d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_d9a118fd637553c0bd61f8a359557092, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_a76386d16a4650a6983f397ae964ce51, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_262d3ce7a9f4556dbc578540e8f79da2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_5c976c710ebd5e9b9c4f8685b7619a32, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_de7e65d920b85895b4985a13b3071dd3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_7f29b7391afb57b4906a810f97cecd0e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_74d3fd76b033583ebb5a00f2248ed5c9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_4c66c9631176519d9713227676536795, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_fec7278fd36454debc4210860d01e560, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_81d516e902355d1cadac67b188a389be, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_2e4da46a454f54a19f3a5f374b3cc439, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_e963eef699f556a384bfae6c6243763c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_f6217be9642253168db18c33b6dd5c27, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_08d634797cc2554ba0853d15abf3a203, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_d6ed50e7b91352ee9b90f90731142d5f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_502b509466c459b58fc4ba0a006fde77, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_c6535dd2ca58562694a5b41eec1a00dd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_f0a7717f339858d1b6bdadea654e7163, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_4d454536c8f85445828cf6e8b11961b3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_07ee82e6a26856f3aaae7620a79cf4ba, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_d953e1b1a52859fd856cac4c4c6f5c22, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_bc2b38fca9a05f0fbcbdcb2f8f7abd0f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_bd598ca1b3e454b79f74775cb3ef7c40, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_4b639aad5a4e532c95c29b56ac6f1509, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_466f54f4533e53c8bb7cd7689209288f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_31c6dd13a4575ea08b459e1b8d08be3b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_d4b616fc348b5928ad765e9e15f469e7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_de893bb95b0d53e9819658d7660864a6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_0171b902d7225b3e88555e52ce12c28e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_36710d446d8f5b7499c3da08246d1587, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_419d1434a1595df6be2624ebaedfd7fa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_28541730089a56a9aaae90c098224c2b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_bc375fec233055e89f6455cbff5bfc99, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_f88406b658c351bbbf856c7d4555dd45, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_f3febb72413454c4b9d3f8abee17b62a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_eb9e61f97f4852fca86c9770d93fe125, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_bf23759499d35221bb50f0484f0d4f73, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_33c1d681dbcb5b39b35bce9f8428907b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_2104b53d9e6256e39d32a8d4d590dd60, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_40b4f61ac2f355f3a2cbae5c47c31750, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_442165aa87305e169d7681b595caa42a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_fc6caea740975376897e3df741e1955f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_2359c48b18b35c0bbad26f8813f3d752, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_d400692e86b458eb9f252c54610dd707, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_68aad821b873587b8b52d532e4059a6c, "");

}