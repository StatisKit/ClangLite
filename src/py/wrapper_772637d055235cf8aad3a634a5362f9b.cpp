#include "_clanglite.h"

class ::clang::ObjCPropertyDecl * (*method_pointer_f74bc363cc4a52d8b68cee03a1a6f7c6)(class ::clang::ASTContext &, unsigned int )= ::clang::ObjCPropertyDecl::CreateDeserialized;
class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_46046dcde2cd5906aea425aa356142e9)()const= &::clang::ObjCPropertyDecl::getAtLoc;
void  (::clang::ObjCPropertyDecl::*method_pointer_005998d2b4c557869ae76aaff4d10ce7)(class ::clang::SourceLocation )= &::clang::ObjCPropertyDecl::setAtLoc;
class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_04450756e996582b9436e145f1db34d1)()const= &::clang::ObjCPropertyDecl::getLParenLoc;
void  (::clang::ObjCPropertyDecl::*method_pointer_aae4b7a73a305dc595742ba27c57f520)(class ::clang::SourceLocation )= &::clang::ObjCPropertyDecl::setLParenLoc;
class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_702d1ed3095e53098062e5d4f9dd5a45)()const= &::clang::ObjCPropertyDecl::getType;
class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_08af6a5f56c250e5a5f1dd466042b5e6)(class ::clang::QualType )const= &::clang::ObjCPropertyDecl::getUsageType;
void  (::clang::ObjCPropertyDecl::*method_pointer_d3d8b57fa49c5d2f9c6e139682dddc0b)(unsigned int )= &::clang::ObjCPropertyDecl::overwritePropertyAttributes;
bool  (::clang::ObjCPropertyDecl::*method_pointer_4b59e0f1f35e558ab8ba8e9c8d81e2f1)()const= &::clang::ObjCPropertyDecl::isReadOnly;
bool  (::clang::ObjCPropertyDecl::*method_pointer_efdc03f216495740843a739b92529be3)()const= &::clang::ObjCPropertyDecl::isAtomic;
bool  (::clang::ObjCPropertyDecl::*method_pointer_47e5203720255f0ca6cc4dd09520ad98)()const= &::clang::ObjCPropertyDecl::isRetaining;
bool  (::clang::ObjCPropertyDecl::*method_pointer_7442c6e3e85b523b8fd3651d45483ef8)()const= &::clang::ObjCPropertyDecl::isInstanceProperty;
bool  (::clang::ObjCPropertyDecl::*method_pointer_81908ec92911591b9d7245a72e0c076b)()const= &::clang::ObjCPropertyDecl::isClassProperty;
class ::clang::ObjCMethodDecl * (::clang::ObjCPropertyDecl::*method_pointer_b34ba232cd675442b388cbda68145b7b)()const= &::clang::ObjCPropertyDecl::getGetterMethodDecl;
void  (::clang::ObjCPropertyDecl::*method_pointer_470bb42479515d5daa0510afd3199062)(class ::clang::ObjCMethodDecl *)= &::clang::ObjCPropertyDecl::setGetterMethodDecl;
class ::clang::ObjCMethodDecl * (::clang::ObjCPropertyDecl::*method_pointer_1ba1f2e5ad8b59af86c0eac314a14003)()const= &::clang::ObjCPropertyDecl::getSetterMethodDecl;
void  (::clang::ObjCPropertyDecl::*method_pointer_dd9b18c0eb9c58bba811987babebccb2)(class ::clang::ObjCMethodDecl *)= &::clang::ObjCPropertyDecl::setSetterMethodDecl;
bool  (::clang::ObjCPropertyDecl::*method_pointer_46f0835c57a35d4b8595a231d8d4b2a4)()const= &::clang::ObjCPropertyDecl::isOptional;
void  (::clang::ObjCPropertyDecl::*method_pointer_7069c28961f6595db345effde70c9a58)(class ::clang::ObjCIvarDecl *)= &::clang::ObjCPropertyDecl::setPropertyIvarDecl;
class ::clang::ObjCIvarDecl * (::clang::ObjCPropertyDecl::*method_pointer_76b5e989029d5128bb14b34d50689bab)()const= &::clang::ObjCPropertyDecl::getPropertyIvarDecl;
bool  (*method_pointer_87c687736bee551b8ddb11b6f326bf8b)(class ::clang::Decl const *)= ::clang::ObjCPropertyDecl::classof;
bool  (*method_pointer_5d0ad4eda83f5ee9b25693c6cf4933c3)(enum ::clang::Decl::Kind )= ::clang::ObjCPropertyDecl::classofKind;

namespace autowig {
}

void wrapper_772637d055235cf8aad3a634a5362f9b(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCPropertyDecl, autowig::HolderType< class ::clang::ObjCPropertyDecl >::Type, class ::clang::NamedDecl > class_772637d055235cf8aad3a634a5362f9b(module, "ObjCPropertyDecl", "Represents one property declaration in an Objective-C interface.\n\nFor example:\n\n");
    class_772637d055235cf8aad3a634a5362f9b.def_static("create_deserialized", method_pointer_f74bc363cc4a52d8b68cee03a1a6f7c6, pybind11::return_value_policy::reference_internal, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_at_loc", method_pointer_46046dcde2cd5906aea425aa356142e9, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_at_loc", method_pointer_005998d2b4c557869ae76aaff4d10ce7, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_l_paren_loc", method_pointer_04450756e996582b9436e145f1db34d1, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_l_paren_loc", method_pointer_aae4b7a73a305dc595742ba27c57f520, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_type", method_pointer_702d1ed3095e53098062e5d4f9dd5a45, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_usage_type", method_pointer_08af6a5f56c250e5a5f1dd466042b5e6, ":Parameter:\n    `objectType` (:cpp:class:`::clang::QualType`) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_772637d055235cf8aad3a634a5362f9b.def("overwrite_property_attributes", method_pointer_d3d8b57fa49c5d2f9c6e139682dddc0b, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_read_only", method_pointer_4b59e0f1f35e558ab8ba8e9c8d81e2f1, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_772637d055235cf8aad3a634a5362f9b.def("is_atomic", method_pointer_efdc03f216495740843a739b92529be3, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_772637d055235cf8aad3a634a5362f9b.def("is_retaining", method_pointer_47e5203720255f0ca6cc4dd09520ad98, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_772637d055235cf8aad3a634a5362f9b.def("is_instance_property", method_pointer_7442c6e3e85b523b8fd3651d45483ef8, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_class_property", method_pointer_81908ec92911591b9d7245a72e0c076b, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_getter_method_decl", method_pointer_b34ba232cd675442b388cbda68145b7b, pybind11::return_value_policy::reference_internal, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_getter_method_decl", method_pointer_470bb42479515d5daa0510afd3199062, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_setter_method_decl", method_pointer_1ba1f2e5ad8b59af86c0eac314a14003, pybind11::return_value_policy::reference_internal, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_setter_method_decl", method_pointer_dd9b18c0eb9c58bba811987babebccb2, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_optional", method_pointer_46f0835c57a35d4b8595a231d8d4b2a4, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_property_ivar_decl", method_pointer_7069c28961f6595db345effde70c9a58, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_property_ivar_decl", method_pointer_76b5e989029d5128bb14b34d50689bab, pybind11::return_value_policy::reference_internal, "");
    class_772637d055235cf8aad3a634a5362f9b.def_static("classof", method_pointer_87c687736bee551b8ddb11b6f326bf8b, "");
    class_772637d055235cf8aad3a634a5362f9b.def_static("classof_kind", method_pointer_5d0ad4eda83f5ee9b25693c6cf4933c3, "");

}