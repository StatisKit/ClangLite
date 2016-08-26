#include "_clanglite.h"


namespace autowig
{
}


void wrapper_7fe14ac9706f5b4d9d341b651fb0117a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TagDecl  * (*method_pointer_38e1b4b7a36b510c94a978461f46f9e6)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_57c54bbce0205b67b703759a37575c2b)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_3e1f2435df1d542b954f0a6941865656)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_3ed671bb473f53a88a66acea6dbf202e)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_a2e9f6b4f2bd59a59caf0396625b845f)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_56f7125e69c45e2d8ada9eee31cc81ec)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_1e9344c69de35615911f288544a59105)() const = &::clang::TagDecl::getDefinition;
    unsigned int  (::clang::TagDecl::*method_pointer_ce3dad278e7c5282a1420f730bb8488a)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_7ae2f4aa10445fb5a370e2294384cf4c)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_d038584aef3c5822ba1117cbdbbaf099)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_76807d56cd885bc193c076366c8f03e4)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_8909bcc232f851898534731bfb09648b)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_77523f9c920e587aa93d86ccb1761995)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_49298d6565b859ef8b305deeefe30f58)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_f2e720eed63d57f38668d32731363966)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_94c289a83c8352798a229508fc1e6e9c)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_2fd113df267b551dbf9b8ffbde5fe561)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_9343cf8cd781502fb8fb63cb0c5332a5)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_f77f7a5f9bfe594c877ae0aa366985dc)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_a1ac3c219b665150950149bdbc5681f9)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_6d817e1bf0bc552a980ac015f863d6c2)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_0d4ec9c0025e523f81c507453ed41463)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_da1bf3a0118c5dcca4328c53768e3b74)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_3470faa1bccc51198ce3410ed4e8c012)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_ed6fcd8999ef5f989619a56d35c44297)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_1ae61a3421c15abe8199de374e675eb3)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_b7d73cc55f1956e28128c5a2e6c7d0eb)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_e741b95202c25ddcbc0667d27caec568)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_38e1b4b7a36b510c94a978461f46f9e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_57c54bbce0205b67b703759a37575c2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_3e1f2435df1d542b954f0a6941865656, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_3ed671bb473f53a88a66acea6dbf202e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_a2e9f6b4f2bd59a59caf0396625b845f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_56f7125e69c45e2d8ada9eee31cc81ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_1e9344c69de35615911f288544a59105, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_ce3dad278e7c5282a1420f730bb8488a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_7ae2f4aa10445fb5a370e2294384cf4c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_d038584aef3c5822ba1117cbdbbaf099, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_76807d56cd885bc193c076366c8f03e4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_8909bcc232f851898534731bfb09648b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_77523f9c920e587aa93d86ccb1761995, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_49298d6565b859ef8b305deeefe30f58, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_f2e720eed63d57f38668d32731363966, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_94c289a83c8352798a229508fc1e6e9c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_2fd113df267b551dbf9b8ffbde5fe561, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_9343cf8cd781502fb8fb63cb0c5332a5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_f77f7a5f9bfe594c877ae0aa366985dc, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_a1ac3c219b665150950149bdbc5681f9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_6d817e1bf0bc552a980ac015f863d6c2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_0d4ec9c0025e523f81c507453ed41463, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_da1bf3a0118c5dcca4328c53768e3b74, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_3470faa1bccc51198ce3410ed4e8c012, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_ed6fcd8999ef5f989619a56d35c44297, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_1ae61a3421c15abe8199de374e675eb3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_b7d73cc55f1956e28128c5a2e6c7d0eb, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_e741b95202c25ddcbc0667d27caec568, "");
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