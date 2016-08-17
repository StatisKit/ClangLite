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
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_cfea29fd63f958ecaf8ae1fe28f2c86d)() const = &::clang::TemplateTemplateParmDecl::isExpandedParameterPack;
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_869287d0cc42517bb45e5016d2d1dc7a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_e71cbfb876335e63bfe7f065dc7e3734)() const = &::clang::TemplateTemplateParmDecl::isPackExpansion;
    void  (::clang::TemplateTemplateParmDecl::*method_pointer_9e4cef2cf7c8513f8900a290970cde32)() = &::clang::TemplateTemplateParmDecl::removeDefaultArgument;
    bool  (*method_pointer_fed568bf2468542290258076f88d5c99)(class ::clang::Decl  const *) = ::clang::TemplateTemplateParmDecl::classof;
    bool  (*method_pointer_0461d858cff65116aa8e9aff9ab32af1)(enum ::clang::Decl::Kind ) = ::clang::TemplateTemplateParmDecl::classofKind;
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_fbb18b07b22d534e93c5a32eb9ccc743)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_80bad97b552b5faebcdeedc540c3f1dd)() const = &::clang::TemplateTemplateParmDecl::hasDefaultArgument;
    unsigned int  (::clang::TemplateTemplateParmDecl::*method_pointer_fce98239f1585b769f3ad628cf072f85)() const = &::clang::TemplateTemplateParmDecl::getNumExpansionTemplateParameters;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_14403bb7bd475a598766104975aaee9a)() const = &::clang::TemplateTemplateParmDecl::isParameterPack;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_2a50d3736c0f5e92abf4ea29f89e5463)() const = &::clang::TemplateTemplateParmDecl::defaultArgumentWasInherited;
    boost::python::class_< class ::clang::TemplateTemplateParmDecl, autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_fc38531deabd59f7af56c335d2b2bb1d("TemplateTemplateParmDecl", "", boost::python::no_init);
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_expanded_parameter_pack", method_pointer_cfea29fd63f958ecaf8ae1fe28f2c86d, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_869287d0cc42517bb45e5016d2d1dc7a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_pack_expansion", method_pointer_e71cbfb876335e63bfe7f065dc7e3734, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("remove_default_argument", method_pointer_9e4cef2cf7c8513f8900a290970cde32, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof", method_pointer_fed568bf2468542290258076f88d5c99, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof_kind", method_pointer_0461d858cff65116aa8e9aff9ab32af1, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_fbb18b07b22d534e93c5a32eb9ccc743, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("has_default_argument", method_pointer_80bad97b552b5faebcdeedc540c3f1dd, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_num_expansion_template_parameters", method_pointer_fce98239f1585b769f3ad628cf072f85, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_parameter_pack", method_pointer_14403bb7bd475a598766104975aaee9a, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("default_argument_was_inherited", method_pointer_2a50d3736c0f5e92abf4ea29f89e5463, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof_kind");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("create_deserialized");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}