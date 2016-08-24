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
    bool  (::clang::TemplateArgument::*method_pointer_ec41ac6570615cafbb2e380e39a8d922)() const = &::clang::TemplateArgument::containsUnexpandedParameterPack;
    class ::clang::ValueDecl  * (::clang::TemplateArgument::*method_pointer_e1a7da27a9ee5074bdaca207cc80d95c)() const = &::clang::TemplateArgument::getAsDecl;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_820080e4f91f54c79a9b228ee49f4716)() const = &::clang::TemplateArgument::getAsType;
    class ::clang::TemplateArgument  (*method_pointer_7011d5fbd90c5360b4eeb4df66e0fc83)() = ::clang::TemplateArgument::getEmptyPack;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_58e45db6b06a5dae99fc8121371d2b64)() const = &::clang::TemplateArgument::getIntegralType;
    enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_583fb362d2e357818d98942b66db43ca)() const = &::clang::TemplateArgument::getKind;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_1ce48f7838be55da9b2f91735b8f3740)() const = &::clang::TemplateArgument::getNullPtrType;
    class ::clang::TemplateArgument  (::clang::TemplateArgument::*method_pointer_fe5e19664c8c5973be5a24f58936118e)() const = &::clang::TemplateArgument::getPackExpansionPattern;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_d7451835495a5941a0c15b949e7ae464)() const = &::clang::TemplateArgument::getParamTypeForDecl;
    bool  (::clang::TemplateArgument::*method_pointer_8e6fa980be4f518e95d6e2e71b59f452)() const = &::clang::TemplateArgument::isDependent;
    bool  (::clang::TemplateArgument::*method_pointer_e210599edc755742bd00b1329640f24c)() const = &::clang::TemplateArgument::isInstantiationDependent;
    bool  (::clang::TemplateArgument::*method_pointer_9a628cf9c47955ed83a1301266f3a03f)() const = &::clang::TemplateArgument::isNull;
    bool  (::clang::TemplateArgument::*method_pointer_326c035935dd504586edd88214a53803)() const = &::clang::TemplateArgument::isPackExpansion;
    unsigned int  (::clang::TemplateArgument::*method_pointer_6de58d7f1f4d5936815d1ec0fb70e614)() const = &::clang::TemplateArgument::pack_size;
    void  (::clang::TemplateArgument::*method_pointer_25200446b64a58a4aa7b027012033620)(class ::clang::QualType ) = &::clang::TemplateArgument::setIntegralType;
    bool  (::clang::TemplateArgument::*method_pointer_0c146a14d6ae53afbe3c40d3dabf24e6)(class ::clang::TemplateArgument  const &) const = &::clang::TemplateArgument::structurallyEquals;
    struct function_group
    {
        static class ::boost::python::str  function_6bbcbb754a1c53dcbf25ee6de6e05df5(class ::clang::TemplateArgument  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::TemplateArgument, autowig::HeldType< class ::clang::TemplateArgument >, boost::noncopyable > class_c135a712d4ea5ecca5fd38e224a91e4a("TemplateArgument", "", boost::python::no_init);
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_ec41ac6570615cafbb2e380e39a8d922, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_decl", method_pointer_e1a7da27a9ee5074bdaca207cc80d95c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_type", method_pointer_820080e4f91f54c79a9b228ee49f4716, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_empty_pack", method_pointer_7011d5fbd90c5360b4eeb4df66e0fc83, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_integral_type", method_pointer_58e45db6b06a5dae99fc8121371d2b64, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_583fb362d2e357818d98942b66db43ca, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_null_ptr_type", method_pointer_1ce48f7838be55da9b2f91735b8f3740, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_pack_expansion_pattern", method_pointer_fe5e19664c8c5973be5a24f58936118e, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_param_type_for_decl", method_pointer_d7451835495a5941a0c15b949e7ae464, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_8e6fa980be4f518e95d6e2e71b59f452, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_e210599edc755742bd00b1329640f24c, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_9a628cf9c47955ed83a1301266f3a03f, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_326c035935dd504586edd88214a53803, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_6de58d7f1f4d5936815d1ec0fb70e614, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("set_integral_type", method_pointer_25200446b64a58a4aa7b027012033620, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("structurally_equals", method_pointer_0c146a14d6ae53afbe3c40d3dabf24e6, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.staticmethod("get_empty_pack");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_6bbcbb754a1c53dcbf25ee6de6e05df5, "");

}