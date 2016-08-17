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
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_7079306bb9b9585b8e31f07623c6b3d8)() const = &::clang::ObjCPropertyDecl::getGetterMethodDecl;
    bool  (*method_pointer_7e8ab6301c3154f495d1bf880f5cb790)(class ::clang::Decl  const *) = ::clang::ObjCPropertyDecl::classof;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_3099bef2c4945a8088f00c0c5943c2aa)() const = &::clang::ObjCPropertyDecl::isRetaining;
    void  (::clang::ObjCPropertyDecl::*method_pointer_ffbfce898e2d550ea709493f7b2d005b)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCPropertyDecl::setPropertyIvarDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_335aee100ac552229f268fff1d109310)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setSetterMethodDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyDecl::*method_pointer_9fde66962b72508882a8a47eba067c03)() const = &::clang::ObjCPropertyDecl::getPropertyIvarDecl;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_bcc1618c5019515daf5141e01a503e48)() const = &::clang::ObjCPropertyDecl::isReadOnly;
    void  (::clang::ObjCPropertyDecl::*method_pointer_3071a21b1a0f5ab98150cb14d7acb9f6)(unsigned int ) = &::clang::ObjCPropertyDecl::overwritePropertyAttributes;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_c6cbaf8c7610513a98f65654545264a3)() const = &::clang::ObjCPropertyDecl::getSetterMethodDecl;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_324c7f7900f050ea8bec280167acac6f)() const = &::clang::ObjCPropertyDecl::isAtomic;
    class ::clang::ObjCPropertyDecl  * (*method_pointer_c4f0431a186f52d2b5405124d7862291)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyDecl::CreateDeserialized;
    bool  (*method_pointer_c3a527706c865d10b96f451547d32e6d)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyDecl::classofKind;
    void  (::clang::ObjCPropertyDecl::*method_pointer_2d9d0c89603a560c91739ff0f5085ff4)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setGetterMethodDecl;
    boost::python::class_< class ::clang::ObjCPropertyDecl, autowig::HeldType< class ::clang::ObjCPropertyDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_772637d055235cf8aad3a634a5362f9b("ObjCPropertyDecl", "", boost::python::no_init);
    class_772637d055235cf8aad3a634a5362f9b.def("get_getter_method_decl", method_pointer_7079306bb9b9585b8e31f07623c6b3d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof", method_pointer_7e8ab6301c3154f495d1bf880f5cb790, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_retaining", method_pointer_3099bef2c4945a8088f00c0c5943c2aa, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_property_ivar_decl", method_pointer_ffbfce898e2d550ea709493f7b2d005b, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_setter_method_decl", method_pointer_335aee100ac552229f268fff1d109310, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_property_ivar_decl", method_pointer_9fde66962b72508882a8a47eba067c03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_read_only", method_pointer_bcc1618c5019515daf5141e01a503e48, "");
    class_772637d055235cf8aad3a634a5362f9b.def("overwrite_property_attributes", method_pointer_3071a21b1a0f5ab98150cb14d7acb9f6, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_setter_method_decl", method_pointer_c6cbaf8c7610513a98f65654545264a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_atomic", method_pointer_324c7f7900f050ea8bec280167acac6f, "");
    class_772637d055235cf8aad3a634a5362f9b.def("create_deserialized", method_pointer_c4f0431a186f52d2b5405124d7862291, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof_kind", method_pointer_c3a527706c865d10b96f451547d32e6d, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_getter_method_decl", method_pointer_2d9d0c89603a560c91739ff0f5085ff4, "");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof_kind");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("create_deserialized");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}