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
    bool  (*method_pointer_8538934bbd8c5fd795723f9a6c4994c5)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_a339c6466cb05ff89b83f389180c5ec7)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_882cff7778ab5cc9b61f4fce2375a67d)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_7ef9a7ecfae55febb5e842bc6b9e54a1)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_966e7e7d4dae572d8ce784b176dbb77a)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_cdcbb92fb25155fd9709e822d96ecc85)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_b8a46a0b469e58b1b850b3518637d030)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_b7bbe6c2966957d8b2e66f5668470d21)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_d858a78e1d615cad81e93fbfd752dc6b)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_bb61ed85da7b5dc998c111f5ddd78d6f)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_1bf5aaa32d545a2a8ab2a317a921de3b)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_aab61f12448151639db1496089d7d50e)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_6dabb439005955e3aa04296de5c55eec)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_5ef41b419c4f522b88cebba918e5e9bb)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_8ffcabb0982d512dbd7ab5fd9c3c9a7f)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_d4c2358eb5135e1fa17f739b9300b1e6)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_bef73f1323dd50c0aa957c027c1ea059)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_d0a7fa02f7f6579db789f20e71850258(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_8538934bbd8c5fd795723f9a6c4994c5, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_a339c6466cb05ff89b83f389180c5ec7, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_882cff7778ab5cc9b61f4fce2375a67d, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_7ef9a7ecfae55febb5e842bc6b9e54a1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_966e7e7d4dae572d8ce784b176dbb77a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_cdcbb92fb25155fd9709e822d96ecc85, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_b8a46a0b469e58b1b850b3518637d030, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_b7bbe6c2966957d8b2e66f5668470d21, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_d858a78e1d615cad81e93fbfd752dc6b, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_bb61ed85da7b5dc998c111f5ddd78d6f, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_1bf5aaa32d545a2a8ab2a317a921de3b, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_aab61f12448151639db1496089d7d50e, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_6dabb439005955e3aa04296de5c55eec, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_5ef41b419c4f522b88cebba918e5e9bb, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_8ffcabb0982d512dbd7ab5fd9c3c9a7f, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_d4c2358eb5135e1fa17f739b9300b1e6, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_bef73f1323dd50c0aa957c027c1ea059, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_d0a7fa02f7f6579db789f20e71850258, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}