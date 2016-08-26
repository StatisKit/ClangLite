#include "_clanglite.h"


namespace autowig
{
}


void wrapper_4b8444f6e9695ad99a1ccdbf56dc74ac()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ClassTemplateDecl  * (*method_pointer_3f66f2e73cb0577f9c97f29803403b3f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateDecl::CreateDeserialized;
    void  (::clang::ClassTemplateDecl::*method_pointer_eb8df262b1575a41b8421beb010a1955)() const = &::clang::ClassTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_e23cec874f1c535b8aab5a947c85b0b8)(class ::clang::Decl  const *) = ::clang::ClassTemplateDecl::classof;
    bool  (*method_pointer_2394bc65fb885de083e1e8d6ee16dfa1)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateDecl::classofKind;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplateDecl::*method_pointer_07b88dc82e105a6d9ac39e49955e0e1e)(class ::clang::ClassTemplatePartialSpecializationDecl  *) = &::clang::ClassTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplateDecl::*method_pointer_7634bad942a7588d9db500d931137608)(class ::clang::QualType ) = &::clang::ClassTemplateDecl::findPartialSpecialization;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_7f2be38db47d5a9482823f75be990bfd)() const = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_678bfae84eda504e82309744e3f45b9c)() = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::QualType  (::clang::ClassTemplateDecl::*method_pointer_126c4f99426751819f04a867baba9618)() = &::clang::ClassTemplateDecl::getInjectedClassNameSpecialization;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_31c3ee2b131e51aeb174238137d07b22)() const = &::clang::ClassTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_694dec5fa6415e619e9243916668bb77)() const = &::clang::ClassTemplateDecl::getMostRecentDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_4bd0acaf22cd5d4dbfb1d8efc46081c3)() = &::clang::ClassTemplateDecl::getMostRecentDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_4a4893b3004d51ea9560be3682fc3188)() = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_63803aa2e6f6519c82d8c6fa11784ae0)() const = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  * (::clang::ClassTemplateDecl::*method_pointer_141126312c3b581e9dcac4f9ffefa4ad)() const = &::clang::ClassTemplateDecl::getTemplatedDecl;
    bool  (::clang::ClassTemplateDecl::*method_pointer_ea1f0fc3570558aca2ae34f9a4f97205)() const = &::clang::ClassTemplateDecl::isThisDeclarationADefinition;
    struct function_group
    {
        static class ::boost::python::list  function_3df8b681e03a5ed19dc17a5f24d5cfd1(class ::clang::ClassTemplateDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ClassTemplateDecl, autowig::HeldType< class ::clang::ClassTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_4b8444f6e9695ad99a1ccdbf56dc74ac("ClassTemplateDecl", "", boost::python::no_init);
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("create_deserialized", method_pointer_3f66f2e73cb0577f9c97f29803403b3f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("load_lazy_specializations", method_pointer_eb8df262b1575a41b8421beb010a1955, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof", method_pointer_e23cec874f1c535b8aab5a947c85b0b8, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof_kind", method_pointer_2394bc65fb885de083e1e8d6ee16dfa1, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_spec_instantiated_from_member", method_pointer_07b88dc82e105a6d9ac39e49955e0e1e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_specialization", method_pointer_7634bad942a7588d9db500d931137608, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_7f2be38db47d5a9482823f75be990bfd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_678bfae84eda504e82309744e3f45b9c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_injected_class_name_specialization", method_pointer_126c4f99426751819f04a867baba9618, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_instantiated_from_member_template", method_pointer_31c3ee2b131e51aeb174238137d07b22, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_694dec5fa6415e619e9243916668bb77, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_4bd0acaf22cd5d4dbfb1d8efc46081c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_4a4893b3004d51ea9560be3682fc3188, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_63803aa2e6f6519c82d8c6fa11784ae0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_templated_decl", method_pointer_141126312c3b581e9dcac4f9ffefa4ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("is_this_declaration_a_definition", method_pointer_ea1f0fc3570558aca2ae34f9a4f97205, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof_kind");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("create_deserialized");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_children", function_group::function_3df8b681e03a5ed19dc17a5f24d5cfd1, "");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}