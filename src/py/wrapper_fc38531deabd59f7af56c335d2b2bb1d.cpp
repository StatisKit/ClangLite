#include "_clanglite.h"

class ::clang::TemplateTemplateParmDecl * (*method_pointer_856f8cf56d4c5fce891d92e0d5e840b9)(class ::clang::ASTContext &, unsigned int )= ::clang::TemplateTemplateParmDecl::CreateDeserialized;
class ::clang::TemplateTemplateParmDecl * (*method_pointer_ea363175a905556895b07456c75b475e)(class ::clang::ASTContext &, unsigned int , unsigned int )= ::clang::TemplateTemplateParmDecl::CreateDeserialized;
bool  (::clang::TemplateTemplateParmDecl::*method_pointer_685eee9688b65a6b9eeb37bf0f1ad269)()const= &::clang::TemplateTemplateParmDecl::isParameterPack;
bool  (::clang::TemplateTemplateParmDecl::*method_pointer_ed27afcf88a85f8a8bf2ebdbc508f184)()const= &::clang::TemplateTemplateParmDecl::isPackExpansion;
bool  (::clang::TemplateTemplateParmDecl::*method_pointer_068d7c4e6b3a508eb88898caea45d85f)()const= &::clang::TemplateTemplateParmDecl::isExpandedParameterPack;
unsigned int  (::clang::TemplateTemplateParmDecl::*method_pointer_31b1054cbf9150ce8048f9606dbdbc43)()const= &::clang::TemplateTemplateParmDecl::getNumExpansionTemplateParameters;
bool  (::clang::TemplateTemplateParmDecl::*method_pointer_0bb982c7940255908369a6c5a7b74801)()const= &::clang::TemplateTemplateParmDecl::hasDefaultArgument;
class ::clang::SourceLocation  (::clang::TemplateTemplateParmDecl::*method_pointer_74a7a1686eab58a0a726cab07b0e6650)()const= &::clang::TemplateTemplateParmDecl::getDefaultArgumentLoc;
bool  (::clang::TemplateTemplateParmDecl::*method_pointer_4b91bbbc352c575b86731d2611e8c363)()const= &::clang::TemplateTemplateParmDecl::defaultArgumentWasInherited;
void  (::clang::TemplateTemplateParmDecl::*method_pointer_1e3865ff63b75697a4cfb778e83a2bdc)()= &::clang::TemplateTemplateParmDecl::removeDefaultArgument;
bool  (*method_pointer_94d244b0be9355b49ca343b39a469fbf)(class ::clang::Decl const *)= ::clang::TemplateTemplateParmDecl::classof;
bool  (*method_pointer_3dbc1f4a35f05596b0a946d70edf4dfe)(enum ::clang::Decl::Kind )= ::clang::TemplateTemplateParmDecl::classofKind;

namespace autowig {
}

void wrapper_fc38531deabd59f7af56c335d2b2bb1d(pybind11::module& module)
{

    pybind11::class_<class ::clang::TemplateTemplateParmDecl, autowig::HolderType< class ::clang::TemplateTemplateParmDecl >::Type, class ::clang::TemplateDecl > class_fc38531deabd59f7af56c335d2b2bb1d(module, "TemplateTemplateParmDecl", "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def_static("create_deserialized", method_pointer_856f8cf56d4c5fce891d92e0d5e840b9, pybind11::return_value_policy::reference_internal, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def_static("create_deserialized", method_pointer_ea363175a905556895b07456c75b475e, pybind11::return_value_policy::reference_internal, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_parameter_pack", method_pointer_685eee9688b65a6b9eeb37bf0f1ad269, "Whether this template template parameter is a template parameter pack.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_pack_expansion", method_pointer_ed27afcf88a85f8a8bf2ebdbc508f184, "Whether this parameter pack is a pack expansion.\n\nA template template parameter pack is a pack expansion if its template\nparameter list contains an unexpanded parameter pack.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_expanded_parameter_pack", method_pointer_068d7c4e6b3a508eb88898caea45d85f, "Whether this parameter is a template template parameter pack that has a\nknown list of different template parameter lists at different positions.\n\nA parameter pack is an expanded parameter pack when the original\nparameter pack’s template parameter list was itself a pack expansion,\nand that expansion has already been expanded. For exampe, given:\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_num_expansion_template_parameters", method_pointer_31b1054cbf9150ce8048f9606dbdbc43, "Retrieves the number of expansion template parameters in an expanded\nparameter pack.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("has_default_argument", method_pointer_0bb982c7940255908369a6c5a7b74801, "Determine whether this template parameter has a default argument.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_default_argument_loc", method_pointer_74a7a1686eab58a0a726cab07b0e6650, "Retrieve the location of the default argument, if any.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("default_argument_was_inherited", method_pointer_4b91bbbc352c575b86731d2611e8c363, "Determines whether the default argument was inherited from a previous\ndeclaration of this template.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("remove_default_argument", method_pointer_1e3865ff63b75697a4cfb778e83a2bdc, "Removes the default argument of this template parameter.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def_static("classof", method_pointer_94d244b0be9355b49ca343b39a469fbf, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def_static("classof_kind", method_pointer_3dbc1f4a35f05596b0a946d70edf4dfe, "");

}