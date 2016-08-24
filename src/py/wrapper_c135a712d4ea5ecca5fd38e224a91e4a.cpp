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
    bool  (::clang::TemplateArgument::*method_pointer_5ce35b22a63e512ca581c0d0c403746f)() const = &::clang::TemplateArgument::containsUnexpandedParameterPack;
    class ::clang::ValueDecl  * (::clang::TemplateArgument::*method_pointer_b48f6394dd11563e8c8cb9bbeefb8c4d)() const = &::clang::TemplateArgument::getAsDecl;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_a1aacdd1a691552c9b0c6db57e53343e)() const = &::clang::TemplateArgument::getAsType;
    class ::clang::TemplateArgument  (*method_pointer_7687ce53b3515d1592835895626aa3ca)() = ::clang::TemplateArgument::getEmptyPack;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_920c8509bcf556b68efcbdb68b544874)() const = &::clang::TemplateArgument::getIntegralType;
    enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_5ced4cf3cf7651609183b2ee4f3b7707)() const = &::clang::TemplateArgument::getKind;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_b8048ede516d5a4789829769392a9d31)() const = &::clang::TemplateArgument::getNullPtrType;
    class ::clang::TemplateArgument  (::clang::TemplateArgument::*method_pointer_d7456012b83e5a21991a593dd2b3663a)() const = &::clang::TemplateArgument::getPackExpansionPattern;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_56d3f69e120b559295c851e015e9f771)() const = &::clang::TemplateArgument::getParamTypeForDecl;
    bool  (::clang::TemplateArgument::*method_pointer_da2bd1c9618b5c019805f7c27d365e3d)() const = &::clang::TemplateArgument::isDependent;
    bool  (::clang::TemplateArgument::*method_pointer_b5fd7304019f58c2b408c8d49c35ea7e)() const = &::clang::TemplateArgument::isInstantiationDependent;
    bool  (::clang::TemplateArgument::*method_pointer_c84a1f1001d5539fb435677d4ee10f63)() const = &::clang::TemplateArgument::isNull;
    bool  (::clang::TemplateArgument::*method_pointer_1da2a0f00f755c97b881106c06351c77)() const = &::clang::TemplateArgument::isPackExpansion;
    unsigned int  (::clang::TemplateArgument::*method_pointer_b844730768fc526bac93fd90c2d6c513)() const = &::clang::TemplateArgument::pack_size;
    void  (::clang::TemplateArgument::*method_pointer_53aea6f01fce50239ea4944cdb2aad12)(class ::clang::QualType ) = &::clang::TemplateArgument::setIntegralType;
    bool  (::clang::TemplateArgument::*method_pointer_4476815d28945dafab7d8e5832ea547a)(class ::clang::TemplateArgument  const &) const = &::clang::TemplateArgument::structurallyEquals;
    struct function_group
    {
        static class ::boost::python::str  function_e38cf8c0ae9d5128a842aa440fab2a82(class ::clang::TemplateArgument  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::TemplateArgument, autowig::HeldType< class ::clang::TemplateArgument > > class_c135a712d4ea5ecca5fd38e224a91e4a("TemplateArgument", "", boost::python::no_init);
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_5ce35b22a63e512ca581c0d0c403746f, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_decl", method_pointer_b48f6394dd11563e8c8cb9bbeefb8c4d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_type", method_pointer_a1aacdd1a691552c9b0c6db57e53343e, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_empty_pack", method_pointer_7687ce53b3515d1592835895626aa3ca, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_integral_type", method_pointer_920c8509bcf556b68efcbdb68b544874, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_5ced4cf3cf7651609183b2ee4f3b7707, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_null_ptr_type", method_pointer_b8048ede516d5a4789829769392a9d31, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_pack_expansion_pattern", method_pointer_d7456012b83e5a21991a593dd2b3663a, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_param_type_for_decl", method_pointer_56d3f69e120b559295c851e015e9f771, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_da2bd1c9618b5c019805f7c27d365e3d, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_b5fd7304019f58c2b408c8d49c35ea7e, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_c84a1f1001d5539fb435677d4ee10f63, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_1da2a0f00f755c97b881106c06351c77, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_b844730768fc526bac93fd90c2d6c513, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("set_integral_type", method_pointer_53aea6f01fce50239ea4944cdb2aad12, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("structurally_equals", method_pointer_4476815d28945dafab7d8e5832ea547a, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.staticmethod("get_empty_pack");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_e38cf8c0ae9d5128a842aa440fab2a82, "");

}