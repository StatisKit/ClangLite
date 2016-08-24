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
    void  (*method_pointer_b11bafeaa7685faea4e891a2f98351d9)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_8b353d5f5d735d3ebc2d64c8772bdbe3)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_a6e3444bf8bd5547af6e5b45b884fe30)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_9db59deba8175a60a8eb4b2690b008ed)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_f08ea14332e85858aaa25324426db703)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_e16f35214f6d5205a7c66e1e0d468922)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_ec3f287662215db4b1d743ad4aec98aa)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_b942979e8e045f1098af474050b24387)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_843e7301768d5f7390253957e28362c9)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_342e67b8447450e9a8e40692d209be71)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_ab1cf2da511a5cc7b9a35fb15aff6eaf)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_b6699b9cfec55cca8c1aa93de31e90ce)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_67dad26727e952c0a2ced46973f1b13d)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_4fa9eb6d84ab58298f7b1f559a8b2d65)() const = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_089893deecc95fa3820fc754e2b86d59)() = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_c20d820dd0115119911f15a9d84948a2)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_40bfdedb0b1b5ffc8dfa0eddf1c6b42b)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_ca57d2806ae05426b091f6b792bc4aa4)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_38dc98ab6d665bdea1afa03b8ee09abc)() const = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_343fbcf7df695555a6af97d59469bebd)() = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_bce4fac9273656998aba4cb3c1c72180)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_a10f1e23dcc85abe88d122d70727d4ff)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_ab851cfab9295f8f9ae2e2b54f437f70)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_819c2c9bce7f5d37bde36f579da0290c)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_d8263e1354df59928393b14331f6cab3)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_654feddcc0b45802979960fc81652527)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_cbd2fd11e9075b7a941062e4fa1b2d44)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_b8c0a0beedaa530cbe2a09c9b9db84b0)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_ddf2f0a2f7f45f688ee44de9a291d953)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_c3a62bddcf3650339b0e8bfbf1f4b3bd)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_a0435ab81d0b5163898f1fbde491fb79)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_22366ac69614553d84bb67856dffa89a)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_313efb38e7c85fb0b22fac102499fa5b)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_4ba71e372ffb50079f41cefe9d588bed)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_8a12348834325689bf8a8985d4c14b76)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_8663072f945950cbbc93c99c9b063583)() = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_3a7c24a5b31a5187814bffcca1236615)() const = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_dafd1787a87b530d8010b104fb0cacec)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_2b95f70293e552659b145db6737f3910)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_655296d61a0950c09286f93f0502d967)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_fe691769491657a3839be023cb930609)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_991272af285c52ad984aa9c72d610fc4)() = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_ae7592d78aa15990889fd011f20cf144)() const = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_81aa5bfc40cc55da9e09a3b7c2ae5568)() = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_a510d251cb6956399edaa1513823a1a0)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_b2600431f87e5f8db547c068ecdb57dd)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_af687ae10afc5058b981617e5eaee293)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_35bf14256296531f8ef24330600037d4)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_bfb51491b1c757009db1207ac7bcde54)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_4190366ffef35a72ad7a1fe9c7a49342)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_28d2e06c0ed851259e4aca8b70151f21)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_8950dccbd14e5716afdf5e0dfb1a6936)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_61bf9a6463225f4883679301a6459e85)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_20950c74d85c5cae898ab85cd2055b93)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_db592877a3825c92b4400e0e37846c72)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_a2e79d751ad2569c97eb4375d0254c0f)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_32a734fedeca54ee9d2242b91223bbaf)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_97dd894d442459cd972ea63ed526ddfb)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_3d2072be7209532280f0aae2610043f6)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_8de651595cb3524f9beb66188832f1f2)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_2f3efab4fdb0535fade1513da503b71d)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_ce53bff2289e57099169265dc27a2f0a)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_48f9fdf25ba3572bb608baf2d52d580a)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_5e2e354051395788a32680597f926b70)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_711766caf9ef5cb9a54914f7447dea04)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_b0f33473e15c5a9ba74ae0c5db1e2b77)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_5e015d5bed1e57d59c80941514ed0abe)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_111a2177e0c755cb80e4f8cf24af811f)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_37b9e53ea96e58e6bd596f1b9d7cd1ee)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_f463a1dfaab358548b31520ed76efb0d)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_d5bb16fe0e9a514494b6f751409a425f)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_3e5c6fd42fcf518da43c09d50d7a17b4)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_3ce3c4c8662259f3a5324678e4426213)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_1031c4ce3079549abbf88b9ae48e8d5b)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_49e070c2e4425cbdaa82c693474fe3ce)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_dac5b9ccb9175a009ba12e09c39d2f74)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_52fbe9b879135bb4b53c5c2ebd741906)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_7ae6569ca6da544d8ff0f43ff9bb9e1d)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_7c9ba47dd73859f1b7973db5beb81272)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_3d398666644352a4b549fa2668469935)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_92738f8cc60057fa8aca6d412db70049)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_2696385d20415d0dbc28b185ea14aaa8)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_c8723cd47de553739c4e2fc1fb722f2c)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_245262372b155734af3184277d9e8f15)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_80e0b62e1fc05a939870525d2641a474(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_b11bafeaa7685faea4e891a2f98351d9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_8b353d5f5d735d3ebc2d64c8772bdbe3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_a6e3444bf8bd5547af6e5b45b884fe30, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_9db59deba8175a60a8eb4b2690b008ed, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_f08ea14332e85858aaa25324426db703, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_e16f35214f6d5205a7c66e1e0d468922, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_ec3f287662215db4b1d743ad4aec98aa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_b942979e8e045f1098af474050b24387, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_843e7301768d5f7390253957e28362c9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_342e67b8447450e9a8e40692d209be71, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_ab1cf2da511a5cc7b9a35fb15aff6eaf, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_b6699b9cfec55cca8c1aa93de31e90ce, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_67dad26727e952c0a2ced46973f1b13d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_4fa9eb6d84ab58298f7b1f559a8b2d65, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_089893deecc95fa3820fc754e2b86d59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_c20d820dd0115119911f15a9d84948a2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_40bfdedb0b1b5ffc8dfa0eddf1c6b42b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_ca57d2806ae05426b091f6b792bc4aa4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_38dc98ab6d665bdea1afa03b8ee09abc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_343fbcf7df695555a6af97d59469bebd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_bce4fac9273656998aba4cb3c1c72180, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_a10f1e23dcc85abe88d122d70727d4ff, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_ab851cfab9295f8f9ae2e2b54f437f70, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_819c2c9bce7f5d37bde36f579da0290c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_d8263e1354df59928393b14331f6cab3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_654feddcc0b45802979960fc81652527, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_cbd2fd11e9075b7a941062e4fa1b2d44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_b8c0a0beedaa530cbe2a09c9b9db84b0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_ddf2f0a2f7f45f688ee44de9a291d953, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_c3a62bddcf3650339b0e8bfbf1f4b3bd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_a0435ab81d0b5163898f1fbde491fb79, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_22366ac69614553d84bb67856dffa89a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_313efb38e7c85fb0b22fac102499fa5b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_4ba71e372ffb50079f41cefe9d588bed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_8a12348834325689bf8a8985d4c14b76, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_8663072f945950cbbc93c99c9b063583, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_3a7c24a5b31a5187814bffcca1236615, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_dafd1787a87b530d8010b104fb0cacec, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_2b95f70293e552659b145db6737f3910, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_655296d61a0950c09286f93f0502d967, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_fe691769491657a3839be023cb930609, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_991272af285c52ad984aa9c72d610fc4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_ae7592d78aa15990889fd011f20cf144, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_81aa5bfc40cc55da9e09a3b7c2ae5568, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_a510d251cb6956399edaa1513823a1a0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_b2600431f87e5f8db547c068ecdb57dd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_af687ae10afc5058b981617e5eaee293, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_35bf14256296531f8ef24330600037d4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_bfb51491b1c757009db1207ac7bcde54, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_4190366ffef35a72ad7a1fe9c7a49342, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_28d2e06c0ed851259e4aca8b70151f21, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_8950dccbd14e5716afdf5e0dfb1a6936, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_61bf9a6463225f4883679301a6459e85, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_20950c74d85c5cae898ab85cd2055b93, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_db592877a3825c92b4400e0e37846c72, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_a2e79d751ad2569c97eb4375d0254c0f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_32a734fedeca54ee9d2242b91223bbaf, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_97dd894d442459cd972ea63ed526ddfb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_3d2072be7209532280f0aae2610043f6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_8de651595cb3524f9beb66188832f1f2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_2f3efab4fdb0535fade1513da503b71d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_ce53bff2289e57099169265dc27a2f0a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_48f9fdf25ba3572bb608baf2d52d580a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_5e2e354051395788a32680597f926b70, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_711766caf9ef5cb9a54914f7447dea04, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_b0f33473e15c5a9ba74ae0c5db1e2b77, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_5e015d5bed1e57d59c80941514ed0abe, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_111a2177e0c755cb80e4f8cf24af811f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_37b9e53ea96e58e6bd596f1b9d7cd1ee, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_f463a1dfaab358548b31520ed76efb0d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_d5bb16fe0e9a514494b6f751409a425f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_3e5c6fd42fcf518da43c09d50d7a17b4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_3ce3c4c8662259f3a5324678e4426213, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_1031c4ce3079549abbf88b9ae48e8d5b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_49e070c2e4425cbdaa82c693474fe3ce, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_dac5b9ccb9175a009ba12e09c39d2f74, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_52fbe9b879135bb4b53c5c2ebd741906, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_7ae6569ca6da544d8ff0f43ff9bb9e1d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_7c9ba47dd73859f1b7973db5beb81272, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_3d398666644352a4b549fa2668469935, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_92738f8cc60057fa8aca6d412db70049, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_2696385d20415d0dbc28b185ea14aaa8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_c8723cd47de553739c4e2fc1fb722f2c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_245262372b155734af3184277d9e8f15, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_80e0b62e1fc05a939870525d2641a474, "");

}