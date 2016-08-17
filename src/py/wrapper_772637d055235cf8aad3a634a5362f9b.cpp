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
    bool  (::clang::ObjCPropertyDecl::*method_pointer_a0f08726e7d25117b4bc674d91bce371)() const = &::clang::ObjCPropertyDecl::isReadOnly;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_f538e6cac563527ba06cb9d6149a4625)() const = &::clang::ObjCPropertyDecl::isAtomic;
    bool  (*method_pointer_0e25e82d79b35b50bc1c3916a2162353)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyDecl::classofKind;
    class ::clang::ObjCPropertyDecl  * (*method_pointer_09f913dd244a5ff893e3f8995ef35bb3)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyDecl::CreateDeserialized;
    void  (::clang::ObjCPropertyDecl::*method_pointer_a7c032657f395f9c8e214a9bf6ad4d9a)(unsigned int ) = &::clang::ObjCPropertyDecl::overwritePropertyAttributes;
    void  (::clang::ObjCPropertyDecl::*method_pointer_db1f498a5e095eadaf03f0fb15ddc79d)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setGetterMethodDecl;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_5f1a95e22b855f37981d61fdd9891857)() const = &::clang::ObjCPropertyDecl::isRetaining;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_cadbaed9c02e575fa4dd6866bc762211)() const = &::clang::ObjCPropertyDecl::getGetterMethodDecl;
    bool  (*method_pointer_ce17745a03e35e52ba2cb488abc05171)(class ::clang::Decl  const *) = ::clang::ObjCPropertyDecl::classof;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyDecl::*method_pointer_eccf99bfd47d51d4aaac06d0f577437f)() const = &::clang::ObjCPropertyDecl::getPropertyIvarDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_4a980fd43fba58d992344e58f42174f8)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCPropertyDecl::setPropertyIvarDecl;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_7818e99abe085255a5366b67fca66191)() const = &::clang::ObjCPropertyDecl::getSetterMethodDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_a7f42c279f6a54f7ac1b596529d67868)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setSetterMethodDecl;
    boost::python::class_< class ::clang::ObjCPropertyDecl, autowig::HeldType< class ::clang::ObjCPropertyDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_772637d055235cf8aad3a634a5362f9b("ObjCPropertyDecl", "", boost::python::no_init);
    class_772637d055235cf8aad3a634a5362f9b.def("is_read_only", method_pointer_a0f08726e7d25117b4bc674d91bce371, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_atomic", method_pointer_f538e6cac563527ba06cb9d6149a4625, "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof_kind", method_pointer_0e25e82d79b35b50bc1c3916a2162353, "");
    class_772637d055235cf8aad3a634a5362f9b.def("create_deserialized", method_pointer_09f913dd244a5ff893e3f8995ef35bb3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("overwrite_property_attributes", method_pointer_a7c032657f395f9c8e214a9bf6ad4d9a, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_getter_method_decl", method_pointer_db1f498a5e095eadaf03f0fb15ddc79d, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_retaining", method_pointer_5f1a95e22b855f37981d61fdd9891857, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_getter_method_decl", method_pointer_cadbaed9c02e575fa4dd6866bc762211, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof", method_pointer_ce17745a03e35e52ba2cb488abc05171, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_property_ivar_decl", method_pointer_eccf99bfd47d51d4aaac06d0f577437f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_property_ivar_decl", method_pointer_4a980fd43fba58d992344e58f42174f8, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_setter_method_decl", method_pointer_7818e99abe085255a5366b67fca66191, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_setter_method_decl", method_pointer_a7f42c279f6a54f7ac1b596529d67868, "");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof_kind");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("create_deserialized");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}