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
    bool  (*method_pointer_80b829a5d9ca51d48260faea2fec21a8)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_2400f1b7f2a35215ae07b50329165cb5)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_ddf7b1095aff57c2a92fb2905d1153b3)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_ebf103f7478c5e979ee2c3b55242f37b)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_086c2ef6c37e518686025419df985b50)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_d4589515157854f3a9637dadddfacc6d)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_968bfbbf2a4c5e26b335013e41a3318b)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_59158b30f7b051c3ae36e87364c5636b)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_e46da43d37ae5a469715e5f59a2aedf1)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_1d98f49c23625581a503cffd1726c4b1)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_994ec3a15d4c5da5aad300227f126a61)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_56b40f17e9fb52b9ab7e9023b6bd933a)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_3ee4bf0e889f58aab558015814dc577d)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_4744e052ec5d5f01be68db8b5ec8938c)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_db0428befe4e57f58691d4a20219becc)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_3a447c4212445248a54e7bf87b50040d)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_e0083e6933f25f8e806b849af1613e54)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_02ca212ee7165fb18ba882401eb75568(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_80b829a5d9ca51d48260faea2fec21a8, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_2400f1b7f2a35215ae07b50329165cb5, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_ddf7b1095aff57c2a92fb2905d1153b3, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_ebf103f7478c5e979ee2c3b55242f37b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_086c2ef6c37e518686025419df985b50, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_d4589515157854f3a9637dadddfacc6d, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_968bfbbf2a4c5e26b335013e41a3318b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_59158b30f7b051c3ae36e87364c5636b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_e46da43d37ae5a469715e5f59a2aedf1, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_1d98f49c23625581a503cffd1726c4b1, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_994ec3a15d4c5da5aad300227f126a61, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_56b40f17e9fb52b9ab7e9023b6bd933a, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_3ee4bf0e889f58aab558015814dc577d, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_4744e052ec5d5f01be68db8b5ec8938c, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_db0428befe4e57f58691d4a20219becc, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_3a447c4212445248a54e7bf87b50040d, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_e0083e6933f25f8e806b849af1613e54, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_02ca212ee7165fb18ba882401eb75568, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}