#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_772637d055235cf8aad3a634a5362f9b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_e2cdfa4791f356ce9768219aedd506f0)() const = &::clang::ObjCPropertyDecl::isRetaining;
    void  (::clang::ObjCPropertyDecl::*method_pointer_7652fe85b27c59d0ab24441013a43c21)(unsigned int ) = &::clang::ObjCPropertyDecl::overwritePropertyAttributes;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_21ac08966c7955eda374280452293ef9)() const = &::clang::ObjCPropertyDecl::isAtomic;
    bool  (*method_pointer_854cb2988d915ad6bf1ab37278b61e14)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyDecl::classofKind;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_a1b63dc979965b19b984fc84d58625b5)() const = &::clang::ObjCPropertyDecl::isReadOnly;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_14be64f306505397834262bc3a52547b)() const = &::clang::ObjCPropertyDecl::getGetterMethodDecl;
    bool  (*method_pointer_074a7a25abcd59b8b44d932c7be9c5dd)(class ::clang::Decl  const *) = ::clang::ObjCPropertyDecl::classof;
    class ::clang::ObjCPropertyDecl  * (*method_pointer_edbd6db03a5752b99047ca5363f44aae)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyDecl::CreateDeserialized;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyDecl::*method_pointer_0e042a1f5fbe52c68d74e8ad8b8e6c46)() const = &::clang::ObjCPropertyDecl::getPropertyIvarDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_8bd204bdd8bb5e6dad5a25bda06677ae)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setSetterMethodDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_63d7e15f9f025f9bacda3a7cda76f5b6)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCPropertyDecl::setPropertyIvarDecl;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_a4701fd951c2557187bdd2a5b6a95a78)() const = &::clang::ObjCPropertyDecl::getSetterMethodDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_3396cdf0e9135e668af36d03c55c621b)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setGetterMethodDecl;
    boost::python::class_< class ::clang::ObjCPropertyDecl, autowig::HeldType< class ::clang::ObjCPropertyDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_772637d055235cf8aad3a634a5362f9b("ObjCPropertyDecl", "", boost::python::no_init);
    class_772637d055235cf8aad3a634a5362f9b.def("is_retaining", method_pointer_e2cdfa4791f356ce9768219aedd506f0, "");
    class_772637d055235cf8aad3a634a5362f9b.def("overwrite_property_attributes", method_pointer_7652fe85b27c59d0ab24441013a43c21, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_atomic", method_pointer_21ac08966c7955eda374280452293ef9, "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof_kind", method_pointer_854cb2988d915ad6bf1ab37278b61e14, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_read_only", method_pointer_a1b63dc979965b19b984fc84d58625b5, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_getter_method_decl", method_pointer_14be64f306505397834262bc3a52547b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof", method_pointer_074a7a25abcd59b8b44d932c7be9c5dd, "");
    class_772637d055235cf8aad3a634a5362f9b.def("create_deserialized", method_pointer_edbd6db03a5752b99047ca5363f44aae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_property_ivar_decl", method_pointer_0e042a1f5fbe52c68d74e8ad8b8e6c46, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_setter_method_decl", method_pointer_8bd204bdd8bb5e6dad5a25bda06677ae, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_property_ivar_decl", method_pointer_63d7e15f9f025f9bacda3a7cda76f5b6, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_setter_method_decl", method_pointer_a4701fd951c2557187bdd2a5b6a95a78, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_getter_method_decl", method_pointer_3396cdf0e9135e668af36d03c55c621b, "");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof_kind");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("create_deserialized");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}