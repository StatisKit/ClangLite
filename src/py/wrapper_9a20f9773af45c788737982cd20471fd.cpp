#include "_clanglite.h"

class ::clang::NamespaceDecl * (*method_pointer_1fd7c1c422d55f8b81d9aacb35c7ba68)(class ::clang::ASTContext &, unsigned int )= ::clang::NamespaceDecl::CreateDeserialized;
bool  (::clang::NamespaceDecl::*method_pointer_19a9ca550ec45548acceb460e451b4f5)()const= &::clang::NamespaceDecl::isAnonymousNamespace;
bool  (::clang::NamespaceDecl::*method_pointer_1c18df3342d25bb8b5bc6e2bc5a7aa7b)()const= &::clang::NamespaceDecl::isInline;
void  (::clang::NamespaceDecl::*method_pointer_3b6c428dd7c75d54b6c1005942162131)(bool )= &::clang::NamespaceDecl::setInline;
class ::clang::NamespaceDecl * (::clang::NamespaceDecl::*method_pointer_a95339b7cdb55da98fe28707d81d1d5c)()= &::clang::NamespaceDecl::getOriginalNamespace;
class ::clang::NamespaceDecl const * (::clang::NamespaceDecl::*method_pointer_348cb33819525f16a4169e53b103a46d)()const= &::clang::NamespaceDecl::getOriginalNamespace;
bool  (::clang::NamespaceDecl::*method_pointer_030f806421e85597abf304f6cf359769)()const= &::clang::NamespaceDecl::isOriginalNamespace;
class ::clang::NamespaceDecl * (::clang::NamespaceDecl::*method_pointer_d7bd83e29ac458088c13046e07ceeffe)()const= &::clang::NamespaceDecl::getAnonymousNamespace;
void  (::clang::NamespaceDecl::*method_pointer_c2bd8b704c3358f98a33a01c2b6fc667)(class ::clang::NamespaceDecl *)= &::clang::NamespaceDecl::setAnonymousNamespace;
class ::clang::NamespaceDecl * (::clang::NamespaceDecl::*method_pointer_a3297f7a88bb531ab04c6af767cbf4fb)()= &::clang::NamespaceDecl::getCanonicalDecl;
class ::clang::NamespaceDecl const * (::clang::NamespaceDecl::*method_pointer_17bef617bbf05aec9a17f3b09be5931b)()const= &::clang::NamespaceDecl::getCanonicalDecl;
class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_02d87028a8d15e69a954d974096613c3)()const= &::clang::NamespaceDecl::getLocStart;
class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_9aa8e21626bc55d7b3d8eb9b1f1be8db)()const= &::clang::NamespaceDecl::getRBraceLoc;
void  (::clang::NamespaceDecl::*method_pointer_6e84dbcae4de5f82937cde987b775291)(class ::clang::SourceLocation )= &::clang::NamespaceDecl::setLocStart;
void  (::clang::NamespaceDecl::*method_pointer_b381ddd942e15a74b7faa2c16a4cef75)(class ::clang::SourceLocation )= &::clang::NamespaceDecl::setRBraceLoc;
bool  (*method_pointer_b3da6b6893c756428fe606df4bc91630)(class ::clang::Decl const *)= ::clang::NamespaceDecl::classof;
bool  (*method_pointer_99417e0748bd590d8f82ab4cb81c4003)(enum ::clang::Decl::Kind )= ::clang::NamespaceDecl::classofKind;
class ::clang::DeclContext * (*method_pointer_6b2fc75bb7af5c53b00e47cc0612b57d)(class ::clang::NamespaceDecl const *)= ::clang::NamespaceDecl::castToDeclContext;
class ::clang::NamespaceDecl * (*method_pointer_fa71452dc9e75467ae8e92c9a071d970)(class ::clang::DeclContext const *)= ::clang::NamespaceDecl::castFromDeclContext;


void wrapper_9a20f9773af45c788737982cd20471fd(pybind11::module& module)
{

    pybind11::class_<class ::clang::NamespaceDecl, autowig::HolderType< class ::clang::NamespaceDecl >::Type, class ::clang::NamedDecl, class ::clang::DeclContext > class_9a20f9773af45c788737982cd20471fd(module, "NamespaceDecl", "");
    class_9a20f9773af45c788737982cd20471fd.def_static("create_deserialized", method_pointer_1fd7c1c422d55f8b81d9aacb35c7ba68, pybind11::return_value_policy::reference_internal, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_19a9ca550ec45548acceb460e451b4f5, "Returns true if this is an anonymous namespace declaration.\n\nFor example:\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_1c18df3342d25bb8b5bc6e2bc5a7aa7b, "Returns true if this is an inline namespace declaration.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_3b6c428dd7c75d54b6c1005942162131, "Set whether this is an inline namespace declaration.\n\n:Parameter:\n    `Inline` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_a95339b7cdb55da98fe28707d81d1d5c, pybind11::return_value_policy::reference_internal, "Get the original (first) namespace declaration.\n\n:Return Type:\n    :cpp:class:`::clang::NamespaceDecl`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_348cb33819525f16a4169e53b103a46d, pybind11::return_value_policy::reference_internal, "Get the original (first) namespace declaration.\n\n:Return Type:\n    :cpp:class:`::clang::NamespaceDecl`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_030f806421e85597abf304f6cf359769, "Return true if this declaration is an original (first) declaration of\nthe namespace. This is false for non-original (subsequent) namespace\ndeclarations and anonymous namespaces.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_d7bd83e29ac458088c13046e07ceeffe, pybind11::return_value_policy::reference_internal, "Retrieve the anonymous namespace nested inside this namespace, if any.\n\n:Return Type:\n    :cpp:class:`::clang::NamespaceDecl`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_c2bd8b704c3358f98a33a01c2b6fc667, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_a3297f7a88bb531ab04c6af767cbf4fb, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::NamespaceDecl`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_17bef617bbf05aec9a17f3b09be5931b, pybind11::return_value_policy::reference_internal, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_loc_start", method_pointer_02d87028a8d15e69a954d974096613c3, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_r_brace_loc", method_pointer_9aa8e21626bc55d7b3d8eb9b1f1be8db, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_loc_start", method_pointer_6e84dbcae4de5f82937cde987b775291, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_r_brace_loc", method_pointer_b381ddd942e15a74b7faa2c16a4cef75, "");
    class_9a20f9773af45c788737982cd20471fd.def_static("classof", method_pointer_b3da6b6893c756428fe606df4bc91630, "");
    class_9a20f9773af45c788737982cd20471fd.def_static("classof_kind", method_pointer_99417e0748bd590d8f82ab4cb81c4003, "");
    class_9a20f9773af45c788737982cd20471fd.def_static("cast_to_decl_context", method_pointer_6b2fc75bb7af5c53b00e47cc0612b57d, pybind11::return_value_policy::reference_internal, "");
    class_9a20f9773af45c788737982cd20471fd.def_static("cast_from_decl_context", method_pointer_fa71452dc9e75467ae8e92c9a071d970, pybind11::return_value_policy::reference_internal, "");

}