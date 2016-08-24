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
    void  (*method_pointer_41bf10e28fac50c2bbd3c95659df026a)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_d8b9fce8a9ec5218872d3e33d86f3b01)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_44f4781370b45017954f00628b704438)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_078c249e87b851dd951404ea387ee065)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_ca4e0f2504f0501098a46f4842a6e051)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_33202054f7c85b258aa0475393812782)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_c8d9076261d052a5a517918ec74aaa8b)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_b7fa55340d6f5e5f80437232f7e5081c)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_11897d1a4ca9503ca0098237dcd0968d)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_c1744fbca9be5d60bd5d9cb9ed524e73)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_7a0c12dc1a015925b216836c9939fc74)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_42ff8769e6d5514dbc5d6f7ec132c68e)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_3ce0c431c4715a5dabd15d49261c9210)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_b37c65f26a58588c897a577da3a27768)() const = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_bc610b2c0c6e57eaa1431a570ec8122b)() = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_e353b4916fde5a67aa3741c416df98c7)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_327d3df0bbe250fe8868e6e7daeaa686)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_9fb5e1b31eb85a25be31c0cba8a84baa)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_29209da8f69458df807d3c153d593725)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_42cbc37ea4d353d08467f510f1e7d101)() const = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_2fc00db1144e560d8450411f98015343)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_e043c8770571599ea3995f915c708c4c)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_3708eaaf5226574c91f7ccbcc3a15524)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_49dcaac46adc58ed82aa07ca5395f8e4)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_8e2a25cda77251fba35a63c73cfe39e8)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_a956820117c552c29556bc9ce0e09c0a)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_f69de6477dc05c0985f1ae8a1eee20a3)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_222485d575445b608c56ecef934b912e)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_8c86f5ddbef85027af92c79274695fec)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_80504b654ab0534eb69e6c9cab779e6f)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_e75363990d8b533a9379a82e5b27db13)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_84fbd272636e51b5b6f7f44a2dd4f071)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_f97e5649cd9f5791ab6eaf88ac8d1369)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_fcf21636a60f5ffcb771f6886e5e0924)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_9d81205bc47c5ab2a364a913bafd129b)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_ad2450055cec5c2a823253b6ae43cd41)() const = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_f7a0ebe5c8ba5f7fabc94b6b7ccfd3a9)() = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_0196c7d0f691572cb8d25aeff99b9ba4)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_dc66788070945a8fafed727f0701cc88)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_ddc16d59c8fd5646bc396cedf0e00f34)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_732b5f3f711b5f23bb0e8252caf483a7)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_878c427dc1ef58f19e1c2932f1790157)() = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_1ef26481da6254d2b5f5d140b674ef21)() = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_d651112653d450c78bdd5a7941e604ca)() const = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_823ebd56a6e3576cacdbc36215cf56df)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_fb6d90da303058669edc63d8d13d3450)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_468d716857ee50569442c6e35961deb6)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_dee7fd1bdb1a55cca392d003a6e15957)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_40c7ead213a85fa39bfdeb9473e4d0ed)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_7e8ae7375c5e5403ba96d82f8ac72f02)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_0f30622154cb517081072ce164553fcb)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_9ba3c14eb61a52edbf61f313d5a720de)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_9421f26f546f53ecb2b23006a73339fa)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_43c86331ac865c1bad65a8fdc02bced8)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_420767cb598451c5adfba92dc8d00fe8)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_ae7e25ab756957ed9bc29df18d7708f0)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_49ef0acf4f7f5240a5e61b0aed65c4b1)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_d887c19d129d54c2994b3ba637aa095b)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_15501ebe704b5123b6ece9fbb2d0264c)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_e8152cb9ec86570bb7a05dade9b22e2c)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_9a892f6eac43545f8b61f263ef919df0)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_652a3ddad3da559c8b4ef380563bd553)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_2e7df06d8d9f58008da5c96b621b97dd)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_42a899d3389750ab816267c1c7a2d291)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_de75c236002f51d199db05a793b1d43b)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_af6e61cdc66051a393c7553c13202b1a)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_30416b01b3745ed48d96502ebf5a269e)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_dfc4050c63265f0e9a855b5f2e0f443c)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_c77c3791943559598990a1fd07cd562a)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_6081d3d4fa6450e78151c18685f02fa3)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_3883dc5f185f5a9e834e31ff3f07324b)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_08e008675117580293fc5e3359193e98)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_ce31bf97bec752ec84fa35e1a6f34aea)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_f1dcbb9e4f5351fda2c6025f45dfdaf4)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_4ff89d41754159eb8ee63b63d9ed9a0c)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_95730e52b2bf553f99f196cb46cb9713)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_3fb57c280bce5150a4b772b76b9e8332)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_ca52819ae97d55d88e9c5c6eb5fe6c59)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_b87909e25d395c33b70bf9a110d5fca6)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_f16e3c8402c05630b970202892443dff)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_3c93910e21b6541bbd6564654ac6b442)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_e50010396e055d33860b666f87156fec)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_41fe8ff0a40753b3adcc35c806a6e651)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_62adc40e3d9453a0ba50b4f1f0a1db87)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_a7ae0011a2005082a73fec0955783833(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_41bf10e28fac50c2bbd3c95659df026a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_d8b9fce8a9ec5218872d3e33d86f3b01, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_44f4781370b45017954f00628b704438, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_078c249e87b851dd951404ea387ee065, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_ca4e0f2504f0501098a46f4842a6e051, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_33202054f7c85b258aa0475393812782, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_c8d9076261d052a5a517918ec74aaa8b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_b7fa55340d6f5e5f80437232f7e5081c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_11897d1a4ca9503ca0098237dcd0968d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_c1744fbca9be5d60bd5d9cb9ed524e73, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_7a0c12dc1a015925b216836c9939fc74, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_42ff8769e6d5514dbc5d6f7ec132c68e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_3ce0c431c4715a5dabd15d49261c9210, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_b37c65f26a58588c897a577da3a27768, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_bc610b2c0c6e57eaa1431a570ec8122b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_e353b4916fde5a67aa3741c416df98c7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_327d3df0bbe250fe8868e6e7daeaa686, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_9fb5e1b31eb85a25be31c0cba8a84baa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_29209da8f69458df807d3c153d593725, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_42cbc37ea4d353d08467f510f1e7d101, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_2fc00db1144e560d8450411f98015343, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_e043c8770571599ea3995f915c708c4c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_3708eaaf5226574c91f7ccbcc3a15524, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_49dcaac46adc58ed82aa07ca5395f8e4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_8e2a25cda77251fba35a63c73cfe39e8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_a956820117c552c29556bc9ce0e09c0a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_f69de6477dc05c0985f1ae8a1eee20a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_222485d575445b608c56ecef934b912e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_8c86f5ddbef85027af92c79274695fec, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_80504b654ab0534eb69e6c9cab779e6f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_e75363990d8b533a9379a82e5b27db13, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_84fbd272636e51b5b6f7f44a2dd4f071, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_f97e5649cd9f5791ab6eaf88ac8d1369, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_fcf21636a60f5ffcb771f6886e5e0924, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_9d81205bc47c5ab2a364a913bafd129b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_ad2450055cec5c2a823253b6ae43cd41, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_f7a0ebe5c8ba5f7fabc94b6b7ccfd3a9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_0196c7d0f691572cb8d25aeff99b9ba4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_dc66788070945a8fafed727f0701cc88, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_ddc16d59c8fd5646bc396cedf0e00f34, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_732b5f3f711b5f23bb0e8252caf483a7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_878c427dc1ef58f19e1c2932f1790157, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_1ef26481da6254d2b5f5d140b674ef21, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_d651112653d450c78bdd5a7941e604ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_823ebd56a6e3576cacdbc36215cf56df, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_fb6d90da303058669edc63d8d13d3450, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_468d716857ee50569442c6e35961deb6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_dee7fd1bdb1a55cca392d003a6e15957, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_40c7ead213a85fa39bfdeb9473e4d0ed, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_7e8ae7375c5e5403ba96d82f8ac72f02, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_0f30622154cb517081072ce164553fcb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_9ba3c14eb61a52edbf61f313d5a720de, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_9421f26f546f53ecb2b23006a73339fa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_43c86331ac865c1bad65a8fdc02bced8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_420767cb598451c5adfba92dc8d00fe8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_ae7e25ab756957ed9bc29df18d7708f0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_49ef0acf4f7f5240a5e61b0aed65c4b1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_d887c19d129d54c2994b3ba637aa095b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_15501ebe704b5123b6ece9fbb2d0264c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_e8152cb9ec86570bb7a05dade9b22e2c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_9a892f6eac43545f8b61f263ef919df0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_652a3ddad3da559c8b4ef380563bd553, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_2e7df06d8d9f58008da5c96b621b97dd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_42a899d3389750ab816267c1c7a2d291, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_de75c236002f51d199db05a793b1d43b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_af6e61cdc66051a393c7553c13202b1a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_30416b01b3745ed48d96502ebf5a269e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_dfc4050c63265f0e9a855b5f2e0f443c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_c77c3791943559598990a1fd07cd562a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_6081d3d4fa6450e78151c18685f02fa3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_3883dc5f185f5a9e834e31ff3f07324b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_08e008675117580293fc5e3359193e98, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_ce31bf97bec752ec84fa35e1a6f34aea, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_f1dcbb9e4f5351fda2c6025f45dfdaf4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_4ff89d41754159eb8ee63b63d9ed9a0c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_95730e52b2bf553f99f196cb46cb9713, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_3fb57c280bce5150a4b772b76b9e8332, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_ca52819ae97d55d88e9c5c6eb5fe6c59, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_b87909e25d395c33b70bf9a110d5fca6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_f16e3c8402c05630b970202892443dff, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_3c93910e21b6541bbd6564654ac6b442, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_e50010396e055d33860b666f87156fec, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_41fe8ff0a40753b3adcc35c806a6e651, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_62adc40e3d9453a0ba50b4f1f0a1db87, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_a7ae0011a2005082a73fec0955783833, "");

}