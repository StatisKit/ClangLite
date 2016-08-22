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
    bool  (*method_pointer_34bd9bc1802052dcb8121b506cf293da)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_3b31800f2cf8595eb66a567fa1db4975)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_69869186b9275c1f8c1a418649440e2d)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_924bbd24640558d4aa9fa5fbdc981afe)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_868c2c6199fb514c9e103b8b35f7391b)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_bf1e2e57cef45f35bd7d6e8c82c3d950)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_096f8726efba52199fc404e4e8dd1f81)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_aca294b2b6c0557bad9d01540a38b07c)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_c30ccafa0a53527ea91f6313a519887b)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_c02fc81cc9b15d989eb6c987bc0ba7ef)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_decb89c7069b51769f1af9870e863f3b)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_2b754197a45659e5879ed4a6d0e02740)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_05bc47f3d03e548482d4c402bd222c63)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_be46afb24b7a51389c9a49db6708bd73)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_a6bc52059a16502b99272b48d95700b7)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_0f9337efa1f556ae8c19d58348752e58)(bool ) = &::clang::NamedDecl::setHidden;
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_34bd9bc1802052dcb8121b506cf293da, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_3b31800f2cf8595eb66a567fa1db4975, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_69869186b9275c1f8c1a418649440e2d, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_924bbd24640558d4aa9fa5fbdc981afe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_868c2c6199fb514c9e103b8b35f7391b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_bf1e2e57cef45f35bd7d6e8c82c3d950, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_096f8726efba52199fc404e4e8dd1f81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_aca294b2b6c0557bad9d01540a38b07c, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_c30ccafa0a53527ea91f6313a519887b, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_c02fc81cc9b15d989eb6c987bc0ba7ef, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_decb89c7069b51769f1af9870e863f3b, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_2b754197a45659e5879ed4a6d0e02740, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_05bc47f3d03e548482d4c402bd222c63, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_be46afb24b7a51389c9a49db6708bd73, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_a6bc52059a16502b99272b48d95700b7, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_0f9337efa1f556ae8c19d58348752e58, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}