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
    bool  (*method_pointer_23837df5de4b5ee89bfb1c35f6c97893)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_0f50f0f73fdd5f5998014a95648bde93)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_f42e9a6d84f45f058f9a2fcf11958952)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_054b2f2e3ccd5896aa6fa2e4e4ad7592)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_72afde3d1067511aa03377419eae2b44)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_20ef07c042575535aa10786705522b88)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_7e60badc5e21548e823a90dfd35fe864)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_49b3c0386be25c37b1ef6e35defe9eb2)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_b50a4fc000f65eb58550ad9c3bebbd22)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_e80e91f0d6f65346af4f69eb749ef17c)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_6729a7e864f55a65a1d2caac3c2b369f)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_440e86f0259b5f049cf9a9765a062885)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_14a3b5c8fcbc50da98856cd2f2b468b2)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_1cb84ec863485850966682eb8f1c18f7)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_62985f04293a502798a4513e66966453)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_1a7703222e285f9ba910985e8b769c40)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_a4b26d87019e50118c2839eb60844281(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_23837df5de4b5ee89bfb1c35f6c97893, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_0f50f0f73fdd5f5998014a95648bde93, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_f42e9a6d84f45f058f9a2fcf11958952, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_054b2f2e3ccd5896aa6fa2e4e4ad7592, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_72afde3d1067511aa03377419eae2b44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_20ef07c042575535aa10786705522b88, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_7e60badc5e21548e823a90dfd35fe864, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_49b3c0386be25c37b1ef6e35defe9eb2, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_b50a4fc000f65eb58550ad9c3bebbd22, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_e80e91f0d6f65346af4f69eb749ef17c, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_6729a7e864f55a65a1d2caac3c2b369f, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_440e86f0259b5f049cf9a9765a062885, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_14a3b5c8fcbc50da98856cd2f2b468b2, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_1cb84ec863485850966682eb8f1c18f7, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_62985f04293a502798a4513e66966453, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_1a7703222e285f9ba910985e8b769c40, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_a4b26d87019e50118c2839eb60844281, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}