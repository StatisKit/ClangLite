#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TagDecl const volatile * get_pointer<class ::clang::TagDecl const volatile >(class ::clang::TagDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7fe14ac9706f5b4d9d341b651fb0117a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_91063acdb6a657809e31db60bee855a0)() const = &::clang::TagDecl::getInnerLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_7429f4c956395561bfb83eb3a9e16211)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::TagDecl * (::clang::TagDecl::*method_pointer_e1f5d460e22f5d75878b52a29aa08ddd)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl const * (::clang::TagDecl::*method_pointer_09dba3acaa2e5fe699dd02d849241b33)() const = &::clang::TagDecl::getCanonicalDecl;
    bool  (::clang::TagDecl::*method_pointer_796df56f590a5b4fac6578e7ce5bfe8e)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_4b3092dc1bd25860b750ccddd4b064d9)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_090f7353c3c9586cbdcaa23140b734e0)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_865d2e8011a2581d9a357470de4c2f2a)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_d551bade4ee25659a7f91a0c626cdb06)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_12a8e8776aca53df8b0a9f3a82c0ad0f)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_f550ab18b14652d4b6650d0472237711)() const = &::clang::TagDecl::isFreeStanding;
    void  (::clang::TagDecl::*method_pointer_effe344e1f8e5892ad2432ba9d095d69)(bool ) = &::clang::TagDecl::setFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_0998a3c2a7e752598a8262d17a665133)() const = &::clang::TagDecl::isDependentType;
    void  (::clang::TagDecl::*method_pointer_7ce0308780765567b971951d0ab26752)() = &::clang::TagDecl::startDefinition;
    class ::clang::TagDecl * (::clang::TagDecl::*method_pointer_57d5d82c14095badb6d98fe0797b52af)() const = &::clang::TagDecl::getDefinition;
    void  (::clang::TagDecl::*method_pointer_b4e3537b768d50aca41be5f5546f4756)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_c10a25bf84d25e0ead11fff13241848a)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_6108c12ddb2452e385d61d7489f91872)() const = &::clang::TagDecl::getKindName;
    bool  (::clang::TagDecl::*method_pointer_2648f5bb5cde5781ad5f23b8777293e5)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_200a23ca6619557fb0bf4ed074d858c6)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_139f68198cb15661a3c0698fc61d8d86)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_d868df1ac933520ba6053238cb158602)() const = &::clang::TagDecl::isUnion;
    bool  (::clang::TagDecl::*method_pointer_ff9b4c99e02a575dba141e20645f87f0)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_152f2d793a9f58b19fb707aa3e524e32)() const = &::clang::TagDecl::hasNameForLinkage;
    class ::clang::TypedefNameDecl * (::clang::TagDecl::*method_pointer_1a7988c372d05d2ebd41bb291578e900)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_4723f2dd7a4251ffa645a4f68a2de703)(class ::clang::TypedefNameDecl *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    unsigned int  (::clang::TagDecl::*method_pointer_66cfcdead7565c48a9f6407b9f4acfbb)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    bool  (*method_pointer_ffa3825b58905f5799b7cbe3c5e7b1f8)(class ::clang::Decl const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_c976ff30ceba5e97824dc8c924483860)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::DeclContext * (*method_pointer_20386fde103153f0976e66182ecdc534)(class ::clang::TagDecl const *) = ::clang::TagDecl::castToDeclContext;
    class ::clang::TagDecl * (*method_pointer_454ec384924b5c669322c8105ac99300)(class ::clang::DeclContext const *) = ::clang::TagDecl::castFromDeclContext;
    boost::python::class_< class ::clang::TagDecl, autowig::Held< class ::clang::TagDecl >::Type, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_91063acdb6a657809e31db60bee855a0, ":Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_7429f4c956395561bfb83eb3a9e16211, ":Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_e1f5d460e22f5d75878b52a29aa08ddd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_09dba3acaa2e5fe699dd02d849241b33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_796df56f590a5b4fac6578e7ce5bfe8e, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_4b3092dc1bd25860b750ccddd4b064d9, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_090f7353c3c9586cbdcaa23140b734e0, "Return true if this complete decl is required to be complete for some\nexisting use.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_865d2e8011a2581d9a357470de4c2f2a, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_d551bade4ee25659a7f91a0c626cdb06, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_12a8e8776aca53df8b0a9f3a82c0ad0f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_f550ab18b14652d4b6650d0472237711, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_effe344e1f8e5892ad2432ba9d095d69, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_0998a3c2a7e752598a8262d17a665133, "Whether this declaration declares a type that is dependent, i.e., a type\nthat somehow depends on template parameters.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_7ce0308780765567b971951d0ab26752, ":Return Type:\n    :cpp:any:`void`\n\n");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_57d5d82c14095badb6d98fe0797b52af, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.TagDecl`\n\n");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_b4e3537b768d50aca41be5f5546f4756, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_c10a25bf84d25e0ead11fff13241848a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_6108c12ddb2452e385d61d7489f91872, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_2648f5bb5cde5781ad5f23b8777293e5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_200a23ca6619557fb0bf4ed074d858c6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_139f68198cb15661a3c0698fc61d8d86, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_d868df1ac933520ba6053238cb158602, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_ff9b4c99e02a575dba141e20645f87f0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_152f2d793a9f58b19fb707aa3e524e32, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_1a7988c372d05d2ebd41bb291578e900, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_4723f2dd7a4251ffa645a4f68a2de703, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_66cfcdead7565c48a9f6407b9f4acfbb, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_ffa3825b58905f5799b7cbe3c5e7b1f8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_c976ff30ceba5e97824dc8c924483860, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_20386fde103153f0976e66182ecdc534, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_454ec384924b5c669322c8105ac99300, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("classof_kind");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("classof");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("cast_from_decl_context");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("cast_to_decl_context");

    if(autowig::Held< class ::clang::TagDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TagDecl >::Type, autowig::Held< class ::clang::TypeDecl >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TagDecl >::Type, autowig::Held< class ::clang::DeclContext >::Type >();
    }

}