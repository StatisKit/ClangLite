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
    bool  (*method_pointer_951fbc86ed6158659982bac1b4968371)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_dd20356f1b585a78a1dbe0aff326ece8)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_d5f8ee834a3250a1954651b747297032)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_3094ae82f26d5c7fba0e07a41bfcb79b)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_aa87a8e7d0ce50c2bc9b0aca9c6cdedc)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_f307021feed958ebaf0cdd2b985dd796)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_0994e9dfed0a5acb97926912c154da6a)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_0c1d446dab62513dae7d0dd8a1d070ad)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_c68be3f2308f5e1d9b72716e14b2124f)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_f21a547392eb54039f062f067b97136c)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_24717941f42b56108fd9bf0e2631eb1a)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_33ae5c2983e159349983b064e6a15905)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_ccf7a130c36b5f618af58fa962650a1c)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_176d0a68701a5204a45dba60ca4b0381)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_a31d1dfe97b75c44a874df676dadb9ff)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_f5b40b67c2f3561e9b4f0f84297c1148)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_55e8fa345aa358b09721c847cafc8bea)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_4c5fe3832bdc50c59071c96d52317023(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_951fbc86ed6158659982bac1b4968371, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_dd20356f1b585a78a1dbe0aff326ece8, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_d5f8ee834a3250a1954651b747297032, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_3094ae82f26d5c7fba0e07a41bfcb79b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_aa87a8e7d0ce50c2bc9b0aca9c6cdedc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_f307021feed958ebaf0cdd2b985dd796, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_0994e9dfed0a5acb97926912c154da6a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_0c1d446dab62513dae7d0dd8a1d070ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_c68be3f2308f5e1d9b72716e14b2124f, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_f21a547392eb54039f062f067b97136c, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_24717941f42b56108fd9bf0e2631eb1a, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_33ae5c2983e159349983b064e6a15905, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_ccf7a130c36b5f618af58fa962650a1c, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_176d0a68701a5204a45dba60ca4b0381, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_a31d1dfe97b75c44a874df676dadb9ff, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_f5b40b67c2f3561e9b4f0f84297c1148, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_55e8fa345aa358b09721c847cafc8bea, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_4c5fe3832bdc50c59071c96d52317023, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}