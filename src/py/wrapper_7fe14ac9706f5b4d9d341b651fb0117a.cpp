#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_7fe14ac9706f5b4d9d341b651fb0117a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::TagDecl::*method_pointer_025afa0c36ea59828265d5271f0bd7f9)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_2312b7a7608a59d2a59329e329e54122)() const = &::clang::TagDecl::getDefinition;
    bool  (*method_pointer_9967d82188c95f11998fac3b4588422a)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    bool  (::clang::TagDecl::*method_pointer_28e38b0954125f268952b94f5e3a3a68)() const = &::clang::TagDecl::isFreeStanding;
    bool  (*method_pointer_2a349592525e506bafe3d25cd32dc024)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    class ::clang::DeclContext  * (*method_pointer_72c7d5883ac55cd88d9c9dc975c58371)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    void  (::clang::TagDecl::*method_pointer_3f39fb5dec6f57c3b2c571a26e1d76aa)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_34583a4628d553329f3bd32e93f1b7e6)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_9a66e732856c5216b896aea2e6ecc92a)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_054df328fddc582cac10db041ff567ad)() const = &::clang::TagDecl::isInterface;
    void  (::clang::TagDecl::*method_pointer_c86ecbfe05905be4ae398ac34bc25eca)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_783520ccdbab5c0da3eb10a055131c7c)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_a314e040c2545de3a2610ce873dfeef2)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_360a98f034315a089678da748417e86f)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_c9502905790154208329e2676b4da005)() const = &::clang::TagDecl::hasNameForLinkage;
    void  (::clang::TagDecl::*method_pointer_c64400c07c4050729d41216265ade1e9)() = &::clang::TagDecl::startDefinition;
    void  (::clang::TagDecl::*method_pointer_3b55cbc7a5ae5aafb9dc6a95486161df)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    unsigned int  (::clang::TagDecl::*method_pointer_ee781ce05b3757e38d2c6affb400ed30)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_b4c902dd20e552c08c5ed3e57aaf856c)() const = &::clang::TagDecl::getCanonicalDecl;
    bool  (::clang::TagDecl::*method_pointer_aa51f9be3fd257f8bac1f9f198ee89ef)() const = &::clang::TagDecl::isDependentType;
    void  (::clang::TagDecl::*method_pointer_196ac5abfc3c58eebe6a9ea83123bbed)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_df3d18acdfa55f92872bbd3739dc15a6)() const = &::clang::TagDecl::isUnion;
    bool  (::clang::TagDecl::*method_pointer_56fb28a0425e54fb911afaf086d7c631)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_2e02610e9a0c5165a146f74cc5cdc077)() = &::clang::TagDecl::getCanonicalDecl;
    bool  (::clang::TagDecl::*method_pointer_86e7723d65c95e07b092ce100636f67d)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_212a61ab0cf7560494d40401a4255a23)() const = &::clang::TagDecl::isCompleteDefinition;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_db8794e3ac8c58bca436996a885f6bd9)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    class ::clang::TagDecl  * (*method_pointer_90f48e95f7bb5cca929f0129f509990f)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_025afa0c36ea59828265d5271f0bd7f9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_2312b7a7608a59d2a59329e329e54122, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_9967d82188c95f11998fac3b4588422a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_28e38b0954125f268952b94f5e3a3a68, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_2a349592525e506bafe3d25cd32dc024, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_72c7d5883ac55cd88d9c9dc975c58371, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_3f39fb5dec6f57c3b2c571a26e1d76aa, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_34583a4628d553329f3bd32e93f1b7e6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_9a66e732856c5216b896aea2e6ecc92a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_054df328fddc582cac10db041ff567ad, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_c86ecbfe05905be4ae398ac34bc25eca, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_783520ccdbab5c0da3eb10a055131c7c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_a314e040c2545de3a2610ce873dfeef2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_360a98f034315a089678da748417e86f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_c9502905790154208329e2676b4da005, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_c64400c07c4050729d41216265ade1e9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_3b55cbc7a5ae5aafb9dc6a95486161df, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_ee781ce05b3757e38d2c6affb400ed30, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_b4c902dd20e552c08c5ed3e57aaf856c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_aa51f9be3fd257f8bac1f9f198ee89ef, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_196ac5abfc3c58eebe6a9ea83123bbed, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_df3d18acdfa55f92872bbd3739dc15a6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_56fb28a0425e54fb911afaf086d7c631, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_2e02610e9a0c5165a146f74cc5cdc077, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_86e7723d65c95e07b092ce100636f67d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_212a61ab0cf7560494d40401a4255a23, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_db8794e3ac8c58bca436996a885f6bd9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_90f48e95f7bb5cca929f0129f509990f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
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