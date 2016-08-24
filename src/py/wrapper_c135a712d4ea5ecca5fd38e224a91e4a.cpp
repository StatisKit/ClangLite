#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_c135a712d4ea5ecca5fd38e224a91e4a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::TemplateArgument::*method_pointer_2d48fb2792d05329ad428727b965e53d)() const = &::clang::TemplateArgument::containsUnexpandedParameterPack;
    class ::clang::ValueDecl  * (::clang::TemplateArgument::*method_pointer_3af5423140035b78864ccda349f6366c)() const = &::clang::TemplateArgument::getAsDecl;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_f81e142be4b15c42a0e5fe4023d3cf11)() const = &::clang::TemplateArgument::getAsType;
    class ::clang::TemplateArgument  (*method_pointer_6aaf4e697c5d5602b33168494f3e8a98)() = ::clang::TemplateArgument::getEmptyPack;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_31c32c435cae5325acf8d82b1707df72)() const = &::clang::TemplateArgument::getIntegralType;
    enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_d4d453aadc3e589fbb4b180feb085f8a)() const = &::clang::TemplateArgument::getKind;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_c4937210aa0c5211bb16935b14ec68ae)() const = &::clang::TemplateArgument::getNullPtrType;
    class ::clang::TemplateArgument  (::clang::TemplateArgument::*method_pointer_e27b42bf2ec357e6b4afe70c5011df4b)() const = &::clang::TemplateArgument::getPackExpansionPattern;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_6d15c48a01245da09fc8d7fdd07d439b)() const = &::clang::TemplateArgument::getParamTypeForDecl;
    bool  (::clang::TemplateArgument::*method_pointer_9d79cfbe72a25b9aa0196fe0f3f8184d)() const = &::clang::TemplateArgument::isDependent;
    bool  (::clang::TemplateArgument::*method_pointer_1c92e56110015f309ab36b62e6fe0379)() const = &::clang::TemplateArgument::isInstantiationDependent;
    bool  (::clang::TemplateArgument::*method_pointer_494506298d73598db8224d8cddb12503)() const = &::clang::TemplateArgument::isNull;
    bool  (::clang::TemplateArgument::*method_pointer_65ea0104d5075dccbac9d90b00dd6cb2)() const = &::clang::TemplateArgument::isPackExpansion;
    unsigned int  (::clang::TemplateArgument::*method_pointer_1e6371fbc79c50f6a6d168bd49963e4b)() const = &::clang::TemplateArgument::pack_size;
    void  (::clang::TemplateArgument::*method_pointer_5cd74e0e3fc956e1b2bca27c0dd2d019)(class ::clang::QualType ) = &::clang::TemplateArgument::setIntegralType;
    bool  (::clang::TemplateArgument::*method_pointer_b3a698d0c01d51ec8faa929dd3f25af1)(class ::clang::TemplateArgument  const &) const = &::clang::TemplateArgument::structurallyEquals;
    struct function_group
    {
        static class ::boost::python::str  function_a3fdc9069f2353afad02d697501f6711(class ::clang::TemplateArgument  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::TemplateArgument, autowig::HeldType< class ::clang::TemplateArgument >, boost::noncopyable > class_c135a712d4ea5ecca5fd38e224a91e4a("TemplateArgument", "", boost::python::no_init);
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_2d48fb2792d05329ad428727b965e53d, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_decl", method_pointer_3af5423140035b78864ccda349f6366c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_type", method_pointer_f81e142be4b15c42a0e5fe4023d3cf11, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_empty_pack", method_pointer_6aaf4e697c5d5602b33168494f3e8a98, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_integral_type", method_pointer_31c32c435cae5325acf8d82b1707df72, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_d4d453aadc3e589fbb4b180feb085f8a, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_null_ptr_type", method_pointer_c4937210aa0c5211bb16935b14ec68ae, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_pack_expansion_pattern", method_pointer_e27b42bf2ec357e6b4afe70c5011df4b, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_param_type_for_decl", method_pointer_6d15c48a01245da09fc8d7fdd07d439b, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_9d79cfbe72a25b9aa0196fe0f3f8184d, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_1c92e56110015f309ab36b62e6fe0379, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_494506298d73598db8224d8cddb12503, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_65ea0104d5075dccbac9d90b00dd6cb2, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_1e6371fbc79c50f6a6d168bd49963e4b, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("set_integral_type", method_pointer_5cd74e0e3fc956e1b2bca27c0dd2d019, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("structurally_equals", method_pointer_b3a698d0c01d51ec8faa929dd3f25af1, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.staticmethod("get_empty_pack");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_a3fdc9069f2353afad02d697501f6711, "");

}