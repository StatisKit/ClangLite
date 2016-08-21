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
    bool  (*method_pointer_68e95b298a0051159fe105bd02bed765)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_913c75fd9bf654e99ef1fab60d69d77d)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_1c3f0d3c7b1e527c8d4bc805d7813f2f)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_2a779bde65375551adcf6bbdd44d5a18)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_4bc7e4594c5e5ff2bd9cb8ff04127641)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_283fe1fb8f6b5afb8c796931a5205512)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_91cd9ccae29d530184f89cd86a7528b7)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_a8e745269d9855f3b9621058f347ecb0)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_0247c9c2740f5d1e9fbc786a5b7f041a)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_1b336fa3c5295282b04fb369cf0c8836)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_a9c7e71d01265b4e82684513d18abae9)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_9ed3b2396834561aaf256c6dd166a08f)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_56271ab620ce5aaf83d1fe581e59763e)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_142972e999d55614b68bee57cf7f8ddd)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_340f270b4aa5502aa48f411daa2934a9)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_1e80bf242f1a54ca98db29364c348c86)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_fb015862ef8b5bf18179883818891a76(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_68e95b298a0051159fe105bd02bed765, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_913c75fd9bf654e99ef1fab60d69d77d, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_1c3f0d3c7b1e527c8d4bc805d7813f2f, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_2a779bde65375551adcf6bbdd44d5a18, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_4bc7e4594c5e5ff2bd9cb8ff04127641, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_283fe1fb8f6b5afb8c796931a5205512, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_91cd9ccae29d530184f89cd86a7528b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_a8e745269d9855f3b9621058f347ecb0, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_0247c9c2740f5d1e9fbc786a5b7f041a, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_1b336fa3c5295282b04fb369cf0c8836, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_a9c7e71d01265b4e82684513d18abae9, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_9ed3b2396834561aaf256c6dd166a08f, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_56271ab620ce5aaf83d1fe581e59763e, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_142972e999d55614b68bee57cf7f8ddd, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_340f270b4aa5502aa48f411daa2934a9, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_1e80bf242f1a54ca98db29364c348c86, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_fb015862ef8b5bf18179883818891a76, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}