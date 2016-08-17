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
    bool  (*method_pointer_c5fee75bfe9b53fa8b3f642362554819)(class ::clang::Decl  const *) = ::clang::TemplateTemplateParmDecl::classof;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_0c350fa20f51542d806d912f615cf0d9)() const = &::clang::TemplateTemplateParmDecl::isExpandedParameterPack;
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_ff6d64d151575850be3bb6fe8d5eeddd)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_42e60e5ca3005fb381d53a2977ac676f)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_624bc77d89f051168d2b34812df7bcaf)() const = &::clang::TemplateTemplateParmDecl::isPackExpansion;
    bool  (*method_pointer_4227f3bd63225eaface3f14570e87799)(enum ::clang::Decl::Kind ) = ::clang::TemplateTemplateParmDecl::classofKind;
    void  (::clang::TemplateTemplateParmDecl::*method_pointer_1b40a8073ddc52d2a7a59c366a9538fb)() = &::clang::TemplateTemplateParmDecl::removeDefaultArgument;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_def5101051da53fa87bb5acd7e704968)() const = &::clang::TemplateTemplateParmDecl::isParameterPack;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_cb97cd4d410a54c5ac76ae4892aa60fa)() const = &::clang::TemplateTemplateParmDecl::hasDefaultArgument;
    unsigned int  (::clang::TemplateTemplateParmDecl::*method_pointer_b3d199bfc65a5ea6bae050ff32bdc90c)() const = &::clang::TemplateTemplateParmDecl::getNumExpansionTemplateParameters;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_8d2903550dab51799d424e5e794a7c81)() const = &::clang::TemplateTemplateParmDecl::defaultArgumentWasInherited;
    boost::python::class_< class ::clang::TemplateTemplateParmDecl, autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_fc38531deabd59f7af56c335d2b2bb1d("TemplateTemplateParmDecl", "", boost::python::no_init);
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof", method_pointer_c5fee75bfe9b53fa8b3f642362554819, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_expanded_parameter_pack", method_pointer_0c350fa20f51542d806d912f615cf0d9, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_ff6d64d151575850be3bb6fe8d5eeddd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_42e60e5ca3005fb381d53a2977ac676f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_pack_expansion", method_pointer_624bc77d89f051168d2b34812df7bcaf, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof_kind", method_pointer_4227f3bd63225eaface3f14570e87799, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("remove_default_argument", method_pointer_1b40a8073ddc52d2a7a59c366a9538fb, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_parameter_pack", method_pointer_def5101051da53fa87bb5acd7e704968, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("has_default_argument", method_pointer_cb97cd4d410a54c5ac76ae4892aa60fa, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_num_expansion_template_parameters", method_pointer_b3d199bfc65a5ea6bae050ff32bdc90c, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("default_argument_was_inherited", method_pointer_8d2903550dab51799d424e5e794a7c81, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof_kind");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("create_deserialized");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}