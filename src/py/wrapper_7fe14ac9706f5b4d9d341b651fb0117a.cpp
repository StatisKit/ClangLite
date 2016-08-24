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
    class ::clang::TagDecl  * (*method_pointer_cec8301c921e5275a549ad8202004eec)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_54a681e644d9541592a84f72ac05e74a)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_4a2e418bc5c85befbe37d06a3749e3ce)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_cf5a17542f0757e1be4d3fb70c1ff3c8)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_24524c421bfc5f8c90f85f0c757e38d2)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_fe620b3e49ed5c178ea0fdc3cc81a0a3)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_479d6b7c87c35fe6b48fcfa4b52bb1a6)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_e599bdd52fd356d4962f76ffbb5bd598)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_fb86036f4dde563693a7bb0e287d59b1)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_bbcf29bfeaf55b42bd62eea3d118b0ca)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_93461b19218a5428bde715cd399a1a58)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_f44627b2d2975233adff15688a90ba52)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_dfa38d48a7635ec69efe111749574dce)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_82a9632be2835749a6b2aefc22ac29be)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_afa6e81373145ab1ad204b49cae0c40b)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_e5574c4625b35046bd8631589ebaa144)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_b788092f52cc59e09a6236bc5e052a37)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_03252dcc1aa757d78305c2b3784f5561)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_0e6c5b259f795971b0930bccb4724087)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_22ee7743ac5a5779b9b753537cb5c680)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_80bda0861d7357aa91e0a97727a03e50)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_94cff90f7abb5d449d8f6933f930c0bb)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_a538339b6d4e567c94aacf459e05e074)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_bd00cb1671755623859c80ed6b2948c2)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_68990239c253531da01d28dd7de85456)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_a6f82fcad80c53278e7140f42033c7b5)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_5f1069dbdd825c1c9aeb695b5c84fa3b)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_0c828962a4ea548b8c21529829be889b)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_bd62053e04235eb2b697d63d024a5f68)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_052306bb3e4459e29588a513050e5815)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_135fa3f0cc525b86babc206c9f3f94b8)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_5d2b29d2df57509d88a8edbf09763224)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_c8bc73702dce512a9d6d22bb9016bb65)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_cec8301c921e5275a549ad8202004eec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_54a681e644d9541592a84f72ac05e74a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_4a2e418bc5c85befbe37d06a3749e3ce, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_cf5a17542f0757e1be4d3fb70c1ff3c8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_24524c421bfc5f8c90f85f0c757e38d2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_fe620b3e49ed5c178ea0fdc3cc81a0a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_479d6b7c87c35fe6b48fcfa4b52bb1a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_e599bdd52fd356d4962f76ffbb5bd598, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_fb86036f4dde563693a7bb0e287d59b1, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_bbcf29bfeaf55b42bd62eea3d118b0ca, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_93461b19218a5428bde715cd399a1a58, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_f44627b2d2975233adff15688a90ba52, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_dfa38d48a7635ec69efe111749574dce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_82a9632be2835749a6b2aefc22ac29be, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_afa6e81373145ab1ad204b49cae0c40b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_e5574c4625b35046bd8631589ebaa144, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_b788092f52cc59e09a6236bc5e052a37, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_03252dcc1aa757d78305c2b3784f5561, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_0e6c5b259f795971b0930bccb4724087, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_22ee7743ac5a5779b9b753537cb5c680, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_80bda0861d7357aa91e0a97727a03e50, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_94cff90f7abb5d449d8f6933f930c0bb, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_a538339b6d4e567c94aacf459e05e074, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_bd00cb1671755623859c80ed6b2948c2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_68990239c253531da01d28dd7de85456, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_a6f82fcad80c53278e7140f42033c7b5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_5f1069dbdd825c1c9aeb695b5c84fa3b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_0c828962a4ea548b8c21529829be889b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_bd62053e04235eb2b697d63d024a5f68, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_052306bb3e4459e29588a513050e5815, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_135fa3f0cc525b86babc206c9f3f94b8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_5d2b29d2df57509d88a8edbf09763224, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_c8bc73702dce512a9d6d22bb9016bb65, "");
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