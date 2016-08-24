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
    class ::clang::TagDecl  * (*method_pointer_f8dcad6ad5125fe49866abfc8b72ced5)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_e88e8c80156f5ffc9a53f87961510b55)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_3bbc2ea6001d57d5aa151d5b6b1afc83)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_033a0d6297b951ba95ce34c65ae2fe09)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_738c4a7818ea5d24b171c4c7fd741d64)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_4a82ad6d852f581888233ca4f45a7161)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_e584198ff4b85dc7b7211fdd938c70c3)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_a6622974f5975337bb1cf75a0dec625e)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_78f5a82df3195bec81aae580930b409b)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_ebed9b639e7c59648ad059a205ca2ade)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_fa3027fbefe359269451ce266dc4a9f3)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_d8902e3b29505c738f1d5bb601f98f94)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_a5b0417276b25ca2a9f6def8dc050f1a)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_799d3d4c78fc5fb8b4ff817c7c7dab05)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_a086ea0827c65044b819c5646efb1651)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_fbd599d7332455e09de2ad4790d4e519)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_e4f7670c98b95783af7217986db016b6)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_c2c372037e765d3f935d3161f120d5fe)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_c6984646be895f4a86e0e66563f37734)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_f9d072921c535940aa11f3794167592c)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_e5b99f57358253b1abcef0adf9c6c000)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_631bed9afc53529a930dd31b33375a9b)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_79057535f1835580b6f293d0b661f56f)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_020d74a4f2fc503fb0e7ac18899c2e44)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_cc2e295fc2de5bb0ac2c71fa4c71b78e)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_0910d146cf9c55d8adb0fa29ba360ae3)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_660ed3ceeebf539b91c77cbd30270954)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_e24b64cfb5e258a383b1b3491eb80eb5)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_9839bbd0e3a3579384498c554f8b8ea2)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_986e5afa55125cd8803e0aeff709c0a6)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_a4947e8982df5ad9b33877ffda7d879e)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_9b489047cfd756ea9166b9832839b643)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_5ff91e67e80656e49b32d26d8a9912f0)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_f8dcad6ad5125fe49866abfc8b72ced5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_e88e8c80156f5ffc9a53f87961510b55, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_3bbc2ea6001d57d5aa151d5b6b1afc83, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_033a0d6297b951ba95ce34c65ae2fe09, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_738c4a7818ea5d24b171c4c7fd741d64, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_4a82ad6d852f581888233ca4f45a7161, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_e584198ff4b85dc7b7211fdd938c70c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_a6622974f5975337bb1cf75a0dec625e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_78f5a82df3195bec81aae580930b409b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_ebed9b639e7c59648ad059a205ca2ade, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_fa3027fbefe359269451ce266dc4a9f3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_d8902e3b29505c738f1d5bb601f98f94, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_a5b0417276b25ca2a9f6def8dc050f1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_799d3d4c78fc5fb8b4ff817c7c7dab05, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_a086ea0827c65044b819c5646efb1651, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_fbd599d7332455e09de2ad4790d4e519, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_e4f7670c98b95783af7217986db016b6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_c2c372037e765d3f935d3161f120d5fe, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_c6984646be895f4a86e0e66563f37734, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_f9d072921c535940aa11f3794167592c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_e5b99f57358253b1abcef0adf9c6c000, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_631bed9afc53529a930dd31b33375a9b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_79057535f1835580b6f293d0b661f56f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_020d74a4f2fc503fb0e7ac18899c2e44, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_cc2e295fc2de5bb0ac2c71fa4c71b78e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_0910d146cf9c55d8adb0fa29ba360ae3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_660ed3ceeebf539b91c77cbd30270954, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_e24b64cfb5e258a383b1b3491eb80eb5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_9839bbd0e3a3579384498c554f8b8ea2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_986e5afa55125cd8803e0aeff709c0a6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_a4947e8982df5ad9b33877ffda7d879e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_9b489047cfd756ea9166b9832839b643, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_5ff91e67e80656e49b32d26d8a9912f0, "");
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