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
    bool  (*method_pointer_60aee4a487b352d9b93bffad5d21c3f9)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_993b9433a8495231bf4919f988ddf3cc)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_c4451afd30b95ca4b510ea1dfafb613f)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_c3ca136049e256dd9f947ca08a832271)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_1bdfe594b0a8513b9d36f80ea17cbffb)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_3721186e49d95e75bdcc1e3ee34cdee3)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_7aa40d673ca1527da41dd1c08660f43f)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_ac9e9af9804f5f129feb9d0a25104053)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_9f762e8c723959cda2a9af66651b5598)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_092b91bfe0765cf6baace34b9ed738d9)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_fcd17b5d4aa359a0b817c2fb6a1689c9)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_6b0c5ec9c3775f67bd07949f63271e60)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_1a6326653197590ba7285302b65dd808)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_94890856d2eb5c5ea2f684f5a6466f3a)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_c3b84605aab2541eb4779fecd1bbdedb)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_596d901df595524a80c7ccb9d17b7b55)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_093be5d51f86547e873c1b5fceede543)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_3df96518b3d75361bff03c8066291413(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_60aee4a487b352d9b93bffad5d21c3f9, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_993b9433a8495231bf4919f988ddf3cc, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_c4451afd30b95ca4b510ea1dfafb613f, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_c3ca136049e256dd9f947ca08a832271, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_1bdfe594b0a8513b9d36f80ea17cbffb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_3721186e49d95e75bdcc1e3ee34cdee3, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_7aa40d673ca1527da41dd1c08660f43f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_ac9e9af9804f5f129feb9d0a25104053, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_9f762e8c723959cda2a9af66651b5598, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_092b91bfe0765cf6baace34b9ed738d9, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_fcd17b5d4aa359a0b817c2fb6a1689c9, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_6b0c5ec9c3775f67bd07949f63271e60, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_1a6326653197590ba7285302b65dd808, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_94890856d2eb5c5ea2f684f5a6466f3a, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_c3b84605aab2541eb4779fecd1bbdedb, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_596d901df595524a80c7ccb9d17b7b55, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_093be5d51f86547e873c1b5fceede543, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_3df96518b3d75361bff03c8066291413, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}