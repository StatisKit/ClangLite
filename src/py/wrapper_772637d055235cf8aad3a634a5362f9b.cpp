#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_772637d055235cf8aad3a634a5362f9b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCPropertyDecl  * (*method_pointer_b88d45167af751859d289bef802a98d9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyDecl::CreateDeserialized;
    bool  (*method_pointer_28067340dcc1537eaaee7e178b01d74a)(class ::clang::Decl  const *) = ::clang::ObjCPropertyDecl::classof;
    bool  (*method_pointer_ce53e7f30c9850ddb11c0723f0d1ce09)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_13127e652a125d48bd6637edd3b30fc6)() const = &::clang::ObjCPropertyDecl::getAtLoc;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_eaac70d05f55551fb8bf83cb8bafc4dd)() const = &::clang::ObjCPropertyDecl::getGetterMethodDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_f20f27d2ed0e53b59e946f7e4f1db4f0)() const = &::clang::ObjCPropertyDecl::getLParenLoc;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyDecl::*method_pointer_f9c53e780ce859fe993edf977c3dc6d4)() const = &::clang::ObjCPropertyDecl::getPropertyIvarDecl;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_3dd3b19d31355bc7847343fb93012ca5)() const = &::clang::ObjCPropertyDecl::getSetterMethodDecl;
    class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_6abc22aa1e7359358a37393e70291454)() const = &::clang::ObjCPropertyDecl::getType;
    class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_aa662123fdcc5b15b6cf732a2f5ef094)(class ::clang::QualType ) const = &::clang::ObjCPropertyDecl::getUsageType;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_6e841ab071db51288c89483c31b77091)() const = &::clang::ObjCPropertyDecl::isAtomic;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_7fb2fdd4f2425f84a70d8dcbcee6a575)() const = &::clang::ObjCPropertyDecl::isReadOnly;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_cbde2b50e9ca5dc7861cfcde1a5a3d07)() const = &::clang::ObjCPropertyDecl::isRetaining;
    void  (::clang::ObjCPropertyDecl::*method_pointer_be3a0fec42dc5208a1ba13f482885ee6)(unsigned int ) = &::clang::ObjCPropertyDecl::overwritePropertyAttributes;
    void  (::clang::ObjCPropertyDecl::*method_pointer_033e135dd43351c8b5f9464d12b01c23)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyDecl::setAtLoc;
    void  (::clang::ObjCPropertyDecl::*method_pointer_8e390a68757a522e97dc4e05842c4fa7)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setGetterMethodDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_ed434e8b8dee564c95260b4ab0bcc291)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyDecl::setLParenLoc;
    void  (::clang::ObjCPropertyDecl::*method_pointer_9fb290021da25920859914e310875127)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCPropertyDecl::setPropertyIvarDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_e72f6f2922ec59bca117b0ec4530a4a3)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setSetterMethodDecl;
    boost::python::class_< class ::clang::ObjCPropertyDecl, autowig::HeldType< class ::clang::ObjCPropertyDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_772637d055235cf8aad3a634a5362f9b("ObjCPropertyDecl", "", boost::python::no_init);
    class_772637d055235cf8aad3a634a5362f9b.def("create_deserialized", method_pointer_b88d45167af751859d289bef802a98d9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof", method_pointer_28067340dcc1537eaaee7e178b01d74a, "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof_kind", method_pointer_ce53e7f30c9850ddb11c0723f0d1ce09, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_at_loc", method_pointer_13127e652a125d48bd6637edd3b30fc6, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_getter_method_decl", method_pointer_eaac70d05f55551fb8bf83cb8bafc4dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_l_paren_loc", method_pointer_f20f27d2ed0e53b59e946f7e4f1db4f0, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_property_ivar_decl", method_pointer_f9c53e780ce859fe993edf977c3dc6d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_setter_method_decl", method_pointer_3dd3b19d31355bc7847343fb93012ca5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_type", method_pointer_6abc22aa1e7359358a37393e70291454, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_usage_type", method_pointer_aa662123fdcc5b15b6cf732a2f5ef094, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_atomic", method_pointer_6e841ab071db51288c89483c31b77091, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_read_only", method_pointer_7fb2fdd4f2425f84a70d8dcbcee6a575, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_retaining", method_pointer_cbde2b50e9ca5dc7861cfcde1a5a3d07, "");
    class_772637d055235cf8aad3a634a5362f9b.def("overwrite_property_attributes", method_pointer_be3a0fec42dc5208a1ba13f482885ee6, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_at_loc", method_pointer_033e135dd43351c8b5f9464d12b01c23, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_getter_method_decl", method_pointer_8e390a68757a522e97dc4e05842c4fa7, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_l_paren_loc", method_pointer_ed434e8b8dee564c95260b4ab0bcc291, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_property_ivar_decl", method_pointer_9fb290021da25920859914e310875127, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_setter_method_decl", method_pointer_e72f6f2922ec59bca117b0ec4530a4a3, "");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof_kind");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("create_deserialized");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}