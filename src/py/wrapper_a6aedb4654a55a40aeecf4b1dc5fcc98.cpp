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
    void  (*method_pointer_5667106d6dd75767b447cc33dd672a9c)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_f91d7eccdf805fb88e4c0622f7b36956)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_4ac4845bfff4501ea4e36178065e8436)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_e166b35ce27b535c80f0df6f670bd740)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_17ec9ccd2af85ba399d1dbc18d121c55)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_ce473528a55956fea84a0d0c6e0b66c8)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_4d51439540a358cc8b7b6aea6965a57b)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_54338e0bde275cd0adb737e91d921d58)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_9b2f2fba7e8659b3a2e0fd5a182754ba)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_221ee5b25d1755a298683f52aa78ab84)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_e0a7a776bf795a2fbc01b15909c9de7c)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_61f3e092b4125444aa09a385fded9dd0)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_d6e190d861635eca9dc40117e86ac095)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_8cfdc4b423625b2b9711cca674fee159)() = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_f102d78c5549545b83c7d5c81874fe35)() const = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_479d64a9627d537289a504f00b8e3c9b)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_d9a6e3fac40d59979c923994b7c75f78)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_012b7394a76459deac2b2c2a6efdeffb)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_0c92de4cd846586ea8fbf09a9859ae85)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_f85815618f1b5cd7969c61cb18ff46bd)() const = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_da564c2cef1b50f2a17891e6d04a8e2f)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_8adc0df0547b546cbb60f4d1ad773c43)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_c6a09bbfc32f5ee8bfaf3c3713cef1bd)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_04dddaa966e150c08cfbfc0ad607ea65)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_0772a68fec5a5401ab70f2990982ccf1)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_857705b1d6f853fd80cf1d435ade6870)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_9043ab12c50753d686141e61847245b9)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_f2ef1205299c533883f6d7ff6561e420)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_1ba9c3b5a36e563e9dbf97370304ddaf)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_5479331297005802b2453b0821e9c3dd)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_7ee30498d381595e807a477fb4ef5b94)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_fe860328b6125588b15aa9012e522b67)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_7fe11230894656a88e0e9d0226ee2b29)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_0402a176de5a58328dae4236cb301afb)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_7366a52d42d153498418db2d2fe7e2a3)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_7207e06f62a253f0bcb3158eb28d49bc)() = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_38beb3d6c9af5b619801791f09d5b135)() const = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_aa6add80b297566cb5e6ab23bdcc4ef9)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_aa80165b88ff5f84b2f9553787d7bb71)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_cdcc5065af1557589e7d44e07bb8058f)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_3d1fa0f1d37255449143717dccd2df20)() = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_06ed6b437bd85bc680ca9b7d5650217e)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_cf9638cd804b508b95e1e1b57106123f)() const = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_d06984040c9d5611b10b852150c19e09)() = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_63e13d6c54f45d90a7cb0cd83f127837)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_9780a5b8b87a54d3bd2d146ccb2ca7bf)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_4d711ff961445b8ea1942606aa3fa1da)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_f5f6ff0b76e95e8f955c43db63fee930)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_c209f41e60515844af7a33657b05408e)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_3628b22c652654daab7e4aeb13d8aed8)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_ad0d2392c888554ba033d5b812d6a81e)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_9051d01aa6a156ccb42946506b1b354c)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_edf832f3a8745c099d4881ccaa64b0a0)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_c4503c4367595fa7b3d7d49e369222dd)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_391af31404e55e01be867a9599223bdd)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_dd898c14223e53078fec10d79a8ee47d)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_4aa9d281b0b2579687428dac1d464cd6)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_b2fa0ef7a348556c84fb9ef613929a21)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_6741629cd1e15dee985677b4709d9901)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_bb6618f52fbd5a3ab4e2cff549b9c86e)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_942ff980c20a5821963f0f457861d771)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_89edeedec8c45472864f1c3f2ef69680)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_f9a0a3907ed05fc1856dd9bf4739b9bc)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_1f97ec8991ed59519f3db37e8cdbb775)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_f271b1683ddb56a39e196025e5bbcf91)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_e8c15466543f5586a43a6ccb66f5030b)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_225204c9316a53e899af8165d91f5d3e)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_4a1eb2bb61995e94b52e141f21174fdb)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_ad904cedbcef5e7697dd91070377ac44)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_93194158a3945f0da592d490455ed546)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_851decafe85c50a09d7675d3c1b86a25)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_0b61ddcc1b105c8db8755b6c34434350)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_410be9e0e5ca5256a0fdc085f43f11c9)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_54a758630d96574c8ddeee26186dcc10)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_ea1139bdda8f5541ad0db225d6ddca87)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_4732bec6b4bf55abb93926698d49e0a8)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_7297e94d871e54dfb658a82384639ff9)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_1d9766ffa41656b88f78bddeb0ccfa5a)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_2d05af4748865ca3bfc10debfeb3761b)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_bcd00bf1db6b52c5a468cfebe672bbb1)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_ae2fb6294b3e5142b94a68b5d6ead7c2)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_625c108cf81d54b3a6fd42d79ce24df9)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_12f67a6bedac5c7ca08592fb8d2b9c88)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_db5564a353e651db8e42772888992b1f)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_3593c0b86c5d500caa21a6ec4c9212eb(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_5667106d6dd75767b447cc33dd672a9c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_f91d7eccdf805fb88e4c0622f7b36956, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_4ac4845bfff4501ea4e36178065e8436, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_e166b35ce27b535c80f0df6f670bd740, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_17ec9ccd2af85ba399d1dbc18d121c55, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_ce473528a55956fea84a0d0c6e0b66c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_4d51439540a358cc8b7b6aea6965a57b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_54338e0bde275cd0adb737e91d921d58, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_9b2f2fba7e8659b3a2e0fd5a182754ba, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_221ee5b25d1755a298683f52aa78ab84, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_e0a7a776bf795a2fbc01b15909c9de7c, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_61f3e092b4125444aa09a385fded9dd0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_d6e190d861635eca9dc40117e86ac095, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_8cfdc4b423625b2b9711cca674fee159, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_f102d78c5549545b83c7d5c81874fe35, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_479d64a9627d537289a504f00b8e3c9b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_d9a6e3fac40d59979c923994b7c75f78, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_012b7394a76459deac2b2c2a6efdeffb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_0c92de4cd846586ea8fbf09a9859ae85, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_f85815618f1b5cd7969c61cb18ff46bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_da564c2cef1b50f2a17891e6d04a8e2f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_8adc0df0547b546cbb60f4d1ad773c43, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_c6a09bbfc32f5ee8bfaf3c3713cef1bd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_04dddaa966e150c08cfbfc0ad607ea65, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_0772a68fec5a5401ab70f2990982ccf1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_857705b1d6f853fd80cf1d435ade6870, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_9043ab12c50753d686141e61847245b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_f2ef1205299c533883f6d7ff6561e420, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_1ba9c3b5a36e563e9dbf97370304ddaf, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_5479331297005802b2453b0821e9c3dd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_7ee30498d381595e807a477fb4ef5b94, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_fe860328b6125588b15aa9012e522b67, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_7fe11230894656a88e0e9d0226ee2b29, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_0402a176de5a58328dae4236cb301afb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_7366a52d42d153498418db2d2fe7e2a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_7207e06f62a253f0bcb3158eb28d49bc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_38beb3d6c9af5b619801791f09d5b135, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_aa6add80b297566cb5e6ab23bdcc4ef9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_aa80165b88ff5f84b2f9553787d7bb71, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_cdcc5065af1557589e7d44e07bb8058f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_3d1fa0f1d37255449143717dccd2df20, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_06ed6b437bd85bc680ca9b7d5650217e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_cf9638cd804b508b95e1e1b57106123f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_d06984040c9d5611b10b852150c19e09, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_63e13d6c54f45d90a7cb0cd83f127837, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_9780a5b8b87a54d3bd2d146ccb2ca7bf, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_4d711ff961445b8ea1942606aa3fa1da, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_f5f6ff0b76e95e8f955c43db63fee930, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_c209f41e60515844af7a33657b05408e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_3628b22c652654daab7e4aeb13d8aed8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_ad0d2392c888554ba033d5b812d6a81e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_9051d01aa6a156ccb42946506b1b354c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_edf832f3a8745c099d4881ccaa64b0a0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_c4503c4367595fa7b3d7d49e369222dd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_391af31404e55e01be867a9599223bdd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_dd898c14223e53078fec10d79a8ee47d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_4aa9d281b0b2579687428dac1d464cd6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_b2fa0ef7a348556c84fb9ef613929a21, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_6741629cd1e15dee985677b4709d9901, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_bb6618f52fbd5a3ab4e2cff549b9c86e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_942ff980c20a5821963f0f457861d771, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_89edeedec8c45472864f1c3f2ef69680, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_f9a0a3907ed05fc1856dd9bf4739b9bc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_1f97ec8991ed59519f3db37e8cdbb775, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_f271b1683ddb56a39e196025e5bbcf91, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_e8c15466543f5586a43a6ccb66f5030b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_225204c9316a53e899af8165d91f5d3e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_4a1eb2bb61995e94b52e141f21174fdb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_ad904cedbcef5e7697dd91070377ac44, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_93194158a3945f0da592d490455ed546, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_851decafe85c50a09d7675d3c1b86a25, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_0b61ddcc1b105c8db8755b6c34434350, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_410be9e0e5ca5256a0fdc085f43f11c9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_54a758630d96574c8ddeee26186dcc10, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_ea1139bdda8f5541ad0db225d6ddca87, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_4732bec6b4bf55abb93926698d49e0a8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_7297e94d871e54dfb658a82384639ff9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_1d9766ffa41656b88f78bddeb0ccfa5a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_2d05af4748865ca3bfc10debfeb3761b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_bcd00bf1db6b52c5a468cfebe672bbb1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_ae2fb6294b3e5142b94a68b5d6ead7c2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_625c108cf81d54b3a6fd42d79ce24df9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_12f67a6bedac5c7ca08592fb8d2b9c88, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_db5564a353e651db8e42772888992b1f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_3593c0b86c5d500caa21a6ec4c9212eb, "");

}