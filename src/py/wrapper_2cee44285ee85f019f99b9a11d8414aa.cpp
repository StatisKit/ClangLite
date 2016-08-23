#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_2cee44285ee85f019f99b9a11d8414aa()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_707a167d1bc75285af739c20741ec2b2)(class ::clang::Decl  const *) = ::clang::RedeclarableTemplateDecl::classof;
    bool  (*method_pointer_97b788b6c1b35405ad9191cf77d0f82f)(enum ::clang::Decl::Kind ) = ::clang::RedeclarableTemplateDecl::classofKind;
    class ::clang::RedeclarableTemplateDecl  const * (::clang::RedeclarableTemplateDecl::*method_pointer_d7b90ff6282c54359d41afe4e06453f4)() const = &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
    class ::clang::RedeclarableTemplateDecl  * (::clang::RedeclarableTemplateDecl::*method_pointer_d59a7ff0f0715eeaae93f7c0ddd16aa2)() = &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
    class ::clang::RedeclarableTemplateDecl  * (::clang::RedeclarableTemplateDecl::*method_pointer_28c060882e9759bf866329496c20d53a)() const = &::clang::RedeclarableTemplateDecl::getInstantiatedFromMemberTemplate;
    bool  (::clang::RedeclarableTemplateDecl::*method_pointer_f42d8792834f56b98167e66fa5d8abc0)() const = &::clang::RedeclarableTemplateDecl::isMemberSpecialization;
    void  (::clang::RedeclarableTemplateDecl::*method_pointer_f7cf6bca34cd53b182ac3a1027843133)(class ::clang::RedeclarableTemplateDecl  *) = &::clang::RedeclarableTemplateDecl::setInstantiatedFromMemberTemplate;
    void  (::clang::RedeclarableTemplateDecl::*method_pointer_88ec7d1beb355a6d928bb2034d2e35d0)() = &::clang::RedeclarableTemplateDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::RedeclarableTemplateDecl, autowig::HeldType< class ::clang::RedeclarableTemplateDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_2cee44285ee85f019f99b9a11d8414aa("RedeclarableTemplateDecl", "", boost::python::no_init);
    class_2cee44285ee85f019f99b9a11d8414aa.def("classof", method_pointer_707a167d1bc75285af739c20741ec2b2, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("classof_kind", method_pointer_97b788b6c1b35405ad9191cf77d0f82f, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_d7b90ff6282c54359d41afe4e06453f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_d59a7ff0f0715eeaae93f7c0ddd16aa2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_instantiated_from_member_template", method_pointer_28c060882e9759bf866329496c20d53a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("is_member_specialization", method_pointer_f42d8792834f56b98167e66fa5d8abc0, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_instantiated_from_member_template", method_pointer_f7cf6bca34cd53b182ac3a1027843133, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_member_specialization", method_pointer_88ec7d1beb355a6d928bb2034d2e35d0, "");
    class_2cee44285ee85f019f99b9a11d8414aa.staticmethod("classof_kind");
    class_2cee44285ee85f019f99b9a11d8414aa.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RedeclarableTemplateDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}