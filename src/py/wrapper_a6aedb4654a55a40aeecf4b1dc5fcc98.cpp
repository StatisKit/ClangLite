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
    void  (*method_pointer_dc70b99d7b1f560e9b19cbc2479b9eac)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_cda57622bda4531ebb03895cd9227784)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_9158ca2ebcb05ba787b7674282e22345)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_fb351ff3aca55427b7ad53c4829affde)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_f49330e8ca615fa688b7a06baf70c948)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_1db1de4523655beba448f8c6519a4103)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_b08b4baf2e76531b8ac6def5474dde6f)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_c4ce5c50989652948a03dea1023eac83)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_7acb6545a5f951b0ad7ba2862db90521)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_f78881f1ec1359eda638e3f26ce76fee)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_06bbee603d9f5146bf5c249c0b63e34c)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_aea73f06ce1454a781a3259fbc61cf67)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_ba247dc4a85454ad8c619805165d7c00)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_426dbd1c035d50fbbbf796d1a0a13877)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_de3255436e8f5a5db8144eefeb0fe071)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_f3912a91b2e5559caebe8758d1bc0ddf)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_25f05386a4a15bc097ce5d322ef1ad84)() const = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_89c90f4c06a9504e949bf5006c71e8ee)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_4a3a0a3a40da59168070d75adfdef9c8)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_d4f68c41824a56828915709ea2f98297)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_a85245674db253e6b6b5b91cb3048d5f)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_8219f4d18b51527195f86c36eeecd23d)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_99e264022c92565a83c1a67c2ed765e2)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_5d40653121fa53db9096cecdbdc9534d)() = &::clang::Decl::getLexicalDeclContext;
    unsigned int  (::clang::Decl::*method_pointer_d6d61ac773165661aa1a7e53f07e0b14)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_5a9fffcce017584aa2913552cf6db9af)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_f70c91db820f50d5973c460522c2b476)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_e3c9d42ad1575411a16bea2dd6ac730c)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_b26cfaa62c6d568fa480477a95096676)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_ff4a5027078759eebe523827fff970e6)() const = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_8f565f5fd471577e8df4a0e6ad44b462)() = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_3f74a82929bd548f9291556c2c30493d)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_5c756883b8695be5a7a3a525c6daf320)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_c1bc05d71b385beebe2359deab29bad4)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_1d3c55ce6e0e5edf837ac0afb5dbabfc)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_39e3b0dfc7285a09bba3c5067072d19d)() = &::clang::Decl::getPreviousDecl;
    bool  (::clang::Decl::*method_pointer_e932f0052a4d54b99031ac55cad5f46f)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_54673824b1235346b9fdd697233e47f3)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_c6f4923121695ca59ccf1b3a0f55dcd5)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_62446e03b46457278bb5b08e49c0e14d)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_f5da777505755cfe8755d3b460407d7f)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_c3aa41a265c4598899446213f179df7b)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_fa9fefee5e79503eb721e01e236d794c)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_419def3f360c54f5b07e8965bf9a4f8d)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_0ce331c4dffc56f3a69efbe307f71ef9)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_3f944502427d50539eb79f7a730034e1)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_eae7d8f210425faeb56a6a35b1141883)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_96b7adb9c5445443922c83e19911d15a)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_33ea03db272b5dd7886dac92bfeee681)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_e69111de52c85087a6e6d6ccacc36676)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_101db5c90d0a54f58e32322f3decbbb6)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_18d7f5e9a94d5fce9c03230ac98ac294)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_026f2fcc94cd558faafdcb2b016c4d04)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_6a8a0139a84957b8bfa15150c65c7fb7)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_f58618d295755a2683c3b7e402e926a2)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_5fb29b3a89e457bfb174ad7046112ef3)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_c553a662dd785849b9ebf8837255101a)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_a0466249bb415c7090514d91ebf2dd29)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_0d73d525c69e5a58aa24d5449dbd49a4)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_0498eb22732a58ffbf528c9f65f2ef6a)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_6f5ba4e77de45c499c04ac38cd6c5af3)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_d6198aab9caf5eb5ae6f2eb45da08c87)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_bd3f32b86e595c0e8b141f4d3871deb7)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_d4d4cb11f63b5e76883d081c8cde371f)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_c0107fabeebe5812949d51847d161826)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_4426e8dc0c1c56bd8434d76475a1cf64)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_520e0e4feb025f45b77aadf01dd8dc65)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_6c0c13a935175533b8f4686bdb031e22)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_391cb40f51815f32bfa34c8e9b5d1ba1)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_696d1af304fc510aa6e0055005d33060)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_35b2ff1792b0540aa5ecf546e7940f2e)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_dd8df6921878590bbd09fc059a6bfba9)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_cd4c5764bfd953c09493c0b8cc59f958)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_a37e299bd26553c8829eea62406e900a)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_4c9201c831a95618b14c05a011559ad8)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_b745862faf0d5c6ca92850eb8c43d97b(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_dc70b99d7b1f560e9b19cbc2479b9eac, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_cda57622bda4531ebb03895cd9227784, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_9158ca2ebcb05ba787b7674282e22345, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_fb351ff3aca55427b7ad53c4829affde, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_f49330e8ca615fa688b7a06baf70c948, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_1db1de4523655beba448f8c6519a4103, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_b08b4baf2e76531b8ac6def5474dde6f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_c4ce5c50989652948a03dea1023eac83, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_7acb6545a5f951b0ad7ba2862db90521, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_f78881f1ec1359eda638e3f26ce76fee, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_06bbee603d9f5146bf5c249c0b63e34c, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_aea73f06ce1454a781a3259fbc61cf67, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_ba247dc4a85454ad8c619805165d7c00, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_426dbd1c035d50fbbbf796d1a0a13877, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_de3255436e8f5a5db8144eefeb0fe071, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_f3912a91b2e5559caebe8758d1bc0ddf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_25f05386a4a15bc097ce5d322ef1ad84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_89c90f4c06a9504e949bf5006c71e8ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_4a3a0a3a40da59168070d75adfdef9c8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_d4f68c41824a56828915709ea2f98297, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_a85245674db253e6b6b5b91cb3048d5f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_8219f4d18b51527195f86c36eeecd23d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_99e264022c92565a83c1a67c2ed765e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_5d40653121fa53db9096cecdbdc9534d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_d6d61ac773165661aa1a7e53f07e0b14, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_5a9fffcce017584aa2913552cf6db9af, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_f70c91db820f50d5973c460522c2b476, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_e3c9d42ad1575411a16bea2dd6ac730c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_b26cfaa62c6d568fa480477a95096676, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_ff4a5027078759eebe523827fff970e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_8f565f5fd471577e8df4a0e6ad44b462, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_3f74a82929bd548f9291556c2c30493d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_5c756883b8695be5a7a3a525c6daf320, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_c1bc05d71b385beebe2359deab29bad4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_1d3c55ce6e0e5edf837ac0afb5dbabfc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_39e3b0dfc7285a09bba3c5067072d19d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_e932f0052a4d54b99031ac55cad5f46f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_54673824b1235346b9fdd697233e47f3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_c6f4923121695ca59ccf1b3a0f55dcd5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_62446e03b46457278bb5b08e49c0e14d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_f5da777505755cfe8755d3b460407d7f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_c3aa41a265c4598899446213f179df7b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_fa9fefee5e79503eb721e01e236d794c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_419def3f360c54f5b07e8965bf9a4f8d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_0ce331c4dffc56f3a69efbe307f71ef9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_3f944502427d50539eb79f7a730034e1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_eae7d8f210425faeb56a6a35b1141883, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_96b7adb9c5445443922c83e19911d15a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_33ea03db272b5dd7886dac92bfeee681, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_e69111de52c85087a6e6d6ccacc36676, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_101db5c90d0a54f58e32322f3decbbb6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_18d7f5e9a94d5fce9c03230ac98ac294, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_026f2fcc94cd558faafdcb2b016c4d04, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_6a8a0139a84957b8bfa15150c65c7fb7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_f58618d295755a2683c3b7e402e926a2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_5fb29b3a89e457bfb174ad7046112ef3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_c553a662dd785849b9ebf8837255101a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_a0466249bb415c7090514d91ebf2dd29, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_0d73d525c69e5a58aa24d5449dbd49a4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_0498eb22732a58ffbf528c9f65f2ef6a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_6f5ba4e77de45c499c04ac38cd6c5af3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_d6198aab9caf5eb5ae6f2eb45da08c87, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_bd3f32b86e595c0e8b141f4d3871deb7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_d4d4cb11f63b5e76883d081c8cde371f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_c0107fabeebe5812949d51847d161826, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_4426e8dc0c1c56bd8434d76475a1cf64, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_520e0e4feb025f45b77aadf01dd8dc65, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_6c0c13a935175533b8f4686bdb031e22, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_391cb40f51815f32bfa34c8e9b5d1ba1, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_696d1af304fc510aa6e0055005d33060, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_35b2ff1792b0540aa5ecf546e7940f2e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_dd8df6921878590bbd09fc059a6bfba9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_cd4c5764bfd953c09493c0b8cc59f958, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_a37e299bd26553c8829eea62406e900a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_4c9201c831a95618b14c05a011559ad8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_b745862faf0d5c6ca92850eb8c43d97b, "");

}