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
    void  (*method_pointer_7fbb87df809c56248b4a76f264e8785e)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_04e72f472d05517a975a39daf43c3dfc)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_0fe71b4d4aa65a6ba8b6e6a1d12aceb3)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_9b7c3ff57d665c5cbb5f1bd80c67aaf5)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_e5430a5dbca85060a045f5c2efa2e93a)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_5593025ae07659cdb31539089d6a013c)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_ba6c2b57eb025a7fbc997f491ad3d2a4)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_b7a1cdb2002053aba1a7d70baf477ef9)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_7e63d5f8a18b5720a084e83793874b5f)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_e431ddc777685741a094e12ba0206eee)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_52216ef124595741870e68fc3f68cb1b)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_32381458d425529692674111c40d4e4f)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_c07c3ddb64735366bf5c68c4452590c1)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_d95ceea35c8b5fd5825ced60b1373d71)() = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_e8c174969f8f506d96b08ea211750c5b)() const = &::clang::Decl::getAsFunction;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_d96c2193d76c5f089cbe70ae1fb50bb4)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_bf65852c32145933a06701dacb146eec)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_5c4334ef82495d728baac3a436cc5d85)() const = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_5a4fbd4cfc0158a9964bd6d9fc19525c)() = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_896badf80902557a89277aa76f57848d)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_88ed98e9c59f5a6f8a73d45a665135f9)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_01ff52eea46454c8bdd75bd96e255636)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_6583196c2ee45b149e95a8988334c7f9)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_1fb864dbce7257f4a879bd03e7b15dd4)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_a5312c007444576595beefe9107274df)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_bdf3de15ed305f6aa149cf29f6507fba)() = &::clang::Decl::getLexicalDeclContext;
    unsigned int  (::clang::Decl::*method_pointer_c40df30ffba25dc58ade9a460222ce31)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_56f7f79e22bc541488c7fe8caf8aa549)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_75c59d5a06ee5cdb81fa12f80737257f)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_bd1f885159ec5530b66cfe38d660ac9e)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_2ed443c2020459439b97a8a3384f65e1)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_ea221c8e57245b78ac0e5f0000a4f3c7)() const = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_f8d11c9a7d6852ea8a3187e7267ff6e7)() = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_bda8bde465fb5629bd8d06a9ea5cb51c)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_8efe718d07ff5ffda5aa096730028627)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_d8d954077dbf5eb0bbd529b3413eda95)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_ef933c8451fc507bb4fd5411f339c810)() = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_33faa8598aa0555db40ad7a1d9051760)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_89c5c2b440ee5365a783c77d639156e2)() const = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_58123c4745525ef49e9975a801082344)() = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_a45e5128a1455cb2aca6e213f6fab355)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_797f44ac451b51289b89e87f956e3130)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_bb9d3120583f5b18b651edae1a20a639)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_155f4567864c5398a91687b12654b279)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_3aa06ffbacdd58a1a893f29321bc9999)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_1683c6f0c4025abc8a65b925958a2451)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_71f817de34815fe69fa034da18cbb7d4)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_290f6bc67e4b5568ab2cedaf8ef4961c)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_197d58c785735b1e81feef37c2bf7d3c)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_251618d2dd715688a32032106d7a9dbb)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_d0701568d03c563196b22d80e62c9b80)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_7fc7cf763254525ea1c7f10935dcb32c)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_c99c91b8e38358b3bde44fa02c706f87)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_ae0173880452528fa43963f10f3e2254)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_1f5dbb1e187a5b61b2f64dcd0d57269d)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_0a79cd707d445b548ebb65e6f4a68a5f)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_011d9e8682555cdd8723c991611cf4f2)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_ece27c1e69c052cbbdffcdc202525a48)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_f183fedeba5f564ba61c06a1e93fbda9)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_9569ec4f5e5d5751976e06740ca27657)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_506266a114ce519d97b8d7b5a9658703)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_0d1bfb99bee45fc38ac9f9c63bec31d5)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_1c895eb669545b23903158461343c31b)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_4542ee71664a5aa99153bdc4a1ed5e1a)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_e4d65efc3b125035bf1e324c2140e685)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_917eff43783d54f7b4cf1212d476c948)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_3eccb907dbc957b1849ca9c55d59a6ae)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_02c1e1d497c15147b1e5390fce84ecf9)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_d8eabe8e1f185cb9b319029257553e71)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_4a7f44d268295641a6cab776bc0f5782)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_74e6ff25c2a75d939e257e958f122c48)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_dc891ede125b59ff9a9171e7046eaf5f)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_daac143ce06d5c988aa88c71d25a9c38)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_7d47c139dafe5008b96cc8d266c86839)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_b3e4a9d99020588499bdc49d073263e8)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_79686db2443f5b5fa49063519a7245f3)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_925905df3c06575a9bbf4313f8c1035e)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_1bf0fc49830459b0adaffed3d13beef8)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_d94a7f175e1a5e0383f25b985269e4ba)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_619ab3b771245a3fb466477d3194d234(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_7fbb87df809c56248b4a76f264e8785e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_04e72f472d05517a975a39daf43c3dfc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_0fe71b4d4aa65a6ba8b6e6a1d12aceb3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_9b7c3ff57d665c5cbb5f1bd80c67aaf5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_e5430a5dbca85060a045f5c2efa2e93a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_5593025ae07659cdb31539089d6a013c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_ba6c2b57eb025a7fbc997f491ad3d2a4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_b7a1cdb2002053aba1a7d70baf477ef9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_7e63d5f8a18b5720a084e83793874b5f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_e431ddc777685741a094e12ba0206eee, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_52216ef124595741870e68fc3f68cb1b, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_32381458d425529692674111c40d4e4f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_c07c3ddb64735366bf5c68c4452590c1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_d95ceea35c8b5fd5825ced60b1373d71, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_e8c174969f8f506d96b08ea211750c5b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_d96c2193d76c5f089cbe70ae1fb50bb4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_bf65852c32145933a06701dacb146eec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_5c4334ef82495d728baac3a436cc5d85, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_5a4fbd4cfc0158a9964bd6d9fc19525c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_896badf80902557a89277aa76f57848d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_88ed98e9c59f5a6f8a73d45a665135f9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_01ff52eea46454c8bdd75bd96e255636, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_6583196c2ee45b149e95a8988334c7f9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_1fb864dbce7257f4a879bd03e7b15dd4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_a5312c007444576595beefe9107274df, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_bdf3de15ed305f6aa149cf29f6507fba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_c40df30ffba25dc58ade9a460222ce31, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_56f7f79e22bc541488c7fe8caf8aa549, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_75c59d5a06ee5cdb81fa12f80737257f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_bd1f885159ec5530b66cfe38d660ac9e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_2ed443c2020459439b97a8a3384f65e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_ea221c8e57245b78ac0e5f0000a4f3c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_f8d11c9a7d6852ea8a3187e7267ff6e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_bda8bde465fb5629bd8d06a9ea5cb51c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_8efe718d07ff5ffda5aa096730028627, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_d8d954077dbf5eb0bbd529b3413eda95, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_ef933c8451fc507bb4fd5411f339c810, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_33faa8598aa0555db40ad7a1d9051760, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_89c5c2b440ee5365a783c77d639156e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_58123c4745525ef49e9975a801082344, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_a45e5128a1455cb2aca6e213f6fab355, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_797f44ac451b51289b89e87f956e3130, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_bb9d3120583f5b18b651edae1a20a639, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_155f4567864c5398a91687b12654b279, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_3aa06ffbacdd58a1a893f29321bc9999, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_1683c6f0c4025abc8a65b925958a2451, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_71f817de34815fe69fa034da18cbb7d4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_290f6bc67e4b5568ab2cedaf8ef4961c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_197d58c785735b1e81feef37c2bf7d3c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_251618d2dd715688a32032106d7a9dbb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_d0701568d03c563196b22d80e62c9b80, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_7fc7cf763254525ea1c7f10935dcb32c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_c99c91b8e38358b3bde44fa02c706f87, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_ae0173880452528fa43963f10f3e2254, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_1f5dbb1e187a5b61b2f64dcd0d57269d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_0a79cd707d445b548ebb65e6f4a68a5f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_011d9e8682555cdd8723c991611cf4f2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_ece27c1e69c052cbbdffcdc202525a48, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_f183fedeba5f564ba61c06a1e93fbda9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_9569ec4f5e5d5751976e06740ca27657, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_506266a114ce519d97b8d7b5a9658703, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_0d1bfb99bee45fc38ac9f9c63bec31d5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_1c895eb669545b23903158461343c31b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_4542ee71664a5aa99153bdc4a1ed5e1a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_e4d65efc3b125035bf1e324c2140e685, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_917eff43783d54f7b4cf1212d476c948, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_3eccb907dbc957b1849ca9c55d59a6ae, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_02c1e1d497c15147b1e5390fce84ecf9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_d8eabe8e1f185cb9b319029257553e71, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_4a7f44d268295641a6cab776bc0f5782, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_74e6ff25c2a75d939e257e958f122c48, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_dc891ede125b59ff9a9171e7046eaf5f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_daac143ce06d5c988aa88c71d25a9c38, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_7d47c139dafe5008b96cc8d266c86839, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_b3e4a9d99020588499bdc49d073263e8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_79686db2443f5b5fa49063519a7245f3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_925905df3c06575a9bbf4313f8c1035e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_1bf0fc49830459b0adaffed3d13beef8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_d94a7f175e1a5e0383f25b985269e4ba, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_619ab3b771245a3fb466477d3194d234, "");

}