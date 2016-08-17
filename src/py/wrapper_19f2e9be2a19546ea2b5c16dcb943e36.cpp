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
    class ::clang::TypeAliasTemplateDecl  const * (::clang::TypeAliasTemplateDecl::*method_pointer_9bf44ec8bb5a502b8d83b0e951b86964)() const = &::clang::TypeAliasTemplateDecl::getPreviousDecl;
    class ::clang::TypeAliasDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_4aff8ffda083564e825615b42acbddd2)() const = &::clang::TypeAliasTemplateDecl::getTemplatedDecl;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_a63eff28fccf5c6bb17bdd4a2c7222a0)() const = &::clang::TypeAliasTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_d652e6288cd85b23bf546c0fa3882954)() = &::clang::TypeAliasTemplateDecl::getCanonicalDecl;
    class ::clang::TypeAliasTemplateDecl  const * (::clang::TypeAliasTemplateDecl::*method_pointer_280ae8c4a21d522a9ada4719f7d1dbbb)() const = &::clang::TypeAliasTemplateDecl::getCanonicalDecl;
    bool  (*method_pointer_1428802c9a655ccfb5b6c383db176586)(enum ::clang::Decl::Kind ) = ::clang::TypeAliasTemplateDecl::classofKind;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasTemplateDecl::*method_pointer_ff026516dad85f8480735fb3b2ede7d0)() = &::clang::TypeAliasTemplateDecl::getPreviousDecl;
    class ::clang::TypeAliasTemplateDecl  * (*method_pointer_dc5a8a66f674529c9f27de59c9449e6e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TypeAliasTemplateDecl::CreateDeserialized;
    bool  (*method_pointer_34b55a6cb30f5f35a8bca689669fe56a)(class ::clang::Decl  const *) = ::clang::TypeAliasTemplateDecl::classof;
    boost::python::class_< class ::clang::TypeAliasTemplateDecl, autowig::HeldType< class ::clang::TypeAliasTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_19f2e9be2a19546ea2b5c16dcb943e36("TypeAliasTemplateDecl", "", boost::python::no_init);
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_previous_decl", method_pointer_9bf44ec8bb5a502b8d83b0e951b86964, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_templated_decl", method_pointer_4aff8ffda083564e825615b42acbddd2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_instantiated_from_member_template", method_pointer_a63eff28fccf5c6bb17bdd4a2c7222a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_canonical_decl", method_pointer_d652e6288cd85b23bf546c0fa3882954, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_canonical_decl", method_pointer_280ae8c4a21d522a9ada4719f7d1dbbb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("classof_kind", method_pointer_1428802c9a655ccfb5b6c383db176586, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_previous_decl", method_pointer_ff026516dad85f8480735fb3b2ede7d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("create_deserialized", method_pointer_dc5a8a66f674529c9f27de59c9449e6e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("classof", method_pointer_34b55a6cb30f5f35a8bca689669fe56a, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("classof_kind");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("create_deserialized");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeAliasTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeAliasTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}