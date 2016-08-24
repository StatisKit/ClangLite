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
    class ::clang::ClassTemplateDecl  * (*method_pointer_7da265c2bbab59d48c183d4f3776aa93)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateDecl::CreateDeserialized;
    void  (::clang::ClassTemplateDecl::*method_pointer_0c110bd1ea2a5ac4ae9268f7aecabc54)() const = &::clang::ClassTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_74fbee3735e35b68b55be22d45eb797d)(class ::clang::Decl  const *) = ::clang::ClassTemplateDecl::classof;
    bool  (*method_pointer_e45c3def39505514abbeb3f328b10cf8)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateDecl::classofKind;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplateDecl::*method_pointer_109f863e5fab54009283052c8570232a)(class ::clang::ClassTemplatePartialSpecializationDecl  *) = &::clang::ClassTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplateDecl::*method_pointer_1a10b5e27481541b9dd416f6f6599336)(class ::clang::QualType ) = &::clang::ClassTemplateDecl::findPartialSpecialization;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_6732e2a30c3e59b797ba673a35825132)() const = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_9410ea36b6aa510c8859b3273df89d6c)() = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::QualType  (::clang::ClassTemplateDecl::*method_pointer_7e0b37003d0c58d192107907b8e677a7)() = &::clang::ClassTemplateDecl::getInjectedClassNameSpecialization;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_6e10bdeb547050c08d754565885adce9)() const = &::clang::ClassTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_38edc6ee57915590a402096ce5e43ad9)() const = &::clang::ClassTemplateDecl::getMostRecentDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_d30825492f8e5096908dc27d64e9712a)() = &::clang::ClassTemplateDecl::getMostRecentDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_7059a213002c5363b24094129653149e)() = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_5501febf87215be38693ede37ee48000)() const = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  * (::clang::ClassTemplateDecl::*method_pointer_c41fc3fe18c754a2b7bb26420509d20a)() const = &::clang::ClassTemplateDecl::getTemplatedDecl;
    bool  (::clang::ClassTemplateDecl::*method_pointer_98aaff1bc4955247a38ed2d047a8a7b8)() const = &::clang::ClassTemplateDecl::isThisDeclarationADefinition;
    struct function_group
    {
        static class ::boost::python::list  function_bd5cb478060e58de8e41eba4a45fe22c(class ::clang::ClassTemplateDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ClassTemplateDecl, autowig::HeldType< class ::clang::ClassTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_4b8444f6e9695ad99a1ccdbf56dc74ac("ClassTemplateDecl", "", boost::python::no_init);
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("create_deserialized", method_pointer_7da265c2bbab59d48c183d4f3776aa93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("load_lazy_specializations", method_pointer_0c110bd1ea2a5ac4ae9268f7aecabc54, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof", method_pointer_74fbee3735e35b68b55be22d45eb797d, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof_kind", method_pointer_e45c3def39505514abbeb3f328b10cf8, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_spec_instantiated_from_member", method_pointer_109f863e5fab54009283052c8570232a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_specialization", method_pointer_1a10b5e27481541b9dd416f6f6599336, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_6732e2a30c3e59b797ba673a35825132, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_9410ea36b6aa510c8859b3273df89d6c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_injected_class_name_specialization", method_pointer_7e0b37003d0c58d192107907b8e677a7, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_instantiated_from_member_template", method_pointer_6e10bdeb547050c08d754565885adce9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_38edc6ee57915590a402096ce5e43ad9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_d30825492f8e5096908dc27d64e9712a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_7059a213002c5363b24094129653149e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_5501febf87215be38693ede37ee48000, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_templated_decl", method_pointer_c41fc3fe18c754a2b7bb26420509d20a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("is_this_declaration_a_definition", method_pointer_98aaff1bc4955247a38ed2d047a8a7b8, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof_kind");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("create_deserialized");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_children", function_group::function_bd5cb478060e58de8e41eba4a45fe22c, "");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}