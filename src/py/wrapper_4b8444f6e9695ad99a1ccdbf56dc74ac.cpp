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
    class ::clang::CXXRecordDecl  * (::clang::ClassTemplateDecl::*method_pointer_3b05533515d250a893198aa6506cd2b0)() const = &::clang::ClassTemplateDecl::getTemplatedDecl;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_bdc8ce4e48cc597796f2c054581d588d)() const = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_4e7897776e5a5759b38eceb031c17923)() const = &::clang::ClassTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_0fd2f2e854435878903372498d55a76a)() const = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_c7001618c6bb52df83887bde0104d3aa)() const = &::clang::ClassTemplateDecl::getMostRecentDecl;
    bool  (*method_pointer_97337296ed4f591c9798b0086145190c)(class ::clang::Decl  const *) = ::clang::ClassTemplateDecl::classof;
    class ::clang::ClassTemplateDecl  * (*method_pointer_f61d150943445eb98485d0e2baf5bca8)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateDecl::CreateDeserialized;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_cf580b7e7f7357e5a50cd51d253d190f)() = &::clang::ClassTemplateDecl::getCanonicalDecl;
    void  (::clang::ClassTemplateDecl::*method_pointer_83fb917c2cea57938f4e017177dd900d)() const = &::clang::ClassTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_1e40d7406f2d5b03b13734ae462155c9)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateDecl::classofKind;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplateDecl::*method_pointer_3d7500eb3b825d40a0e7c4f45dd92525)(class ::clang::ClassTemplatePartialSpecializationDecl  *) = &::clang::ClassTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_84c55b4dff7e5c6ab0fcbd088019be0a)() = &::clang::ClassTemplateDecl::getMostRecentDecl;
    bool  (::clang::ClassTemplateDecl::*method_pointer_1e6a23d99c295618916a031708a4d315)() const = &::clang::ClassTemplateDecl::isThisDeclarationADefinition;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_5b730f3c2b215782a5a41f9ba3bb1bb3)() = &::clang::ClassTemplateDecl::getPreviousDecl;
    boost::python::class_< class ::clang::ClassTemplateDecl, autowig::HeldType< class ::clang::ClassTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_4b8444f6e9695ad99a1ccdbf56dc74ac("ClassTemplateDecl", "", boost::python::no_init);
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_templated_decl", method_pointer_3b05533515d250a893198aa6506cd2b0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_bdc8ce4e48cc597796f2c054581d588d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_instantiated_from_member_template", method_pointer_4e7897776e5a5759b38eceb031c17923, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_0fd2f2e854435878903372498d55a76a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_c7001618c6bb52df83887bde0104d3aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof", method_pointer_97337296ed4f591c9798b0086145190c, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("create_deserialized", method_pointer_f61d150943445eb98485d0e2baf5bca8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_cf580b7e7f7357e5a50cd51d253d190f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("load_lazy_specializations", method_pointer_83fb917c2cea57938f4e017177dd900d, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof_kind", method_pointer_1e40d7406f2d5b03b13734ae462155c9, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_spec_instantiated_from_member", method_pointer_3d7500eb3b825d40a0e7c4f45dd92525, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_84c55b4dff7e5c6ab0fcbd088019be0a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("is_this_declaration_a_definition", method_pointer_1e6a23d99c295618916a031708a4d315, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_5b730f3c2b215782a5a41f9ba3bb1bb3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof_kind");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("create_deserialized");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}