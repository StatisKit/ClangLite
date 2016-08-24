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
    void  (*method_pointer_700e0c42fe215eaea9bfe617c23e5c1e)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_74b49364eaea53209e438de987236741)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_dc9003f414d05f90a1ef242ffbb905c4)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_10a912526cd55b4fb97e2728501f4e81)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_d3d24b2b3d1255219901fc55359b8131)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_7b8ccaffe7885369bedbae78a9076980)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_03fce179766f57f8ac4da83c989b841b)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_bb251132cdff52959c70a9de49707a7f)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_1c91702fbef95622929f513768706dcc)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_b6bc944db16b5fed8491d1dc829867c1)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_a790797a60b150ad8ffa8f9baa458d72)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_05e969f201da5f9b90c75f49980c2d06)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_6e88c8146cdc55d6a4b1953074d57453)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_7b4e18707efb538d98f28fa81db8ab85)() = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_5e080b3d1cb951868e10306d0c6c94be)() const = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_676a12f5556251478773bf2e7cd8b551)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_26d10e3160bb5e86ab29bd0d04532b7d)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_bec42a5d17925812b77331d99719c754)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_698e3dc4000e57d7b3de1affbbe1ad8b)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_432645fa4ae05e04aa14c36373c4257a)() const = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_74855ecbcd94573fad20a355de617f40)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_9f1bdac9528751eeb7acb10a9730dc45)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_35ae26ebeef15218a7f93a1e4a549574)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_a1c00a5e2784514e8e95e00f47611f75)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_3006eb12d0215ef9baf8bc4c7b350d94)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_854f5f2e82025c549ce5bb7322f5a229)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_7b81a1b373dc52feaec7b714dc987f64)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_3795753ae9a55a78b7e4d3dd4bf99e7a)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_fc65b0cd1f015d2e98cdfad15d4c2550)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_46a82ffbe4835072a62ebee819ff4f26)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_1a532de4304253c28627dbe793420a59)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_cb920ec7bc1b5ab98168c249485d2fa1)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_0a5ead26946e50c88418b80ca09bce29)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_4ba177c6a643563cbb1e012cd1ff2e45)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_a6617371944c58ad968430a5ef764a3f)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_10c6223ca8b85278942cece518bc5f19)() const = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_84df749ca27d5176bf85598e92714d19)() = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_c44373de6e305ff38ce921c799326019)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_bd20c0c29f0956acb865b846fe7551b1)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_0fb02fa1f9b055bfa179145d24f6ab57)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_18398ebbe6c7511d85394d36155f5925)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_5ec45639c3ab57d08aec04e2c07c38e7)() = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_3c59657cc6135031a84f47d1be3ce4eb)() = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_f795653916d15e11b5936b1940636d40)() const = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_8d9dfd5b02725ca59e29d47b09ae3b1b)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_b7a49a9ff00f5cd6a4a338b42fbbf0df)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_d3ac34c8caae5fd3a7cb6ce6a5f08c6a)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_aba5ec8050bf53c890f9db7e877539d2)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_715b5d9fc91b514cb092f49b4572fcaa)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_e8304445def55c5cb89ed50e8abf5164)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_32f297abcf5f5e8799da667943ecebb3)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_65d1b6e8ee225aebb88ce29d4d58cd33)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_6d984e8fc3ea516988778601165200f7)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_9229b0af1ed3591c92436938f587aedc)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_ec0c62a7e8295e2a84fc9de7e2c8cd59)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_c7e316c6ed7056f8b56548b17470ea5e)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_dfde2017a8f8574b9b04db5d9b1e63c6)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_f72411f7cc1d5497a247dd8c202f512a)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_d68d8ed1c1d555b8b640df342e1d667a)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_1453d2dc5d14523f8504d5c02b234da6)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_91987accdf945f329809265753f05709)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_42e420043d0957048724f2550fe3c4da)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_6cbfc5ed673f59c6ba204ad2b7d5eb70)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_58267b1796d35fa094e68189bd830be5)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_9d265e58d34856adad6ce46003b6948e)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_0d20803143e555508d1ae13aeffeb004)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_89278631289d584c9153aeee4549ebd7)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_0ea88899d90c5fa9999b546b21768ae8)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_452c1e5a2b5f58f8b88bc59c7cef1509)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_ca677b7d2ac4582183a01773e14c4612)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_6f605d95b66e5f938a7612bd562464e0)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_33e8bccc6593583cb737483c3b95c021)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_43755587d1575593ac7c505cc8117594)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_8cb2dfa3467550eabc84c073dde1c94c)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_17770fba1f8a5f4fb85f62bb34bcb309)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_86d3b555312a527cb9fe72cbc4e0f220)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_bff5e086ef5b5a638c321d213649e456)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_1de35a28fe255c97a42d10b7c08ba958)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_936b43ed1b1452a2b3cc79ee32f4dc95)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_2a5283386ad656aba64f2812c0d4a06c)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_6a392c479e665b27abb82d26e45664a4)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_0ed230c950b159deb4bf221bcd15ae57)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_6d71c8d1c3625e56b0923f60be2bc05d)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_0dff6f9620b1558d9023341b8172724c)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_137f14afb2585587bda6af6031a223ce(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_700e0c42fe215eaea9bfe617c23e5c1e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_74b49364eaea53209e438de987236741, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_dc9003f414d05f90a1ef242ffbb905c4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_10a912526cd55b4fb97e2728501f4e81, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_d3d24b2b3d1255219901fc55359b8131, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_7b8ccaffe7885369bedbae78a9076980, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_03fce179766f57f8ac4da83c989b841b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_bb251132cdff52959c70a9de49707a7f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_1c91702fbef95622929f513768706dcc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_b6bc944db16b5fed8491d1dc829867c1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_a790797a60b150ad8ffa8f9baa458d72, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_05e969f201da5f9b90c75f49980c2d06, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_6e88c8146cdc55d6a4b1953074d57453, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_7b4e18707efb538d98f28fa81db8ab85, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_5e080b3d1cb951868e10306d0c6c94be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_676a12f5556251478773bf2e7cd8b551, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_26d10e3160bb5e86ab29bd0d04532b7d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_bec42a5d17925812b77331d99719c754, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_698e3dc4000e57d7b3de1affbbe1ad8b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_432645fa4ae05e04aa14c36373c4257a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_74855ecbcd94573fad20a355de617f40, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_9f1bdac9528751eeb7acb10a9730dc45, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_35ae26ebeef15218a7f93a1e4a549574, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_a1c00a5e2784514e8e95e00f47611f75, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_3006eb12d0215ef9baf8bc4c7b350d94, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_854f5f2e82025c549ce5bb7322f5a229, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_7b81a1b373dc52feaec7b714dc987f64, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_3795753ae9a55a78b7e4d3dd4bf99e7a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_fc65b0cd1f015d2e98cdfad15d4c2550, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_46a82ffbe4835072a62ebee819ff4f26, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_1a532de4304253c28627dbe793420a59, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_cb920ec7bc1b5ab98168c249485d2fa1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_0a5ead26946e50c88418b80ca09bce29, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_4ba177c6a643563cbb1e012cd1ff2e45, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_a6617371944c58ad968430a5ef764a3f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_10c6223ca8b85278942cece518bc5f19, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_84df749ca27d5176bf85598e92714d19, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_c44373de6e305ff38ce921c799326019, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_bd20c0c29f0956acb865b846fe7551b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_0fb02fa1f9b055bfa179145d24f6ab57, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_18398ebbe6c7511d85394d36155f5925, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_5ec45639c3ab57d08aec04e2c07c38e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_3c59657cc6135031a84f47d1be3ce4eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_f795653916d15e11b5936b1940636d40, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_8d9dfd5b02725ca59e29d47b09ae3b1b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_b7a49a9ff00f5cd6a4a338b42fbbf0df, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_d3ac34c8caae5fd3a7cb6ce6a5f08c6a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_aba5ec8050bf53c890f9db7e877539d2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_715b5d9fc91b514cb092f49b4572fcaa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_e8304445def55c5cb89ed50e8abf5164, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_32f297abcf5f5e8799da667943ecebb3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_65d1b6e8ee225aebb88ce29d4d58cd33, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_6d984e8fc3ea516988778601165200f7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_9229b0af1ed3591c92436938f587aedc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_ec0c62a7e8295e2a84fc9de7e2c8cd59, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_c7e316c6ed7056f8b56548b17470ea5e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_dfde2017a8f8574b9b04db5d9b1e63c6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_f72411f7cc1d5497a247dd8c202f512a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_d68d8ed1c1d555b8b640df342e1d667a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_1453d2dc5d14523f8504d5c02b234da6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_91987accdf945f329809265753f05709, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_42e420043d0957048724f2550fe3c4da, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_6cbfc5ed673f59c6ba204ad2b7d5eb70, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_58267b1796d35fa094e68189bd830be5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_9d265e58d34856adad6ce46003b6948e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_0d20803143e555508d1ae13aeffeb004, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_89278631289d584c9153aeee4549ebd7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_0ea88899d90c5fa9999b546b21768ae8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_452c1e5a2b5f58f8b88bc59c7cef1509, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_ca677b7d2ac4582183a01773e14c4612, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_6f605d95b66e5f938a7612bd562464e0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_33e8bccc6593583cb737483c3b95c021, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_43755587d1575593ac7c505cc8117594, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_8cb2dfa3467550eabc84c073dde1c94c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_17770fba1f8a5f4fb85f62bb34bcb309, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_86d3b555312a527cb9fe72cbc4e0f220, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_bff5e086ef5b5a638c321d213649e456, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_1de35a28fe255c97a42d10b7c08ba958, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_936b43ed1b1452a2b3cc79ee32f4dc95, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_2a5283386ad656aba64f2812c0d4a06c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_6a392c479e665b27abb82d26e45664a4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_0ed230c950b159deb4bf221bcd15ae57, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_6d71c8d1c3625e56b0923f60be2bc05d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_0dff6f9620b1558d9023341b8172724c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_137f14afb2585587bda6af6031a223ce, "");

}