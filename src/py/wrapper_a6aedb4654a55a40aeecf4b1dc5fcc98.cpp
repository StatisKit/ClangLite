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
    void  (*method_pointer_506be0fb778856e1b60d69d89cf150bf)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_7b6dde8c817057ecb17f38d1a3bc9728)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_bc324c0cc6085ea5a4db455e6915a0ea)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_e0b5360a5b2f5ef5b014bd53376fc7d8)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_8dfc5d6ae5ee5bf3ab78efc63c8c41d6)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_bddc99abd0d15fed9284964759b37c1a)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_d0e6ab92ac2150788a08d23238366dbc)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_c8323d278d4859d49cc256fea5da08cf)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_2d9e1e76d4125a9d8b3bd7d3b07b4307)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_0a6c28f8e2325994ad866c4f5feb412e)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_c38fcf76d48755aea1dca66bb06ee364)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_4048f93d80ac5463b2bb834e67d69555)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_0fbe8fdae52455a1ad12ce40885e6993)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_8910eb9d170d5c73aa0ea10431fca0cc)() = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_93a3ed463b9a5548983eb6984f25023a)() const = &::clang::Decl::getAsFunction;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_26e0d244cac05482a5cdd720e5fb898d)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_d851f49485df54d681d0c14c4a5abe03)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_f9cd2d1e44e95678b9fbe9aae4a5611b)() const = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_da9264c69758542db99ccc8da6bbdd6f)() = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_2145a9949d57590f80a7038e1d185148)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_82b9e3db9bb9566a9d9b4ab8dc42829c)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_e0699ac05e265b32b4f6357cd5553b16)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_253810930b08501a9744c1012153a4ae)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_3d93ded4fb3057e090a96277034699b2)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_a5d51dc876485b08b86c90983948ddc0)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_b98ea5fead425887ad567133094d2c88)() = &::clang::Decl::getLexicalDeclContext;
    unsigned int  (::clang::Decl::*method_pointer_4a95f76faf935aeaae63cd9e8ba3c288)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_da5e657d592a5fadae991cd2265a41fe)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_195600ac7c0f564fb029ca4d19c753a1)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_63774ad33f745474ad05a7de354ba73b)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_da69762499ff5823ace478d390c66599)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_42c44104ea0458baba338210864b62b1)() = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_1c3073d3c912573b9f844ede2188e775)() const = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_34d206bea0a75b379f1406e24f8f20b4)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_578b00ae10ca53639fecc0d4b5d9f47d)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_afae31402e63523c90e836c7def93ea7)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_75defdfa74f751609ed9936d8f591462)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_16733831edc55ce8b667758dabd7085b)() = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_c912a7685d9d5c15acc8de513ac007b3)() = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_9604935316ec51758efdd90523214759)() const = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_8367e6485958556eb45fdc21899c1651)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_ac501f8ef84c5d4694447e9b35998560)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_388aa154b69e553eb30135198ff7e9c2)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_70780279003c5d6aa4db1e52055811fb)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_8c12e2d42e545bc1b3f87ec448a27951)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_3bc57ed5969e5005ba709ccd74e4bc13)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_dacee6870ca85546ac8bab6150e9916e)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_ca437a61efe150e4af60425bc855fb2d)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_0df12f6d87c55accad32664d827f2c48)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_b1a0236fbdd755a3bc3c76e44cc128fa)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_cfde2e3c2cd656e1ab71b21dc877a37a)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_799246eef98a5028ba338d68b6f1591d)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_ff99a05c39e854af97427b789d2f9639)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_a51391ff5713599e92db09843f149149)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_c793708f638d56a3a4b3cb562e964d91)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_fd60c1b365125603b5f3e02067440d80)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_beff86fae8ce5892b0e3c5b367f1e1a9)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_bdc6ff65ab52591486697dfcdc340fc8)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_8a77c6a4ed28564cb255a4a1fac8d261)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_dcecf7a9b0905e28b6d4e5336033bbed)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_e857fe8442ea5df2ae96988d0a42c5dd)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_efacacd0311858598052845104352d45)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_1994410807ed54ffb5ef0a2758bfec00)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_0a0600f4c3af5a04874264c266ebcc0e)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_c4fc207f30f151878724fdef74fa1e08)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_8ad44e8f5aff502da484a47ee31896be)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_8d51ea8c8cc551bda49745dcf87353d7)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_639f2774f4db5314b91ea418571910fa)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_11383db2649b50a4bff919305a07660d)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_bc2adaba68ba55a1b1d9ed74f2309711)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_4fb7532ffa3b5cbb8e2ec47713975692)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_92e7557b2ab453ad9234b24fb5d0883d)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_0d02a9c3fab1580fb66b19ba42703a0d)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_7c791245c41356ef84f77ff9e0372ebe)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_83b81af50fce528687784066df346d3d)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_cec042e8f6a35f0cb0a6f651eea32b89)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_45d028a4a8755d749fca1e80259b19e6)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_b46484ed981a5dc5819584c4d408d3ed)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_917c48f2b98655bfa4abaad6b2f46ca1)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_d18e0a087242594c9ac503dec417145b(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_506be0fb778856e1b60d69d89cf150bf, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_7b6dde8c817057ecb17f38d1a3bc9728, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_bc324c0cc6085ea5a4db455e6915a0ea, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_e0b5360a5b2f5ef5b014bd53376fc7d8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_8dfc5d6ae5ee5bf3ab78efc63c8c41d6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_bddc99abd0d15fed9284964759b37c1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_d0e6ab92ac2150788a08d23238366dbc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_c8323d278d4859d49cc256fea5da08cf, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_2d9e1e76d4125a9d8b3bd7d3b07b4307, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_0a6c28f8e2325994ad866c4f5feb412e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_c38fcf76d48755aea1dca66bb06ee364, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_4048f93d80ac5463b2bb834e67d69555, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_0fbe8fdae52455a1ad12ce40885e6993, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_8910eb9d170d5c73aa0ea10431fca0cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_93a3ed463b9a5548983eb6984f25023a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_26e0d244cac05482a5cdd720e5fb898d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_d851f49485df54d681d0c14c4a5abe03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_f9cd2d1e44e95678b9fbe9aae4a5611b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_da9264c69758542db99ccc8da6bbdd6f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_2145a9949d57590f80a7038e1d185148, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_82b9e3db9bb9566a9d9b4ab8dc42829c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_e0699ac05e265b32b4f6357cd5553b16, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_253810930b08501a9744c1012153a4ae, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_3d93ded4fb3057e090a96277034699b2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_a5d51dc876485b08b86c90983948ddc0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_b98ea5fead425887ad567133094d2c88, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_4a95f76faf935aeaae63cd9e8ba3c288, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_da5e657d592a5fadae991cd2265a41fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_195600ac7c0f564fb029ca4d19c753a1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_63774ad33f745474ad05a7de354ba73b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_da69762499ff5823ace478d390c66599, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_42c44104ea0458baba338210864b62b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_1c3073d3c912573b9f844ede2188e775, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_34d206bea0a75b379f1406e24f8f20b4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_578b00ae10ca53639fecc0d4b5d9f47d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_afae31402e63523c90e836c7def93ea7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_75defdfa74f751609ed9936d8f591462, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_16733831edc55ce8b667758dabd7085b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_c912a7685d9d5c15acc8de513ac007b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_9604935316ec51758efdd90523214759, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_8367e6485958556eb45fdc21899c1651, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_ac501f8ef84c5d4694447e9b35998560, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_388aa154b69e553eb30135198ff7e9c2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_70780279003c5d6aa4db1e52055811fb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_8c12e2d42e545bc1b3f87ec448a27951, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_3bc57ed5969e5005ba709ccd74e4bc13, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_dacee6870ca85546ac8bab6150e9916e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_ca437a61efe150e4af60425bc855fb2d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_0df12f6d87c55accad32664d827f2c48, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_b1a0236fbdd755a3bc3c76e44cc128fa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_cfde2e3c2cd656e1ab71b21dc877a37a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_799246eef98a5028ba338d68b6f1591d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_ff99a05c39e854af97427b789d2f9639, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_a51391ff5713599e92db09843f149149, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_c793708f638d56a3a4b3cb562e964d91, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_fd60c1b365125603b5f3e02067440d80, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_beff86fae8ce5892b0e3c5b367f1e1a9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_bdc6ff65ab52591486697dfcdc340fc8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_8a77c6a4ed28564cb255a4a1fac8d261, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_dcecf7a9b0905e28b6d4e5336033bbed, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_e857fe8442ea5df2ae96988d0a42c5dd, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_efacacd0311858598052845104352d45, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_1994410807ed54ffb5ef0a2758bfec00, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_0a0600f4c3af5a04874264c266ebcc0e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_c4fc207f30f151878724fdef74fa1e08, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_8ad44e8f5aff502da484a47ee31896be, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_8d51ea8c8cc551bda49745dcf87353d7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_639f2774f4db5314b91ea418571910fa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_11383db2649b50a4bff919305a07660d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_bc2adaba68ba55a1b1d9ed74f2309711, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_4fb7532ffa3b5cbb8e2ec47713975692, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_92e7557b2ab453ad9234b24fb5d0883d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_0d02a9c3fab1580fb66b19ba42703a0d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_7c791245c41356ef84f77ff9e0372ebe, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_83b81af50fce528687784066df346d3d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_cec042e8f6a35f0cb0a6f651eea32b89, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_45d028a4a8755d749fca1e80259b19e6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_b46484ed981a5dc5819584c4d408d3ed, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_917c48f2b98655bfa4abaad6b2f46ca1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_d18e0a087242594c9ac503dec417145b, "");

}