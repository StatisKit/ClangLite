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
    bool  (::clang::NamedDecl::*method_pointer_2f95063bbded58ed801ab85e5ad442f2)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (*method_pointer_4d9aaa03f5775e3681c784f6ba8fafe2)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (::clang::NamedDecl::*method_pointer_f7ea4bb37f365dea96c6e993ef275e31)() const = &::clang::NamedDecl::isCXXClassMember;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_4dfd2e7b441058da98e14e696f5fcf2d)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_1ed965936a98591b851b2b65717862c7)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_c51ee189f0c256b4a262728c5045db6e)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_1f6cf7d4028e59b79dce26283c2b0e5a)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_02687fdbb50553958bf1d78f998beaa6)() const = &::clang::NamedDecl::isLinkageValid;
    bool  (::clang::NamedDecl::*method_pointer_c7ce41ace2b452148e0f0d2f3dd4aa67)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    bool  (::clang::NamedDecl::*method_pointer_0deef9ec28ca54758fddd9e9583459ed)() const = &::clang::NamedDecl::isHidden;
    bool  (*method_pointer_42469784103f5ea2b9b66fbb71145b61)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_85c9f54f09f654e8a5fc6623981ce789)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_1375025cfdef5c64a98f78e124ab591b)() const = &::clang::NamedDecl::getMostRecentDecl;
    void  (::clang::NamedDecl::*method_pointer_7f142a3de56b51c79faffc774448dfbc)(bool ) = &::clang::NamedDecl::setHidden;
    bool  (::clang::NamedDecl::*method_pointer_ea89694143d9561a9be2ea0d2e678e42)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_10fc7847f974524da6d4730ea737d713)() const = &::clang::NamedDecl::isCXXInstanceMember;
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_2f95063bbded58ed801ab85e5ad442f2, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_4d9aaa03f5775e3681c784f6ba8fafe2, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_f7ea4bb37f365dea96c6e993ef275e31, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_4dfd2e7b441058da98e14e696f5fcf2d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_1ed965936a98591b851b2b65717862c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_c51ee189f0c256b4a262728c5045db6e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_1f6cf7d4028e59b79dce26283c2b0e5a, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_02687fdbb50553958bf1d78f998beaa6, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_c7ce41ace2b452148e0f0d2f3dd4aa67, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_0deef9ec28ca54758fddd9e9583459ed, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_42469784103f5ea2b9b66fbb71145b61, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_85c9f54f09f654e8a5fc6623981ce789, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_1375025cfdef5c64a98f78e124ab591b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_7f142a3de56b51c79faffc774448dfbc, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_ea89694143d9561a9be2ea0d2e678e42, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_10fc7847f974524da6d4730ea737d713, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}