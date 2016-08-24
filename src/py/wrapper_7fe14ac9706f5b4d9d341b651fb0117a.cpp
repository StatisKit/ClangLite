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
    class ::clang::TagDecl  * (*method_pointer_d241fc4393e7599a8f9da6741e472f71)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_32ed59e7ca6f5695a88b0ff473700888)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_a101ef6589d45389a263928fb5aa2e66)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_f1e06c1dae4a5db98483496cf9c7491b)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_935e66ecee375896b51b6bb1fefca86e)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_d232c7a45e2250efbc76a6ed42d23557)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_80d3621ae7045959be8e7e0d93f80d7a)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_d187c8119dc957bbb6d5e2747c72721f)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_212b61bde0e355989061631782f55925)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_7c6d6c4bbf935facb914636d5325e608)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_5b7dbe67b57d52fba1799ef726a42f64)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_eaafe08bf03a5e75992a43a0362cbd8d)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_689ac44a27365e24a6aadd1db744a5f6)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_2f94c38078dd5fc8a1a38a24cc8288b1)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_e9a8afc58c685d14ac4c30f186d8d0d8)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_6207240f25e459bf8b5b39d486351182)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_f6eb4c956bd559339219e06374938ea2)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_ba43904b019858fda2b0b03ef8898cc4)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_c0152d2cfa5a533c94cd1facab81002c)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_3fa0a093e85f5182b9e2f1d07583f355)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_55f40393bd9c5adaa2bb636051cf7ee4)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_07ab8dd14e05542db52b3d533e0fb536)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_e979e91c342d522193c8c19672c014a4)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_f673397a8c1c56d29bd39dfda47137ff)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_0fa38b332b695f30bfce072b589a0d19)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_59544ccdf1305b26bbbdd080e895e590)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_84c13c938768559cbbfb0e9345a4e035)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_7e435c04cabf5e15a72aed8bcadad33b)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_1a823d4637915f888e1a77c864a1eae1)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_f1a81928f05f5ac7bb0a499bb44fbae2)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_b17f8d9ca484568daddd85f963f1c251)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_c7b12ffa53a854f9b9dc14f2edddd769)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_076b7ac0b80f5fa8a0fb540493c47e8c)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_d241fc4393e7599a8f9da6741e472f71, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_32ed59e7ca6f5695a88b0ff473700888, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_a101ef6589d45389a263928fb5aa2e66, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_f1e06c1dae4a5db98483496cf9c7491b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_935e66ecee375896b51b6bb1fefca86e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_d232c7a45e2250efbc76a6ed42d23557, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_80d3621ae7045959be8e7e0d93f80d7a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_d187c8119dc957bbb6d5e2747c72721f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_212b61bde0e355989061631782f55925, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_7c6d6c4bbf935facb914636d5325e608, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_5b7dbe67b57d52fba1799ef726a42f64, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_eaafe08bf03a5e75992a43a0362cbd8d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_689ac44a27365e24a6aadd1db744a5f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_2f94c38078dd5fc8a1a38a24cc8288b1, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_e9a8afc58c685d14ac4c30f186d8d0d8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_6207240f25e459bf8b5b39d486351182, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_f6eb4c956bd559339219e06374938ea2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_ba43904b019858fda2b0b03ef8898cc4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_c0152d2cfa5a533c94cd1facab81002c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_3fa0a093e85f5182b9e2f1d07583f355, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_55f40393bd9c5adaa2bb636051cf7ee4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_07ab8dd14e05542db52b3d533e0fb536, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_e979e91c342d522193c8c19672c014a4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_f673397a8c1c56d29bd39dfda47137ff, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_0fa38b332b695f30bfce072b589a0d19, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_59544ccdf1305b26bbbdd080e895e590, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_84c13c938768559cbbfb0e9345a4e035, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_7e435c04cabf5e15a72aed8bcadad33b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_1a823d4637915f888e1a77c864a1eae1, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_f1a81928f05f5ac7bb0a499bb44fbae2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_b17f8d9ca484568daddd85f963f1c251, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_c7b12ffa53a854f9b9dc14f2edddd769, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_076b7ac0b80f5fa8a0fb540493c47e8c, "");
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