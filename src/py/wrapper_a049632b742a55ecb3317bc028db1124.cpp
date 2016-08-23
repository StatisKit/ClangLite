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
    bool  (*method_pointer_a1cc97990daf58329f7f39d74f9895fd)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_dee375bc3aff5c2b836d47018cffee3f)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_193e1b0ae20f53ecb510ea36f0ef6651)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_257913f5c520583e90e628bbfa6e8024)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_883bf8b2432f5917b023976c5971dfc2)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_f2585b05bcc75b0d9b63f674284fd616)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_3a651849ab9659ee997c1c5857951708)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_ab912df88440532682b1696d8aec6984)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_b3f3d9e46a7f527b87aa856a3d63f9be)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_deb7dae01adb51ad91f9cfcae0fba637)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_29515131dc645b9a8467d593b83b70a2)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_b0787528c67856a286d677740894e3d9)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_788e5876af7153018fe776b9dab73c30)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_c57c1de4b9db5c95b001d6b0a6d798a8)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_e477d5bf0afc5a9c87c2e92b7aa1f422)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_2aaee806a78e57e989e5afcfbefe3820)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_30c186efa8415fe191b4516beb9335d1(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_a1cc97990daf58329f7f39d74f9895fd, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_dee375bc3aff5c2b836d47018cffee3f, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_193e1b0ae20f53ecb510ea36f0ef6651, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_257913f5c520583e90e628bbfa6e8024, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_883bf8b2432f5917b023976c5971dfc2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_f2585b05bcc75b0d9b63f674284fd616, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_3a651849ab9659ee997c1c5857951708, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_ab912df88440532682b1696d8aec6984, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_b3f3d9e46a7f527b87aa856a3d63f9be, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_deb7dae01adb51ad91f9cfcae0fba637, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_29515131dc645b9a8467d593b83b70a2, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_b0787528c67856a286d677740894e3d9, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_788e5876af7153018fe776b9dab73c30, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_c57c1de4b9db5c95b001d6b0a6d798a8, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_e477d5bf0afc5a9c87c2e92b7aa1f422, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_2aaee806a78e57e989e5afcfbefe3820, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_30c186efa8415fe191b4516beb9335d1, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}