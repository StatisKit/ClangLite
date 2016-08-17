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
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplateDecl::*method_pointer_8abcdcbbbc745300bb896276bee2b857)(class ::clang::ClassTemplatePartialSpecializationDecl  *) = &::clang::ClassTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_5cb6f6f36f8952ddac655de4cbb78efd)() = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_b7755daa5b9158e3964a14cc8f41f4e5)() const = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_5404b3110fcb58298c42d03c46cafa17)() = &::clang::ClassTemplateDecl::getMostRecentDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_37bb23a5f58856dda5ba8d3ddee5076d)() = &::clang::ClassTemplateDecl::getCanonicalDecl;
    bool  (*method_pointer_1dbe2e3cdf5e5befb22ac1c6c77db54b)(class ::clang::Decl  const *) = ::clang::ClassTemplateDecl::classof;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_f441d10f23f65609a39f293379a54015)() const = &::clang::ClassTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_f09d4a6921ff514f8bdcc230b2c7fd72)() const = &::clang::ClassTemplateDecl::getMostRecentDecl;
    bool  (*method_pointer_176d672f4f2352cab873094537bd2447)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateDecl::classofKind;
    void  (::clang::ClassTemplateDecl::*method_pointer_76ec44c9e4f8500ab53095631e2b624f)() const = &::clang::ClassTemplateDecl::LoadLazySpecializations;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_f50fab50674b512f9b265cd97bf7cb4e)() const = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::ClassTemplateDecl  * (*method_pointer_94d9c7a24847510687d431b5d7a86b05)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateDecl::CreateDeserialized;
    bool  (::clang::ClassTemplateDecl::*method_pointer_244b5b11bf0859e19f85da3727825eb5)() const = &::clang::ClassTemplateDecl::isThisDeclarationADefinition;
    class ::clang::CXXRecordDecl  * (::clang::ClassTemplateDecl::*method_pointer_e65095b30d035c4faaff5b59b50d4d92)() const = &::clang::ClassTemplateDecl::getTemplatedDecl;
    boost::python::class_< class ::clang::ClassTemplateDecl, autowig::HeldType< class ::clang::ClassTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_4b8444f6e9695ad99a1ccdbf56dc74ac("ClassTemplateDecl", "", boost::python::no_init);
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_spec_instantiated_from_member", method_pointer_8abcdcbbbc745300bb896276bee2b857, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_5cb6f6f36f8952ddac655de4cbb78efd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_b7755daa5b9158e3964a14cc8f41f4e5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_5404b3110fcb58298c42d03c46cafa17, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_37bb23a5f58856dda5ba8d3ddee5076d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof", method_pointer_1dbe2e3cdf5e5befb22ac1c6c77db54b, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_instantiated_from_member_template", method_pointer_f441d10f23f65609a39f293379a54015, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_f09d4a6921ff514f8bdcc230b2c7fd72, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof_kind", method_pointer_176d672f4f2352cab873094537bd2447, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("load_lazy_specializations", method_pointer_76ec44c9e4f8500ab53095631e2b624f, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_f50fab50674b512f9b265cd97bf7cb4e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("create_deserialized", method_pointer_94d9c7a24847510687d431b5d7a86b05, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("is_this_declaration_a_definition", method_pointer_244b5b11bf0859e19f85da3727825eb5, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_templated_decl", method_pointer_e65095b30d035c4faaff5b59b50d4d92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof_kind");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("create_deserialized");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}