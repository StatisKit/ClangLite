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
    void  (*method_pointer_b54dd00202385a0ab0ce1e87c2ce0682)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_6e5d90f738e65a2ba3051959388e15d4)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_41da9879fec75bce8969ac57a2718340)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_cf16767969625d159e51905f190c8102)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_5f9700d098cd5bb5b5163bb354e9b5d1)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_e990f91ad55058b59d496b762ee3fd31)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_aae0225642685741923d5229a3642e69)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_447a141c6cef5a0990107c23a64a3ede)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_f67a4dcd9abc5bf6a8673f810683454b)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_bb02c5e8897e573296432933ae8f376c)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_56e0b26f9f3f58fbad6d8e8ceaecb12a)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_830a01b7fdc050d4b8e654ec426f2c3d)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_1a0451ac552e50d1a46dda87ad2ced85)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_b87c519cc2f450dab1d23897608f9759)() const = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_356c9409138a5c398746b013c20bdb83)() = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_627400acec0357d5bf79d404e600c5ab)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_de0d571179c851b4977def3baa6c4150)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_627c9e57cbc9593c8d18f1008b0d96b4)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_f97b90ea74475fb8a080783bce0ed580)() const = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_5254ce6c817e537d89c2cae3c4265100)() = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_7b03eee072295cc894a5836e7f77f777)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_f95b73884af152e79fa935cdb469ceea)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_bb566573117e57eda6b55f43e9f732fd)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_0c0a5e323ea253beb3e44cc7d1852258)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_42c36e02329a5cc88f56161acd0f3d18)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_c45887b3952c5b8abcf836f8bdd5d75d)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_ac99e9d0d4735fe19ecb58c5587db370)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_f84aab93854d527687d78d60e4cdb51f)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_6fe412b373385cd3ba8cefbf972f89e6)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_b7cda917a6d65bce914919240ad24ee7)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_ff98b0cf61de5a4daaf83489b6ee77cd)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_7b15dd026fc85e55aaa68f71f0dc462a)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_19599d5b679c5d838ac98c18b3f439cb)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_52948136c2a6592e9c8b9c9010000b7b)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_532c49869c5a553ebe5e2a8b8720e1f6)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_5ec36ef487075b2eacfa468a3011c489)() = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_0db3f459212c58f9b02362759770098e)() const = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_694855effd0c5ba8b95f96d2b01c47b6)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_359ae04542c258c88b2ea1193302ebb1)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_0d97d522fd405af2aea594ed9b593b75)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_0b34d8af8b215a538d27b50181d55cb4)() = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_0c314bd869545e1d9a66312036b0ee61)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_0ad7b2401d9858cb9dcbb6cef3dc8c26)() const = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_ca90a006563955b1824fff4c97ebecd8)() = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_ce994eb0ca7a504eb50718e672986754)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_d64b832196d954a9ab6ef4c9380c1196)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_5d4a36ca9e5358a69c3faaf01c8c2e0a)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_7f2b7fbcc9ab5d73a3c17818c0a08b19)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_f3c255fe73145751bbd9ab7ba4e438b2)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_bc585f3d85525d9b9c38783d56698e94)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_97a6ade7fd585ecea8eed1ce88fd7453)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_04839a0cf42f551f834e0550f68e3374)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_671bf3530ebf5fc581026fbc8b9399a7)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_75436b7150c55b578a8e780cc46d4692)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_43092c0820925135968da487c0bd8a4d)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_1ba34e85cf6b50f3816abf99f8c67175)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_2bfb51fd991553be8f152ec791482886)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_a3e8549380b6505c8bc09a3c820ec487)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_20f138ba7c3d5ff3b58b9ccd17e3c72f)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_c73831d6c3c653b79f5f7c9d58be5ebb)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_88a63b4c292f56ce9229d2034503663e)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_4605b48604d85ae78f6436ff74a2bb47)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_ad17591f94505b5583ead754b276b6fb)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_252ee947b92a5847a653a5bdf09f83e4)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_eb80cfe3826d5c40975e3a3da4086540)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_4d19c141ade15fd7b53e86f9fceac183)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_61182615ecc558cda27b4a1bab568379)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_284065494b3053488335fb431617ace3)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_65a1895a545a5548b6f7bf52eda6ddbb)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_7dcda27213cb5e19ac13577ffb17ffa8)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_60bda70cc3ee5d9b898b2439f084f8af)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_7d87071950b95770b6b7aea8acc33d11)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_050f067c9cd55bb78b275a0627c20897)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_729bd93e98a355038f660baac9b9fcd3)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_8a7f6b594f495614bd96b88fe4f973ca)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_0eb176fa529f531aadecc3e46e887581)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_944d5fa24cd8575da9179b08adfdba89)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_bb8438066a2a5bc69d77dea5972310fe)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_547533f10fd055eb89478a8bc5857c2c)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_6489fc6656865c86880a99c0096d301c)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_e645ee8241125d6ea922591cb79fa524)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_d68ccf5dbbe95739a43c8209cfe2584f)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_37c51c5db5a75b3c830020a7d1d398d1)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_b1a263ca617a5259815aa966267460e1)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_c9038a920313562294e2b7fde0558a5f(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_b54dd00202385a0ab0ce1e87c2ce0682, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_6e5d90f738e65a2ba3051959388e15d4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_41da9879fec75bce8969ac57a2718340, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_cf16767969625d159e51905f190c8102, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_5f9700d098cd5bb5b5163bb354e9b5d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_e990f91ad55058b59d496b762ee3fd31, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_aae0225642685741923d5229a3642e69, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_447a141c6cef5a0990107c23a64a3ede, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_f67a4dcd9abc5bf6a8673f810683454b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_bb02c5e8897e573296432933ae8f376c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_56e0b26f9f3f58fbad6d8e8ceaecb12a, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_830a01b7fdc050d4b8e654ec426f2c3d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_1a0451ac552e50d1a46dda87ad2ced85, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_b87c519cc2f450dab1d23897608f9759, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_356c9409138a5c398746b013c20bdb83, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_627400acec0357d5bf79d404e600c5ab, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_de0d571179c851b4977def3baa6c4150, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_627c9e57cbc9593c8d18f1008b0d96b4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_f97b90ea74475fb8a080783bce0ed580, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_5254ce6c817e537d89c2cae3c4265100, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_7b03eee072295cc894a5836e7f77f777, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_f95b73884af152e79fa935cdb469ceea, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_bb566573117e57eda6b55f43e9f732fd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_0c0a5e323ea253beb3e44cc7d1852258, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_42c36e02329a5cc88f56161acd0f3d18, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_c45887b3952c5b8abcf836f8bdd5d75d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_ac99e9d0d4735fe19ecb58c5587db370, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_f84aab93854d527687d78d60e4cdb51f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_6fe412b373385cd3ba8cefbf972f89e6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_b7cda917a6d65bce914919240ad24ee7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_ff98b0cf61de5a4daaf83489b6ee77cd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_7b15dd026fc85e55aaa68f71f0dc462a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_19599d5b679c5d838ac98c18b3f439cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_52948136c2a6592e9c8b9c9010000b7b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_532c49869c5a553ebe5e2a8b8720e1f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_5ec36ef487075b2eacfa468a3011c489, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_0db3f459212c58f9b02362759770098e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_694855effd0c5ba8b95f96d2b01c47b6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_359ae04542c258c88b2ea1193302ebb1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_0d97d522fd405af2aea594ed9b593b75, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_0b34d8af8b215a538d27b50181d55cb4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_0c314bd869545e1d9a66312036b0ee61, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_0ad7b2401d9858cb9dcbb6cef3dc8c26, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_ca90a006563955b1824fff4c97ebecd8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_ce994eb0ca7a504eb50718e672986754, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_d64b832196d954a9ab6ef4c9380c1196, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_5d4a36ca9e5358a69c3faaf01c8c2e0a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_7f2b7fbcc9ab5d73a3c17818c0a08b19, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_f3c255fe73145751bbd9ab7ba4e438b2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_bc585f3d85525d9b9c38783d56698e94, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_97a6ade7fd585ecea8eed1ce88fd7453, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_04839a0cf42f551f834e0550f68e3374, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_671bf3530ebf5fc581026fbc8b9399a7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_75436b7150c55b578a8e780cc46d4692, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_43092c0820925135968da487c0bd8a4d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_1ba34e85cf6b50f3816abf99f8c67175, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_2bfb51fd991553be8f152ec791482886, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_a3e8549380b6505c8bc09a3c820ec487, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_20f138ba7c3d5ff3b58b9ccd17e3c72f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_c73831d6c3c653b79f5f7c9d58be5ebb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_88a63b4c292f56ce9229d2034503663e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_4605b48604d85ae78f6436ff74a2bb47, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_ad17591f94505b5583ead754b276b6fb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_252ee947b92a5847a653a5bdf09f83e4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_eb80cfe3826d5c40975e3a3da4086540, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_4d19c141ade15fd7b53e86f9fceac183, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_61182615ecc558cda27b4a1bab568379, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_284065494b3053488335fb431617ace3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_65a1895a545a5548b6f7bf52eda6ddbb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_7dcda27213cb5e19ac13577ffb17ffa8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_60bda70cc3ee5d9b898b2439f084f8af, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_7d87071950b95770b6b7aea8acc33d11, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_050f067c9cd55bb78b275a0627c20897, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_729bd93e98a355038f660baac9b9fcd3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_8a7f6b594f495614bd96b88fe4f973ca, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_0eb176fa529f531aadecc3e46e887581, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_944d5fa24cd8575da9179b08adfdba89, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_bb8438066a2a5bc69d77dea5972310fe, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_547533f10fd055eb89478a8bc5857c2c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_6489fc6656865c86880a99c0096d301c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_e645ee8241125d6ea922591cb79fa524, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_d68ccf5dbbe95739a43c8209cfe2584f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_37c51c5db5a75b3c830020a7d1d398d1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_b1a263ca617a5259815aa966267460e1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_c9038a920313562294e2b7fde0558a5f, "");

}