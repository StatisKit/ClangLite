#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_f36600d29ca4530a95955d39f3729dd4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_c7b448ec0208514eae85010c8b965993)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
    class ::clang::ClassTemplateSpecializationDecl  * (*method_pointer_bd36ec13b1a159b8bfe14313cf813a69)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateSpecializationDecl::CreateDeserialized;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_d322827d1f635959a234b3ebe8c14197)(class ::clang::ClassTemplateDecl  *) = &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
    bool  (*method_pointer_dba0758e054a5a14b921a74cfd110913)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateSpecializationDecl::classofKind;
    class ::clang::ClassTemplateSpecializationDecl  * (::clang::ClassTemplateSpecializationDecl::*method_pointer_c55df217f40e5567b628457aa4377d90)() = &::clang::ClassTemplateSpecializationDecl::getMostRecentDecl;
    bool  (*method_pointer_7055c3ad0ba15e2fbe666088accc406a)(class ::clang::Decl  const *) = ::clang::ClassTemplateSpecializationDecl::classof;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateSpecializationDecl::*method_pointer_98da8edd434257a497819d8f30bdd497)() const = &::clang::ClassTemplateSpecializationDecl::getSpecializedTemplate;
    bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_c7327b3f347855eb897a399cb9e1b33e)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitSpecialization;
    boost::python::class_< class ::clang::ClassTemplateSpecializationDecl, autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl >, boost::python::bases< class ::clang::CXXRecordDecl >, boost::noncopyable > class_f36600d29ca4530a95955d39f3729dd4("ClassTemplateSpecializationDecl", "", boost::python::no_init);
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_instantiation_or_specialization", method_pointer_c7b448ec0208514eae85010c8b965993, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("create_deserialized", method_pointer_bd36ec13b1a159b8bfe14313cf813a69, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_d322827d1f635959a234b3ebe8c14197, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("classof_kind", method_pointer_dba0758e054a5a14b921a74cfd110913, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_most_recent_decl", method_pointer_c55df217f40e5567b628457aa4377d90, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("classof", method_pointer_7055c3ad0ba15e2fbe666088accc406a, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_specialized_template", method_pointer_98da8edd434257a497819d8f30bdd497, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_specialization", method_pointer_c7327b3f347855eb897a399cb9e1b33e, "");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("classof_kind");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("create_deserialized");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl >, autowig::HeldType< class ::clang::CXXRecordDecl > >();
    }

}