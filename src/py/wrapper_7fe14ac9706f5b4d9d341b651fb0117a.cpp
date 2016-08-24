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
    class ::clang::TagDecl  * (*method_pointer_1f0c3056c2bf5041abb76b948363c9ec)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_1d0d65fb4ed2591193f977616587aceb)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_c7e618978a5050308461189ed8629bbc)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_25008c680af35fb38e640e4ac222ddc5)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_4cffcc5638fe52eea305b19540d0edc0)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_642acca86135559dbab0d54ff92d3cf0)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_92a535bc825658b4b3f132698c9b28e6)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_2ee7128be4cf537ba0643f207ce6eb00)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_a1329c6277915ed0a62a91456b66df64)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_1ef243231f8b5b7dba2adef9cbdc1f42)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_20bdecf093725951a920de10bf1da406)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_b930c92e19715bc6ba8c1dde79e38e5f)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_18b625a532c156dfa6dc53b2da705280)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_34847bc0951357be96bfa5b47c86224d)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_9c0345f86f5659daad4973b98f449a4a)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_d6f3c5aae47655d6a46791da011d37be)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_021d6d4efab4523286bb97a7ee1bd509)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_64754acc7350568b89f77f53927d256d)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_004552a598165db785e3e707299f4d59)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_949614cea31b5c27bbbe8a41ccab1ffd)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_4b08282e36e353d29253dfcf44032e50)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_b55d64a66bfa5eef8ce0cc3fe53f27c7)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_83d85b1880365fb0b0f52820b6e11fe4)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_6f526c1d53e657bcb9227ca347b33ec0)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_1e6f5ce4a6b15591870eee8b63d74a1c)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_6bd32c5324b557ea99d80d49c7ef27c2)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_2eb1cde6f71e59de91149bdcc0573ed0)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_d065dd3a7f68577089c9a7d40863123a)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_0268c76d5d735466a0f1e63b98b49c3e)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_6dfe63838130594d9046b1f73b5b08e1)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_7d173f7b7d6450d7afb22e81fbff26f1)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_2b759a4f06305d158ec8e1ee6a0254e3)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_dc292b7b2f675f7690909482b6c10017)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_1f0c3056c2bf5041abb76b948363c9ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_1d0d65fb4ed2591193f977616587aceb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_c7e618978a5050308461189ed8629bbc, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_25008c680af35fb38e640e4ac222ddc5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_4cffcc5638fe52eea305b19540d0edc0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_642acca86135559dbab0d54ff92d3cf0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_92a535bc825658b4b3f132698c9b28e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_2ee7128be4cf537ba0643f207ce6eb00, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_a1329c6277915ed0a62a91456b66df64, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_1ef243231f8b5b7dba2adef9cbdc1f42, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_20bdecf093725951a920de10bf1da406, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_b930c92e19715bc6ba8c1dde79e38e5f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_18b625a532c156dfa6dc53b2da705280, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_34847bc0951357be96bfa5b47c86224d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_9c0345f86f5659daad4973b98f449a4a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_d6f3c5aae47655d6a46791da011d37be, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_021d6d4efab4523286bb97a7ee1bd509, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_64754acc7350568b89f77f53927d256d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_004552a598165db785e3e707299f4d59, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_949614cea31b5c27bbbe8a41ccab1ffd, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_4b08282e36e353d29253dfcf44032e50, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_b55d64a66bfa5eef8ce0cc3fe53f27c7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_83d85b1880365fb0b0f52820b6e11fe4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_6f526c1d53e657bcb9227ca347b33ec0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_1e6f5ce4a6b15591870eee8b63d74a1c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_6bd32c5324b557ea99d80d49c7ef27c2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_2eb1cde6f71e59de91149bdcc0573ed0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_d065dd3a7f68577089c9a7d40863123a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_0268c76d5d735466a0f1e63b98b49c3e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_6dfe63838130594d9046b1f73b5b08e1, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_7d173f7b7d6450d7afb22e81fbff26f1, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_2b759a4f06305d158ec8e1ee6a0254e3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_dc292b7b2f675f7690909482b6c10017, "");
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