#include "_clanglite.h"


void wrapper_7bc3191eac5451618d350bf624886bc4(pybind11::module& module)
{

    pybind11::enum_< enum ::clang::TemplateArgument::ArgKind > enum_7bc3191eac5451618d350bf624886bc4(module, "arg_kind");
    enum_7bc3191eac5451618d350bf624886bc4.value("NULL", ::clang::TemplateArgument::Null);
    enum_7bc3191eac5451618d350bf624886bc4.value("TYPE", ::clang::TemplateArgument::Type);
    enum_7bc3191eac5451618d350bf624886bc4.value("DECLARATION", ::clang::TemplateArgument::Declaration);
    enum_7bc3191eac5451618d350bf624886bc4.value("NULL_PTR", ::clang::TemplateArgument::NullPtr);
    enum_7bc3191eac5451618d350bf624886bc4.value("INTEGRAL", ::clang::TemplateArgument::Integral);
    enum_7bc3191eac5451618d350bf624886bc4.value("TEMPLATE", ::clang::TemplateArgument::Template);
    enum_7bc3191eac5451618d350bf624886bc4.value("TEMPLATE_EXPANSION", ::clang::TemplateArgument::TemplateExpansion);
    enum_7bc3191eac5451618d350bf624886bc4.value("EXPRESSION", ::clang::TemplateArgument::Expression);
    enum_7bc3191eac5451618d350bf624886bc4.value("PACK", ::clang::TemplateArgument::Pack);
    enum_7bc3191eac5451618d350bf624886bc4.export_values();

}