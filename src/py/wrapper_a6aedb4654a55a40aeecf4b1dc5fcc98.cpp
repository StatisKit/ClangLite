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
    void  (*method_pointer_9e5ae77b0a265e11987672577e471a57)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_e27bd17776975b50b37a02b1be3978d8)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_d071fe776dd75ce091e750845fd12516)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_f8fa6ae169a1571d8297f22c98b9cb00)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_a38376b43cc85fefaaaed5e00f135926)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_46d9efdc85995e41be705a6df6842203)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_903d379639ef5afb90e0d1f227781f67)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_2b85b9d241525f56a5f1e830b66ea0e2)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_21c6182056eb5b16a0fc7e047c682bd5)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_d233ea0043b859fb98750f8084e80f59)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_54a834d3158f5fe6b3f8d81fc97aae50)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_585d3c41df605721aad9db3409e457a2)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_7e874608d7435629918f8520564b4442)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_4ed25856a85e595ba8e6c7b0096c2ecd)() const = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_6148de1343dc554cbfa839597acb88bf)() = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_9aea409b59bb502084af5a6c9701ed94)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_9395ba49f58154139f23e88c41e5a65d)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_9e1c7a0b4c0d5e5eb21685f041fed06e)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_b6cca517cbed5fa299638de06fdc4ee7)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_5313e7d026e45fcdbdd24d8901bf43e2)() const = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_5f866ed0c5fa54f1ad156096b4332acd)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_c7688dd2465b5ee5b0868796384c3d42)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_82c5f8641a445db8bb4e6fb2d9f98dd2)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_1e24d86f76b051f986c902b7c37b46f0)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_33b7171627e55f0aa91b6d7c6f691fc7)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_e63b9cc16f905305aafc61f06a6334d4)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_6cd5d1f29d3c553b85b24b2f1db3bbb2)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_015631a35bd65b909a5ada4f1fe69bb2)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_88c8ed47c0055bcca56b1e3ab804e951)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_b501d570e665512482b1fbde912e0079)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_a4af27aff115526aa545a3df3c8f3aca)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_34346a2c2f145a319269c2e5f942703b)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_f8e31ddf817a5be185eb4c298633e6fb)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_2a267937e38b5f71bcc642bdd887028a)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_2aa159b5c8d45631b9a4826f04bb6c87)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_708ec157eb6e5ff38c093544c60398d8)() const = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_67988a2a3bbd5eb1904d4c35c0346e2c)() = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_7b89d93ceb81553496443148e72cad97)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_f492028198375cb6a90632076cd8194a)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_f59aca13a29a5a9c9b42d5ef0e009bc3)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_44551a983d62522291eba3b7f0408bfc)() = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_7713aac772785845923d7106af666534)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_86255c5aea415b9ba026be0d9f07f5f0)() = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_17467bca05b150ada15c65600e6d317e)() const = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_2334e6c510c953f9a817f519a3659761)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_ddbf36e58efc5567871b101a029b6267)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_8a8adeefdbfd5b4fa3919a53e90c20c6)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_fb75d16032065df7a1a9564f9fe5e3d6)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_a616f193033d57818386faa2a5c926b8)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_3b4f6cb18d5555fcbb51e0236d112eec)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_6885b9fffec45515bc99d91eaaacc878)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_5a7f06b511735aa6bd5836a30542af35)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_afb31f33a5e55ad9ab949656b9abe479)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_e3f6adad26a35caf92f89d3ff0505159)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_ec87577ed9635ee19ffd2827a3e12604)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_4bc44658cc1252a7a1ea866b2f3619a5)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_98a2053635b753ef88f58972790d3db6)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_9378ff7105515d19ab16f6a50b7bd1b0)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_f309a8bd7d8a5c3a92676f5489e81e80)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_58358d54c28958baa6cb2329de80ca75)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_a5107569a1db5003aad3ef3a6a14a10d)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_9ff00c6942c15e04a2d95113361d7d97)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_389a894f81ed5fe6ba0059ff6411a53e)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_4cb35037ebe55983bd0cfb47cc625d9f)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_94e87d53da24598d93a386778e824e83)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_b3856b620bff5686846b02818e238941)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_9e4685c557e052ca89e1db0cdf9b6b0b)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_d6b85004df9c5853bc0880dcc1ca6b82)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_5c95c51e5be6591db5cf5e2b0a176976)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_139b9e8f57e950399353378dd90970e6)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_6a460f30f9a75353a3e60ff57cc767a5)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_51142e19bee65141b6ccb253f210ee67)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_e658824c77175fc5b94f4e01410b7db3)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_e646c2ebb6645601a036e20e4538acc0)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_4702004690065dda88c09a4568e22678)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_4048d2ac0e7956b19fe80ca2d0dadcaa)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_5bbb0edb151457fd9e873f3408e92dc8)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_a6e5ae7a7c625f35b7a2f3af4ab00b83)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_b8c5bb78b1f150f3a80e813217e49cf5)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_80068cd1d1ac50daa979f02c70c8997d)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_ad06cfd80a4456c1bbb5fb4590175c48)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_4fdbd2b358be506891cbdab7d1f1e735)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_59a692726ab7542a857cf2a7e776c3a0)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_54135a3c84f956c5905e935715a5f8bf)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_b97cb618b83a531fbbb242d38e8e996f(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_9e5ae77b0a265e11987672577e471a57, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_e27bd17776975b50b37a02b1be3978d8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_d071fe776dd75ce091e750845fd12516, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_f8fa6ae169a1571d8297f22c98b9cb00, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_a38376b43cc85fefaaaed5e00f135926, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_46d9efdc85995e41be705a6df6842203, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_903d379639ef5afb90e0d1f227781f67, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_2b85b9d241525f56a5f1e830b66ea0e2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_21c6182056eb5b16a0fc7e047c682bd5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_d233ea0043b859fb98750f8084e80f59, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_54a834d3158f5fe6b3f8d81fc97aae50, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_585d3c41df605721aad9db3409e457a2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_7e874608d7435629918f8520564b4442, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_4ed25856a85e595ba8e6c7b0096c2ecd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_6148de1343dc554cbfa839597acb88bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_9aea409b59bb502084af5a6c9701ed94, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_9395ba49f58154139f23e88c41e5a65d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_9e1c7a0b4c0d5e5eb21685f041fed06e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_b6cca517cbed5fa299638de06fdc4ee7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_5313e7d026e45fcdbdd24d8901bf43e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_5f866ed0c5fa54f1ad156096b4332acd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_c7688dd2465b5ee5b0868796384c3d42, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_82c5f8641a445db8bb4e6fb2d9f98dd2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_1e24d86f76b051f986c902b7c37b46f0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_33b7171627e55f0aa91b6d7c6f691fc7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_e63b9cc16f905305aafc61f06a6334d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_6cd5d1f29d3c553b85b24b2f1db3bbb2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_015631a35bd65b909a5ada4f1fe69bb2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_88c8ed47c0055bcca56b1e3ab804e951, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_b501d570e665512482b1fbde912e0079, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_a4af27aff115526aa545a3df3c8f3aca, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_34346a2c2f145a319269c2e5f942703b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_f8e31ddf817a5be185eb4c298633e6fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_2a267937e38b5f71bcc642bdd887028a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_2aa159b5c8d45631b9a4826f04bb6c87, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_708ec157eb6e5ff38c093544c60398d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_67988a2a3bbd5eb1904d4c35c0346e2c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_7b89d93ceb81553496443148e72cad97, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_f492028198375cb6a90632076cd8194a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_f59aca13a29a5a9c9b42d5ef0e009bc3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_44551a983d62522291eba3b7f0408bfc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_7713aac772785845923d7106af666534, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_86255c5aea415b9ba026be0d9f07f5f0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_17467bca05b150ada15c65600e6d317e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_2334e6c510c953f9a817f519a3659761, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_ddbf36e58efc5567871b101a029b6267, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_8a8adeefdbfd5b4fa3919a53e90c20c6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_fb75d16032065df7a1a9564f9fe5e3d6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_a616f193033d57818386faa2a5c926b8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_3b4f6cb18d5555fcbb51e0236d112eec, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_6885b9fffec45515bc99d91eaaacc878, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_5a7f06b511735aa6bd5836a30542af35, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_afb31f33a5e55ad9ab949656b9abe479, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_e3f6adad26a35caf92f89d3ff0505159, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_ec87577ed9635ee19ffd2827a3e12604, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_4bc44658cc1252a7a1ea866b2f3619a5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_98a2053635b753ef88f58972790d3db6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_9378ff7105515d19ab16f6a50b7bd1b0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_f309a8bd7d8a5c3a92676f5489e81e80, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_58358d54c28958baa6cb2329de80ca75, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_a5107569a1db5003aad3ef3a6a14a10d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_9ff00c6942c15e04a2d95113361d7d97, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_389a894f81ed5fe6ba0059ff6411a53e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_4cb35037ebe55983bd0cfb47cc625d9f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_94e87d53da24598d93a386778e824e83, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_b3856b620bff5686846b02818e238941, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_9e4685c557e052ca89e1db0cdf9b6b0b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_d6b85004df9c5853bc0880dcc1ca6b82, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_5c95c51e5be6591db5cf5e2b0a176976, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_139b9e8f57e950399353378dd90970e6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_6a460f30f9a75353a3e60ff57cc767a5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_51142e19bee65141b6ccb253f210ee67, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_e658824c77175fc5b94f4e01410b7db3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_e646c2ebb6645601a036e20e4538acc0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_4702004690065dda88c09a4568e22678, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_4048d2ac0e7956b19fe80ca2d0dadcaa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_5bbb0edb151457fd9e873f3408e92dc8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_a6e5ae7a7c625f35b7a2f3af4ab00b83, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_b8c5bb78b1f150f3a80e813217e49cf5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_80068cd1d1ac50daa979f02c70c8997d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_ad06cfd80a4456c1bbb5fb4590175c48, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_4fdbd2b358be506891cbdab7d1f1e735, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_59a692726ab7542a857cf2a7e776c3a0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_54135a3c84f956c5905e935715a5f8bf, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_b97cb618b83a531fbbb242d38e8e996f, "");

}