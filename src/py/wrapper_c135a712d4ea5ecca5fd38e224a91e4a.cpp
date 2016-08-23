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
    bool  (::clang::TemplateArgument::*method_pointer_0d3adfb9d97152d4ac779b46654ba6cc)() const = &::clang::TemplateArgument::containsUnexpandedParameterPack;
    class ::clang::ValueDecl  * (::clang::TemplateArgument::*method_pointer_ab2e0c7a2dfd57528b7f515e7b5ca866)() const = &::clang::TemplateArgument::getAsDecl;
    class ::clang::TemplateArgument  (*method_pointer_9c9ed438c2265ec39c435a7bea5c5f9a)() = ::clang::TemplateArgument::getEmptyPack;
    enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_523a8ee449db5fa0af49e8852afdf7f6)() const = &::clang::TemplateArgument::getKind;
    class ::clang::TemplateArgument  (::clang::TemplateArgument::*method_pointer_e98e4fe1d9bc5e98b9dfb0b18a1d82b1)() const = &::clang::TemplateArgument::getPackExpansionPattern;
    bool  (::clang::TemplateArgument::*method_pointer_7213776a038c5aab9ae3442156478460)() const = &::clang::TemplateArgument::isDependent;
    bool  (::clang::TemplateArgument::*method_pointer_76d05d5b24cd5cd7af01380e3312cebc)() const = &::clang::TemplateArgument::isInstantiationDependent;
    bool  (::clang::TemplateArgument::*method_pointer_bdbfb5ed4a0c593f861e1b04e4039f18)() const = &::clang::TemplateArgument::isNull;
    bool  (::clang::TemplateArgument::*method_pointer_05eee85e4e8f5f6a9e7bc7924cd20264)() const = &::clang::TemplateArgument::isPackExpansion;
    unsigned int  (::clang::TemplateArgument::*method_pointer_9ce953bdc3c7559fb624dce3e89c01e8)() const = &::clang::TemplateArgument::pack_size;
    bool  (::clang::TemplateArgument::*method_pointer_034d2a96c68d5e46b0a8efe16c2f92ca)(class ::clang::TemplateArgument  const &) const = &::clang::TemplateArgument::structurallyEquals;
    struct function_group
    {
        static class ::boost::python::str  function_a4fc2475baa053319da27f514b88c640(class ::clang::TemplateArgument  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::TemplateArgument, autowig::HeldType< class ::clang::TemplateArgument >, boost::noncopyable > class_c135a712d4ea5ecca5fd38e224a91e4a("TemplateArgument", "", boost::python::no_init);
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_0d3adfb9d97152d4ac779b46654ba6cc, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_decl", method_pointer_ab2e0c7a2dfd57528b7f515e7b5ca866, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_empty_pack", method_pointer_9c9ed438c2265ec39c435a7bea5c5f9a, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_523a8ee449db5fa0af49e8852afdf7f6, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_pack_expansion_pattern", method_pointer_e98e4fe1d9bc5e98b9dfb0b18a1d82b1, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_7213776a038c5aab9ae3442156478460, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_76d05d5b24cd5cd7af01380e3312cebc, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_bdbfb5ed4a0c593f861e1b04e4039f18, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_05eee85e4e8f5f6a9e7bc7924cd20264, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_9ce953bdc3c7559fb624dce3e89c01e8, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("structurally_equals", method_pointer_034d2a96c68d5e46b0a8efe16c2f92ca, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.staticmethod("get_empty_pack");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_a4fc2475baa053319da27f514b88c640, "");

}