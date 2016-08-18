#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_a049632b742a55ecb3317bc028db1124()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_4753480863da56909966ca1e3a4bedc3)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_adaefe846ad15546829312d24913b33f)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_dbb8d08131a85b05a1f71d9b85305148)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_03443615e6ba5e098d32faf85cac1795)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_dbea68b7c05c5dd280fa60b5b18e7a3a)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_a2b05a0864f851bfa602a54000c3a02b)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_621a220445e154f1a8dcdaf26624205c)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_01685d3ea2a95fd29e40a714d8807de2)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_8952f7655c8f549fafb9348c6cbff77b)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_729cf216418a5f1495531d89ae8e405f)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_227ad573435550d7a404dad0fb077acd)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_291e5c27b7f558f79d99242708a41715)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_ab5e1321df755f40a2d41b7f05ee2e53)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_f37ce864d3d15c6685661e6c768c6c6d)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_1d4f4f6b19235f2ca6bcd2155d787eb8)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_7cc74bf45921548aaf950ae7902dc37c)(bool ) = &::clang::NamedDecl::setHidden;
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_4753480863da56909966ca1e3a4bedc3, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_adaefe846ad15546829312d24913b33f, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_dbb8d08131a85b05a1f71d9b85305148, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_03443615e6ba5e098d32faf85cac1795, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_dbea68b7c05c5dd280fa60b5b18e7a3a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_a2b05a0864f851bfa602a54000c3a02b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_621a220445e154f1a8dcdaf26624205c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_01685d3ea2a95fd29e40a714d8807de2, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_8952f7655c8f549fafb9348c6cbff77b, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_729cf216418a5f1495531d89ae8e405f, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_227ad573435550d7a404dad0fb077acd, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_291e5c27b7f558f79d99242708a41715, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_ab5e1321df755f40a2d41b7f05ee2e53, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_f37ce864d3d15c6685661e6c768c6c6d, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_1d4f4f6b19235f2ca6bcd2155d787eb8, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_7cc74bf45921548aaf950ae7902dc37c, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}