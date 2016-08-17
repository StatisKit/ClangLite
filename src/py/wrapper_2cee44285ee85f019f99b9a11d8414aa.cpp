#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_2cee44285ee85f019f99b9a11d8414aa()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_247dd0d12b635968b7a6155b2cca023d)(enum ::clang::Decl::Kind ) = ::clang::RedeclarableTemplateDecl::classofKind;
    class ::clang::RedeclarableTemplateDecl  * (::clang::RedeclarableTemplateDecl::*method_pointer_de65d94b3a1a5f2cbaa3d9bacfb3da7e)() = &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
    class ::clang::RedeclarableTemplateDecl  const * (::clang::RedeclarableTemplateDecl::*method_pointer_8656238c2b915311a8a0b0a73e9a3fa6)() const = &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
    bool  (*method_pointer_ca331fab5f2b5fe4bb4c39eec9c94379)(class ::clang::Decl  const *) = ::clang::RedeclarableTemplateDecl::classof;
    void  (::clang::RedeclarableTemplateDecl::*method_pointer_914f8f6dc3aa5808b042cc618cb810e1)(class ::clang::RedeclarableTemplateDecl  *) = &::clang::RedeclarableTemplateDecl::setInstantiatedFromMemberTemplate;
    bool  (::clang::RedeclarableTemplateDecl::*method_pointer_a4021bd114bd59a3acc0519ee41282e4)() const = &::clang::RedeclarableTemplateDecl::isMemberSpecialization;
    class ::clang::RedeclarableTemplateDecl  * (::clang::RedeclarableTemplateDecl::*method_pointer_cd1735dec7b15d8b8af2dfca42063c19)() const = &::clang::RedeclarableTemplateDecl::getInstantiatedFromMemberTemplate;
    void  (::clang::RedeclarableTemplateDecl::*method_pointer_4f96ecbef17f5d1599ecbe463c54e522)() = &::clang::RedeclarableTemplateDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::RedeclarableTemplateDecl, autowig::HeldType< class ::clang::RedeclarableTemplateDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_2cee44285ee85f019f99b9a11d8414aa("RedeclarableTemplateDecl", "", boost::python::no_init);
    class_2cee44285ee85f019f99b9a11d8414aa.def("classof_kind", method_pointer_247dd0d12b635968b7a6155b2cca023d, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_de65d94b3a1a5f2cbaa3d9bacfb3da7e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_8656238c2b915311a8a0b0a73e9a3fa6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("classof", method_pointer_ca331fab5f2b5fe4bb4c39eec9c94379, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_instantiated_from_member_template", method_pointer_914f8f6dc3aa5808b042cc618cb810e1, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("is_member_specialization", method_pointer_a4021bd114bd59a3acc0519ee41282e4, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_instantiated_from_member_template", method_pointer_cd1735dec7b15d8b8af2dfca42063c19, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_member_specialization", method_pointer_4f96ecbef17f5d1599ecbe463c54e522, "");
    class_2cee44285ee85f019f99b9a11d8414aa.staticmethod("classof_kind");
    class_2cee44285ee85f019f99b9a11d8414aa.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RedeclarableTemplateDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}