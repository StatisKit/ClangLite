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
    class ::clang::TagDecl  * (*method_pointer_6915aabe4ddb53c59d846a5c0e331f1a)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_d65ee3a07dd55e2bb6911ffe92085b08)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_2780a7dcbfcb5d7d83966f8464cedc14)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_7e0399fc7b5c53dfa66f34b4542b86e7)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_5eefb9357fd35afbabf142f73cda1681)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_2c940c8521d75529879129b91916e3fc)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_5426c8b060f85054b4025fd701469d18)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_00c6c9340bfd550d9a5e3eff67fefc7a)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_40e70f5d505d5633b93f553760346763)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_3e9f78ca5d935e039767ef0c7bf1d055)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_13e2d56390f152889b29c38a5b5693b8)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_cbe21154e63b51c0b1696667acb9a847)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_b722667eacb759909b91b5fc4b1f25bb)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_5a83c86709545a27a2867179d3df5529)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_19c8f6b89a585f4498cffaedb7a33493)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_1222ca4e46e356bfa4fac78da40a81e5)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_8a9b20d63e59557a9101850f486aa898)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_aa314bfce0c2518aa91c6d75f64f57a2)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_49966c0780b354cc9bf82d21555383a8)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_6a19285dbe98569fb0baee6ea1ee1f65)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_ead3766a421a5e3ab6881ca4903bc215)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_cd2cab78def5580f9182f8918ee06b4b)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_5ade10e5c05b5119a2e76631e8d7d669)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_ac94f39555325f7e9527c4240fc2b1d4)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_177af222844353488cd274b87a78ab09)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_1282b13355515b818794f7a54f454390)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_a3e513aa85fd52bfa39195a0ccbcd7d7)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_84bf2a50b7d158d6add64244d3f3a96f)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_5b263302c6fb59e0b408dab537066362)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_38e873aac7095ead976ff745626649b0)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_7f4dd7103e5f588299e7319436226db3)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_98c6e49c47a25ed68121c02ca3a4a1ab)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_604034a74f8a545985f6c96e778c02d8)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_6915aabe4ddb53c59d846a5c0e331f1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_d65ee3a07dd55e2bb6911ffe92085b08, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_2780a7dcbfcb5d7d83966f8464cedc14, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_7e0399fc7b5c53dfa66f34b4542b86e7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_5eefb9357fd35afbabf142f73cda1681, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_2c940c8521d75529879129b91916e3fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_5426c8b060f85054b4025fd701469d18, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_00c6c9340bfd550d9a5e3eff67fefc7a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_40e70f5d505d5633b93f553760346763, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_3e9f78ca5d935e039767ef0c7bf1d055, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_13e2d56390f152889b29c38a5b5693b8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_cbe21154e63b51c0b1696667acb9a847, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_b722667eacb759909b91b5fc4b1f25bb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_5a83c86709545a27a2867179d3df5529, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_19c8f6b89a585f4498cffaedb7a33493, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_1222ca4e46e356bfa4fac78da40a81e5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_8a9b20d63e59557a9101850f486aa898, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_aa314bfce0c2518aa91c6d75f64f57a2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_49966c0780b354cc9bf82d21555383a8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_6a19285dbe98569fb0baee6ea1ee1f65, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_ead3766a421a5e3ab6881ca4903bc215, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_cd2cab78def5580f9182f8918ee06b4b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_5ade10e5c05b5119a2e76631e8d7d669, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_ac94f39555325f7e9527c4240fc2b1d4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_177af222844353488cd274b87a78ab09, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_1282b13355515b818794f7a54f454390, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_a3e513aa85fd52bfa39195a0ccbcd7d7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_84bf2a50b7d158d6add64244d3f3a96f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_5b263302c6fb59e0b408dab537066362, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_38e873aac7095ead976ff745626649b0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_7f4dd7103e5f588299e7319436226db3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_98c6e49c47a25ed68121c02ca3a4a1ab, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_604034a74f8a545985f6c96e778c02d8, "");
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