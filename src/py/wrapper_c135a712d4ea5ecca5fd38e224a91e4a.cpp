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
    bool  (::clang::TemplateArgument::*method_pointer_a955dcb74f52557a8a2a135078f9ec20)() const = &::clang::TemplateArgument::containsUnexpandedParameterPack;
    class ::clang::ValueDecl  * (::clang::TemplateArgument::*method_pointer_6bf3d04c89f9510b95dde099dbbbe650)() const = &::clang::TemplateArgument::getAsDecl;
    class ::clang::TemplateArgument  (*method_pointer_8d3f7ffccb2458e98f8914ad6d6c3d1d)() = ::clang::TemplateArgument::getEmptyPack;
    enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_69571b8ad3845cd6a5de0f976c0d3141)() const = &::clang::TemplateArgument::getKind;
    class ::clang::TemplateArgument  (::clang::TemplateArgument::*method_pointer_de1b5e250de6586197062c07dbdf6dec)() const = &::clang::TemplateArgument::getPackExpansionPattern;
    bool  (::clang::TemplateArgument::*method_pointer_e48bb16ae91f5782a60f3d4b97aa9f89)() const = &::clang::TemplateArgument::isDependent;
    bool  (::clang::TemplateArgument::*method_pointer_35a803e1b083503bb3f6cce675e5cf40)() const = &::clang::TemplateArgument::isInstantiationDependent;
    bool  (::clang::TemplateArgument::*method_pointer_a529defc289051a58c161e97ef6fb9ee)() const = &::clang::TemplateArgument::isNull;
    bool  (::clang::TemplateArgument::*method_pointer_4f8509dd8a18585cae65cc74799bed26)() const = &::clang::TemplateArgument::isPackExpansion;
    unsigned int  (::clang::TemplateArgument::*method_pointer_ec4bcf71d4c952ffbd7f1c08e8f0aff9)() const = &::clang::TemplateArgument::pack_size;
    bool  (::clang::TemplateArgument::*method_pointer_028df3aac4cc5cca9896baf0fe62b734)(class ::clang::TemplateArgument  const &) const = &::clang::TemplateArgument::structurallyEquals;
    struct function_group
    {
        static class ::boost::python::str  function_2a6991a2dfb55ffeb0c476a81191ba03(class ::clang::TemplateArgument  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::TemplateArgument, autowig::HeldType< class ::clang::TemplateArgument >, boost::noncopyable > class_c135a712d4ea5ecca5fd38e224a91e4a("TemplateArgument", "", boost::python::no_init);
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_a955dcb74f52557a8a2a135078f9ec20, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_decl", method_pointer_6bf3d04c89f9510b95dde099dbbbe650, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_empty_pack", method_pointer_8d3f7ffccb2458e98f8914ad6d6c3d1d, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_69571b8ad3845cd6a5de0f976c0d3141, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_pack_expansion_pattern", method_pointer_de1b5e250de6586197062c07dbdf6dec, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_e48bb16ae91f5782a60f3d4b97aa9f89, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_35a803e1b083503bb3f6cce675e5cf40, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_a529defc289051a58c161e97ef6fb9ee, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_4f8509dd8a18585cae65cc74799bed26, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_ec4bcf71d4c952ffbd7f1c08e8f0aff9, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("structurally_equals", method_pointer_028df3aac4cc5cca9896baf0fe62b734, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.staticmethod("get_empty_pack");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_2a6991a2dfb55ffeb0c476a81191ba03, "");

}