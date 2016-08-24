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
    class ::clang::ClassTemplateDecl  * (*method_pointer_611287a3814353a1a8dba81e3ed4442a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateDecl::CreateDeserialized;
    void  (::clang::ClassTemplateDecl::*method_pointer_36c81a78e0cf5ed48665422ac0be3159)() const = &::clang::ClassTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_1faf8a402e895cc0baa391111ab3c727)(class ::clang::Decl  const *) = ::clang::ClassTemplateDecl::classof;
    bool  (*method_pointer_c516a40b97e45bdb82b1d59e6ed25ac5)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateDecl::classofKind;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplateDecl::*method_pointer_cd5f792af34853d685f8ad0aa6af5dda)(class ::clang::ClassTemplatePartialSpecializationDecl  *) = &::clang::ClassTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplateDecl::*method_pointer_22f48085e9de5c5186f9571c9dd1b298)(class ::clang::QualType ) = &::clang::ClassTemplateDecl::findPartialSpecialization;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_6ff920c3be1259c8800e5e85757449a7)() = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_769c01e6f60c55a2b998af88004b6ce3)() const = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::QualType  (::clang::ClassTemplateDecl::*method_pointer_a6faf607354f5fbc8a02df61c5e395be)() = &::clang::ClassTemplateDecl::getInjectedClassNameSpecialization;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_36a00a961aee55f1b78eca1e09e771ed)() const = &::clang::ClassTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_49ad643c3f4e560a8fea4d9dbf113020)() const = &::clang::ClassTemplateDecl::getMostRecentDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_ee965f2bc7e65916b5a06eb85a79157c)() = &::clang::ClassTemplateDecl::getMostRecentDecl;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_7cfa883b1df95c04bd7d520c6d7bb766)() const = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_5a6241b69df657dd910981db75d8b4dc)() = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  * (::clang::ClassTemplateDecl::*method_pointer_bda24bc0cef150849273435256004f7b)() const = &::clang::ClassTemplateDecl::getTemplatedDecl;
    bool  (::clang::ClassTemplateDecl::*method_pointer_792cced0133b593abf32c9ebcd062494)() const = &::clang::ClassTemplateDecl::isThisDeclarationADefinition;
    struct function_group
    {
        static class ::boost::python::list  function_0231bfa7eaca58608e8e913cecb2bd3b(class ::clang::ClassTemplateDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ClassTemplateDecl, autowig::HeldType< class ::clang::ClassTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_4b8444f6e9695ad99a1ccdbf56dc74ac("ClassTemplateDecl", "", boost::python::no_init);
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("create_deserialized", method_pointer_611287a3814353a1a8dba81e3ed4442a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("load_lazy_specializations", method_pointer_36c81a78e0cf5ed48665422ac0be3159, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof", method_pointer_1faf8a402e895cc0baa391111ab3c727, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof_kind", method_pointer_c516a40b97e45bdb82b1d59e6ed25ac5, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_spec_instantiated_from_member", method_pointer_cd5f792af34853d685f8ad0aa6af5dda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_specialization", method_pointer_22f48085e9de5c5186f9571c9dd1b298, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_6ff920c3be1259c8800e5e85757449a7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_769c01e6f60c55a2b998af88004b6ce3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_injected_class_name_specialization", method_pointer_a6faf607354f5fbc8a02df61c5e395be, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_instantiated_from_member_template", method_pointer_36a00a961aee55f1b78eca1e09e771ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_49ad643c3f4e560a8fea4d9dbf113020, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_ee965f2bc7e65916b5a06eb85a79157c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_7cfa883b1df95c04bd7d520c6d7bb766, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_5a6241b69df657dd910981db75d8b4dc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_templated_decl", method_pointer_bda24bc0cef150849273435256004f7b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("is_this_declaration_a_definition", method_pointer_792cced0133b593abf32c9ebcd062494, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof_kind");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("create_deserialized");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_children", function_group::function_0231bfa7eaca58608e8e913cecb2bd3b, "");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}