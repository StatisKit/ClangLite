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
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_27690019aba657fbbb1430af78a0b483)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_6f5d69854dda510a81d5c7455ac611e2)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    bool  (*method_pointer_ba94c606d3295777960c9dbac945af6a)(class ::clang::Decl  const *) = ::clang::TemplateTemplateParmDecl::classof;
    bool  (*method_pointer_05c4c83af95d56e38530de48418e509f)(enum ::clang::Decl::Kind ) = ::clang::TemplateTemplateParmDecl::classofKind;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_b3d9c8ec2a4a5364bf0912092578fa98)() const = &::clang::TemplateTemplateParmDecl::defaultArgumentWasInherited;
    class ::clang::SourceLocation  (::clang::TemplateTemplateParmDecl::*method_pointer_62af6e4408575c4a967c163493d38df8)() const = &::clang::TemplateTemplateParmDecl::getDefaultArgumentLoc;
    unsigned int  (::clang::TemplateTemplateParmDecl::*method_pointer_4bd1fcd2ad2f5e16be11beec91a0d85e)() const = &::clang::TemplateTemplateParmDecl::getNumExpansionTemplateParameters;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_a4f9c3175e9d5a2ea876921cf8212c00)() const = &::clang::TemplateTemplateParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_2051e1bdf69d58ccab61fc418be8cbed)() const = &::clang::TemplateTemplateParmDecl::isExpandedParameterPack;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_810706e4ca365b77805eadcbca765eb8)() const = &::clang::TemplateTemplateParmDecl::isPackExpansion;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_9dd54f95d57151f283037a01694b2497)() const = &::clang::TemplateTemplateParmDecl::isParameterPack;
    void  (::clang::TemplateTemplateParmDecl::*method_pointer_4e2258f0d2a55a64829046e5797debc5)() = &::clang::TemplateTemplateParmDecl::removeDefaultArgument;
    boost::python::class_< class ::clang::TemplateTemplateParmDecl, autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_fc38531deabd59f7af56c335d2b2bb1d("TemplateTemplateParmDecl", "", boost::python::no_init);
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_27690019aba657fbbb1430af78a0b483, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_6f5d69854dda510a81d5c7455ac611e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof", method_pointer_ba94c606d3295777960c9dbac945af6a, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof_kind", method_pointer_05c4c83af95d56e38530de48418e509f, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("default_argument_was_inherited", method_pointer_b3d9c8ec2a4a5364bf0912092578fa98, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_default_argument_loc", method_pointer_62af6e4408575c4a967c163493d38df8, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_num_expansion_template_parameters", method_pointer_4bd1fcd2ad2f5e16be11beec91a0d85e, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("has_default_argument", method_pointer_a4f9c3175e9d5a2ea876921cf8212c00, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_expanded_parameter_pack", method_pointer_2051e1bdf69d58ccab61fc418be8cbed, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_pack_expansion", method_pointer_810706e4ca365b77805eadcbca765eb8, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_parameter_pack", method_pointer_9dd54f95d57151f283037a01694b2497, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("remove_default_argument", method_pointer_4e2258f0d2a55a64829046e5797debc5, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof_kind");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("create_deserialized");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}