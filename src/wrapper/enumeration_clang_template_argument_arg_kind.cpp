#include <boost/python.hpp>
#include <clang/AST/TemplateBase.h>

void enumeration_clang_template_argument_arg_kind()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        std::string _template_argument_c135a712d4ea5ecca5fd38e224a91e4a_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._template_argument");
        boost::python::object _template_argument_c135a712d4ea5ecca5fd38e224a91e4a_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(_template_argument_c135a712d4ea5ecca5fd38e224a91e4a_name.c_str()))));
        boost::python::scope().attr("_template_argument") = _template_argument_c135a712d4ea5ecca5fd38e224a91e4a_module;
        boost::python::scope _template_argument_c135a712d4ea5ecca5fd38e224a91e4a_scope = _template_argument_c135a712d4ea5ecca5fd38e224a91e4a_module;
        boost::python::enum_< enum ::clang::TemplateArgument::ArgKind >("arg_kind")
            .value("NULL", ::clang::TemplateArgument::ArgKind::Null)
            .value("TYPE", ::clang::TemplateArgument::ArgKind::Type)
            .value("DECLARATION", ::clang::TemplateArgument::ArgKind::Declaration)
            .value("NULL_PTR", ::clang::TemplateArgument::ArgKind::NullPtr)
            .value("INTEGRAL", ::clang::TemplateArgument::ArgKind::Integral)
            .value("TEMPLATE", ::clang::TemplateArgument::ArgKind::Template)
            .value("TEMPLATE_EXPANSION", ::clang::TemplateArgument::ArgKind::TemplateExpansion)
            .value("EXPRESSION", ::clang::TemplateArgument::ArgKind::Expression)
            .value("PACK", ::clang::TemplateArgument::ArgKind::Pack);
}