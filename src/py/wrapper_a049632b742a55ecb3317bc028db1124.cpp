#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_a049632b742a55ecb3317bc028db1124()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_e06853b0369c530fbcfed446e34f8d5d)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_d2814bde33af5555bc4b5632d8e56656)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_c03c06c7dcfe5d3698df4963fe67d46b)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_275502e2f020522f9385ab893d56d210)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_feb56146fc765a729c1c14d9e8c9e679)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_ee9c14dcabec5f41bea0f2c0b1f5fc4a)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_8977a941e2305e6797c009b95744f2d1)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_06fc31ffb0c655d78ded43425bfeabe2)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_ae04304082ef591b8a1836826851353e)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_3ade4aeb44865560ac4e17b2f4daa949)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_48e2ca996e365d6b81054e561fe9fa21)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_f9c57e80d7ee558c96062f92316637e0)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_96613a04d05752f9bb83cfb60ba15dea)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_127a34f48e4959249fdd41779a3737de)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_8004a0983a35591390b1e662522ecb79)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_256e170443665aa0b9c96d8e0b3c1d74)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_2cadd7ea88bf5b6e80ff96d690e75a98)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_c3d00595c2d75b9dad3677e2d28a45d4(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_e06853b0369c530fbcfed446e34f8d5d, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_d2814bde33af5555bc4b5632d8e56656, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_c03c06c7dcfe5d3698df4963fe67d46b, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_275502e2f020522f9385ab893d56d210, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_feb56146fc765a729c1c14d9e8c9e679, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_ee9c14dcabec5f41bea0f2c0b1f5fc4a, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_8977a941e2305e6797c009b95744f2d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_06fc31ffb0c655d78ded43425bfeabe2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_ae04304082ef591b8a1836826851353e, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_3ade4aeb44865560ac4e17b2f4daa949, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_48e2ca996e365d6b81054e561fe9fa21, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_f9c57e80d7ee558c96062f92316637e0, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_96613a04d05752f9bb83cfb60ba15dea, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_127a34f48e4959249fdd41779a3737de, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_8004a0983a35591390b1e662522ecb79, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_256e170443665aa0b9c96d8e0b3c1d74, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_2cadd7ea88bf5b6e80ff96d690e75a98, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_c3d00595c2d75b9dad3677e2d28a45d4, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}