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
    bool  (::clang::TemplateArgument::*method_pointer_978caf5c7c125dcbab1902a0f1807bbc)() const = &::clang::TemplateArgument::containsUnexpandedParameterPack;
    class ::clang::ValueDecl  * (::clang::TemplateArgument::*method_pointer_facdcbbccf865cd9b1a1ee9087df33e8)() const = &::clang::TemplateArgument::getAsDecl;
    class ::clang::TemplateArgument  (*method_pointer_1e5b5cbdeb1155e4971f723088eea613)() = ::clang::TemplateArgument::getEmptyPack;
    enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_a3b0d764269954c581bffe871e8e5b5c)() const = &::clang::TemplateArgument::getKind;
    class ::clang::TemplateArgument  (::clang::TemplateArgument::*method_pointer_7503f73faec855b6aa53a762c215c9d2)() const = &::clang::TemplateArgument::getPackExpansionPattern;
    bool  (::clang::TemplateArgument::*method_pointer_9c8e318821b35f1eb524871db734f85f)() const = &::clang::TemplateArgument::isDependent;
    bool  (::clang::TemplateArgument::*method_pointer_7306e6eba1a85b9e8bc1db36c2afd2ec)() const = &::clang::TemplateArgument::isInstantiationDependent;
    bool  (::clang::TemplateArgument::*method_pointer_c5d21b9d18275b9db6199e71ee6189e1)() const = &::clang::TemplateArgument::isNull;
    bool  (::clang::TemplateArgument::*method_pointer_b3599de3514c5b66b9991bd586043cad)() const = &::clang::TemplateArgument::isPackExpansion;
    unsigned int  (::clang::TemplateArgument::*method_pointer_bca9b9e36bd353069fb68c1aab308cf2)() const = &::clang::TemplateArgument::pack_size;
    bool  (::clang::TemplateArgument::*method_pointer_ba84ed6e38e4575fb4bf01c4c9b763f4)(class ::clang::TemplateArgument  const &) const = &::clang::TemplateArgument::structurallyEquals;
    struct function_group
    {
        static class ::boost::python::str  function_ac7997bef2075163be99c35574784c43(class ::clang::TemplateArgument  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::TemplateArgument, autowig::HeldType< class ::clang::TemplateArgument >, boost::noncopyable > class_c135a712d4ea5ecca5fd38e224a91e4a("TemplateArgument", "", boost::python::no_init);
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_978caf5c7c125dcbab1902a0f1807bbc, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_decl", method_pointer_facdcbbccf865cd9b1a1ee9087df33e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_empty_pack", method_pointer_1e5b5cbdeb1155e4971f723088eea613, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_a3b0d764269954c581bffe871e8e5b5c, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_pack_expansion_pattern", method_pointer_7503f73faec855b6aa53a762c215c9d2, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_9c8e318821b35f1eb524871db734f85f, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_7306e6eba1a85b9e8bc1db36c2afd2ec, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_c5d21b9d18275b9db6199e71ee6189e1, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_b3599de3514c5b66b9991bd586043cad, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_bca9b9e36bd353069fb68c1aab308cf2, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("structurally_equals", method_pointer_ba84ed6e38e4575fb4bf01c4c9b763f4, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.staticmethod("get_empty_pack");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_ac7997bef2075163be99c35574784c43, "");

}