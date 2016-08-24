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
    bool  (*method_pointer_f39f27b2b29353bd90fd46a71a341b54)(class ::clang::Decl  const *) = ::clang::RedeclarableTemplateDecl::classof;
    bool  (*method_pointer_b958d12a98bc5284beee7f8b8cde33d3)(enum ::clang::Decl::Kind ) = ::clang::RedeclarableTemplateDecl::classofKind;
    class ::clang::RedeclarableTemplateDecl  const * (::clang::RedeclarableTemplateDecl::*method_pointer_cab907aa6f535e749aaccbcd65568d06)() const = &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
    class ::clang::RedeclarableTemplateDecl  * (::clang::RedeclarableTemplateDecl::*method_pointer_3f40937a9575536ca268cb2a9e9a429f)() = &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
    class ::clang::RedeclarableTemplateDecl  * (::clang::RedeclarableTemplateDecl::*method_pointer_ebfa2970e62a5bc8b402707aef27b995)() const = &::clang::RedeclarableTemplateDecl::getInstantiatedFromMemberTemplate;
    bool  (::clang::RedeclarableTemplateDecl::*method_pointer_cc86483c4c9253ff8952fd5a79b8bb68)() const = &::clang::RedeclarableTemplateDecl::isMemberSpecialization;
    void  (::clang::RedeclarableTemplateDecl::*method_pointer_650b91293d215beab272369349817ae3)(class ::clang::RedeclarableTemplateDecl  *) = &::clang::RedeclarableTemplateDecl::setInstantiatedFromMemberTemplate;
    void  (::clang::RedeclarableTemplateDecl::*method_pointer_251cfced9f445d4492ccfddbd5e6b45e)() = &::clang::RedeclarableTemplateDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::RedeclarableTemplateDecl, autowig::HeldType< class ::clang::RedeclarableTemplateDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_2cee44285ee85f019f99b9a11d8414aa("RedeclarableTemplateDecl", "", boost::python::no_init);
    class_2cee44285ee85f019f99b9a11d8414aa.def("classof", method_pointer_f39f27b2b29353bd90fd46a71a341b54, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("classof_kind", method_pointer_b958d12a98bc5284beee7f8b8cde33d3, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_cab907aa6f535e749aaccbcd65568d06, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_3f40937a9575536ca268cb2a9e9a429f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_instantiated_from_member_template", method_pointer_ebfa2970e62a5bc8b402707aef27b995, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("is_member_specialization", method_pointer_cc86483c4c9253ff8952fd5a79b8bb68, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_instantiated_from_member_template", method_pointer_650b91293d215beab272369349817ae3, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_member_specialization", method_pointer_251cfced9f445d4492ccfddbd5e6b45e, "");
    class_2cee44285ee85f019f99b9a11d8414aa.staticmethod("classof_kind");
    class_2cee44285ee85f019f99b9a11d8414aa.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RedeclarableTemplateDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}