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
    class ::clang::TypeAliasTemplateDecl  * (*method_pointer_1e22151cd7b15a9dafa6ad3a9d76f855)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TypeAliasTemplateDecl::CreateDeserialized;
    bool  (*method_pointer_58bfbec33ecf50d1b9032f6491dca011)(class ::clang::Decl  const *) = ::clang::TypeAliasTemplateDecl::classof;
    bool  (*method_pointer_022177583e0659f38709aa5e2796766a)(enum ::clang::Decl::Kind ) = ::clang::TypeAliasTemplateDecl::classofKind;
    class ::clang::TypeAliasTemplateDecl  const * (::clang::TypeAliasTemplateDecl::*method_pointer_9ffdc7b97ea855d1a79eda43d833343b)() const = &::clang::TypeAliasTemplateDecl::getCanonicalDecl;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_266bdb1c297e58199d33dc779a378e26)() = &::clang::TypeAliasTemplateDecl::getCanonicalDecl;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_f2da6627145f51e2874361b178855db6)() const = &::clang::TypeAliasTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::TypeAliasTemplateDecl  const * (::clang::TypeAliasTemplateDecl::*method_pointer_886bbd41fe6c5bd384dbb758ecc47405)() const = &::clang::TypeAliasTemplateDecl::getPreviousDecl;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_96a15c9521f8581ca6db337a4730998d)() = &::clang::TypeAliasTemplateDecl::getPreviousDecl;
    class ::clang::TypeAliasDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_6445880d33d55cbbab82a5a02dcf2857)() const = &::clang::TypeAliasTemplateDecl::getTemplatedDecl;
    boost::python::class_< class ::clang::TypeAliasTemplateDecl, autowig::HeldType< class ::clang::TypeAliasTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_19f2e9be2a19546ea2b5c16dcb943e36("TypeAliasTemplateDecl", "", boost::python::no_init);
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("create_deserialized", method_pointer_1e22151cd7b15a9dafa6ad3a9d76f855, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("classof", method_pointer_58bfbec33ecf50d1b9032f6491dca011, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("classof_kind", method_pointer_022177583e0659f38709aa5e2796766a, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_canonical_decl", method_pointer_9ffdc7b97ea855d1a79eda43d833343b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_canonical_decl", method_pointer_266bdb1c297e58199d33dc779a378e26, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_instantiated_from_member_template", method_pointer_f2da6627145f51e2874361b178855db6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_previous_decl", method_pointer_886bbd41fe6c5bd384dbb758ecc47405, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_previous_decl", method_pointer_96a15c9521f8581ca6db337a4730998d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_templated_decl", method_pointer_6445880d33d55cbbab82a5a02dcf2857, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("classof_kind");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("create_deserialized");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeAliasTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeAliasTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}