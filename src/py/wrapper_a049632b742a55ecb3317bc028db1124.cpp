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
    bool  (*method_pointer_3b199e4ac4bc5c5abe0d3b6a6f4ae8f0)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_7ef258baed955d15a96314611202f2f9)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_54ba6cf18441527b90e290f5018c73f7)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_6ecbe1da50a05fdda07eb3b7a6e4983d)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_ad984263e3e3553f9e7e1d54c5ca3d61)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_11dacb0a63e25621bce423a8b1767a8e)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_1ea328af3d325ade98b06621a9183eae)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_ff367642e09e5351bf162224c38cad33)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_41286a3a2b905fd496304413064e9400)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_d007a28cd0cb56ec8e582214d37646c7)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_9de1df2533f856189ecddeef03a0a318)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_66ffaf60a3aa563bb0d5a93740df2823)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_e2ad38198450547d98d24f31618517db)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_cc969ce33427549ab31f6bcbe39642c7)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_ea48290c3a6b5b118c5233f8eace79d1)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_4f06da24047e58b98c2a96720f1326f1)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_bdd9557d2b29520b9b40786724d3123d)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_7c5e6fae8bc254aa81b0abad5c6c623a(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_3b199e4ac4bc5c5abe0d3b6a6f4ae8f0, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_7ef258baed955d15a96314611202f2f9, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_54ba6cf18441527b90e290f5018c73f7, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_6ecbe1da50a05fdda07eb3b7a6e4983d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_ad984263e3e3553f9e7e1d54c5ca3d61, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_11dacb0a63e25621bce423a8b1767a8e, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_1ea328af3d325ade98b06621a9183eae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_ff367642e09e5351bf162224c38cad33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_41286a3a2b905fd496304413064e9400, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_d007a28cd0cb56ec8e582214d37646c7, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_9de1df2533f856189ecddeef03a0a318, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_66ffaf60a3aa563bb0d5a93740df2823, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_e2ad38198450547d98d24f31618517db, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_cc969ce33427549ab31f6bcbe39642c7, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_ea48290c3a6b5b118c5233f8eace79d1, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_4f06da24047e58b98c2a96720f1326f1, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_bdd9557d2b29520b9b40786724d3123d, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_7c5e6fae8bc254aa81b0abad5c6c623a, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}