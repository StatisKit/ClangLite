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
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_1f826e7b0bb358048521b12418b18812)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_8ebe7ed308035f1cbaaecd1fb73baba3)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    bool  (*method_pointer_3a8a24aabaed55e688ed454395c17373)(class ::clang::Decl  const *) = ::clang::TemplateTemplateParmDecl::classof;
    bool  (*method_pointer_a05f5285780f5d8da54209cd4f69efff)(enum ::clang::Decl::Kind ) = ::clang::TemplateTemplateParmDecl::classofKind;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_8abd6639f37d548c8888e71b49ffcf99)() const = &::clang::TemplateTemplateParmDecl::defaultArgumentWasInherited;
    unsigned int  (::clang::TemplateTemplateParmDecl::*method_pointer_e1d2f4d8838e5825b14898b83aaa3d89)() const = &::clang::TemplateTemplateParmDecl::getNumExpansionTemplateParameters;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_5e73f7f4b62b5db9b0065aac18b4d8bc)() const = &::clang::TemplateTemplateParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_bbaa71d9aabe54418b8c9867b940ffdb)() const = &::clang::TemplateTemplateParmDecl::isExpandedParameterPack;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_23f4292b09545761bfd11cef9e6ef705)() const = &::clang::TemplateTemplateParmDecl::isPackExpansion;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_2871231cfede548e85bea10359a9151a)() const = &::clang::TemplateTemplateParmDecl::isParameterPack;
    void  (::clang::TemplateTemplateParmDecl::*method_pointer_708fcb2f8d0a5b3497ce6ed370e32434)() = &::clang::TemplateTemplateParmDecl::removeDefaultArgument;
    boost::python::class_< class ::clang::TemplateTemplateParmDecl, autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_fc38531deabd59f7af56c335d2b2bb1d("TemplateTemplateParmDecl", "", boost::python::no_init);
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_1f826e7b0bb358048521b12418b18812, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_8ebe7ed308035f1cbaaecd1fb73baba3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof", method_pointer_3a8a24aabaed55e688ed454395c17373, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof_kind", method_pointer_a05f5285780f5d8da54209cd4f69efff, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("default_argument_was_inherited", method_pointer_8abd6639f37d548c8888e71b49ffcf99, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_num_expansion_template_parameters", method_pointer_e1d2f4d8838e5825b14898b83aaa3d89, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("has_default_argument", method_pointer_5e73f7f4b62b5db9b0065aac18b4d8bc, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_expanded_parameter_pack", method_pointer_bbaa71d9aabe54418b8c9867b940ffdb, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_pack_expansion", method_pointer_23f4292b09545761bfd11cef9e6ef705, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_parameter_pack", method_pointer_2871231cfede548e85bea10359a9151a, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("remove_default_argument", method_pointer_708fcb2f8d0a5b3497ce6ed370e32434, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof_kind");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("create_deserialized");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}