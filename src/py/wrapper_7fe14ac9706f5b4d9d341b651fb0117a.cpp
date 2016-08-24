#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_7fe14ac9706f5b4d9d341b651fb0117a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TagDecl  * (*method_pointer_6321969c2082584dbf40cfed16250b0f)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_14a09a52de87597e814257f057b70e2c)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_7aede7477efc56c69cc40dac14067928)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_25ca44c6d23c5888adc5927100e18c12)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_314135a2c0a15f5189fa5bbf81e0a3e0)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_f6196a961a155c4cb8b76e0b385c723a)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_8b2996f0d48652c2ad41d4d06e16fad1)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_f5ff55210c9254c69f5de8070eabf1ba)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_bf5581c63ec055c6a82c932a1fbd8db8)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_39491b6545805da1bda3169033d714a4)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_e8cd58067aab5aa8b5972a5996ada36c)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_fd7c1bf04a265ac6abaaff036515e7dc)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_e305640c5b7e51e9889b863094bd4e93)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_6a12512a613e5bd195bdf814cc1c7f34)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_e7d982c7432c5c1d9bad50f5b28c9314)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_7cc3bb4ac0685520814e3471094e85a6)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_ed886384f5ab5a3dabe053077289ad03)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_28e5d98376285c5086b080bd9456998f)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_edde2f30708e59f6aa9a12ab0c4c1d36)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_85ce2e43a6065c2cbd6f73c559c88cbd)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_edcc215bcc555777bf0a5b3a74c089c9)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_ec3ccf174e8d5c79b7860739d253a762)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_b491cbe83aef5bea9a158d2441ab63d0)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_61d569d757885059836d428e53330e30)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_4becea20749f5ab7a13bb8a91e56b84b)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_f1e97ee96ce25390b554853bfb094d80)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_71023e57232753a2868594c66c0feccc)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_2a5365bbbaeb535dbe282a5bf49b7912)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_d13a87a734975595b4c2e9e77a81a87b)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_76118f370941514da6d70bd11c7a9a66)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_96806fe589cb54859d428b60c5906557)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_6591a8bfc2205a398dd4e6d99275200e)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_66e28a4cbc4a530189ab61b0dcd3e20b)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_6321969c2082584dbf40cfed16250b0f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_14a09a52de87597e814257f057b70e2c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_7aede7477efc56c69cc40dac14067928, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_25ca44c6d23c5888adc5927100e18c12, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_314135a2c0a15f5189fa5bbf81e0a3e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_f6196a961a155c4cb8b76e0b385c723a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_8b2996f0d48652c2ad41d4d06e16fad1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_f5ff55210c9254c69f5de8070eabf1ba, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_bf5581c63ec055c6a82c932a1fbd8db8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_39491b6545805da1bda3169033d714a4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_e8cd58067aab5aa8b5972a5996ada36c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_fd7c1bf04a265ac6abaaff036515e7dc, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_e305640c5b7e51e9889b863094bd4e93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_6a12512a613e5bd195bdf814cc1c7f34, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_e7d982c7432c5c1d9bad50f5b28c9314, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_7cc3bb4ac0685520814e3471094e85a6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_ed886384f5ab5a3dabe053077289ad03, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_28e5d98376285c5086b080bd9456998f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_edde2f30708e59f6aa9a12ab0c4c1d36, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_85ce2e43a6065c2cbd6f73c559c88cbd, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_edcc215bcc555777bf0a5b3a74c089c9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_ec3ccf174e8d5c79b7860739d253a762, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_b491cbe83aef5bea9a158d2441ab63d0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_61d569d757885059836d428e53330e30, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_4becea20749f5ab7a13bb8a91e56b84b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_f1e97ee96ce25390b554853bfb094d80, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_71023e57232753a2868594c66c0feccc, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_2a5365bbbaeb535dbe282a5bf49b7912, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_d13a87a734975595b4c2e9e77a81a87b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_76118f370941514da6d70bd11c7a9a66, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_96806fe589cb54859d428b60c5906557, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_6591a8bfc2205a398dd4e6d99275200e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_66e28a4cbc4a530189ab61b0dcd3e20b, "");
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