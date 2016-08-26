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
    class ::clang::TagDecl  * (*method_pointer_6cb9eaa4e29556699fda02bd7e3376ca)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_3fab0d056eaf55489ac66f5150c9ff3a)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_36ade6a5e8085778b49d8570d4d5219a)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_e1932a4726075e9da88ebc376dd4d803)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_3d3e63a9653956bbbbb412fc49452bdc)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_3f7ba8f3b030550db3b8553338040dff)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_289eadc5d93c545a96fe105df5b747e6)() const = &::clang::TagDecl::getDefinition;
    unsigned int  (::clang::TagDecl::*method_pointer_7c72cf8ed8ea5bde9ad01421c938a465)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_26344fb4e0d5560491defedf892408f0)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_f44b9d049274584dbfb675503091abca)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_fe6319da0e0759199202ce1a33e67c3b)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_b74a61653788547099bbbcb7e11fce98)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_7b6bf2d51a365365a9b52785d4f740f8)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_e04afaf3acb5505fac69f7d67521c77f)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_2f13073080425fe692b03bf99071143e)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_b05e587654c95acf8b8cb8bb92efcde7)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_c5c8ecfc33e952248f85bb0be7a951d7)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_cb815df2013b52eea45bed2d11b1c716)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_6bc7e403cf3c59e78dc56d2543e6606a)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_58886e6087f3561a95fd6608f88b8c8a)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_d010adee1ab05e8da5bec39f6f863a0a)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_d4d8869bf0075b04839282a0c1f27053)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_9e419c7778255feb87fdaf66c69232d3)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_975a8b0a7f1d5596a8087827575dae4e)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_4ef3fbb411dc529ebf2953b9810f5fca)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_304c0ef44f915e36a09364290e9f5dc7)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_c1d93d69166a5fada20e95d36ccaaf33)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_3346b5c17d045aecba7042786fe67e85)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_6cb9eaa4e29556699fda02bd7e3376ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_3fab0d056eaf55489ac66f5150c9ff3a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_36ade6a5e8085778b49d8570d4d5219a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_e1932a4726075e9da88ebc376dd4d803, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_3d3e63a9653956bbbbb412fc49452bdc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_3f7ba8f3b030550db3b8553338040dff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_289eadc5d93c545a96fe105df5b747e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_7c72cf8ed8ea5bde9ad01421c938a465, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_26344fb4e0d5560491defedf892408f0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_f44b9d049274584dbfb675503091abca, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_fe6319da0e0759199202ce1a33e67c3b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_b74a61653788547099bbbcb7e11fce98, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_7b6bf2d51a365365a9b52785d4f740f8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_e04afaf3acb5505fac69f7d67521c77f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_2f13073080425fe692b03bf99071143e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_b05e587654c95acf8b8cb8bb92efcde7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_c5c8ecfc33e952248f85bb0be7a951d7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_cb815df2013b52eea45bed2d11b1c716, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_6bc7e403cf3c59e78dc56d2543e6606a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_58886e6087f3561a95fd6608f88b8c8a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_d010adee1ab05e8da5bec39f6f863a0a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_d4d8869bf0075b04839282a0c1f27053, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_9e419c7778255feb87fdaf66c69232d3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_975a8b0a7f1d5596a8087827575dae4e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_4ef3fbb411dc529ebf2953b9810f5fca, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_304c0ef44f915e36a09364290e9f5dc7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_c1d93d69166a5fada20e95d36ccaaf33, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_3346b5c17d045aecba7042786fe67e85, "");
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