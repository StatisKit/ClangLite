#include "_clanglite.h"


namespace autowig
{
}


void wrapper_7fe14ac9706f5b4d9d341b651fb0117a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TagDecl  * (*method_pointer_59ec6736949d5a13873a4dbb77da5629)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_68814b861ef25052b0d232866e9535be)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_ea139ba34ef354a78a01e69bb4b136a9)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_c57f8ae9c5c15a40bb0e60a300ff515d)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_24c63077ce4f5c87a9c5b09b22cc68f5)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_f6db748c6f595b8c8fe6597a71fc1f03)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_5d96d319cc2052fb9adfd9137100c7ad)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_584b3016f3ee578bada63ac0f6df2b06)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_585e5d431dc0572fa5f3a511ade64e48)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_bea5376e904d5c8dbeef23d36a6844e3)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_666da5bd5be853c8be402b9f89526f45)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_047a5c95d38e5f488ddbe0ade9f475b6)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_7517f305732f5b32a505562e4c399ef1)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_a46b6a31f8f85daa9d77d31f004369ce)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_e326db408f8f5c7da1e96a2ed864a099)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_d4023e36a18452009c4f5a433dca41ce)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_e0077140d77559a6b6ae02cee54ccf47)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_92abe744598e548384d49964f15ad811)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_2e190841f42253d3aefadd553d3f587a)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_8718fd74a0f05ceaa87c7f19bfd77645)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_8611d52ba27a50ea9b68716a30cd0ffa)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_a6fb3c340bb45651a0ff5afaf8f521fa)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_68388884353850d4894e989f49fd95c5)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_304133f4fdef5675a8d375dfc78d30c3)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_ca392d1b68a955f083b1106627e93fc4)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_5416400266f0541bacfc96c2019fa7a4)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_4a1d0287378e50bca74ddd680b6e1ede)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_dbd4506d1e6158d1866b272958a20a80)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_50834279451952ac83add7f20f9ec623)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_a7b4faef553155d8883d20ec52ab9e97)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_b253a8b3e19f5167a4c5b85b661c4c98)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_ba5432cac2da59ae8f3c72e95bd6d402)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_75340171cb5e51f08e6297ba5346d6c3)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_59ec6736949d5a13873a4dbb77da5629, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_68814b861ef25052b0d232866e9535be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_ea139ba34ef354a78a01e69bb4b136a9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_c57f8ae9c5c15a40bb0e60a300ff515d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_24c63077ce4f5c87a9c5b09b22cc68f5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_f6db748c6f595b8c8fe6597a71fc1f03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_5d96d319cc2052fb9adfd9137100c7ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_584b3016f3ee578bada63ac0f6df2b06, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_585e5d431dc0572fa5f3a511ade64e48, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_bea5376e904d5c8dbeef23d36a6844e3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_666da5bd5be853c8be402b9f89526f45, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_047a5c95d38e5f488ddbe0ade9f475b6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_7517f305732f5b32a505562e4c399ef1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_a46b6a31f8f85daa9d77d31f004369ce, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_e326db408f8f5c7da1e96a2ed864a099, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_d4023e36a18452009c4f5a433dca41ce, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_e0077140d77559a6b6ae02cee54ccf47, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_92abe744598e548384d49964f15ad811, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_2e190841f42253d3aefadd553d3f587a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_8718fd74a0f05ceaa87c7f19bfd77645, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_8611d52ba27a50ea9b68716a30cd0ffa, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_a6fb3c340bb45651a0ff5afaf8f521fa, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_68388884353850d4894e989f49fd95c5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_304133f4fdef5675a8d375dfc78d30c3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_ca392d1b68a955f083b1106627e93fc4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_5416400266f0541bacfc96c2019fa7a4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_4a1d0287378e50bca74ddd680b6e1ede, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_dbd4506d1e6158d1866b272958a20a80, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_50834279451952ac83add7f20f9ec623, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_a7b4faef553155d8883d20ec52ab9e97, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_b253a8b3e19f5167a4c5b85b661c4c98, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_ba5432cac2da59ae8f3c72e95bd6d402, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_75340171cb5e51f08e6297ba5346d6c3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("classof_kind");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("classof");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("cast_from_decl_context");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::TagDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TagDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TagDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}