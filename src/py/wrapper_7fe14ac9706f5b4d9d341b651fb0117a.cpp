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
    class ::clang::TagDecl  * (*method_pointer_d466b12d58c45c479a42555bd475bbe0)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_5a854f33199d59eca4e67b303d1277f2)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_5a8300a1f7855df2aaf15f7c916ea8ef)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_0d6605dca1b5587b99e6a3bc59f3ef1c)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_262cc32523605e1b8b4b85d32b226aeb)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_1abef9b4c9e055c2928f833dac9a1564)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_38d3cff197f750419e1e547986a527bf)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_098e1c14ebd75620826fd1f4be23fbb6)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_120f940a12895ebabd1b20aa61d40a17)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_957b4b156bcd58bd9d1ef74fd3841cc8)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_e72d4ea337ac5868955e64fe97d5297d)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_cfb4eda63cf15190b4af56566efc5e7e)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_fe06342ab1865d3c8a3c44650a3830ba)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_5e8c4bb9c8ed50acb2c3190d7146525f)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_f384362e21f058178dc20e0944478994)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_7b1ccf1d9dae555c9a420d49275d1016)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_7d38268f1a6f543e9650867589195809)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_0442e4e5efc155a1b0d80228b22ec573)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_656cc42ee19658b4a82ebd6025b8128d)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_d24c6fbfdc0a55b68cc1537588b3ae0a)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_e54685b66ca05d7e99d89f4967f353b4)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_0813ccb9157c53b3b049005d834f2c55)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_4dda38ca67815854aebea9d657759bc1)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_c9681676362e521793fe2fa270a1a515)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_e97d84c0e70756239e5ad92523bfe50a)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_a239998b6d1d54b2b353108a11ab6425)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_e84b5b0fa9b75f75b6659245b377ff05)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_840faa9f543e5b1d87a1a7545d2e191d)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_35e2cd2a2eba5c0da61e9fe35f6f86a9)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_3c6d75ffdde85f9c87bcf12c7a5e05b5)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_18e6b378882b5ab3bc3594c64994fbc0)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_727fca57d7ce57f59d2e45fbe2c8cd07)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_3d426f45a60d5673a76f314eeb41f6d6)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_d466b12d58c45c479a42555bd475bbe0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_5a854f33199d59eca4e67b303d1277f2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_5a8300a1f7855df2aaf15f7c916ea8ef, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_0d6605dca1b5587b99e6a3bc59f3ef1c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_262cc32523605e1b8b4b85d32b226aeb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_1abef9b4c9e055c2928f833dac9a1564, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_38d3cff197f750419e1e547986a527bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_098e1c14ebd75620826fd1f4be23fbb6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_120f940a12895ebabd1b20aa61d40a17, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_957b4b156bcd58bd9d1ef74fd3841cc8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_e72d4ea337ac5868955e64fe97d5297d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_cfb4eda63cf15190b4af56566efc5e7e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_fe06342ab1865d3c8a3c44650a3830ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_5e8c4bb9c8ed50acb2c3190d7146525f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_f384362e21f058178dc20e0944478994, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_7b1ccf1d9dae555c9a420d49275d1016, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_7d38268f1a6f543e9650867589195809, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_0442e4e5efc155a1b0d80228b22ec573, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_656cc42ee19658b4a82ebd6025b8128d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_d24c6fbfdc0a55b68cc1537588b3ae0a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_e54685b66ca05d7e99d89f4967f353b4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_0813ccb9157c53b3b049005d834f2c55, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_4dda38ca67815854aebea9d657759bc1, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_c9681676362e521793fe2fa270a1a515, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_e97d84c0e70756239e5ad92523bfe50a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_a239998b6d1d54b2b353108a11ab6425, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_e84b5b0fa9b75f75b6659245b377ff05, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_840faa9f543e5b1d87a1a7545d2e191d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_35e2cd2a2eba5c0da61e9fe35f6f86a9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_3c6d75ffdde85f9c87bcf12c7a5e05b5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_18e6b378882b5ab3bc3594c64994fbc0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_727fca57d7ce57f59d2e45fbe2c8cd07, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_3d426f45a60d5673a76f314eeb41f6d6, "");
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