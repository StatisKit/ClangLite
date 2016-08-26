#include "_clanglite.h"


namespace autowig
{
}


void wrapper_fc38531deabd59f7af56c335d2b2bb1d()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_d0ac005e0ad25f4db7168115efe8e662)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_520252bf0a0b54dcba895216eb7ad982)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    bool  (*method_pointer_f2dc1808f1845c54b68f51b40a7e5086)(class ::clang::Decl  const *) = ::clang::TemplateTemplateParmDecl::classof;
    bool  (*method_pointer_be5a5fe848535e5db2461c861e07b531)(enum ::clang::Decl::Kind ) = ::clang::TemplateTemplateParmDecl::classofKind;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_1d38dc39a2175195a2cba7460bd59ac3)() const = &::clang::TemplateTemplateParmDecl::defaultArgumentWasInherited;
    class ::clang::SourceLocation  (::clang::TemplateTemplateParmDecl::*method_pointer_68f97ab6437a5ebeb957681aeadbfccf)() const = &::clang::TemplateTemplateParmDecl::getDefaultArgumentLoc;
    unsigned int  (::clang::TemplateTemplateParmDecl::*method_pointer_823e6d87c2e8541e907aa3590a56da26)() const = &::clang::TemplateTemplateParmDecl::getNumExpansionTemplateParameters;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_a94d09dbc9e654bda2f3473d50ec47bd)() const = &::clang::TemplateTemplateParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_41d86bd920d95312bd31e5ae5624cdb6)() const = &::clang::TemplateTemplateParmDecl::isExpandedParameterPack;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_51f9f9aa98685c869ef6781799c1c083)() const = &::clang::TemplateTemplateParmDecl::isPackExpansion;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_9186374f9dca563bb58602606236e9a3)() const = &::clang::TemplateTemplateParmDecl::isParameterPack;
    void  (::clang::TemplateTemplateParmDecl::*method_pointer_523548a2fe36544da92675e52ba42271)() = &::clang::TemplateTemplateParmDecl::removeDefaultArgument;
    boost::python::class_< class ::clang::TemplateTemplateParmDecl, autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_fc38531deabd59f7af56c335d2b2bb1d("TemplateTemplateParmDecl", "", boost::python::no_init);
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_d0ac005e0ad25f4db7168115efe8e662, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_520252bf0a0b54dcba895216eb7ad982, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof", method_pointer_f2dc1808f1845c54b68f51b40a7e5086, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof_kind", method_pointer_be5a5fe848535e5db2461c861e07b531, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("default_argument_was_inherited", method_pointer_1d38dc39a2175195a2cba7460bd59ac3, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_default_argument_loc", method_pointer_68f97ab6437a5ebeb957681aeadbfccf, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_num_expansion_template_parameters", method_pointer_823e6d87c2e8541e907aa3590a56da26, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("has_default_argument", method_pointer_a94d09dbc9e654bda2f3473d50ec47bd, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_expanded_parameter_pack", method_pointer_41d86bd920d95312bd31e5ae5624cdb6, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_pack_expansion", method_pointer_51f9f9aa98685c869ef6781799c1c083, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_parameter_pack", method_pointer_9186374f9dca563bb58602606236e9a3, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("remove_default_argument", method_pointer_523548a2fe36544da92675e52ba42271, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof_kind");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("create_deserialized");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}