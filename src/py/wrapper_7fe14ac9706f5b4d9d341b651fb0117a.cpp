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
    class ::clang::TagDecl  * (*method_pointer_adf3b395f1a253b5b95e719da067e6bd)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_855affac95d75f4faac95be4dec7bc6f)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_50386cc4755d58e0b580ab086c699249)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_bcd55cbcd8b25fd8a48b93094ebf34be)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_c4927f47f7b356b3b22e187029dd7aa0)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_2556aa94d7235cb596f9feaee0c225e3)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_2e460942ea4f5da1ae659f5085c3742e)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_9d63d828466e58fa8fb1d1a7449986d2)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_21299ff85b8753bb90dad1223736020b)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_45d7c8a9c7bd52fcac607f9e43ac9a4e)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_3b937902f8cd5fd4bd99363d31715c4d)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_15c6fbac60455576a24423bc582b6edc)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_5c803abdc81059978770b802523f4f28)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_41e1893ee4105e228269ca5bad34110c)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_841d227674845259ada61526779fb352)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_260a1e8363e75b10a2f2a49dfa4d61c8)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_9854ba855c1b54e890239c2c937cb385)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_b73c2a2ea8a75b1e84f497431db22bec)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_e34e7c91ab8a54a1a0773b384a2d0d39)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_22948ed92acf5f8a90ec1f6294e4e417)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_7d69c17254fe5def9bde8f557bd37901)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_dd49774ea7d052e4907e2e23bb183ba2)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_c699c469a9685c0c8d4a924f91591147)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_b4d6e37405325b9eaa1f22469b7c8edc)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_f11324dc223e5adc93f803b78d83da3a)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_b725bcb49d77570083a09763eafa2bab)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_ebde822a33005cb38a314bf2fd39a496)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_53068bb23ddb5f97b35ca4e4df711fd0)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_d3f5869f3e125907a13598065c2635e4)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_1ab691cb20cf5db7a7f9d8a1c720af46)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_2cf9cd2af15858d292d60f943f3ed031)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_3951ca99d6985dbf905ff0cebc0009b7)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_18693d525d3f5ca3ad1dcaf404e297b7)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_adf3b395f1a253b5b95e719da067e6bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_855affac95d75f4faac95be4dec7bc6f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_50386cc4755d58e0b580ab086c699249, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_bcd55cbcd8b25fd8a48b93094ebf34be, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_c4927f47f7b356b3b22e187029dd7aa0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_2556aa94d7235cb596f9feaee0c225e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_2e460942ea4f5da1ae659f5085c3742e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_9d63d828466e58fa8fb1d1a7449986d2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_21299ff85b8753bb90dad1223736020b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_45d7c8a9c7bd52fcac607f9e43ac9a4e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_3b937902f8cd5fd4bd99363d31715c4d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_15c6fbac60455576a24423bc582b6edc, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_5c803abdc81059978770b802523f4f28, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_41e1893ee4105e228269ca5bad34110c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_841d227674845259ada61526779fb352, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_260a1e8363e75b10a2f2a49dfa4d61c8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_9854ba855c1b54e890239c2c937cb385, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_b73c2a2ea8a75b1e84f497431db22bec, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_e34e7c91ab8a54a1a0773b384a2d0d39, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_22948ed92acf5f8a90ec1f6294e4e417, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_7d69c17254fe5def9bde8f557bd37901, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_dd49774ea7d052e4907e2e23bb183ba2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_c699c469a9685c0c8d4a924f91591147, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_b4d6e37405325b9eaa1f22469b7c8edc, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_f11324dc223e5adc93f803b78d83da3a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_b725bcb49d77570083a09763eafa2bab, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_ebde822a33005cb38a314bf2fd39a496, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_53068bb23ddb5f97b35ca4e4df711fd0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_d3f5869f3e125907a13598065c2635e4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_1ab691cb20cf5db7a7f9d8a1c720af46, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_2cf9cd2af15858d292d60f943f3ed031, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_3951ca99d6985dbf905ff0cebc0009b7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_18693d525d3f5ca3ad1dcaf404e297b7, "");
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