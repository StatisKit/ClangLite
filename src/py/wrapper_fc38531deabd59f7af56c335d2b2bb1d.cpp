#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_fc38531deabd59f7af56c335d2b2bb1d()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::TemplateTemplateParmDecl::*method_pointer_5637de4b98e2563696f369deedab7105)() = &::clang::TemplateTemplateParmDecl::removeDefaultArgument;
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_ad8ac639b15250d8aeacb7dbd7079fee)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    unsigned int  (::clang::TemplateTemplateParmDecl::*method_pointer_d615b12d31df508884bfe0da5074186d)() const = &::clang::TemplateTemplateParmDecl::getNumExpansionTemplateParameters;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_f181ab9ec4205ffebf0a5d5ff463ca80)() const = &::clang::TemplateTemplateParmDecl::hasDefaultArgument;
    bool  (*method_pointer_4f04eb1b7ff85c44a005179b05ed2834)(enum ::clang::Decl::Kind ) = ::clang::TemplateTemplateParmDecl::classofKind;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_d875f0f4a1ee5e609844f722065c1c26)() const = &::clang::TemplateTemplateParmDecl::isPackExpansion;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_8ae505a1253e58babaabd9c7b3021210)() const = &::clang::TemplateTemplateParmDecl::defaultArgumentWasInherited;
    bool  (*method_pointer_cbf6fbb9e09f5e7eac2515d2ec2032ee)(class ::clang::Decl  const *) = ::clang::TemplateTemplateParmDecl::classof;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_4ab17be3a235526ca22423c5d27851f9)() const = &::clang::TemplateTemplateParmDecl::isExpandedParameterPack;
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_2ce9ad3c26c85d0d8895c2a580348347)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_8e581b6b70f559ca8aa186ea2c913941)() const = &::clang::TemplateTemplateParmDecl::isParameterPack;
    boost::python::class_< class ::clang::TemplateTemplateParmDecl, autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_fc38531deabd59f7af56c335d2b2bb1d("TemplateTemplateParmDecl", "", boost::python::no_init);
    class_fc38531deabd59f7af56c335d2b2bb1d.def("remove_default_argument", method_pointer_5637de4b98e2563696f369deedab7105, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_ad8ac639b15250d8aeacb7dbd7079fee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_num_expansion_template_parameters", method_pointer_d615b12d31df508884bfe0da5074186d, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("has_default_argument", method_pointer_f181ab9ec4205ffebf0a5d5ff463ca80, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof_kind", method_pointer_4f04eb1b7ff85c44a005179b05ed2834, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_pack_expansion", method_pointer_d875f0f4a1ee5e609844f722065c1c26, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("default_argument_was_inherited", method_pointer_8ae505a1253e58babaabd9c7b3021210, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof", method_pointer_cbf6fbb9e09f5e7eac2515d2ec2032ee, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_expanded_parameter_pack", method_pointer_4ab17be3a235526ca22423c5d27851f9, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_2ce9ad3c26c85d0d8895c2a580348347, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_parameter_pack", method_pointer_8e581b6b70f559ca8aa186ea2c913941, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof_kind");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("create_deserialized");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}