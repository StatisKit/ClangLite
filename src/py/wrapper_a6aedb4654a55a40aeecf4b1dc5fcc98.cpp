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
    void  (*method_pointer_689c9cfd83025f75b8654dc741379de1)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_02c871e73207528d82b7f4a0573afe37)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_13aea7ce48865c86b85452ea125f240e)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_5f291bfb33db5e0c9916628d27a0db81)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_daceaaf82707589ebc4e9ac28c43d9c3)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_330dcfe402bb5bed90670803931cd613)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_a443d81b7bec5828afb2d35492b09915)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_b5705ede584a56e89cbd612d1730cd75)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_f173819be89a521293a37485bf238d95)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_43be4f000050509c903f52ffa56d3085)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_153ecc9362a55aa581dc7f5aa5dfd935)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_901575a74d6158b99cb30eba3d53c35c)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_10b391ee6e4c539992f9f4d1297c9f5c)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_6b39ec0cb8fa599d9f5267685e6c4b6f)() const = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_eec176f99f0f5b4ca97c5337c45b91bd)() = &::clang::Decl::getAsFunction;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_07e95ea7fd2553118e60e5528606f6b3)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_93bdca1cf404518aa322cc6d9916c587)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_70ee0015e0ec58c58719718da6d44fbc)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_a2f9b30700005211b11e517117e06a2b)() const = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_26ea3b87dfdf5cfb8511888a0408df23)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_bddaad019b7759cc92e16af73574fb4e)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_a232e33ede995c2a8966d9c79ad2f929)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_76d99a5525d15a1986a0aadf977ae76e)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_3c252f44afed59e9b1357e211acf1011)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_e8e1403cca1858249a3b1fe929384021)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_c1a9f7541cc95d109be779c781e24f93)() = &::clang::Decl::getLexicalDeclContext;
    unsigned int  (::clang::Decl::*method_pointer_85ce574c6d0d5af0a2e820fa4b4fbcbe)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_c31362a02b9252bba3064b36678b359f)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_2891c996c48254e4a23822d89d7466ee)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_e47fb2e142b8595f879a74844d7f5773)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_111a734b84e3554181feaee32d3d9a1d)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_92c8b11ab9a552ef9ea6cb76e4909815)() = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_214e8e090713563281c1c1295130dc57)() const = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_650d197538425e36bbeb5a4acc85d374)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_74502ba75398591d9e8bb9bc15034953)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_164ab239ea4051dca30bec1099afe530)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_d67129cb978f5f8181200282395ef7ff)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_8bf40ba8eded58188e10ab5fe5e03f34)() = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_fdea8644867851c7bf5a20286f9c8de0)() const = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_2efd5d3e639a58b187164bbdaa01af30)() = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_6cf3a22f2d9a543fa6f4bd3982da8c05)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_8f96f13bcd095d65a94cae06ec9af21e)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_164792cd379f5f569614473c9b419cc0)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_855e777b31cb56d99b651d7bc386a8c6)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_828b5a117f745d11983a78229eb00719)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_567aae65c17b525cba79bd5518c01f37)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_8535c3d18b3c552da9b2ed77718dacc5)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_a5c5f6c99220501c978cc4c31dc64117)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_d70552beca0052e7a41931e6f565e05a)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_dc48308e7faf526f92874fcbe786d65a)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_89296bad72075e6ea84cffe91c5a5bc6)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_f05b0d7244bf5504abf6af82751b40f7)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_7083bfe2ca095e42ba3f6042c9c08c69)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_17558f1485975ce2902ce239f73998b0)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_f6b18f59f8e6589abb4818acc0a9e9a3)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_35baed9369ac5c0cbe77aad1b2f303b4)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_3d04e5a3b5335e76892fb61dd33c9031)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_e9bc9a766fea5bc785aeb62aef43137f)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_5b30c131eb445ba399a8b01dc89927ce)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_9def96b771f65354bfc24137b07e01a3)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_f57a18e641725ab2a88253566247c948)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_7beb59feeb2359348d0b72359dcd142f)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_74b21df7da3e595e92b0f642b8d55ed8)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_d9fdf4b243d45c13b7a4880489a97e25)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_def1296a865f50cd835e7c7c1e0ac910)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_25ee28b4771955ac85c14a9d5196b6b1)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_034e1028879b5cf78a5a642e8f6be3d7)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_c2c440c9495a530194cd09e8d67f050e)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_5a4422a68c73598e9db46c3df2d0266d)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_f59ba401353b503ca2179961fa06bd9d)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_b172d89472d25c22b283a020566fa644)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_c0a6772fbb4d51e59daaf4c10faf2793)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_9f9695332632523d81eb71de56b1da4d)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_c7242fda8fbb517182c8f9248a93e447)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_a9af84a147995e35bdc80bfee12f4cc7)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_1d0ae299be305b03b0391c129ee5f57a)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_aad436a2977759e19b718997229cf5e4)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_118a6fbf4bc3542f9b9c67089e07eb3a)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_fcc7f9eaafd15ca680912119f61d7f44)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_678bb8ce80a75a3896e5f104f4b0c483(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_689c9cfd83025f75b8654dc741379de1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_02c871e73207528d82b7f4a0573afe37, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_13aea7ce48865c86b85452ea125f240e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_5f291bfb33db5e0c9916628d27a0db81, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_daceaaf82707589ebc4e9ac28c43d9c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_330dcfe402bb5bed90670803931cd613, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_a443d81b7bec5828afb2d35492b09915, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_b5705ede584a56e89cbd612d1730cd75, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_f173819be89a521293a37485bf238d95, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_43be4f000050509c903f52ffa56d3085, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_153ecc9362a55aa581dc7f5aa5dfd935, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_901575a74d6158b99cb30eba3d53c35c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_10b391ee6e4c539992f9f4d1297c9f5c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_6b39ec0cb8fa599d9f5267685e6c4b6f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_eec176f99f0f5b4ca97c5337c45b91bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_07e95ea7fd2553118e60e5528606f6b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_93bdca1cf404518aa322cc6d9916c587, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_70ee0015e0ec58c58719718da6d44fbc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_a2f9b30700005211b11e517117e06a2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_26ea3b87dfdf5cfb8511888a0408df23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_bddaad019b7759cc92e16af73574fb4e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_a232e33ede995c2a8966d9c79ad2f929, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_76d99a5525d15a1986a0aadf977ae76e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_3c252f44afed59e9b1357e211acf1011, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_e8e1403cca1858249a3b1fe929384021, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_c1a9f7541cc95d109be779c781e24f93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_85ce574c6d0d5af0a2e820fa4b4fbcbe, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_c31362a02b9252bba3064b36678b359f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_2891c996c48254e4a23822d89d7466ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_e47fb2e142b8595f879a74844d7f5773, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_111a734b84e3554181feaee32d3d9a1d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_92c8b11ab9a552ef9ea6cb76e4909815, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_214e8e090713563281c1c1295130dc57, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_650d197538425e36bbeb5a4acc85d374, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_74502ba75398591d9e8bb9bc15034953, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_164ab239ea4051dca30bec1099afe530, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_d67129cb978f5f8181200282395ef7ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_8bf40ba8eded58188e10ab5fe5e03f34, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_fdea8644867851c7bf5a20286f9c8de0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_2efd5d3e639a58b187164bbdaa01af30, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_6cf3a22f2d9a543fa6f4bd3982da8c05, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_8f96f13bcd095d65a94cae06ec9af21e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_164792cd379f5f569614473c9b419cc0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_855e777b31cb56d99b651d7bc386a8c6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_828b5a117f745d11983a78229eb00719, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_567aae65c17b525cba79bd5518c01f37, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_8535c3d18b3c552da9b2ed77718dacc5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_a5c5f6c99220501c978cc4c31dc64117, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_d70552beca0052e7a41931e6f565e05a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_dc48308e7faf526f92874fcbe786d65a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_89296bad72075e6ea84cffe91c5a5bc6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_f05b0d7244bf5504abf6af82751b40f7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_7083bfe2ca095e42ba3f6042c9c08c69, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_17558f1485975ce2902ce239f73998b0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_f6b18f59f8e6589abb4818acc0a9e9a3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_35baed9369ac5c0cbe77aad1b2f303b4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_3d04e5a3b5335e76892fb61dd33c9031, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_e9bc9a766fea5bc785aeb62aef43137f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_5b30c131eb445ba399a8b01dc89927ce, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_9def96b771f65354bfc24137b07e01a3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_f57a18e641725ab2a88253566247c948, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_7beb59feeb2359348d0b72359dcd142f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_74b21df7da3e595e92b0f642b8d55ed8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_d9fdf4b243d45c13b7a4880489a97e25, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_def1296a865f50cd835e7c7c1e0ac910, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_25ee28b4771955ac85c14a9d5196b6b1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_034e1028879b5cf78a5a642e8f6be3d7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_c2c440c9495a530194cd09e8d67f050e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_5a4422a68c73598e9db46c3df2d0266d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_f59ba401353b503ca2179961fa06bd9d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_b172d89472d25c22b283a020566fa644, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_c0a6772fbb4d51e59daaf4c10faf2793, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_9f9695332632523d81eb71de56b1da4d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_c7242fda8fbb517182c8f9248a93e447, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_a9af84a147995e35bdc80bfee12f4cc7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_1d0ae299be305b03b0391c129ee5f57a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_aad436a2977759e19b718997229cf5e4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_118a6fbf4bc3542f9b9c67089e07eb3a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_fcc7f9eaafd15ca680912119f61d7f44, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_678bb8ce80a75a3896e5f104f4b0c483, "");

}