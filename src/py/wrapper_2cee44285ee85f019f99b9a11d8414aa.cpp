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
    bool  (::clang::RedeclarableTemplateDecl::*method_pointer_9c4928d36f8e57f790c94213f947d380)() const = &::clang::RedeclarableTemplateDecl::isMemberSpecialization;
    void  (::clang::RedeclarableTemplateDecl::*method_pointer_9db0b210b76b5495b55f835f8356468d)(class ::clang::RedeclarableTemplateDecl  *) = &::clang::RedeclarableTemplateDecl::setInstantiatedFromMemberTemplate;
    class ::clang::RedeclarableTemplateDecl  * (::clang::RedeclarableTemplateDecl::*method_pointer_cda574df972e5488b6126218eff8c7f9)() = &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
    void  (::clang::RedeclarableTemplateDecl::*method_pointer_ffca38a58f4d5d6891e2843e0f13fe2c)() = &::clang::RedeclarableTemplateDecl::setMemberSpecialization;
    bool  (*method_pointer_1c40a5609f025103a5629c05ebb912e0)(class ::clang::Decl  const *) = ::clang::RedeclarableTemplateDecl::classof;
    class ::clang::RedeclarableTemplateDecl  const * (::clang::RedeclarableTemplateDecl::*method_pointer_7896a1f21b2b53b9a8fe7d8f8a25ef30)() const = &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
    class ::clang::RedeclarableTemplateDecl  * (::clang::RedeclarableTemplateDecl::*method_pointer_40a9bbfacebf5331a2af3af387e5f738)() const = &::clang::RedeclarableTemplateDecl::getInstantiatedFromMemberTemplate;
    bool  (*method_pointer_27d62ba319fd513583ee11ab4d8f6d5f)(enum ::clang::Decl::Kind ) = ::clang::RedeclarableTemplateDecl::classofKind;
    boost::python::class_< class ::clang::RedeclarableTemplateDecl, autowig::HeldType< class ::clang::RedeclarableTemplateDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_2cee44285ee85f019f99b9a11d8414aa("RedeclarableTemplateDecl", "", boost::python::no_init);
    class_2cee44285ee85f019f99b9a11d8414aa.def("is_member_specialization", method_pointer_9c4928d36f8e57f790c94213f947d380, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_instantiated_from_member_template", method_pointer_9db0b210b76b5495b55f835f8356468d, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_cda574df972e5488b6126218eff8c7f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_member_specialization", method_pointer_ffca38a58f4d5d6891e2843e0f13fe2c, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("classof", method_pointer_1c40a5609f025103a5629c05ebb912e0, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_7896a1f21b2b53b9a8fe7d8f8a25ef30, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_instantiated_from_member_template", method_pointer_40a9bbfacebf5331a2af3af387e5f738, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("classof_kind", method_pointer_27d62ba319fd513583ee11ab4d8f6d5f, "");
    class_2cee44285ee85f019f99b9a11d8414aa.staticmethod("classof_kind");
    class_2cee44285ee85f019f99b9a11d8414aa.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RedeclarableTemplateDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}