#include "_clanglite.h"


namespace autowig
{
}


void wrapper_a049632b742a55ecb3317bc028db1124()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_a399caa8f15b53f584f956204cc65798)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_5b64e8e9b09b52a180b192d0445822bb)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_4e8e65ada8935e67bd43d48706d8342a)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_3947a83b764352aaab1a2e57431964af)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_b589a7ec4030504dba811e5a09b51f7e)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_a6b746bc6c6957cdbc5a04869dd6b158)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_13bc1477ce9f517b93348ea19f46d3e4)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_0722d9f73a605d999e4a2cae48aa9581)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_8570a839b43a52efada5083de1e6abf3)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_bfb03d8997dd5e1694a793021af91e22)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_e2cf05c5080555b9b4c6da4f90d7fbfe)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_90508542fdea57b28549a8dbec73b09c)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_609393c98d3e58148277f405f812cef3)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_5d91595e35005afe8b128a206aa90a1b)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_8ab2824420ad52de9d7ba1f4fc0778b6)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_9dfa6aa0c57e52218611d3f2bbab4630)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_0de9c871b60455cc8a5f4f6c28ab805b)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_f65b359446eb5018964b5f0103f1854d(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_a399caa8f15b53f584f956204cc65798, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_5b64e8e9b09b52a180b192d0445822bb, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_4e8e65ada8935e67bd43d48706d8342a, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_3947a83b764352aaab1a2e57431964af, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_b589a7ec4030504dba811e5a09b51f7e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_a6b746bc6c6957cdbc5a04869dd6b158, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_13bc1477ce9f517b93348ea19f46d3e4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_0722d9f73a605d999e4a2cae48aa9581, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_8570a839b43a52efada5083de1e6abf3, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_bfb03d8997dd5e1694a793021af91e22, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_e2cf05c5080555b9b4c6da4f90d7fbfe, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_90508542fdea57b28549a8dbec73b09c, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_609393c98d3e58148277f405f812cef3, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_5d91595e35005afe8b128a206aa90a1b, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_8ab2824420ad52de9d7ba1f4fc0778b6, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_9dfa6aa0c57e52218611d3f2bbab4630, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_0de9c871b60455cc8a5f4f6c28ab805b, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_f65b359446eb5018964b5f0103f1854d, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}