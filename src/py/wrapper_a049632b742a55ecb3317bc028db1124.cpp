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
    bool  (*method_pointer_366506c6ab4e5a09aee9824521857a88)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_f8554b4e64725d18b656541e84831923)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_a08927dd1dd45d8c948b56ad0088a0f3)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_7a15751f2c64584a9e33548e3118593a)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_311b4bdb6edf5fccb68524f9ee1f9162)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_09a1dc7e96a25ad1a70d6900ca2f8ecf)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_bb52061e7398584ab5300c6b26c9d9f9)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_e4deed28699d5cd9b5e7930ad61705ef)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_4760beee067750e684eb4c0f3d56a715)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_b2a523bd5e255713afc191a29ff08b4e)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_d1b3ea251c6a5c0bb02ebc730d32fd28)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_6aa7ffcccf1e57949860c4c516a11ec4)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_c6ed3f73c8895eeab52c17fda7fb4d78)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_b17d896052e159c2bd11452b498635b0)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_2677cfcf8cf45e7f9479b1b2263b4e54)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_4de6c6ff6f7a504d860ff76e310dbdd0)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_436e1bef56435db4851e60d01b04351c(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_366506c6ab4e5a09aee9824521857a88, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_f8554b4e64725d18b656541e84831923, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_a08927dd1dd45d8c948b56ad0088a0f3, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_7a15751f2c64584a9e33548e3118593a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_311b4bdb6edf5fccb68524f9ee1f9162, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_09a1dc7e96a25ad1a70d6900ca2f8ecf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_bb52061e7398584ab5300c6b26c9d9f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_e4deed28699d5cd9b5e7930ad61705ef, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_4760beee067750e684eb4c0f3d56a715, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_b2a523bd5e255713afc191a29ff08b4e, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_d1b3ea251c6a5c0bb02ebc730d32fd28, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_6aa7ffcccf1e57949860c4c516a11ec4, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_c6ed3f73c8895eeab52c17fda7fb4d78, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_b17d896052e159c2bd11452b498635b0, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_2677cfcf8cf45e7f9479b1b2263b4e54, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_4de6c6ff6f7a504d860ff76e310dbdd0, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_436e1bef56435db4851e60d01b04351c, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}