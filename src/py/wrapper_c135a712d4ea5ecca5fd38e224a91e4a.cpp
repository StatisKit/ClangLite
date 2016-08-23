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
    bool  (::clang::TemplateArgument::*method_pointer_b93f745ccd7b5270bf81e77383d2c798)() const = &::clang::TemplateArgument::containsUnexpandedParameterPack;
    class ::clang::TemplateArgument  (*method_pointer_95de05f659c55d9ba60f60903debe507)() = ::clang::TemplateArgument::getEmptyPack;
    enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_65c714ed3f265a2f940aea35809875aa)() const = &::clang::TemplateArgument::getKind;
    class ::clang::TemplateArgument  (::clang::TemplateArgument::*method_pointer_6afcd023764c58dab9a8420ffb10d7fd)() const = &::clang::TemplateArgument::getPackExpansionPattern;
    bool  (::clang::TemplateArgument::*method_pointer_ee9ff17b3ab25776976c732e12ed4ba4)() const = &::clang::TemplateArgument::isDependent;
    bool  (::clang::TemplateArgument::*method_pointer_f5c4e44980845ad4974cb1bb0e8e8966)() const = &::clang::TemplateArgument::isInstantiationDependent;
    bool  (::clang::TemplateArgument::*method_pointer_40ed6cd802895c3082bbd2e8508db9b6)() const = &::clang::TemplateArgument::isNull;
    bool  (::clang::TemplateArgument::*method_pointer_e7c7b7d9c0695b47a0e0faa61c5f1d2c)() const = &::clang::TemplateArgument::isPackExpansion;
    unsigned int  (::clang::TemplateArgument::*method_pointer_31eb3133dea95e5fab6b09016d225a99)() const = &::clang::TemplateArgument::pack_size;
    bool  (::clang::TemplateArgument::*method_pointer_507c529abec15e6fb8a75013f28e0ff4)(class ::clang::TemplateArgument  const &) const = &::clang::TemplateArgument::structurallyEquals;
    struct function_group
    {
        static class ::boost::python::str  function_13de9bd64ec55fb695ed8d9211abd979(class ::clang::TemplateArgument  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::TemplateArgument, autowig::HeldType< class ::clang::TemplateArgument >, boost::noncopyable > class_c135a712d4ea5ecca5fd38e224a91e4a("TemplateArgument", "", boost::python::no_init);
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_b93f745ccd7b5270bf81e77383d2c798, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_empty_pack", method_pointer_95de05f659c55d9ba60f60903debe507, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_65c714ed3f265a2f940aea35809875aa, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_pack_expansion_pattern", method_pointer_6afcd023764c58dab9a8420ffb10d7fd, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_ee9ff17b3ab25776976c732e12ed4ba4, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_f5c4e44980845ad4974cb1bb0e8e8966, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_40ed6cd802895c3082bbd2e8508db9b6, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_e7c7b7d9c0695b47a0e0faa61c5f1d2c, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_31eb3133dea95e5fab6b09016d225a99, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("structurally_equals", method_pointer_507c529abec15e6fb8a75013f28e0ff4, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.staticmethod("get_empty_pack");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_13de9bd64ec55fb695ed8d9211abd979, "");

}