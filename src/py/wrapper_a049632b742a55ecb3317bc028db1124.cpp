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
    bool  (*method_pointer_1e168c5eb39b5fa3b13e042acc500981)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_4afa57204c575cdbbf8f23dfd152e535)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_5ab66b1cefd759a48fb4ca9f53311c17)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_41df0dc10bb3592581fe42be0d09f90d)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_461805faa2fc5ed4a4d06631b39b1a87)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_bc63e57033f45b01a16c5b197926316c)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_a1e9c39470215ad387ee5ce8f95214fe)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_5acba26a97e65f09ab9a84c579a52bf1)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_5f07eccdb09b5318919ddae248c62ae7)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_b8da55b683755570b8da548fc2ffc94b)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_e6c85efd814255bc9f630894727683bc)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_62bac7b49df257c88dd86610fff70dc6)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_778126ebb97e5147bb6a8599d641c275)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_262d7e4712f55aee8c79872207b04e53)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_883f5bba38165bba8e4759c9fb0a8ce5)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_5bd535f364bb5b649d1ee4c2a3fd2d44)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_9f9ac9c1d1de5661bcb54f2f0148dbb4)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_c3b358bb3258595ca66b3c3b5f95cdf3(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_1e168c5eb39b5fa3b13e042acc500981, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_4afa57204c575cdbbf8f23dfd152e535, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_5ab66b1cefd759a48fb4ca9f53311c17, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_41df0dc10bb3592581fe42be0d09f90d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_461805faa2fc5ed4a4d06631b39b1a87, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_bc63e57033f45b01a16c5b197926316c, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_a1e9c39470215ad387ee5ce8f95214fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_5acba26a97e65f09ab9a84c579a52bf1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_5f07eccdb09b5318919ddae248c62ae7, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_b8da55b683755570b8da548fc2ffc94b, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_e6c85efd814255bc9f630894727683bc, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_62bac7b49df257c88dd86610fff70dc6, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_778126ebb97e5147bb6a8599d641c275, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_262d7e4712f55aee8c79872207b04e53, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_883f5bba38165bba8e4759c9fb0a8ce5, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_5bd535f364bb5b649d1ee4c2a3fd2d44, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_9f9ac9c1d1de5661bcb54f2f0148dbb4, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_c3b358bb3258595ca66b3c3b5f95cdf3, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}