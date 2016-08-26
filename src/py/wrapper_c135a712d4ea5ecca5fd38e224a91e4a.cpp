#include "_clanglite.h"


namespace autowig
{
}


void wrapper_c135a712d4ea5ecca5fd38e224a91e4a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::TemplateArgument::*method_pointer_84952bb70164588dbc1df9ce4995074b)() const = &::clang::TemplateArgument::containsUnexpandedParameterPack;
    class ::clang::ValueDecl  * (::clang::TemplateArgument::*method_pointer_409cab24a0675d179e016ff0f07534b4)() const = &::clang::TemplateArgument::getAsDecl;
    class ::clang::TemplateArgument  (*method_pointer_afb9f7c0a95d586e8062b0976eea7f87)() = ::clang::TemplateArgument::getEmptyPack;
    enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_da6b047521be5593848280bfc1847bec)() const = &::clang::TemplateArgument::getKind;
    class ::clang::TemplateArgument  (::clang::TemplateArgument::*method_pointer_aff99ac8be40590f8443428f8e09e314)() const = &::clang::TemplateArgument::getPackExpansionPattern;
    bool  (::clang::TemplateArgument::*method_pointer_be5c0e6c2b8c501fa5fd96b5b45c9083)() const = &::clang::TemplateArgument::isDependent;
    bool  (::clang::TemplateArgument::*method_pointer_a5002abeb361577c8a1f48406b7ad9c1)() const = &::clang::TemplateArgument::isInstantiationDependent;
    bool  (::clang::TemplateArgument::*method_pointer_3e339bb2a11356b1ba7d59a82920b017)() const = &::clang::TemplateArgument::isNull;
    bool  (::clang::TemplateArgument::*method_pointer_a4955b4c82325e4d8149d12fa8eaf0aa)() const = &::clang::TemplateArgument::isPackExpansion;
    unsigned int  (::clang::TemplateArgument::*method_pointer_6a1426e1d4bc5b28b19ab5de46df88cd)() const = &::clang::TemplateArgument::pack_size;
    bool  (::clang::TemplateArgument::*method_pointer_0bc7a70a82fb5052be702fb04feeb34e)(class ::clang::TemplateArgument  const &) const = &::clang::TemplateArgument::structurallyEquals;
    struct function_group
    {
        static class ::boost::python::str  function_ee3d7d13ef145ddeb7f0c07d3934e410(class ::clang::TemplateArgument  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::TemplateArgument, autowig::HeldType< class ::clang::TemplateArgument >, boost::noncopyable > class_c135a712d4ea5ecca5fd38e224a91e4a("TemplateArgument", "", boost::python::no_init);
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_84952bb70164588dbc1df9ce4995074b, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_decl", method_pointer_409cab24a0675d179e016ff0f07534b4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_empty_pack", method_pointer_afb9f7c0a95d586e8062b0976eea7f87, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_da6b047521be5593848280bfc1847bec, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_pack_expansion_pattern", method_pointer_aff99ac8be40590f8443428f8e09e314, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_be5c0e6c2b8c501fa5fd96b5b45c9083, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_a5002abeb361577c8a1f48406b7ad9c1, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_3e339bb2a11356b1ba7d59a82920b017, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_a4955b4c82325e4d8149d12fa8eaf0aa, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_6a1426e1d4bc5b28b19ab5de46df88cd, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("structurally_equals", method_pointer_0bc7a70a82fb5052be702fb04feeb34e, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.staticmethod("get_empty_pack");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_ee3d7d13ef145ddeb7f0c07d3934e410, "");

}