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
    class ::clang::TagDecl  * (*method_pointer_97e14e3a4f4e5dfcaf2a55e4c68e9bf6)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_64ae16d8e7a65e7383f69f4169d9bec4)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_bfc836d4e8ab526983b772b19f009a5c)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_38f9f145cdd8535a8f5da84b22f170e5)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_23afa31e0f4b59c0bf9c0a2cbd011d2b)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_5cdf125b957f514b82ec60369ea17b17)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_ef04bfad29bc5c389075534088276163)() const = &::clang::TagDecl::getDefinition;
    unsigned int  (::clang::TagDecl::*method_pointer_ab46674784715edaa5b216876eeb36f5)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_7c15b9a5d3f55b7b92d25daa20cf4bd3)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_043898821e12545d95b88a79cbb6054b)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_ac477a93e2af51068047effbc70e256e)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_70650ceff25a5c7eae526030f1339555)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_53c161d5a34758c0a21427bab8b06641)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_0f2bb6f8522a58ec8ee2500cc8a858b9)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_77a44d7bd86e5829802c962c2170040c)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_b1e60df0d037544fa52d1dc745dd6e9b)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_4160eb70667852fd86776f8e5432aa75)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_06264b19d9ee575ab3dfc2592cb52e0d)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_a59655fc119657b9892b011f1472788b)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_6357529025a2530280566aada537d1a0)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_ecfb03b8e67859f99ae3300b38a0c196)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_5a5832827fd6560694da6885f0be8d8c)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_4e0175698148579e9bfead2fb0b08656)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_81c458d6fffd5d51ae542a1aa0b9f23f)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_4f689c715ae252da8442532f0507d43c)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_3bcf779b839a5facb6ea11e3993767c9)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_c7c7991f8cb751779151f3beb2deb97a)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_ea2a89d897c0599c98231f77a465d3a3)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_97e14e3a4f4e5dfcaf2a55e4c68e9bf6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_64ae16d8e7a65e7383f69f4169d9bec4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_bfc836d4e8ab526983b772b19f009a5c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_38f9f145cdd8535a8f5da84b22f170e5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_23afa31e0f4b59c0bf9c0a2cbd011d2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_5cdf125b957f514b82ec60369ea17b17, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_ef04bfad29bc5c389075534088276163, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_ab46674784715edaa5b216876eeb36f5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_7c15b9a5d3f55b7b92d25daa20cf4bd3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_043898821e12545d95b88a79cbb6054b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_ac477a93e2af51068047effbc70e256e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_70650ceff25a5c7eae526030f1339555, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_53c161d5a34758c0a21427bab8b06641, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_0f2bb6f8522a58ec8ee2500cc8a858b9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_77a44d7bd86e5829802c962c2170040c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_b1e60df0d037544fa52d1dc745dd6e9b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_4160eb70667852fd86776f8e5432aa75, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_06264b19d9ee575ab3dfc2592cb52e0d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_a59655fc119657b9892b011f1472788b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_6357529025a2530280566aada537d1a0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_ecfb03b8e67859f99ae3300b38a0c196, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_5a5832827fd6560694da6885f0be8d8c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_4e0175698148579e9bfead2fb0b08656, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_81c458d6fffd5d51ae542a1aa0b9f23f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_4f689c715ae252da8442532f0507d43c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_3bcf779b839a5facb6ea11e3993767c9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_c7c7991f8cb751779151f3beb2deb97a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_ea2a89d897c0599c98231f77a465d3a3, "");
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