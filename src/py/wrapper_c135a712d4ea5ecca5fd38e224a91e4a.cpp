#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_c135a712d4ea5ecca5fd38e224a91e4a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::TemplateArgument::*method_pointer_ffbd90d981775a179d2221a526660b8e)() const = &::clang::TemplateArgument::containsUnexpandedParameterPack;
    class ::clang::ValueDecl  * (::clang::TemplateArgument::*method_pointer_f90518d7138a5197ac71ff15aa0cddda)() const = &::clang::TemplateArgument::getAsDecl;
    enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_6adea8179ed658038fb1adda9c84e659)() const = &::clang::TemplateArgument::getKind;
    bool  (::clang::TemplateArgument::*method_pointer_b97dfd9740c75720a643c79f59a193d9)() const = &::clang::TemplateArgument::isDependent;
    bool  (::clang::TemplateArgument::*method_pointer_e89f92097d9f54d5959958f193bb8f85)() const = &::clang::TemplateArgument::isInstantiationDependent;
    bool  (::clang::TemplateArgument::*method_pointer_b19c005c200b5408839658f4c7466326)() const = &::clang::TemplateArgument::isNull;
    bool  (::clang::TemplateArgument::*method_pointer_56323f54bb73577489b51b2522cf9c7c)() const = &::clang::TemplateArgument::isPackExpansion;
    unsigned int  (::clang::TemplateArgument::*method_pointer_c1cbc5a5b5655c0b80c62be011f83e53)() const = &::clang::TemplateArgument::pack_size;
    struct function_group
    {
        static class ::boost::python::str  function_cc07e56c9e9b50c0a3a84e6ff7d77580(class ::clang::TemplateArgument  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::TemplateArgument, autowig::HeldType< class ::clang::TemplateArgument >, boost::noncopyable > class_c135a712d4ea5ecca5fd38e224a91e4a("TemplateArgument", "", boost::python::no_init);
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_ffbd90d981775a179d2221a526660b8e, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_decl", method_pointer_f90518d7138a5197ac71ff15aa0cddda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_6adea8179ed658038fb1adda9c84e659, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_b97dfd9740c75720a643c79f59a193d9, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_e89f92097d9f54d5959958f193bb8f85, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_b19c005c200b5408839658f4c7466326, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_56323f54bb73577489b51b2522cf9c7c, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_c1cbc5a5b5655c0b80c62be011f83e53, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_cc07e56c9e9b50c0a3a84e6ff7d77580, "");

}