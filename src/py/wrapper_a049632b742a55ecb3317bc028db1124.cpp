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
    bool  (*method_pointer_d44f948587d651cfb9961755fa46baf7)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_73e8349400685eb984af1ccd809ab0ea)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_99caea73ccd456dab13082b2a46bbf0f)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_d57a9bf7663654cbb228ce122c7c9524)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_9e8fdef8dc6f56ca862dd61f66e5c9bf)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_aa355155a14a5beaab78a41ac3c822f9)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_c3fa814171cd5fc0ba7569d9cbed9336)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_bc50010e288b579fb184f9336d611a43)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_e550dda37f8e5becb8ae834205303ec5)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_4b586fb21e5f51198641d373cadbc278)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_848119fee32c5e13b95b9352d4613c23)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_cc6076965a745c96a052f5346a24b586)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_9bb2bd0e5ea657238bf98f0f78b72764)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_52df383273955fbd83bccbcc87e7ed17)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_1b3c3898b0f65fbdbe2e5e6102b9d5ce)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_16d5bc3c167e56bb88f4b289912c68cc)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_5a4d4cda52d857aca04aea0b50fed14c)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_f2f1a72e8d4a5929a4d6a1e9912bd331(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_d44f948587d651cfb9961755fa46baf7, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_73e8349400685eb984af1ccd809ab0ea, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_99caea73ccd456dab13082b2a46bbf0f, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_d57a9bf7663654cbb228ce122c7c9524, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_9e8fdef8dc6f56ca862dd61f66e5c9bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_aa355155a14a5beaab78a41ac3c822f9, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_c3fa814171cd5fc0ba7569d9cbed9336, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_bc50010e288b579fb184f9336d611a43, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_e550dda37f8e5becb8ae834205303ec5, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_4b586fb21e5f51198641d373cadbc278, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_848119fee32c5e13b95b9352d4613c23, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_cc6076965a745c96a052f5346a24b586, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_9bb2bd0e5ea657238bf98f0f78b72764, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_52df383273955fbd83bccbcc87e7ed17, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_1b3c3898b0f65fbdbe2e5e6102b9d5ce, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_16d5bc3c167e56bb88f4b289912c68cc, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_5a4d4cda52d857aca04aea0b50fed14c, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_f2f1a72e8d4a5929a4d6a1e9912bd331, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}