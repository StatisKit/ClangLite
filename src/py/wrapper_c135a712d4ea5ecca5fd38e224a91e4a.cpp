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
    bool  (::clang::TemplateArgument::*method_pointer_08867c9269dc59629f4972f30e09ad05)() const = &::clang::TemplateArgument::containsUnexpandedParameterPack;
    class ::clang::ValueDecl  * (::clang::TemplateArgument::*method_pointer_1ba088fd3f755b43ab39450a38fe9102)() const = &::clang::TemplateArgument::getAsDecl;
    enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_fa4b06d3030a5234b1ed7efa8b9f36fb)() const = &::clang::TemplateArgument::getKind;
    bool  (::clang::TemplateArgument::*method_pointer_001ae991b3ae5f9db7c3debb1eb3bf9d)() const = &::clang::TemplateArgument::isDependent;
    bool  (::clang::TemplateArgument::*method_pointer_f1baa4bb86055e7bbc2ec3d8f5a6008f)() const = &::clang::TemplateArgument::isInstantiationDependent;
    bool  (::clang::TemplateArgument::*method_pointer_3bb9328786195ad481bd6aa00510152b)() const = &::clang::TemplateArgument::isNull;
    bool  (::clang::TemplateArgument::*method_pointer_3857ec81faf85eb5a1c70480f18a8ec8)() const = &::clang::TemplateArgument::isPackExpansion;
    unsigned int  (::clang::TemplateArgument::*method_pointer_08ac79df61c5597ea3a9bc139003ca90)() const = &::clang::TemplateArgument::pack_size;
    struct function_group
    {
        static class ::boost::python::str  function_99c89cc5e2375a8daef933a8aff2972b(class ::clang::TemplateArgument  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::TemplateArgument, autowig::HeldType< class ::clang::TemplateArgument >, boost::noncopyable > class_c135a712d4ea5ecca5fd38e224a91e4a("TemplateArgument", "", boost::python::no_init);
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_08867c9269dc59629f4972f30e09ad05, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_decl", method_pointer_1ba088fd3f755b43ab39450a38fe9102, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_fa4b06d3030a5234b1ed7efa8b9f36fb, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_001ae991b3ae5f9db7c3debb1eb3bf9d, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_f1baa4bb86055e7bbc2ec3d8f5a6008f, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_3bb9328786195ad481bd6aa00510152b, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_3857ec81faf85eb5a1c70480f18a8ec8, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_08ac79df61c5597ea3a9bc139003ca90, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_99c89cc5e2375a8daef933a8aff2972b, "");

}