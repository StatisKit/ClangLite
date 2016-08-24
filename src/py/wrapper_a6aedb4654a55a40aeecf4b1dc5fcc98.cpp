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
    void  (*method_pointer_b787319430655e6ab43dbb84c73a81ee)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_175decf6aab85bcdbdf5b12e08a14d47)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_69769ff571255242b0b6d6e3625a531e)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_8202ab6f797757e48157d2831317c15c)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_87d3cb1636b85bc48f6583cfbe35745a)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_9d781d4c20ca503ab547ac5922cdd67f)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_a16157b708125c47918dc7a643073dfe)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_1dc84912b2e454ca9497eadf2bd130dc)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_bbf1645b2680520eb20af2acde3d1991)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_d3451cec5c0658cc971f8d141ac008a2)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_1e005d363ad55a629bbec2fdf788e953)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_f4d4ecf8d127564581cf81192698e6b4)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_00c936625e9f58499c80f917a3671a5d)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_3e6ed8fb807e5e2bb81fa636cf21aae2)() = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_b115a945130d587aa59d404d9350dab3)() const = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_d84a41e996ff51ab9b16e4dc5822af60)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_c10e4c9304d45a53b84eec74802481c8)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_727a4bc82c2858c3aea1fdd58f832d6d)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_2d33bd0091ed5d86a5d731649a101045)() const = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_021f68b548ae50d7a529dbe1629aa1ad)() = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_a88768675a3c54cc9796a0bfb2b0aae6)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_080c8083b5a75a47b14927b1654bfe2f)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_d51aee5fac655239885c8906c462e84f)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_c9f8a7ca0f2a54fdb5f51cb348b3bed4)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_d81dfe02ddc054b0a5991a0814d8d8c9)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_1583904f1bc95e3e9b23c47c212b32c2)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_0cba444a4e6c545cb6160f81b5d35a5a)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_724035fc43e75df094c0581d183bac1c)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_06ea71866df05e0da951817a9e11d9f5)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_296c27ddb1e9572c848e4ef93b51f6d7)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_7ac5da79960b5f1b93ad828c3f2c2983)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_335f4d07d3cf5f30b64755cd4123fe70)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_c060940781955f55a80d6bbd412ae18a)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_05b37d1218e15604a97a1bb684a80516)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_8d42c042a72c5df9b97f1c688e86daa1)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_7370700c5e22560ea7c5c80ca7a01a67)() const = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_296d677960ba5345ba54f05a483bf4b3)() = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_38d5e7e8ceac5ddda74d27e2fa218d03)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_90d5e7d7448c5130a0a8c66f1b48a27d)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_3e14fad098315c77ad21094b9dc3168b)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_2526786c6e2b5d04aa26de5b8b2c7fb8)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_1c3cadc265405b4c8d254e6504269986)() = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_624b8ba9afdb540e9aa1883f45e4981f)() = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_41fa1b134f9959619e6ff4f5b86cf44e)() const = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_d28db646bc3d5be295b3d1c8bb2b7643)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_f9f0fe129e4550d3b91bcf3f460753c3)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_28327d08a317560b88488fc066162f88)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_e66c32933c855d4ea66817443c1ec582)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_9e0e2b49dcbf5f0cb2fdec5edea9a6ae)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_398de30c46bf54758376d6031da78a0e)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_f158a59455aa5c55b83553347c460e9d)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_6ad0dead10cf5c3fbf7e0b4e842af335)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_d40678d3111455c0b485b63b7b736116)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_ef29ad29c3c45f91a240d945dc2dc994)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_cffcc16f6b805f54ad85c3731fd988b2)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_dd9177cffc335e63839602d2115c14a8)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_045b50cba3685909a7c839e3c1f164b4)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_dd8761a042f451b28450042e2eabd137)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_de17a34d277b5b3588964cc89b3acca7)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_0bd4cc933a215207b071ea00a2c435ae)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_30a54d8a7d105fb79a5ebebc626fbcd1)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_3274e52f4109585ab3087b3168a40562)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_639e7cc839d95306aa1872f219b74f40)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_5a588c01c5f05b4f83975c38ab1a3903)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_2eca0b2a4b33513ea6c230c1d99aeadd)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_39141a5c37f1561499198858fa013090)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_ceca394c7c955da285c0a5a6206cba0e)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_d434a45c27765b709bee9c8dc95ca469)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_5732a95f453251328310f06e14e25831)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_bbdb9031ca985591bc2e6cbcd74f6c3c)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_ff5783a4390d5fd7a99d6019a64f3851)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_f4f93aff58b45a0ba4578a57fe98a58e)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_85619797fdc65b288ef02792daf1c797)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_c51771a0c90d58938406989c0eab1cd4)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_e7324db193055084bc63ae15845d38ba)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_e5702f224fd95645bb449a81b28e030e)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_43a22498078d53018de89ff47348119b)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_33b9479382ce56d0a9254c0ac24e5722)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_7efc2c68844a5df28d9c2f05a3cc9916)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_5d71317e315c5b818b53a88fb2aba9e9)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_ccfd76f2dded567284fead899306115b)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_af01571b9bdd5e8a8db0f1051ac4c4da)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_e2418c503767599193638baceb9392db)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_07897b252ae45606ab88ba58cfe16060)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_49ac5450303e54a2a704bd7614baeca5(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_b787319430655e6ab43dbb84c73a81ee, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_175decf6aab85bcdbdf5b12e08a14d47, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_69769ff571255242b0b6d6e3625a531e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_8202ab6f797757e48157d2831317c15c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_87d3cb1636b85bc48f6583cfbe35745a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_9d781d4c20ca503ab547ac5922cdd67f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_a16157b708125c47918dc7a643073dfe, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_1dc84912b2e454ca9497eadf2bd130dc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_bbf1645b2680520eb20af2acde3d1991, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_d3451cec5c0658cc971f8d141ac008a2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_1e005d363ad55a629bbec2fdf788e953, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_f4d4ecf8d127564581cf81192698e6b4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_00c936625e9f58499c80f917a3671a5d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_3e6ed8fb807e5e2bb81fa636cf21aae2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_b115a945130d587aa59d404d9350dab3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_d84a41e996ff51ab9b16e4dc5822af60, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_c10e4c9304d45a53b84eec74802481c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_727a4bc82c2858c3aea1fdd58f832d6d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_2d33bd0091ed5d86a5d731649a101045, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_021f68b548ae50d7a529dbe1629aa1ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_a88768675a3c54cc9796a0bfb2b0aae6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_080c8083b5a75a47b14927b1654bfe2f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_d51aee5fac655239885c8906c462e84f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_c9f8a7ca0f2a54fdb5f51cb348b3bed4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_d81dfe02ddc054b0a5991a0814d8d8c9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_1583904f1bc95e3e9b23c47c212b32c2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_0cba444a4e6c545cb6160f81b5d35a5a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_724035fc43e75df094c0581d183bac1c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_06ea71866df05e0da951817a9e11d9f5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_296c27ddb1e9572c848e4ef93b51f6d7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_7ac5da79960b5f1b93ad828c3f2c2983, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_335f4d07d3cf5f30b64755cd4123fe70, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_c060940781955f55a80d6bbd412ae18a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_05b37d1218e15604a97a1bb684a80516, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_8d42c042a72c5df9b97f1c688e86daa1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_7370700c5e22560ea7c5c80ca7a01a67, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_296d677960ba5345ba54f05a483bf4b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_38d5e7e8ceac5ddda74d27e2fa218d03, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_90d5e7d7448c5130a0a8c66f1b48a27d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_3e14fad098315c77ad21094b9dc3168b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_2526786c6e2b5d04aa26de5b8b2c7fb8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_1c3cadc265405b4c8d254e6504269986, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_624b8ba9afdb540e9aa1883f45e4981f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_41fa1b134f9959619e6ff4f5b86cf44e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_d28db646bc3d5be295b3d1c8bb2b7643, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_f9f0fe129e4550d3b91bcf3f460753c3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_28327d08a317560b88488fc066162f88, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_e66c32933c855d4ea66817443c1ec582, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_9e0e2b49dcbf5f0cb2fdec5edea9a6ae, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_398de30c46bf54758376d6031da78a0e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_f158a59455aa5c55b83553347c460e9d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_6ad0dead10cf5c3fbf7e0b4e842af335, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_d40678d3111455c0b485b63b7b736116, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_ef29ad29c3c45f91a240d945dc2dc994, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_cffcc16f6b805f54ad85c3731fd988b2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_dd9177cffc335e63839602d2115c14a8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_045b50cba3685909a7c839e3c1f164b4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_dd8761a042f451b28450042e2eabd137, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_de17a34d277b5b3588964cc89b3acca7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_0bd4cc933a215207b071ea00a2c435ae, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_30a54d8a7d105fb79a5ebebc626fbcd1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_3274e52f4109585ab3087b3168a40562, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_639e7cc839d95306aa1872f219b74f40, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_5a588c01c5f05b4f83975c38ab1a3903, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_2eca0b2a4b33513ea6c230c1d99aeadd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_39141a5c37f1561499198858fa013090, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_ceca394c7c955da285c0a5a6206cba0e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_d434a45c27765b709bee9c8dc95ca469, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_5732a95f453251328310f06e14e25831, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_bbdb9031ca985591bc2e6cbcd74f6c3c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_ff5783a4390d5fd7a99d6019a64f3851, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_f4f93aff58b45a0ba4578a57fe98a58e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_85619797fdc65b288ef02792daf1c797, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_c51771a0c90d58938406989c0eab1cd4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_e7324db193055084bc63ae15845d38ba, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_e5702f224fd95645bb449a81b28e030e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_43a22498078d53018de89ff47348119b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_33b9479382ce56d0a9254c0ac24e5722, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_7efc2c68844a5df28d9c2f05a3cc9916, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_5d71317e315c5b818b53a88fb2aba9e9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_ccfd76f2dded567284fead899306115b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_af01571b9bdd5e8a8db0f1051ac4c4da, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_e2418c503767599193638baceb9392db, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_07897b252ae45606ab88ba58cfe16060, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_49ac5450303e54a2a704bd7614baeca5, "");

}