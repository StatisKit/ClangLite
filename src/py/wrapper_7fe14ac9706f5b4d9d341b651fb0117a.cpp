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
    class ::clang::TagDecl  * (*method_pointer_1a7e7358dd035f5a94a0e6bb86908fac)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_1e5deb1ac2855c1ebc1f07ce5ca3f0a1)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_f5baf23d3f3b54508bdb2cd2453a28ed)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_fd6eb8f44f745e88a2445d2b8c96d15d)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_330a33ced4995316a51516714cead184)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_d3facaa3b9d45b0dafff20e84517d760)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_177867ecea63559088e8b6c6e7d4ec30)() const = &::clang::TagDecl::getDefinition;
    unsigned int  (::clang::TagDecl::*method_pointer_78388217a1b357c789102b54358c2557)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_bf807fe017ef582196917135c4e85bf1)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_9d55544b00f25984b0bfa3bf8d5f814d)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_5fb7350561695b32b0d7ab90cad2bb36)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_25e9b4e42e955914af74c1f1e6ab30e7)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_f037a701c6715c87879ae646fa6d383c)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_50b1e7215fab54348d5e09163e81f9c9)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_ee982aed58e9547fbfc16d100151203d)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_bd893127c0705ce38680f43cbbae151c)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_639155bedf235aa180f162279d83eb7f)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_11f7421b910459fc9d3bfb96f12608a8)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_866e8fba0fa9587998b211282a79ed9e)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_9056c403cd9250cdb9b6384c2a3b9fb3)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_a60b6b1e9ee85ad2ac2061b062b49411)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_3a0566ab5b335419b512f5b780508390)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_bf5cbb37ed395c738a10063160c7f147)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_08d074c48bf35e939922956ce3d640c0)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_ed07116250525ac8b6620ad402ed0dd8)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_e8e739358ae45abcaaaade498298397d)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_88fb122b2fb458ce8650b197e6bab494)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_a66df66657c458cda54987946d7fd217)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_1a7e7358dd035f5a94a0e6bb86908fac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_1e5deb1ac2855c1ebc1f07ce5ca3f0a1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_f5baf23d3f3b54508bdb2cd2453a28ed, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_fd6eb8f44f745e88a2445d2b8c96d15d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_330a33ced4995316a51516714cead184, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_d3facaa3b9d45b0dafff20e84517d760, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_177867ecea63559088e8b6c6e7d4ec30, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_78388217a1b357c789102b54358c2557, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_bf807fe017ef582196917135c4e85bf1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_9d55544b00f25984b0bfa3bf8d5f814d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_5fb7350561695b32b0d7ab90cad2bb36, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_25e9b4e42e955914af74c1f1e6ab30e7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_f037a701c6715c87879ae646fa6d383c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_50b1e7215fab54348d5e09163e81f9c9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_ee982aed58e9547fbfc16d100151203d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_bd893127c0705ce38680f43cbbae151c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_639155bedf235aa180f162279d83eb7f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_11f7421b910459fc9d3bfb96f12608a8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_866e8fba0fa9587998b211282a79ed9e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_9056c403cd9250cdb9b6384c2a3b9fb3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_a60b6b1e9ee85ad2ac2061b062b49411, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_3a0566ab5b335419b512f5b780508390, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_bf5cbb37ed395c738a10063160c7f147, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_08d074c48bf35e939922956ce3d640c0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_ed07116250525ac8b6620ad402ed0dd8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_e8e739358ae45abcaaaade498298397d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_88fb122b2fb458ce8650b197e6bab494, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_a66df66657c458cda54987946d7fd217, "");
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