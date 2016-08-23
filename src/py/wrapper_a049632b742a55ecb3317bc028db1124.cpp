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
    bool  (*method_pointer_10820d8b6fa55e73a10ebd916c16515e)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_cb3bca7a5ad05c3c9c213c27296a546e)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_e167864bf2b15b1e8c5c9f8ffd88243c)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_50e7ad26f15f534799b990084b20da20)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_5bd35529832e5088a4664da3c3e911bc)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_4e95ea719b925383856aea2c2ad642b2)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_6193bfc2b35550a5b138b3b4787fca77)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_c1d491ea3fa75ea4949a6a08faae92a0)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_9be63ed499b25ac5bcc5922cc62c435b)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_53088b89ad1a5bce8f91d832799ca2c3)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_488d3f4325ac5c62a31a6f31228b0096)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_3a2e18aab8ac56b2a412f31cc59fd350)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_67d3f9bbc5d7567ba87241b868735ed4)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_f6f6d7663a4552f9811cc15274d5a1e9)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_ef88e30ed4b259dc8a7c955aaee6ebb5)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_938cea0e13945cd3862db5c5d06abee2)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_e72b2739eb0751f69c2271a874c28945(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_10820d8b6fa55e73a10ebd916c16515e, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_cb3bca7a5ad05c3c9c213c27296a546e, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_e167864bf2b15b1e8c5c9f8ffd88243c, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_50e7ad26f15f534799b990084b20da20, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_5bd35529832e5088a4664da3c3e911bc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_4e95ea719b925383856aea2c2ad642b2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_6193bfc2b35550a5b138b3b4787fca77, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_c1d491ea3fa75ea4949a6a08faae92a0, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_9be63ed499b25ac5bcc5922cc62c435b, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_53088b89ad1a5bce8f91d832799ca2c3, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_488d3f4325ac5c62a31a6f31228b0096, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_3a2e18aab8ac56b2a412f31cc59fd350, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_67d3f9bbc5d7567ba87241b868735ed4, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_f6f6d7663a4552f9811cc15274d5a1e9, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_ef88e30ed4b259dc8a7c955aaee6ebb5, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_938cea0e13945cd3862db5c5d06abee2, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_e72b2739eb0751f69c2271a874c28945, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}