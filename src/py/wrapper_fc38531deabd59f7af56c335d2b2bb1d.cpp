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
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_c2938502e6c25d058c4325ed8ffbce7f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    class ::clang::TemplateTemplateParmDecl  * (*method_pointer_74d6b0ab21845a6fa6f3bab6792306c7)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::TemplateTemplateParmDecl::CreateDeserialized;
    bool  (*method_pointer_a6d4747d03295337b480be5ef7f4212d)(class ::clang::Decl  const *) = ::clang::TemplateTemplateParmDecl::classof;
    bool  (*method_pointer_7b732702a42f57a78194e5e9976f9e27)(enum ::clang::Decl::Kind ) = ::clang::TemplateTemplateParmDecl::classofKind;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_c472f8e5ff4b5d5d8640553ec97196a1)() const = &::clang::TemplateTemplateParmDecl::defaultArgumentWasInherited;
    class ::clang::SourceLocation  (::clang::TemplateTemplateParmDecl::*method_pointer_89c12516fde1501b8797a4cb48fdf292)() const = &::clang::TemplateTemplateParmDecl::getDefaultArgumentLoc;
    unsigned int  (::clang::TemplateTemplateParmDecl::*method_pointer_7809a37481495635b02ecc9e6324a0cc)() const = &::clang::TemplateTemplateParmDecl::getNumExpansionTemplateParameters;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_3263cce79b435a16a2f4c8dfc5aa1089)() const = &::clang::TemplateTemplateParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_5562aa68be595328a74b6136ebe3fba7)() const = &::clang::TemplateTemplateParmDecl::isExpandedParameterPack;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_29182e0eb783546085a37c5bd3dab205)() const = &::clang::TemplateTemplateParmDecl::isPackExpansion;
    bool  (::clang::TemplateTemplateParmDecl::*method_pointer_c48da0fa1770580e9f6f69dcf1f93288)() const = &::clang::TemplateTemplateParmDecl::isParameterPack;
    void  (::clang::TemplateTemplateParmDecl::*method_pointer_c495893d43de57a3b0a637579afb8378)() = &::clang::TemplateTemplateParmDecl::removeDefaultArgument;
    boost::python::class_< class ::clang::TemplateTemplateParmDecl, autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_fc38531deabd59f7af56c335d2b2bb1d("TemplateTemplateParmDecl", "", boost::python::no_init);
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_c2938502e6c25d058c4325ed8ffbce7f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("create_deserialized", method_pointer_74d6b0ab21845a6fa6f3bab6792306c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof", method_pointer_a6d4747d03295337b480be5ef7f4212d, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("classof_kind", method_pointer_7b732702a42f57a78194e5e9976f9e27, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("default_argument_was_inherited", method_pointer_c472f8e5ff4b5d5d8640553ec97196a1, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_default_argument_loc", method_pointer_89c12516fde1501b8797a4cb48fdf292, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("get_num_expansion_template_parameters", method_pointer_7809a37481495635b02ecc9e6324a0cc, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("has_default_argument", method_pointer_3263cce79b435a16a2f4c8dfc5aa1089, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_expanded_parameter_pack", method_pointer_5562aa68be595328a74b6136ebe3fba7, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_pack_expansion", method_pointer_29182e0eb783546085a37c5bd3dab205, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("is_parameter_pack", method_pointer_c48da0fa1770580e9f6f69dcf1f93288, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.def("remove_default_argument", method_pointer_c495893d43de57a3b0a637579afb8378, "");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof_kind");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("create_deserialized");
    class_fc38531deabd59f7af56c335d2b2bb1d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTemplateParmDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}