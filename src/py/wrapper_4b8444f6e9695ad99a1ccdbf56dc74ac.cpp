#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_4b8444f6e9695ad99a1ccdbf56dc74ac()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ClassTemplateDecl  * (*method_pointer_afa5fd29fac35a2aaa1d19b42df9863c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateDecl::CreateDeserialized;
    void  (::clang::ClassTemplateDecl::*method_pointer_0159aa8bde4051fb8d927f15c6cfec32)() const = &::clang::ClassTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_45d07deae8495318bb39a67469fbe5d3)(class ::clang::Decl  const *) = ::clang::ClassTemplateDecl::classof;
    bool  (*method_pointer_28833e4264b351bdaa2678cd977f2cbc)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateDecl::classofKind;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplateDecl::*method_pointer_7073559a025950048c9d14b4cfd2fdb8)(class ::clang::ClassTemplatePartialSpecializationDecl  *) = &::clang::ClassTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplateDecl::*method_pointer_d8453536fc3d5f5f9d7869f7966b50e8)(class ::clang::QualType ) = &::clang::ClassTemplateDecl::findPartialSpecialization;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_cf43864dac30573199c09475d253c3f0)() const = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_a8057647d222554b9e0757fb8c17abea)() = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::QualType  (::clang::ClassTemplateDecl::*method_pointer_7dcd627f3dc65d9e83d0948e1c5b1d32)() = &::clang::ClassTemplateDecl::getInjectedClassNameSpecialization;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_cbc541bb251958cdbfe722568fe80582)() const = &::clang::ClassTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_c3f912a0b31c5a15bd2ce1cc6392f699)() const = &::clang::ClassTemplateDecl::getMostRecentDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_7a0d9e72c6f952bb8fddfb1fd2022cb7)() = &::clang::ClassTemplateDecl::getMostRecentDecl;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_baf0d94fafab5d05bd312b7fd192387a)() const = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_fe5310d314ab5b8a8bbb1c6c21e0de02)() = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  * (::clang::ClassTemplateDecl::*method_pointer_0305881dc16f5ae9b860fa9a9b2af646)() const = &::clang::ClassTemplateDecl::getTemplatedDecl;
    bool  (::clang::ClassTemplateDecl::*method_pointer_030480d83653548583877dff36ebd56e)() const = &::clang::ClassTemplateDecl::isThisDeclarationADefinition;
    struct function_group
    {
        static class ::boost::python::list  function_fdd01a295004512dad4e92b328515626(class ::clang::ClassTemplateDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ClassTemplateDecl, autowig::HeldType< class ::clang::ClassTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_4b8444f6e9695ad99a1ccdbf56dc74ac("ClassTemplateDecl", "", boost::python::no_init);
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("create_deserialized", method_pointer_afa5fd29fac35a2aaa1d19b42df9863c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("load_lazy_specializations", method_pointer_0159aa8bde4051fb8d927f15c6cfec32, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof", method_pointer_45d07deae8495318bb39a67469fbe5d3, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof_kind", method_pointer_28833e4264b351bdaa2678cd977f2cbc, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_spec_instantiated_from_member", method_pointer_7073559a025950048c9d14b4cfd2fdb8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_specialization", method_pointer_d8453536fc3d5f5f9d7869f7966b50e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_cf43864dac30573199c09475d253c3f0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_a8057647d222554b9e0757fb8c17abea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_injected_class_name_specialization", method_pointer_7dcd627f3dc65d9e83d0948e1c5b1d32, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_instantiated_from_member_template", method_pointer_cbc541bb251958cdbfe722568fe80582, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_c3f912a0b31c5a15bd2ce1cc6392f699, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_7a0d9e72c6f952bb8fddfb1fd2022cb7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_baf0d94fafab5d05bd312b7fd192387a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_fe5310d314ab5b8a8bbb1c6c21e0de02, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_templated_decl", method_pointer_0305881dc16f5ae9b860fa9a9b2af646, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("is_this_declaration_a_definition", method_pointer_030480d83653548583877dff36ebd56e, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof_kind");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("create_deserialized");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_children", function_group::function_fdd01a295004512dad4e92b328515626, "");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}