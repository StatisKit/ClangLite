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
    class ::clang::TagDecl  * (*method_pointer_93f9814f284e5793bfba2c8d8b8ba1cf)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_763384e60e8a52ebb5d97afa757964ca)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_94abab0fc75a5fc992f48099af51e36c)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_52415414b06e5696b10a3473366afd41)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_bb64831b1f845e0bb0a392d0e5d6626d)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_9026dacf600b5af1adb20b6b2cca54f6)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_742cc23b2c945897adfc4f473c171c40)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_f14b7c9476f05161b22b1f6194e48541)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_788226db06d85e3899ec7dbc0a06f285)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_b9d61c36550754ba9d31b22d9d3da426)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_2090757c126256b5b58e922680ccd798)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_f0bf1a686daa54e5bb9280f7a51d9948)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_b8df47a8fecd548281340db5b8d07d4a)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_39c829168b9a5350935e517e4377ff75)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_ad506d79f8255085ace92cbe1eae7990)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_0d2cbc0917ce526e84f4601ab0dc6159)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_26f4d1ebc9c75f9080978621622d84c5)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_d501aae3855b588d87799fed3f220625)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_52860888abc25b418246c81b945cba8a)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_adb6949a2cc759dabd7eaae2a4dd2bba)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_d36b9252c02d5bfe84a2d64e5bfaaf21)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_5f13caa983ea514888ececb82fc7af57)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_8c60267fe5b75e1bbf0dc33f4f2b6613)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_b12e811ad80d5b0abbb6dd8dd62f326a)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_fcdcbad2d160550190d98c92fccebfe8)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_6dca882dec225d75b7cd4a5fc74b344c)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_fb96e80a9298573987f589b201a8ba47)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_fda70018915150a2bdd1a5f67369964a)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_01926d01f39e545390228505b211a067)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_07ca199169ec5935aa7038ac7fc24eb4)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_f5cb9289242650b6b2d0ffe489a72129)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_e1177fdb196f561e8e2133dd8c8070a0)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_6364d35a07b9559caaff5db739f3a313)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_93f9814f284e5793bfba2c8d8b8ba1cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_763384e60e8a52ebb5d97afa757964ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_94abab0fc75a5fc992f48099af51e36c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_52415414b06e5696b10a3473366afd41, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_bb64831b1f845e0bb0a392d0e5d6626d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_9026dacf600b5af1adb20b6b2cca54f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_742cc23b2c945897adfc4f473c171c40, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_f14b7c9476f05161b22b1f6194e48541, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_788226db06d85e3899ec7dbc0a06f285, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_b9d61c36550754ba9d31b22d9d3da426, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_2090757c126256b5b58e922680ccd798, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_f0bf1a686daa54e5bb9280f7a51d9948, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_b8df47a8fecd548281340db5b8d07d4a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_39c829168b9a5350935e517e4377ff75, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_ad506d79f8255085ace92cbe1eae7990, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_0d2cbc0917ce526e84f4601ab0dc6159, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_26f4d1ebc9c75f9080978621622d84c5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_d501aae3855b588d87799fed3f220625, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_52860888abc25b418246c81b945cba8a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_adb6949a2cc759dabd7eaae2a4dd2bba, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_d36b9252c02d5bfe84a2d64e5bfaaf21, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_5f13caa983ea514888ececb82fc7af57, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_8c60267fe5b75e1bbf0dc33f4f2b6613, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_b12e811ad80d5b0abbb6dd8dd62f326a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_fcdcbad2d160550190d98c92fccebfe8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_6dca882dec225d75b7cd4a5fc74b344c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_fb96e80a9298573987f589b201a8ba47, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_fda70018915150a2bdd1a5f67369964a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_01926d01f39e545390228505b211a067, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_07ca199169ec5935aa7038ac7fc24eb4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_f5cb9289242650b6b2d0ffe489a72129, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_e1177fdb196f561e8e2133dd8c8070a0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_6364d35a07b9559caaff5db739f3a313, "");
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