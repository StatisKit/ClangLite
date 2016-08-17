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
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_e9ac2f51589950fda6db8558bb894192)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_1ab7a75f43d75d2f93a455cc64ada98b)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_de0d746728fc518ca9da1b5b7308588b)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_8c57471cdcc85a8091bae5a362bfaa40)() const = &::clang::TagDecl::isEnum;
    void  (::clang::TagDecl::*method_pointer_b37de0a0762c5b5187972157481272bf)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_d67e8e47b84a5bc8a2023d3e90e7bafd)(bool ) = &::clang::TagDecl::setFreeStanding;
    unsigned int  (::clang::TagDecl::*method_pointer_0f84c7c3f7015370ab5cab6bf050a8be)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    bool  (::clang::TagDecl::*method_pointer_a373bd9ea0a35852afd20713f16b7b50)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_78ea754461c95941a94d8e6018fb3633)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (*method_pointer_4202a3c5c8dd5aec9d676ff94cf3a0f4)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  * (*method_pointer_1ce4fbd8591e558badbb57fed1f25fc5)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_9d22a9ff13265ec6b7ed9097b1fcb896)() = &::clang::TagDecl::getCanonicalDecl;
    bool  (::clang::TagDecl::*method_pointer_b51752cc9d2152aaba50e7a2e2ff695c)() const = &::clang::TagDecl::isCompleteDefinition;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_28baf0bb36915d1fbdc5d4273d03a327)() const = &::clang::TagDecl::getCanonicalDecl;
    void  (::clang::TagDecl::*method_pointer_4e3b504b3f9252328ddc244241e52300)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_250600d6860051dab2c27743cdef50e2)() const = &::clang::TagDecl::isClass;
    void  (::clang::TagDecl::*method_pointer_b8211a4e4d8c5a3db26f882ac708d0c5)() = &::clang::TagDecl::startDefinition;
    bool  (::clang::TagDecl::*method_pointer_a8911cba5cec5e3396b4bef7f539e31c)() const = &::clang::TagDecl::isInterface;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_5e22e5e1796954f09d435babe306bf97)() const = &::clang::TagDecl::getDefinition;
    bool  (::clang::TagDecl::*method_pointer_6ec4ccdf11445e2791a26543ae6f7e71)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_949a2a62299450d69c19bc417c52cba3)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_d20c75a2763f59cbab9b3558b7dde847)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_d63d744e1d0c54a1aec1dc04392ea4c3)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_59c9b0901e345ae2acd189c58671f240)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_cebbe5570c865d5784da489927109532)() const = &::clang::TagDecl::isStruct;
    class ::clang::DeclContext  * (*method_pointer_c83be0a0e2315b45817bf603e5ba8296)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (::clang::TagDecl::*method_pointer_7f81f9f605b55be3b9d1809ead8d7259)() const = &::clang::TagDecl::isFreeStanding;
    bool  (*method_pointer_76c323a8955d542db7b8b0997becf6b8)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_e9ac2f51589950fda6db8558bb894192, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_1ab7a75f43d75d2f93a455cc64ada98b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_de0d746728fc518ca9da1b5b7308588b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_8c57471cdcc85a8091bae5a362bfaa40, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_b37de0a0762c5b5187972157481272bf, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_d67e8e47b84a5bc8a2023d3e90e7bafd, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_0f84c7c3f7015370ab5cab6bf050a8be, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_a373bd9ea0a35852afd20713f16b7b50, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_78ea754461c95941a94d8e6018fb3633, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_4202a3c5c8dd5aec9d676ff94cf3a0f4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_1ce4fbd8591e558badbb57fed1f25fc5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_9d22a9ff13265ec6b7ed9097b1fcb896, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_b51752cc9d2152aaba50e7a2e2ff695c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_28baf0bb36915d1fbdc5d4273d03a327, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_4e3b504b3f9252328ddc244241e52300, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_250600d6860051dab2c27743cdef50e2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_b8211a4e4d8c5a3db26f882ac708d0c5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_a8911cba5cec5e3396b4bef7f539e31c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_5e22e5e1796954f09d435babe306bf97, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_6ec4ccdf11445e2791a26543ae6f7e71, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_949a2a62299450d69c19bc417c52cba3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_d20c75a2763f59cbab9b3558b7dde847, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_d63d744e1d0c54a1aec1dc04392ea4c3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_59c9b0901e345ae2acd189c58671f240, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_cebbe5570c865d5784da489927109532, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_c83be0a0e2315b45817bf603e5ba8296, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_7f81f9f605b55be3b9d1809ead8d7259, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_76c323a8955d542db7b8b0997becf6b8, "");
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