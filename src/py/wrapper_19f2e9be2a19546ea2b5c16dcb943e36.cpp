#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_19f2e9be2a19546ea2b5c16dcb943e36()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TypeAliasTemplateDecl  * (*method_pointer_cdf7027a5cb35dbf81250b9714d8f381)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TypeAliasTemplateDecl::CreateDeserialized;
    bool  (*method_pointer_c3b4dc18d90a5deabf3d6d758c22bcae)(class ::clang::Decl  const *) = ::clang::TypeAliasTemplateDecl::classof;
    bool  (*method_pointer_f5d5cf3ed5b65c848426fb831e4e9604)(enum ::clang::Decl::Kind ) = ::clang::TypeAliasTemplateDecl::classofKind;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_51b2ffae380855bd9895a7e2ef99dd03)() = &::clang::TypeAliasTemplateDecl::getCanonicalDecl;
    class ::clang::TypeAliasTemplateDecl  const * (::clang::TypeAliasTemplateDecl::*method_pointer_7639b54e55b7599cba5cd6b85bd63248)() const = &::clang::TypeAliasTemplateDecl::getCanonicalDecl;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_d92eb46a91915895b1c6db501d44afa5)() const = &::clang::TypeAliasTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::TypeAliasTemplateDecl  const * (::clang::TypeAliasTemplateDecl::*method_pointer_455fa2d78b7c53c0ac8db3920936587e)() const = &::clang::TypeAliasTemplateDecl::getPreviousDecl;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_43271556a1da515e872a731bab36a0ab)() = &::clang::TypeAliasTemplateDecl::getPreviousDecl;
    class ::clang::TypeAliasDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_5647df4fce1a570c988d7ba8e6e5f7f4)() const = &::clang::TypeAliasTemplateDecl::getTemplatedDecl;
    boost::python::class_< class ::clang::TypeAliasTemplateDecl, autowig::HeldType< class ::clang::TypeAliasTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_19f2e9be2a19546ea2b5c16dcb943e36("TypeAliasTemplateDecl", "", boost::python::no_init);
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("create_deserialized", method_pointer_cdf7027a5cb35dbf81250b9714d8f381, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("classof", method_pointer_c3b4dc18d90a5deabf3d6d758c22bcae, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("classof_kind", method_pointer_f5d5cf3ed5b65c848426fb831e4e9604, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_canonical_decl", method_pointer_51b2ffae380855bd9895a7e2ef99dd03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_canonical_decl", method_pointer_7639b54e55b7599cba5cd6b85bd63248, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_instantiated_from_member_template", method_pointer_d92eb46a91915895b1c6db501d44afa5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_previous_decl", method_pointer_455fa2d78b7c53c0ac8db3920936587e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_previous_decl", method_pointer_43271556a1da515e872a731bab36a0ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_templated_decl", method_pointer_5647df4fce1a570c988d7ba8e6e5f7f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("classof_kind");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("create_deserialized");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeAliasTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeAliasTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}