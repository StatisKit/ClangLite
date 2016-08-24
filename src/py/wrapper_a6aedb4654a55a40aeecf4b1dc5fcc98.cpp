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
    void  (*method_pointer_5311fde8c9f3594ebfe7902eefd31ed4)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_abc2b60caaa65dcba9c37fb668290aaa)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_be3013de0b075e20a45d882c7c315aa9)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_ffb3cddc4dc65465a60f3d67c04a2899)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_bd83904d491654bca580ce193dd31d26)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_b7a710517b635ea7846820bf02456231)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_64533dc6553953aa9faea73e555d8372)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_0c7a44de05615cd2b1e8786687734c3e)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_1b3e9fcad5df5a679525e3e8daf6e9c2)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_c262a6b7592759848832570a9216acf3)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_88cdba5b57ea540f8e377b5f1cb1cb80)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_f31b1937d19e587baf394d8799e82059)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_8b9e3305c8a052e69ba52c7ea29a6031)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_63f5d55786015d7f9dccd7e131296934)() const = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_b85f521f81c65e40a32b3c50bec01d00)() = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_87f52835ab105b8ab1b238f7eee0e6bc)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_5ea035eb2cfe5640b8499a8c5919c979)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_886255fb8e78552fa5598b8dd015dba5)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_7d3ecc83df9a51b9b11e64d978b9750a)() const = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_40fccbc77fb65e3b9ac93d574bbd47a7)() = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_2bf45d9a96c85b1b8b9d3830d0d6a913)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_67e7d2307da75a7b82271c20603a21e3)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_b553457b2e205cb8be6f64ad4628d808)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_d7a8a567055254d2943d83adbc66f415)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_de5747824bd85a88860e3fe79760a54f)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_2b26dc22773a54d19f4d2a49fdae974d)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_18c5c5730a9c5dbe8df08659f68b5077)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_c4345673de9e54e49e1a9e4313be18c9)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_8a21cb2e75e75912b6f0f167ca866268)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_5981cbc9782a58f8992a98b4ff7236ac)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_8409c93f22215cf5adc2d7b3fb9801d3)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_1a750e2f5d5d5807a76419a5cde52333)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_720625002e895bb0a26e15c8e2022c1b)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_7d1019c07ac0580190c8cfd72f6030bc)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_54d1079dddb65212b964ffcb551aeee0)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_c459740de73d5f67b5869270f5b03830)() const = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_f7a7aa4e52625a9e9f964bb914fd9ce4)() = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_018640aa62ed549481e3bd2ff109faec)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_9fa678dc991d544ea7d145ae17cfaebd)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_4aa87fd1bb82506fab06a979cf1abf82)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_d0684c6ae01f5371b863749a503d7652)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_f229eb7c78af56d5989e7499fdc161e6)() = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_dbca8d1d1c0e50a0a8efd8117f53b1f7)() const = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_e49ad9ede2395faeaeffb3fd707c5e25)() = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_905a31de63a25c85a606602b6457d803)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_534998bc1af65f23ac26b4cd9226f486)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_21c2dece0b0f5596bd178d8021450383)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_6c9e371e931d5c8f89ed702c46bbea11)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_62fc722da2525a6f8be4d1cf893be1b5)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_c5d7beee84fe51bcbbc512e495785340)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_c83b4a73c1675ef0be97d86aac748cdc)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_ec916ececafc5a408e8714356d1bcf23)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_2ac5d4141ecf5d0fbb3d0da0cc877bb0)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_0fcba166db4b5e54ada3fd3bf1726fd2)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_0e1a4f9bfaab56a4acedabc75f7d0c14)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_928260e26a6c5c78839d40f5c38fe4e0)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_241cde87ef405303a216cc79fe392b9d)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_5093291425c25bde94b5645d0139a9c1)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_5edf6904de3255fe82de46909232c7d4)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_63673d51804a5b69860bbdafdd9da34c)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_7da50ae77850566897b2386e19e07134)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_89d83b0e23a353c8ae50078c18e93fc5)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_73c06544d87a5a9eb4263ca426027ec0)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_d4723bf2ac455ec7b6f74ec4d7e2d2f3)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_23b3a3d3d0a6515f8e8d6eaa138bb7ca)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_b266042eb259542e9a7375751b24de1e)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_9972e523913959fd81a4aa5ae5da1ba8)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_24ffd2e72f4250a58b919885b49c4f62)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_cec53f40fc0f58468e078b47dd944bab)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_00640d2fc8a35ea08c749f968f3dc78c)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_cdbe2220e2b55a52a95dbc5cc67ef454)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_a5574a82f7d7563a8eb3f3910b51184e)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_08a80806657b5beb91a694e2f1b16fa8)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_720aa302806e51dea9f531266e7b1cee)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_b956a31e2f255203b99a2e59858c6b4b)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_a76255b808cf516f8f1f76e92d1885de)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_68ead95759f952d191ae030e007449b4)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_a52a355a0fa352d486d502fef49fff20)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_6e890eba67595916bc4006e59baef32a)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_10afbe5ce344575c9193d244fba1318e)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_c1d653a87725517abf9a02161ea24427)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_fc510f4bb7f650f59256d1b00dcb9cbf)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_ee7fd99cae415e8991528e2ae1cef25e)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_11162e5e95845ca1a697637e01cc0697)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_b7c6a53f952458a68a3fdddf15c078ab(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_5311fde8c9f3594ebfe7902eefd31ed4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_abc2b60caaa65dcba9c37fb668290aaa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_be3013de0b075e20a45d882c7c315aa9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_ffb3cddc4dc65465a60f3d67c04a2899, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_bd83904d491654bca580ce193dd31d26, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_b7a710517b635ea7846820bf02456231, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_64533dc6553953aa9faea73e555d8372, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_0c7a44de05615cd2b1e8786687734c3e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_1b3e9fcad5df5a679525e3e8daf6e9c2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_c262a6b7592759848832570a9216acf3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_88cdba5b57ea540f8e377b5f1cb1cb80, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_f31b1937d19e587baf394d8799e82059, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_8b9e3305c8a052e69ba52c7ea29a6031, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_63f5d55786015d7f9dccd7e131296934, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_b85f521f81c65e40a32b3c50bec01d00, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_87f52835ab105b8ab1b238f7eee0e6bc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_5ea035eb2cfe5640b8499a8c5919c979, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_886255fb8e78552fa5598b8dd015dba5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_7d3ecc83df9a51b9b11e64d978b9750a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_40fccbc77fb65e3b9ac93d574bbd47a7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_2bf45d9a96c85b1b8b9d3830d0d6a913, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_67e7d2307da75a7b82271c20603a21e3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_b553457b2e205cb8be6f64ad4628d808, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_d7a8a567055254d2943d83adbc66f415, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_de5747824bd85a88860e3fe79760a54f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_2b26dc22773a54d19f4d2a49fdae974d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_18c5c5730a9c5dbe8df08659f68b5077, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_c4345673de9e54e49e1a9e4313be18c9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_8a21cb2e75e75912b6f0f167ca866268, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_5981cbc9782a58f8992a98b4ff7236ac, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_8409c93f22215cf5adc2d7b3fb9801d3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_1a750e2f5d5d5807a76419a5cde52333, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_720625002e895bb0a26e15c8e2022c1b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_7d1019c07ac0580190c8cfd72f6030bc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_54d1079dddb65212b964ffcb551aeee0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_c459740de73d5f67b5869270f5b03830, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_f7a7aa4e52625a9e9f964bb914fd9ce4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_018640aa62ed549481e3bd2ff109faec, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_9fa678dc991d544ea7d145ae17cfaebd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_4aa87fd1bb82506fab06a979cf1abf82, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_d0684c6ae01f5371b863749a503d7652, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_f229eb7c78af56d5989e7499fdc161e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_dbca8d1d1c0e50a0a8efd8117f53b1f7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_e49ad9ede2395faeaeffb3fd707c5e25, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_905a31de63a25c85a606602b6457d803, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_534998bc1af65f23ac26b4cd9226f486, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_21c2dece0b0f5596bd178d8021450383, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_6c9e371e931d5c8f89ed702c46bbea11, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_62fc722da2525a6f8be4d1cf893be1b5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_c5d7beee84fe51bcbbc512e495785340, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_c83b4a73c1675ef0be97d86aac748cdc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_ec916ececafc5a408e8714356d1bcf23, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_2ac5d4141ecf5d0fbb3d0da0cc877bb0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_0fcba166db4b5e54ada3fd3bf1726fd2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_0e1a4f9bfaab56a4acedabc75f7d0c14, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_928260e26a6c5c78839d40f5c38fe4e0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_241cde87ef405303a216cc79fe392b9d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_5093291425c25bde94b5645d0139a9c1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_5edf6904de3255fe82de46909232c7d4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_63673d51804a5b69860bbdafdd9da34c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_7da50ae77850566897b2386e19e07134, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_89d83b0e23a353c8ae50078c18e93fc5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_73c06544d87a5a9eb4263ca426027ec0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_d4723bf2ac455ec7b6f74ec4d7e2d2f3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_23b3a3d3d0a6515f8e8d6eaa138bb7ca, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_b266042eb259542e9a7375751b24de1e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_9972e523913959fd81a4aa5ae5da1ba8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_24ffd2e72f4250a58b919885b49c4f62, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_cec53f40fc0f58468e078b47dd944bab, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_00640d2fc8a35ea08c749f968f3dc78c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_cdbe2220e2b55a52a95dbc5cc67ef454, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_a5574a82f7d7563a8eb3f3910b51184e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_08a80806657b5beb91a694e2f1b16fa8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_720aa302806e51dea9f531266e7b1cee, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_b956a31e2f255203b99a2e59858c6b4b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_a76255b808cf516f8f1f76e92d1885de, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_68ead95759f952d191ae030e007449b4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_a52a355a0fa352d486d502fef49fff20, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_6e890eba67595916bc4006e59baef32a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_10afbe5ce344575c9193d244fba1318e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_c1d653a87725517abf9a02161ea24427, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_fc510f4bb7f650f59256d1b00dcb9cbf, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_ee7fd99cae415e8991528e2ae1cef25e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_11162e5e95845ca1a697637e01cc0697, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_b7c6a53f952458a68a3fdddf15c078ab, "");

}