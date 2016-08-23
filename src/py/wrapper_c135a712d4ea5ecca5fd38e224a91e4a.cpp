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
    bool  (::clang::TemplateArgument::*method_pointer_23bbf22777dd59749609e9e0d89503ff)() const = &::clang::TemplateArgument::containsUnexpandedParameterPack;
    class ::clang::TemplateArgument  (*method_pointer_6c9a487624995934bdcb3d350ce2fa37)() = ::clang::TemplateArgument::getEmptyPack;
    enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_5c52fa009308549e9d39a7b649dbcd1c)() const = &::clang::TemplateArgument::getKind;
    class ::clang::TemplateArgument  (::clang::TemplateArgument::*method_pointer_301092c48b285ca2a59fb56644271d0c)() const = &::clang::TemplateArgument::getPackExpansionPattern;
    bool  (::clang::TemplateArgument::*method_pointer_d04902d9704058b18c1abb884febf651)() const = &::clang::TemplateArgument::isDependent;
    bool  (::clang::TemplateArgument::*method_pointer_ab884a6cbc4f55e6a53ea64386196809)() const = &::clang::TemplateArgument::isInstantiationDependent;
    bool  (::clang::TemplateArgument::*method_pointer_6f04e5783e3f59738b1e96e1a222606f)() const = &::clang::TemplateArgument::isNull;
    bool  (::clang::TemplateArgument::*method_pointer_e5cfe8020351595cbb749cff8e1fd321)() const = &::clang::TemplateArgument::isPackExpansion;
    unsigned int  (::clang::TemplateArgument::*method_pointer_7d4673741a0553c2ac476dce8c5f32ba)() const = &::clang::TemplateArgument::pack_size;
    bool  (::clang::TemplateArgument::*method_pointer_b8312f53828559928e26eef887a579f8)(class ::clang::TemplateArgument  const &) const = &::clang::TemplateArgument::structurallyEquals;
    struct function_group
    {
        static class ::boost::python::str  function_508b785710455a2082d9cd4931b8dbbd(class ::clang::TemplateArgument  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::TemplateArgument, autowig::HeldType< class ::clang::TemplateArgument >, boost::noncopyable > class_c135a712d4ea5ecca5fd38e224a91e4a("TemplateArgument", "", boost::python::no_init);
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_23bbf22777dd59749609e9e0d89503ff, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_empty_pack", method_pointer_6c9a487624995934bdcb3d350ce2fa37, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_5c52fa009308549e9d39a7b649dbcd1c, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_pack_expansion_pattern", method_pointer_301092c48b285ca2a59fb56644271d0c, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_d04902d9704058b18c1abb884febf651, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_ab884a6cbc4f55e6a53ea64386196809, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_6f04e5783e3f59738b1e96e1a222606f, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_e5cfe8020351595cbb749cff8e1fd321, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_7d4673741a0553c2ac476dce8c5f32ba, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("structurally_equals", method_pointer_b8312f53828559928e26eef887a579f8, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.staticmethod("get_empty_pack");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_508b785710455a2082d9cd4931b8dbbd, "");

}