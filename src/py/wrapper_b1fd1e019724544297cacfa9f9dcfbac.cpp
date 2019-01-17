#include "_clanglite.h"

class ::clang::NonTypeTemplateParmDecl * (*method_pointer_79bdab9d1b9d585184632a589f01bdd4)(class ::clang::ASTContext &, unsigned int )= ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
class ::clang::NonTypeTemplateParmDecl * (*method_pointer_461bb2741aab528e9608090cc8863eb9)(class ::clang::ASTContext &, unsigned int , unsigned int )= ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_09b602d8bb5f59a79d14769ff737e078)()const= &::clang::NonTypeTemplateParmDecl::hasDefaultArgument;
class ::clang::SourceLocation  (::clang::NonTypeTemplateParmDecl::*method_pointer_bf8cf7a3a1df5d1096d77f589a90cd22)()const= &::clang::NonTypeTemplateParmDecl::getDefaultArgumentLoc;
bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_c93e5b7bffbb563fb08bf9b3e1d51073)()const= &::clang::NonTypeTemplateParmDecl::defaultArgumentWasInherited;
void  (::clang::NonTypeTemplateParmDecl::*method_pointer_5e018c278b765bbc98d71b41636804c9)()= &::clang::NonTypeTemplateParmDecl::removeDefaultArgument;
bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_0853313d7c135b9e8fe531e9846b8e18)()const= &::clang::NonTypeTemplateParmDecl::isParameterPack;
bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_5251b6702d7f5a4a989c910cfc277918)()const= &::clang::NonTypeTemplateParmDecl::isPackExpansion;
bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_98eb4443db315aa8ab3c65411e454a10)()const= &::clang::NonTypeTemplateParmDecl::isExpandedParameterPack;
unsigned int  (::clang::NonTypeTemplateParmDecl::*method_pointer_6796c3e9586c513a86860517e97e6bfb)()const= &::clang::NonTypeTemplateParmDecl::getNumExpansionTypes;
class ::clang::QualType  (::clang::NonTypeTemplateParmDecl::*method_pointer_6c73bd08544d5adb99b9352db7434806)(unsigned int )const= &::clang::NonTypeTemplateParmDecl::getExpansionType;
bool  (*method_pointer_858e9a2bc4e15d0cb47b0a7f613714cc)(class ::clang::Decl const *)= ::clang::NonTypeTemplateParmDecl::classof;
bool  (*method_pointer_ebe00001997a58fd960a8483ad9d1fc4)(enum ::clang::Decl::Kind )= ::clang::NonTypeTemplateParmDecl::classofKind;


void wrapper_b1fd1e019724544297cacfa9f9dcfbac(pybind11::module& module)
{

    pybind11::class_<class ::clang::NonTypeTemplateParmDecl, autowig::HolderType< class ::clang::NonTypeTemplateParmDecl >::Type, class ::clang::DeclaratorDecl > class_b1fd1e019724544297cacfa9f9dcfbac(module, "NonTypeTemplateParmDecl", "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def_static("create_deserialized", method_pointer_79bdab9d1b9d585184632a589f01bdd4, pybind11::return_value_policy::reference_internal, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def_static("create_deserialized", method_pointer_461bb2741aab528e9608090cc8863eb9, pybind11::return_value_policy::reference_internal, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("has_default_argument", method_pointer_09b602d8bb5f59a79d14769ff737e078, "Determine whether this template parameter has a default argument.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_default_argument_loc", method_pointer_bf8cf7a3a1df5d1096d77f589a90cd22, "Retrieve the location of the default argument, if any.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("default_argument_was_inherited", method_pointer_c93e5b7bffbb563fb08bf9b3e1d51073, "Determines whether the default argument was inherited from a previous\ndeclaration of this template.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("remove_default_argument", method_pointer_5e018c278b765bbc98d71b41636804c9, "Removes the default argument of this template parameter.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_parameter_pack", method_pointer_0853313d7c135b9e8fe531e9846b8e18, "Whether this parameter is a non-type template parameter pack.\n\nIf the parameter is a parameter pack, the type may be a\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_pack_expansion", method_pointer_5251b6702d7f5a4a989c910cfc277918, "Whether this parameter pack is a pack expansion.\n\nA non-type template parameter pack is a pack expansion if its type\ncontains an unexpanded parameter pack. In this case, we will have built\na PackExpansionType wrapping the type.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_expanded_parameter_pack", method_pointer_98eb4443db315aa8ab3c65411e454a10, "Whether this parameter is a non-type template parameter pack that has a\nknown list of different types at different positions.\n\nA parameter pack is an expanded parameter pack when the original\nparameter pack’s type was itself a pack expansion, and that expansion\nhas already been expanded. For example, given:\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_num_expansion_types", method_pointer_6796c3e9586c513a86860517e97e6bfb, "Retrieves the number of expansion types in an expanded parameter pack.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_expansion_type", method_pointer_6c73bd08544d5adb99b9352db7434806, "Retrieve a particular expansion type within an expanded parameter pack.\n\n:Parameter:\n    `I` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def_static("classof", method_pointer_858e9a2bc4e15d0cb47b0a7f613714cc, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def_static("classof_kind", method_pointer_ebe00001997a58fd960a8483ad9d1fc4, "");

}