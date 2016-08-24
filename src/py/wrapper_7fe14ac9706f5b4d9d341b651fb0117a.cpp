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
    class ::clang::TagDecl  * (*method_pointer_b92d95db787d50afa10478804b07a68a)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_3351b2be271f567e8fd0298694fee904)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_edac0d7b7cd05a66b1bcff5519b1edb6)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_f34513abe6805d808e04b7e8f2c29977)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_74bd381b76e653c78897d99c4c0e9b6d)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_820866b6988d57d7a1bf5fb3dd10131c)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_eb1c486260a557158798cba3690e0a15)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_50529720be705f828fa3a3bef7109852)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_e63a3e76789b5f4f8f6ba1a7df554573)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_265b12bf285f57e686269c46c591e912)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_d8b81d59287d532e99222a22543ba3e6)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_02a9e21a103857068b888b8e00bd9dfd)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_8f79b94998c65335a80c2a622c2442d6)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_a3b6b8ce32f25dcebff3953eb78bd41f)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_0b9e08bccd545b0c9338c423a1d287fc)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_58e7152f71e853d3a78ff713d17e0a67)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_2383ecf5d69a59f785b1d41d56f536dd)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_a8220678f6d05204a279ea740d882cd8)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_5cbf58cf44b152a0a326541624ebd13d)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_33a14903b48f564fa0a2c202b4286010)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_bbf174e558da5e93b2842a1da845588f)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_d45b2bbe7cb55f899a4592a9e3ae47b5)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_353d0f0f803254dfbc055771896d5ab4)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_1bde76aeb2895f448c6f5c399ba5134e)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_1db9583b826f5a34baed778bb33b0ba6)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_da226f11d77f5cac8ce74a2334d8a315)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_f02c3c4fa65b59258b91d46be142a266)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_64aebd33ad4055a3a2445a0555607f4d)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_e8a31036680c52cd8fe0a9fe927fbd0d)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_880e1c4bfed757ebbe2b7632b680d98b)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_e721e54e136b5aefbf769cdf368d9cb6)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_0c341bc9d9385b13a0317f08b781b31a)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_5becee3764035be7af8d981462b812bf)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_b92d95db787d50afa10478804b07a68a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_3351b2be271f567e8fd0298694fee904, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_edac0d7b7cd05a66b1bcff5519b1edb6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_f34513abe6805d808e04b7e8f2c29977, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_74bd381b76e653c78897d99c4c0e9b6d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_820866b6988d57d7a1bf5fb3dd10131c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_eb1c486260a557158798cba3690e0a15, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_50529720be705f828fa3a3bef7109852, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_e63a3e76789b5f4f8f6ba1a7df554573, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_265b12bf285f57e686269c46c591e912, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_d8b81d59287d532e99222a22543ba3e6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_02a9e21a103857068b888b8e00bd9dfd, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_8f79b94998c65335a80c2a622c2442d6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_a3b6b8ce32f25dcebff3953eb78bd41f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_0b9e08bccd545b0c9338c423a1d287fc, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_58e7152f71e853d3a78ff713d17e0a67, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_2383ecf5d69a59f785b1d41d56f536dd, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_a8220678f6d05204a279ea740d882cd8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_5cbf58cf44b152a0a326541624ebd13d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_33a14903b48f564fa0a2c202b4286010, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_bbf174e558da5e93b2842a1da845588f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_d45b2bbe7cb55f899a4592a9e3ae47b5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_353d0f0f803254dfbc055771896d5ab4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_1bde76aeb2895f448c6f5c399ba5134e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_1db9583b826f5a34baed778bb33b0ba6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_da226f11d77f5cac8ce74a2334d8a315, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_f02c3c4fa65b59258b91d46be142a266, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_64aebd33ad4055a3a2445a0555607f4d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_e8a31036680c52cd8fe0a9fe927fbd0d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_880e1c4bfed757ebbe2b7632b680d98b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_e721e54e136b5aefbf769cdf368d9cb6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_0c341bc9d9385b13a0317f08b781b31a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_5becee3764035be7af8d981462b812bf, "");
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