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
    bool  (*method_pointer_ea25af6c78be501a8d9265edf3823839)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_262829f8c95553578c083a76a46b1140)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_41666e11655c5f5e90117adff985f604)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_50674f60edd2570c8ee8a9f0f00ed1bf)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_a6b265befd2c5f8eb1bf87ba1d2ca6a5)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_3b84e7feface55aaaf1a09f9e5197f6d)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_efaed050c23c5a269b5d385429b584f1)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_461233b293055ac79f65aee1bbe36500)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_f0ee0b7043285519abc803ece9b4c5b7)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_e737ccc74c7059159f6de603d7e86b67)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_dbad178a7c835525aeb8a85f558c54f1)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_99c40e6e64f85ecaa2d2ed78bd8dad78)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_05a7dd768dd4510d9ff61e204c96e33c)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_1ca822b880575fa2968bef2d084a13cc)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_821c523314de575883a955aabe243cae)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_c8843ef18ab75420b889839633c10058)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_b85c8f1b734a553380a665f7203fbdfa)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_7ccf3bc88cd556da8f7f333b392cee51(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_ea25af6c78be501a8d9265edf3823839, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_262829f8c95553578c083a76a46b1140, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_41666e11655c5f5e90117adff985f604, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_50674f60edd2570c8ee8a9f0f00ed1bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_a6b265befd2c5f8eb1bf87ba1d2ca6a5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_3b84e7feface55aaaf1a09f9e5197f6d, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_efaed050c23c5a269b5d385429b584f1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_461233b293055ac79f65aee1bbe36500, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_f0ee0b7043285519abc803ece9b4c5b7, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_e737ccc74c7059159f6de603d7e86b67, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_dbad178a7c835525aeb8a85f558c54f1, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_99c40e6e64f85ecaa2d2ed78bd8dad78, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_05a7dd768dd4510d9ff61e204c96e33c, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_1ca822b880575fa2968bef2d084a13cc, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_821c523314de575883a955aabe243cae, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_c8843ef18ab75420b889839633c10058, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_b85c8f1b734a553380a665f7203fbdfa, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_7ccf3bc88cd556da8f7f333b392cee51, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}