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
    bool  (*method_pointer_5f97ae471d0b5e47928392e00107182d)(class ::clang::Decl  const *) = ::clang::RedeclarableTemplateDecl::classof;
    bool  (*method_pointer_25c7c57c7fc552a18fa3bba99ecc8e9d)(enum ::clang::Decl::Kind ) = ::clang::RedeclarableTemplateDecl::classofKind;
    class ::clang::RedeclarableTemplateDecl  const * (::clang::RedeclarableTemplateDecl::*method_pointer_fe71b68146855c7e82e459e01e083bd4)() const = &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
    class ::clang::RedeclarableTemplateDecl  * (::clang::RedeclarableTemplateDecl::*method_pointer_fa952b113b1856dba4a3bf7a0a86f963)() = &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
    class ::clang::RedeclarableTemplateDecl  * (::clang::RedeclarableTemplateDecl::*method_pointer_b52f830c648f5cdb8e875fd954352da0)() const = &::clang::RedeclarableTemplateDecl::getInstantiatedFromMemberTemplate;
    bool  (::clang::RedeclarableTemplateDecl::*method_pointer_9862ed9ebf09592ba7efa42330900636)() const = &::clang::RedeclarableTemplateDecl::isMemberSpecialization;
    void  (::clang::RedeclarableTemplateDecl::*method_pointer_664fa201de4a590da783076d4d70a196)(class ::clang::RedeclarableTemplateDecl  *) = &::clang::RedeclarableTemplateDecl::setInstantiatedFromMemberTemplate;
    void  (::clang::RedeclarableTemplateDecl::*method_pointer_772a663e25495693b1a3cb147bd94ae2)() = &::clang::RedeclarableTemplateDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::RedeclarableTemplateDecl, autowig::HeldType< class ::clang::RedeclarableTemplateDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_2cee44285ee85f019f99b9a11d8414aa("RedeclarableTemplateDecl", "", boost::python::no_init);
    class_2cee44285ee85f019f99b9a11d8414aa.def("classof", method_pointer_5f97ae471d0b5e47928392e00107182d, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("classof_kind", method_pointer_25c7c57c7fc552a18fa3bba99ecc8e9d, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_fe71b68146855c7e82e459e01e083bd4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_fa952b113b1856dba4a3bf7a0a86f963, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_instantiated_from_member_template", method_pointer_b52f830c648f5cdb8e875fd954352da0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("is_member_specialization", method_pointer_9862ed9ebf09592ba7efa42330900636, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_instantiated_from_member_template", method_pointer_664fa201de4a590da783076d4d70a196, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_member_specialization", method_pointer_772a663e25495693b1a3cb147bd94ae2, "");
    class_2cee44285ee85f019f99b9a11d8414aa.staticmethod("classof_kind");
    class_2cee44285ee85f019f99b9a11d8414aa.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RedeclarableTemplateDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}