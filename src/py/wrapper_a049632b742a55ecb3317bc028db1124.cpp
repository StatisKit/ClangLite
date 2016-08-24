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
    bool  (*method_pointer_7a382dbf4e42578682059e50f22234db)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_a5faa6295af85b86a0ece8232867a83f)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_18007745c0ce5a53849b5b2c247bd973)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_f2fb836ca687554986221592abfe0dda)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_e55e3912e2b85578a45280725ebd4bdf)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_f8737d1ecf535a519c13d5c608794639)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_6abb47c6fddb53989be937ce34dbc81b)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_c5992c1b845f571c9e7ef7df292c1536)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_6bbc145f71c25fb7be9058d974bef5e8)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_efcb3e28142453febce87bb3193982d5)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_c6f0f248cc6752849e85e72c69e66e48)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_9aa6091c192c5f27bdd03ae1f1b6b181)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_681462cdf77f580495f637880debdc4b)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_34ddcb85e60a5021a84d3d6edfb5843d)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_61b18180df32540c9725c8f5bd7c08d1)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_1b90f7357bb65dd589452f406adfc642)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_755d68e783575bf7a90dea576961748d)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_edb6cb6ac19a5cb2ba2eff2c8f263663(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_7a382dbf4e42578682059e50f22234db, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_a5faa6295af85b86a0ece8232867a83f, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_18007745c0ce5a53849b5b2c247bd973, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_f2fb836ca687554986221592abfe0dda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_e55e3912e2b85578a45280725ebd4bdf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_f8737d1ecf535a519c13d5c608794639, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_6abb47c6fddb53989be937ce34dbc81b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_c5992c1b845f571c9e7ef7df292c1536, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_6bbc145f71c25fb7be9058d974bef5e8, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_efcb3e28142453febce87bb3193982d5, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_c6f0f248cc6752849e85e72c69e66e48, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_9aa6091c192c5f27bdd03ae1f1b6b181, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_681462cdf77f580495f637880debdc4b, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_34ddcb85e60a5021a84d3d6edfb5843d, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_61b18180df32540c9725c8f5bd7c08d1, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_1b90f7357bb65dd589452f406adfc642, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_755d68e783575bf7a90dea576961748d, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_edb6cb6ac19a5cb2ba2eff2c8f263663, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}