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
    bool  (*method_pointer_6581a3faed255b7696b0ee0d4160a7fc)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_73c9430ea93658588e7dd3610ae40c4a)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_c089a0d16d9b5dfcbbbf776d63e8355b)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_85a6eb7b146756c5aab27dc78be90b9f)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_4bab9a04b91155ad93bf2e11bfbb2efe)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_185e7542f4105ab1b2b003290103a093)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_3efffea83ec3597eaaf58713b7f80718)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_96b2bba82b405893bd45f3aa69b974cc)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_9aaf5249f472560396563226d75801a9)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_ab62223c856c5aca906a51b3cf53ce05)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_96041122180d5b618ec8541582b5c233)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_d01afd4264205cd1945d92f33378f846)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_881e83b762a1527aadd634d40eddfcfa)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_f83f141544c859c6bb9a47ca7fe91f4a)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_78a17d51abef56338726b313fd201326)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_a8267bab57e55b078c7ac235ea8fad3d)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_a7b5e48368d954e8b1830f8b037c90f1(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_6581a3faed255b7696b0ee0d4160a7fc, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_73c9430ea93658588e7dd3610ae40c4a, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_c089a0d16d9b5dfcbbbf776d63e8355b, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_85a6eb7b146756c5aab27dc78be90b9f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_4bab9a04b91155ad93bf2e11bfbb2efe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_185e7542f4105ab1b2b003290103a093, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_3efffea83ec3597eaaf58713b7f80718, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_96b2bba82b405893bd45f3aa69b974cc, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_9aaf5249f472560396563226d75801a9, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_ab62223c856c5aca906a51b3cf53ce05, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_96041122180d5b618ec8541582b5c233, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_d01afd4264205cd1945d92f33378f846, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_881e83b762a1527aadd634d40eddfcfa, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_f83f141544c859c6bb9a47ca7fe91f4a, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_78a17d51abef56338726b313fd201326, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_a8267bab57e55b078c7ac235ea8fad3d, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_a7b5e48368d954e8b1830f8b037c90f1, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}