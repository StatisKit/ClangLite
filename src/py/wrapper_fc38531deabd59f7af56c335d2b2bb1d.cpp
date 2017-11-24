#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TemplateTemplateParmDecl const volatile * get_pointer<class ::clang::TemplateTemplateParmDecl const volatile >(class ::clang::TemplateTemplateParmDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fc38531deabd59f7af56c335d2b2bb1d()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateTemplateParmDecl * (*method_pointer_856f8cf56d4c5fce891d92e0d5e840b9)(class ::clang::ASTContext &, unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    class ::clang::TemplateTemplateParmDecl * (*method_pointer_ea363175a905556895b07456c75b475e)(class ::clang::ASTContext &, unsigned int , unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_685eee9688b65a6b9eeb37bf0f1ad269)() const = &::clang::TemplateTemplateParmDecl::isParameterPack;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_ed27afcf88a85f8a8bf2ebdbc508f184)() const = &::clang::TemplateTemplateParmDecl::isPackExpansion;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_068d7c4e6b3a508eb88898caea45d85f)() const = &::clang::TemplateTemplateParmDecl::isExpandedParameterPack;
    unsigned int  (::clang::TemplateTemplateParmDecl::*method_pointer_31b1054cbf9150ce8048f9606dbdbc43)() const = &::clang::TemplateTemplateParmDecl::getNumExpansionTemplateParameters;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_0bb982c7940255908369a6c5a7b74801)() const = &::clang::TemplateTemplateParmDecl::hasDefaultArgument;
    class ::clang::SourceLocation  (::clang::TemplateTemplateParmDecl::*method_pointer_74a7a1686eab58a0a726cab07b0e6650)() const = &::clang::TemplateTemplateParmDecl::getDefaultArgumentLoc;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_4b91bbbc352c575b86731d2611e8c363)() const = &::clang::TemplateTemplateParmDecl::defaultArgumentWasInherited;
    void  (::clang::TemplateTemplateParmDecl::*method_pointer_1e3865ff63b75697a4cfb778e83a2bdc)() = &::clang::TemplateTemplateParmDecl::removeDefaultArgument;
    bool  (*method_pointer_94d244b0be9355b49ca343b39a469fbf)(class ::clang::Decl const *) = ::clang::TemplateTemplateParmDecl::classof;
    bool  (*method_pointer_3dbc1f4a35f05596b0a946d70edf4dfe)(enum ::clang::Decl::Kind ) = ::clang::TemplateTemplateParmDecl::classofKind;
    boost::python::class_< class ::clang::TemplateTemplateParmDecl, autowig::Held< class ::clang::TemplateTemplateParmDecl >::Type, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_fc38531deabd59f7af56c335d2b2bb1d("TemplateTemplateParmDecl", "", boost::python::no_init);
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_856f8cf56d4c5fce891d92e0d5e840b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_ea363175a905556895b07456c75b475e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_parameter_pack", method_pointer_685eee9688b65a6b9eeb37bf0f1ad269, "Whether this template template parameter is a template parameter pack.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_pack_expansion", method_pointer_ed27afcf88a85f8a8bf2ebdbc508f184, "Whether this parameter pack is a pack expansion.\n\nA template template parameter pack is a pack expansion if its template\nparameter list contains an unexpanded parameter pack.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_expanded_parameter_pack", method_pointer_068d7c4e6b3a508eb88898caea45d85f, "Whether this parameter is a template template parameter pack that has a\nknown list of different template parameter lists at different positions.\n\nA parameter pack is an expanded parameter pack when the original\nparameter pack's template parameter list was itself a pack expansion,\nand that expansion has already been expanded. For exampe, given:\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_num_expansion_template_parameters", method_pointer_31b1054cbf9150ce8048f9606dbdbc43, "Retrieves the number of expansion template parameters in an expanded\nparameter pack.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("has_default_argument", method_pointer_0bb982c7940255908369a6c5a7b74801, "Determine whether this template parameter has a default argument.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_default_argument_loc", method_pointer_74a7a1686eab58a0a726cab07b0e6650, "Retrieve the location of the default argument, if any.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("default_argument_was_inherited", method_pointer_4b91bbbc352c575b86731d2611e8c363, "Determines whether the default argument was inherited from a previous\ndeclaration of this template.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("remove_default_argument", method_pointer_1e3865ff63b75697a4cfb778e83a2bdc, "Removes the default argument of this template parameter.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof", method_pointer_94d244b0be9355b49ca343b39a469fbf, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof_kind", method_pointer_3dbc1f4a35f05596b0a946d70edf4dfe, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof_kind");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("create_deserialized");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof");

    if(autowig::Held< class ::clang::TemplateTemplateParmDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TemplateTemplateParmDecl >::Type, autowig::Held< class ::clang::TemplateDecl >::Type >();
    }

}