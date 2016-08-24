#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_fc38531deabd59f7af56c335d2b2bb1d()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_54336673380d5acba6f4a9d586fd8834)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_90d8e1c8f1ec592fb12a8d522dfeb78d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    bool  (*method_pointer_d85a0faa75a6599f8af33f42567c5e67)(class ::clang::Decl  const *) = ::clang::TemplateTemplateParmDecl::classof;
    bool  (*method_pointer_4d829afacf9c5298987668148f6fb2f5)(enum ::clang::Decl::Kind ) = ::clang::TemplateTemplateParmDecl::classofKind;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_8805b9e62b1e527e86939b68fd6b584d)() const = &::clang::TemplateTemplateParmDecl::defaultArgumentWasInherited;
    class ::clang::SourceLocation  (::clang::TemplateTemplateParmDecl::*method_pointer_5cdc113954f85343aabf32ac2c3cbb4c)() const = &::clang::TemplateTemplateParmDecl::getDefaultArgumentLoc;
    unsigned int  (::clang::TemplateTemplateParmDecl::*method_pointer_823b16229121533e928ef5eecd138ee0)() const = &::clang::TemplateTemplateParmDecl::getNumExpansionTemplateParameters;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_94c13c25d9755bf9860eedca3c706b19)() const = &::clang::TemplateTemplateParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_ef183d10004b540594b660e4c410c6c2)() const = &::clang::TemplateTemplateParmDecl::isExpandedParameterPack;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_76ff70754f065caabd1122af7d703b1b)() const = &::clang::TemplateTemplateParmDecl::isPackExpansion;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_82b48c01803451b09f3ddac7f1f55bf0)() const = &::clang::TemplateTemplateParmDecl::isParameterPack;
    void  (::clang::TemplateTemplateParmDecl::*method_pointer_19ba6754819550ff95616cfec567a1da)() = &::clang::TemplateTemplateParmDecl::removeDefaultArgument;
    boost::python::class_< class ::clang::TemplateTemplateParmDecl, autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_fc38531deabd59f7af56c335d2b2bb1d("TemplateTemplateParmDecl", "", boost::python::no_init);
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_54336673380d5acba6f4a9d586fd8834, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_90d8e1c8f1ec592fb12a8d522dfeb78d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof", method_pointer_d85a0faa75a6599f8af33f42567c5e67, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof_kind", method_pointer_4d829afacf9c5298987668148f6fb2f5, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("default_argument_was_inherited", method_pointer_8805b9e62b1e527e86939b68fd6b584d, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_default_argument_loc", method_pointer_5cdc113954f85343aabf32ac2c3cbb4c, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_num_expansion_template_parameters", method_pointer_823b16229121533e928ef5eecd138ee0, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("has_default_argument", method_pointer_94c13c25d9755bf9860eedca3c706b19, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_expanded_parameter_pack", method_pointer_ef183d10004b540594b660e4c410c6c2, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_pack_expansion", method_pointer_76ff70754f065caabd1122af7d703b1b, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_parameter_pack", method_pointer_82b48c01803451b09f3ddac7f1f55bf0, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("remove_default_argument", method_pointer_19ba6754819550ff95616cfec567a1da, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof_kind");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("create_deserialized");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}