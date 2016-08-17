#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_4b8444f6e9695ad99a1ccdbf56dc74ac()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_5c335c19d4b0571d9c5f063a8b4e2d18)() const = &::clang::ClassTemplateDecl::getPreviousDecl;
    bool  (*method_pointer_2348d1eb340e55fdbf843f6f5227421d)(class ::clang::Decl  const *) = ::clang::ClassTemplateDecl::classof;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_a22b64f52afb5a37bd955a5de09df1b2)() const = &::clang::ClassTemplateDecl::getMostRecentDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_ed051e4bcc9d5723b00e8101f2e12224)() = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_324b2fe45f8958b79172568661154cc3)() const = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::ClassTemplateDecl::*method_pointer_0bfb77e5e0bf5c7da956ded5c528a5b8)() const = &::clang::ClassTemplateDecl::getTemplatedDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_db6c25d65c725c018ff44f948e60c3d1)() = &::clang::ClassTemplateDecl::getMostRecentDecl;
    bool  (*method_pointer_ed750dd016b85e47be1916159dc6e730)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateDecl::classofKind;
    void  (::clang::ClassTemplateDecl::*method_pointer_002e28350a5e51e189af3eed7ffbf3fb)() const = &::clang::ClassTemplateDecl::LoadLazySpecializations;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplateDecl::*method_pointer_6825c33684625401af8c2f40cdd4515c)(class ::clang::ClassTemplatePartialSpecializationDecl  *) = &::clang::ClassTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_31919bcbd2c35754afadf044bd722295)() = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::ClassTemplateDecl  * (*method_pointer_f483341a88115dda82f24e44cd9c1bee)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateDecl::CreateDeserialized;
    bool  (::clang::ClassTemplateDecl::*method_pointer_01c2f8181d2f58dea4be1dd00fdf4d50)() const = &::clang::ClassTemplateDecl::isThisDeclarationADefinition;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_7c659bf6260c5af5afcc04e88d979ddc)() const = &::clang::ClassTemplateDecl::getInstantiatedFromMemberTemplate;
    boost::python::class_< class ::clang::ClassTemplateDecl, autowig::HeldType< class ::clang::ClassTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_4b8444f6e9695ad99a1ccdbf56dc74ac("ClassTemplateDecl", "", boost::python::no_init);
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_5c335c19d4b0571d9c5f063a8b4e2d18, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof", method_pointer_2348d1eb340e55fdbf843f6f5227421d, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_a22b64f52afb5a37bd955a5de09df1b2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_ed051e4bcc9d5723b00e8101f2e12224, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_324b2fe45f8958b79172568661154cc3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_templated_decl", method_pointer_0bfb77e5e0bf5c7da956ded5c528a5b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_db6c25d65c725c018ff44f948e60c3d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof_kind", method_pointer_ed750dd016b85e47be1916159dc6e730, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("load_lazy_specializations", method_pointer_002e28350a5e51e189af3eed7ffbf3fb, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_spec_instantiated_from_member", method_pointer_6825c33684625401af8c2f40cdd4515c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_31919bcbd2c35754afadf044bd722295, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("create_deserialized", method_pointer_f483341a88115dda82f24e44cd9c1bee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("is_this_declaration_a_definition", method_pointer_01c2f8181d2f58dea4be1dd00fdf4d50, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_instantiated_from_member_template", method_pointer_7c659bf6260c5af5afcc04e88d979ddc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof_kind");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("create_deserialized");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}