#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ObjCPropertyDecl const volatile * get_pointer<class ::clang::ObjCPropertyDecl const volatile >(class ::clang::ObjCPropertyDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_772637d055235cf8aad3a634a5362f9b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCPropertyDecl * (*method_pointer_f74bc363cc4a52d8b68cee03a1a6f7c6)(class ::clang::ASTContext &, unsigned int ) = ::clang::ObjCPropertyDecl::CreateDeserialized;
    class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_46046dcde2cd5906aea425aa356142e9)() const = &::clang::ObjCPropertyDecl::getAtLoc;
    void  (::clang::ObjCPropertyDecl::*method_pointer_005998d2b4c557869ae76aaff4d10ce7)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyDecl::setAtLoc;
    class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_04450756e996582b9436e145f1db34d1)() const = &::clang::ObjCPropertyDecl::getLParenLoc;
    void  (::clang::ObjCPropertyDecl::*method_pointer_aae4b7a73a305dc595742ba27c57f520)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyDecl::setLParenLoc;
    class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_702d1ed3095e53098062e5d4f9dd5a45)() const = &::clang::ObjCPropertyDecl::getType;
    class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_08af6a5f56c250e5a5f1dd466042b5e6)(class ::clang::QualType ) const = &::clang::ObjCPropertyDecl::getUsageType;
    void  (::clang::ObjCPropertyDecl::*method_pointer_d3d8b57fa49c5d2f9c6e139682dddc0b)(unsigned int ) = &::clang::ObjCPropertyDecl::overwritePropertyAttributes;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_4b59e0f1f35e558ab8ba8e9c8d81e2f1)() const = &::clang::ObjCPropertyDecl::isReadOnly;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_efdc03f216495740843a739b92529be3)() const = &::clang::ObjCPropertyDecl::isAtomic;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_47e5203720255f0ca6cc4dd09520ad98)() const = &::clang::ObjCPropertyDecl::isRetaining;
    class ::clang::ObjCMethodDecl * (::clang::ObjCPropertyDecl::*method_pointer_b34ba232cd675442b388cbda68145b7b)() const = &::clang::ObjCPropertyDecl::getGetterMethodDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_470bb42479515d5daa0510afd3199062)(class ::clang::ObjCMethodDecl *) = &::clang::ObjCPropertyDecl::setGetterMethodDecl;
    class ::clang::ObjCMethodDecl * (::clang::ObjCPropertyDecl::*method_pointer_1ba1f2e5ad8b59af86c0eac314a14003)() const = &::clang::ObjCPropertyDecl::getSetterMethodDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_dd9b18c0eb9c58bba811987babebccb2)(class ::clang::ObjCMethodDecl *) = &::clang::ObjCPropertyDecl::setSetterMethodDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_7069c28961f6595db345effde70c9a58)(class ::clang::ObjCIvarDecl *) = &::clang::ObjCPropertyDecl::setPropertyIvarDecl;
    class ::clang::ObjCIvarDecl * (::clang::ObjCPropertyDecl::*method_pointer_76b5e989029d5128bb14b34d50689bab)() const = &::clang::ObjCPropertyDecl::getPropertyIvarDecl;
    bool  (*method_pointer_87c687736bee551b8ddb11b6f326bf8b)(class ::clang::Decl const *) = ::clang::ObjCPropertyDecl::classof;
    bool  (*method_pointer_5d0ad4eda83f5ee9b25693c6cf4933c3)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyDecl::classofKind;
    boost::python::class_< class ::clang::ObjCPropertyDecl, autowig::Held< class ::clang::ObjCPropertyDecl >::Type, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_772637d055235cf8aad3a634a5362f9b("ObjCPropertyDecl", "Represents one property declaration in an Objective-C interface.\n\nFor example:\n\n", boost::python::no_init);
    class_772637d055235cf8aad3a634a5362f9b.def("create_deserialized", method_pointer_f74bc363cc4a52d8b68cee03a1a6f7c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_at_loc", method_pointer_46046dcde2cd5906aea425aa356142e9, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_at_loc", method_pointer_005998d2b4c557869ae76aaff4d10ce7, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_l_paren_loc", method_pointer_04450756e996582b9436e145f1db34d1, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_l_paren_loc", method_pointer_aae4b7a73a305dc595742ba27c57f520, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_type", method_pointer_702d1ed3095e53098062e5d4f9dd5a45, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_usage_type", method_pointer_08af6a5f56c250e5a5f1dd466042b5e6, ":Parameter:\n    `objectType` (:py:class:`clanglite.clang.QualType`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_772637d055235cf8aad3a634a5362f9b.def("overwrite_property_attributes", method_pointer_d3d8b57fa49c5d2f9c6e139682dddc0b, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_read_only", method_pointer_4b59e0f1f35e558ab8ba8e9c8d81e2f1, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_772637d055235cf8aad3a634a5362f9b.def("is_atomic", method_pointer_efdc03f216495740843a739b92529be3, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_772637d055235cf8aad3a634a5362f9b.def("is_retaining", method_pointer_47e5203720255f0ca6cc4dd09520ad98, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_772637d055235cf8aad3a634a5362f9b.def("get_getter_method_decl", method_pointer_b34ba232cd675442b388cbda68145b7b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_getter_method_decl", method_pointer_470bb42479515d5daa0510afd3199062, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_setter_method_decl", method_pointer_1ba1f2e5ad8b59af86c0eac314a14003, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_setter_method_decl", method_pointer_dd9b18c0eb9c58bba811987babebccb2, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_property_ivar_decl", method_pointer_7069c28961f6595db345effde70c9a58, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_property_ivar_decl", method_pointer_76b5e989029d5128bb14b34d50689bab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof", method_pointer_87c687736bee551b8ddb11b6f326bf8b, "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof_kind", method_pointer_5d0ad4eda83f5ee9b25693c6cf4933c3, "");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof_kind");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("create_deserialized");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof");

    if(autowig::Held< class ::clang::ObjCPropertyDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCPropertyDecl >::Type, autowig::Held< class ::clang::NamedDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::ObjCPropertyDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::ObjCPropertyDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::ObjCPropertyDecl >::Type, class ::clang::ObjCPropertyDecl > > >();
    }

}