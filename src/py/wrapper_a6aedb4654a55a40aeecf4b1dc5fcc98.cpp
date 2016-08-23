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
    void  (*method_pointer_61cecca80613509bb2a795e5fdd64bc4)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_9f7a08f98b0c5bf192692705046e0907)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_2d3a6b05912450e7bf73d8d3b5e9e16c)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_47eff53719b1535c8fc68a477aea2d39)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_1bcf47f4a0ea5d48a4efe36de387d6ac)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_245c12ed8ea2521d88033bb0b6346eb3)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_decc2df4c58450d681161c8127ea2fa5)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_40984219ad45528197e255f0a6fe3512)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_250d5a9972395067930062f286460558)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_c36596edd43a5b55a0709dbfa8f91784)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_08a06e784f34577aadbde31b1be4a372)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_937b7c06451c520185528d475722c69f)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_7e4ad46fd3fd56d89f8a42a512207f90)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_16ad9d0a80435872b85e46f447f61010)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_f92cdb1ca4115ee794c7e4a2dea67f3a)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_be495656bd3357658327452cda3a651b)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_25ac9f927dee5f778381bd3a0e458ada)() const = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_f08e198e689a5fffadba22f688ff2dce)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_aa332fb99baf5443a6df73aba1cef1f3)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_8116cf3d97975a19ba6362e1e42ed26a)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_18a31a7b71e157c795afdf5dacbf34ec)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_53e3ecb36a1650dfa32b64715fe36cfb)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_76ce85d49ce159ca84dfdb8d420da109)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_a894396e0d7a5acc908e9ba69eb05c5d)() const = &::clang::Decl::getLexicalDeclContext;
    unsigned int  (::clang::Decl::*method_pointer_3d8041d4d6245c369eaa17c6e075e347)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_865c13b28a185f16a1ade7786c7a4f06)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_a75fd7d3d43453c58977458a61505358)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_6f54c4bec4f85ece9f2f547fb40962f5)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_e6bed391678556ea9e57d9e6fe1f9955)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_76400b38bfce5abb97a5ddfca189977b)() = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_16faeb493d8b5caf972d3bcfa4a006a8)() const = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_bfff41437a4f541681580ab78875627f)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_512a44b1fe0f53a997bb62024c71406b)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_19112842389c558990e362f014a0a74b)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_4abdd0530b945b3aa200ac39aecf0fde)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_d3c24c96be0258e38e644161f50dfa72)() = &::clang::Decl::getPreviousDecl;
    bool  (::clang::Decl::*method_pointer_815a6d1de85653a2b1a33962da39c37d)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_1a94c90caf095bd487a0a4924e08c582)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_d9e4b05a1d525484a7ac35e3951b7ec8)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_aa286efbd9765137a724e63c574b347c)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_530ead93391458839d6505bcb740a60d)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_31110d8da44b5445b6eff873546f5e09)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_83a6c606329953b893932a92809c0f36)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_672b8336ec5555899ccb31535abfdead)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_6a28b93e377853b8a718cffca2033d33)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_ee9028db165853aa935341e4ee4a4de4)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_875fd0cf95895cf88c95904152f93ee6)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_22aaa67d2f6c5a66be58e07395182c67)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_3219fb00689d51809cbd82f7e55a436c)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_3b9c423e26c25400a585a213a1e0bb91)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_648ea2cd394255438847e9ae0df5620f)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_6630458b0ed55a66bff4021d0fea9c7b)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_3a3bbc67eb825009a03eab9ec17bd7bc)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_fc92289ba4955afd97909e44967c3fa0)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_03b640e3991b5086866b4c9bd5fc70e6)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_307e6812ebc95f4aace1f1b727a33a07)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_be29697cadcf561cb2e5cdd5e8fc91e3)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_30bb7228855d5e3ab0d43374ab0fc1a2)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_36d2cd76a6c0508893ef12063b66c450)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_77c5e968b0885ede9fd4c75fbcae1a72)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_d53e36b299b856ad92de1b752ce8f580)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_fb8f57725de75bde8e48736b1d195332)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_f7fbbe0b565e570f8b60151ebaedf6c5)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_7c3367234022545facdafa47da234371)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_a6a98ace3cd75f02944775ae641e6a88)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_408165f15af85ce5a11971acc8302c8e)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_40175229e66251e1bc628e70e7f61ff6)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_7af128350c415882897a3bac5afc8cf2)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_c894d4fa51635287af08d1b90208542b)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_07c328bf299d5fd99b7ab7b1a10f2390)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_d2a48e35e1595e75bcc6ce1891912104)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_e219c4024ed25116ba4196e6954d6b6b)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_33e36e4638ab526fb5df563a2f6c1165)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_847b0f427e425f0bb1c8fa4a02a3fa64)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_3ccca9e670a7532ebbca7715c1f0e502)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_51b5f09a52b552f28b607ae13281a826(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_61cecca80613509bb2a795e5fdd64bc4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_9f7a08f98b0c5bf192692705046e0907, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_2d3a6b05912450e7bf73d8d3b5e9e16c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_47eff53719b1535c8fc68a477aea2d39, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_1bcf47f4a0ea5d48a4efe36de387d6ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_245c12ed8ea2521d88033bb0b6346eb3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_decc2df4c58450d681161c8127ea2fa5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_40984219ad45528197e255f0a6fe3512, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_250d5a9972395067930062f286460558, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_c36596edd43a5b55a0709dbfa8f91784, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_08a06e784f34577aadbde31b1be4a372, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_937b7c06451c520185528d475722c69f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_7e4ad46fd3fd56d89f8a42a512207f90, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_16ad9d0a80435872b85e46f447f61010, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_f92cdb1ca4115ee794c7e4a2dea67f3a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_be495656bd3357658327452cda3a651b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_25ac9f927dee5f778381bd3a0e458ada, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_f08e198e689a5fffadba22f688ff2dce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_aa332fb99baf5443a6df73aba1cef1f3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_8116cf3d97975a19ba6362e1e42ed26a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_18a31a7b71e157c795afdf5dacbf34ec, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_53e3ecb36a1650dfa32b64715fe36cfb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_76ce85d49ce159ca84dfdb8d420da109, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_a894396e0d7a5acc908e9ba69eb05c5d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_3d8041d4d6245c369eaa17c6e075e347, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_865c13b28a185f16a1ade7786c7a4f06, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_a75fd7d3d43453c58977458a61505358, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_6f54c4bec4f85ece9f2f547fb40962f5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_e6bed391678556ea9e57d9e6fe1f9955, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_76400b38bfce5abb97a5ddfca189977b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_16faeb493d8b5caf972d3bcfa4a006a8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_bfff41437a4f541681580ab78875627f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_512a44b1fe0f53a997bb62024c71406b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_19112842389c558990e362f014a0a74b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_4abdd0530b945b3aa200ac39aecf0fde, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_d3c24c96be0258e38e644161f50dfa72, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_815a6d1de85653a2b1a33962da39c37d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_1a94c90caf095bd487a0a4924e08c582, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_d9e4b05a1d525484a7ac35e3951b7ec8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_aa286efbd9765137a724e63c574b347c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_530ead93391458839d6505bcb740a60d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_31110d8da44b5445b6eff873546f5e09, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_83a6c606329953b893932a92809c0f36, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_672b8336ec5555899ccb31535abfdead, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_6a28b93e377853b8a718cffca2033d33, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_ee9028db165853aa935341e4ee4a4de4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_875fd0cf95895cf88c95904152f93ee6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_22aaa67d2f6c5a66be58e07395182c67, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_3219fb00689d51809cbd82f7e55a436c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_3b9c423e26c25400a585a213a1e0bb91, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_648ea2cd394255438847e9ae0df5620f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_6630458b0ed55a66bff4021d0fea9c7b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_3a3bbc67eb825009a03eab9ec17bd7bc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_fc92289ba4955afd97909e44967c3fa0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_03b640e3991b5086866b4c9bd5fc70e6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_307e6812ebc95f4aace1f1b727a33a07, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_be29697cadcf561cb2e5cdd5e8fc91e3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_30bb7228855d5e3ab0d43374ab0fc1a2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_36d2cd76a6c0508893ef12063b66c450, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_77c5e968b0885ede9fd4c75fbcae1a72, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_d53e36b299b856ad92de1b752ce8f580, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_fb8f57725de75bde8e48736b1d195332, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_f7fbbe0b565e570f8b60151ebaedf6c5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_7c3367234022545facdafa47da234371, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_a6a98ace3cd75f02944775ae641e6a88, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_408165f15af85ce5a11971acc8302c8e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_40175229e66251e1bc628e70e7f61ff6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_7af128350c415882897a3bac5afc8cf2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_c894d4fa51635287af08d1b90208542b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_07c328bf299d5fd99b7ab7b1a10f2390, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_d2a48e35e1595e75bcc6ce1891912104, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_e219c4024ed25116ba4196e6954d6b6b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_33e36e4638ab526fb5df563a2f6c1165, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_847b0f427e425f0bb1c8fa4a02a3fa64, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_3ccca9e670a7532ebbca7715c1f0e502, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_51b5f09a52b552f28b607ae13281a826, "");

}