#include "_clanglite.h"


void wrapper_7bc3191eac5451618d350bf624886bc4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_c135a712d4ea5ecca5fd38e224a91e4a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._template_argument");
    boost::python::object module_c135a712d4ea5ecca5fd38e224a91e4a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c135a712d4ea5ecca5fd38e224a91e4a.c_str()))));
    boost::python::scope().attr("_template_argument") = module_c135a712d4ea5ecca5fd38e224a91e4a;
    boost::python::scope scope_c135a712d4ea5ecca5fd38e224a91e4a = module_c135a712d4ea5ecca5fd38e224a91e4a;
    boost::python::enum_< enum ::clang::TemplateArgument::ArgKind > enum_7bc3191eac5451618d350bf624886bc4("arg_kind");
    enum_7bc3191eac5451618d350bf624886bc4.value("NULL", ::clang::TemplateArgument::Null);
    enum_7bc3191eac5451618d350bf624886bc4.value("TYPE", ::clang::TemplateArgument::Type);
    enum_7bc3191eac5451618d350bf624886bc4.value("DECLARATION", ::clang::TemplateArgument::Declaration);
    enum_7bc3191eac5451618d350bf624886bc4.value("NULL_PTR", ::clang::TemplateArgument::NullPtr);
    enum_7bc3191eac5451618d350bf624886bc4.value("INTEGRAL", ::clang::TemplateArgument::Integral);
    enum_7bc3191eac5451618d350bf624886bc4.value("TEMPLATE", ::clang::TemplateArgument::Template);
    enum_7bc3191eac5451618d350bf624886bc4.value("TEMPLATE_EXPANSION", ::clang::TemplateArgument::TemplateExpansion);
    enum_7bc3191eac5451618d350bf624886bc4.value("EXPRESSION", ::clang::TemplateArgument::Expression);
    enum_7bc3191eac5451618d350bf624886bc4.value("PACK", ::clang::TemplateArgument::Pack);

}