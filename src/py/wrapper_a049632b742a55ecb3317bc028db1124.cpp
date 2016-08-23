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
    bool  (*method_pointer_4ab5fe84939b57dcaec23077fff16fd5)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_fa9105e99ebc5926b85e46f82793385e)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_4e203af4237d5172968f3525ce34de04)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_96db68c22c475aa1b2a275d6270965ea)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_289edacc269759d1800f91ea84e14248)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_1ea93c822edc56eba15949ead794f225)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_2247142d2e9f5708b12ce897568f2c43)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_b8d8eabd63985c61803ade2f7f5659ae)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_573fed65aad0556784e9b7d0de3cce23)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_d9777edf526f5e8f9f443453a17b359f)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_b3665f7d7e6d5bb0954ac287b4e70a7d)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_b9c394e952215873a9af2eff2f167214)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_a6f2aabb58ed5da3b91110b71059de9f)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_61bc355b448c55c4a01f9b8da88e9818)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_aa0b6a78ad62553ca0fb0a04d2f2fc32)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_106443c11e145069a7b1f0b0664a94aa)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_86b0b73d2f2358a49a63a16d56c2dda1)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_5ba3b30cb4035067a760ffe0109b2794(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_4ab5fe84939b57dcaec23077fff16fd5, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_fa9105e99ebc5926b85e46f82793385e, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_4e203af4237d5172968f3525ce34de04, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_96db68c22c475aa1b2a275d6270965ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_289edacc269759d1800f91ea84e14248, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_1ea93c822edc56eba15949ead794f225, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_2247142d2e9f5708b12ce897568f2c43, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_b8d8eabd63985c61803ade2f7f5659ae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_573fed65aad0556784e9b7d0de3cce23, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_d9777edf526f5e8f9f443453a17b359f, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_b3665f7d7e6d5bb0954ac287b4e70a7d, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_b9c394e952215873a9af2eff2f167214, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_a6f2aabb58ed5da3b91110b71059de9f, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_61bc355b448c55c4a01f9b8da88e9818, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_aa0b6a78ad62553ca0fb0a04d2f2fc32, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_106443c11e145069a7b1f0b0664a94aa, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_86b0b73d2f2358a49a63a16d56c2dda1, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_5ba3b30cb4035067a760ffe0109b2794, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}