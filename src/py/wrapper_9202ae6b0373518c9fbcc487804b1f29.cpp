#include "_clanglite.h"

bool  (::clang::TemplateTypeParmDecl::*method_pointer_1b101dd41759550191084cc1e3a234ac)()const= &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
bool  (::clang::TemplateTypeParmDecl::*method_pointer_2ecc6f9ccd955396aded9a5a2fe68891)()const= &::clang::TemplateTypeParmDecl::hasDefaultArgument;
class ::clang::QualType  (::clang::TemplateTypeParmDecl::*method_pointer_6de5caab17e95f0f84dc6603ecf530f7)()const= &::clang::TemplateTypeParmDecl::getDefaultArgument;
class ::clang::SourceLocation  (::clang::TemplateTypeParmDecl::*method_pointer_2d36cde6998f5dd58bee87b3e77716a5)()const= &::clang::TemplateTypeParmDecl::getDefaultArgumentLoc;
bool  (::clang::TemplateTypeParmDecl::*method_pointer_bc87a5ada712564389d00615ac378b06)()const= &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
void  (::clang::TemplateTypeParmDecl::*method_pointer_4356affb20855d1d980e286e7bfdb6b8)()= &::clang::TemplateTypeParmDecl::removeDefaultArgument;
void  (::clang::TemplateTypeParmDecl::*method_pointer_2622c0477e775679b0f7868506ee1042)(bool )= &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_b667c385bf565c56b83d4519d6548383)()const= &::clang::TemplateTypeParmDecl::getDepth;
unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_03ad8f450223511a95c2a70632a4ae3d)()const= &::clang::TemplateTypeParmDecl::getIndex;
bool  (::clang::TemplateTypeParmDecl::*method_pointer_738b0a3394425a348028ad17973cf43f)()const= &::clang::TemplateTypeParmDecl::isParameterPack;
bool  (*method_pointer_d3225609ff4b5b75b018705f7c97a40d)(class ::clang::Decl const *)= ::clang::TemplateTypeParmDecl::classof;
bool  (*method_pointer_b5e30d0b734a5efba3df5db450414310)(enum ::clang::Decl::Kind )= ::clang::TemplateTypeParmDecl::classofKind;


void wrapper_9202ae6b0373518c9fbcc487804b1f29(pybind11::module& module)
{

    pybind11::class_<class ::clang::TemplateTypeParmDecl, autowig::HolderType< class ::clang::TemplateTypeParmDecl >::Type, class ::clang::TypeDecl > class_9202ae6b0373518c9fbcc487804b1f29(module, "TemplateTypeParmDecl", "Declaration of a template type parameter.\n\nFor example, “T” in\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_1b101dd41759550191084cc1e3a234ac, "Whether this template type parameter was declared with the ‘typename’\nkeyword.\n\nIf not, it was declared with the ‘class’ keyword.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_2ecc6f9ccd955396aded9a5a2fe68891, "Determine whether this template parameter has a default argument.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument", method_pointer_6de5caab17e95f0f84dc6603ecf530f7, "Retrieve the default argument, if any.\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument_loc", method_pointer_2d36cde6998f5dd58bee87b3e77716a5, "Retrieves the location of the default argument declaration.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_bc87a5ada712564389d00615ac378b06, "Determines whether the default argument was inherited from a previous\ndeclaration of this template.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_4356affb20855d1d980e286e7bfdb6b8, "Removes the default argument of this template parameter.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_2622c0477e775679b0f7868506ee1042, "Set whether this template type parameter was declared with the\n‘typename’ or ‘class’ keyword.\n\n:Parameter:\n    `withTypename` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_b667c385bf565c56b83d4519d6548383, "Retrieve the depth of the template parameter.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_03ad8f450223511a95c2a70632a4ae3d, "Retrieve the index of the template parameter.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_738b0a3394425a348028ad17973cf43f, "Returns whether this is a parameter pack.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def_static("classof", method_pointer_d3225609ff4b5b75b018705f7c97a40d, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def_static("classof_kind", method_pointer_b5e30d0b734a5efba3df5db450414310, "");

}