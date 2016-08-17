#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_19f2e9be2a19546ea2b5c16dcb943e36()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TypeAliasDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_ddb7edc295b956c6ad68349ce7c155ce)() const = &::clang::TypeAliasTemplateDecl::getTemplatedDecl;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_728acc5999d25ac6b59a0fb7895a1c4a)() = &::clang::TypeAliasTemplateDecl::getPreviousDecl;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_696f1fae87ee599c963c4e40f486b18a)() = &::clang::TypeAliasTemplateDecl::getCanonicalDecl;
    class ::clang::TypeAliasTemplateDecl  const * (::clang::TypeAliasTemplateDecl::*method_pointer_d42e530f03d95756bc4f095e8905e459)() const = &::clang::TypeAliasTemplateDecl::getPreviousDecl;
    class ::clang::TypeAliasTemplateDecl  * (*method_pointer_0f59ca0c63f158f7b0e468432535c93c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TypeAliasTemplateDecl::CreateDeserialized;
    class ::clang::TypeAliasTemplateDecl  const * (::clang::TypeAliasTemplateDecl::*method_pointer_154d53f328a8579ca29d3226f339dee7)() const = &::clang::TypeAliasTemplateDecl::getCanonicalDecl;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_562f5c97979b58c3af8827537441cd93)() const = &::clang::TypeAliasTemplateDecl::getInstantiatedFromMemberTemplate;
    bool  (*method_pointer_8ffd42f0cc2a50b0ace83da8d2ffbe61)(class ::clang::Decl  const *) = ::clang::TypeAliasTemplateDecl::classof;
    bool  (*method_pointer_aac67fd7b43f5d0d9055da39556e6ac2)(enum ::clang::Decl::Kind ) = ::clang::TypeAliasTemplateDecl::classofKind;
    boost::python::class_< class ::clang::TypeAliasTemplateDecl, autowig::HeldType< class ::clang::TypeAliasTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_19f2e9be2a19546ea2b5c16dcb943e36("TypeAliasTemplateDecl", "", boost::python::no_init);
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_templated_decl", method_pointer_ddb7edc295b956c6ad68349ce7c155ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_previous_decl", method_pointer_728acc5999d25ac6b59a0fb7895a1c4a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_canonical_decl", method_pointer_696f1fae87ee599c963c4e40f486b18a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_previous_decl", method_pointer_d42e530f03d95756bc4f095e8905e459, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("create_deserialized", method_pointer_0f59ca0c63f158f7b0e468432535c93c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_canonical_decl", method_pointer_154d53f328a8579ca29d3226f339dee7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_instantiated_from_member_template", method_pointer_562f5c97979b58c3af8827537441cd93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("classof", method_pointer_8ffd42f0cc2a50b0ace83da8d2ffbe61, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("classof_kind", method_pointer_aac67fd7b43f5d0d9055da39556e6ac2, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("classof_kind");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("create_deserialized");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeAliasTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeAliasTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}