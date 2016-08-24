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
    bool  (*method_pointer_5a42713820d9549b893fd776c4bc84bf)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_532cc15f49f35f77bbde9e9d93d29f0d)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_768c9479255f540cb4394e94048739ce)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_7ad9b891cbcd5d509af72d3332fc0cc6)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_73a4316a7e7a565e8c3e1da76e569515)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_4d23eda31667567dbde5796f2a90ad2d)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_e86dea4e01d655bbba60c53254cfe789)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_6b21bc426aec5ccda447f60f3714cb90)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_19fc78c3a5225413a8859c65a553c323)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_2804d50486db5d5f8753a85bf4da62cb)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_8c6a6fbc60685929a0ca5d7376d79cff)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_0baa071f826d56099c6fdc801d356547)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_b610fda388f455f393ab839647d9b5aa)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_d33acf61ca8e511db127f6e7b739588e)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_e720974d1bdb5eb3aaf6e01f215fde1d)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_952beab197495f0c814d9f9f7fc7404b)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_92de67f3c93d5ab78eb8ba53c876ab75)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_2febc23206c6568391f6500e3b3817ca(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_5a42713820d9549b893fd776c4bc84bf, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_532cc15f49f35f77bbde9e9d93d29f0d, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_768c9479255f540cb4394e94048739ce, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_7ad9b891cbcd5d509af72d3332fc0cc6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_73a4316a7e7a565e8c3e1da76e569515, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_4d23eda31667567dbde5796f2a90ad2d, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_e86dea4e01d655bbba60c53254cfe789, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_6b21bc426aec5ccda447f60f3714cb90, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_19fc78c3a5225413a8859c65a553c323, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_2804d50486db5d5f8753a85bf4da62cb, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_8c6a6fbc60685929a0ca5d7376d79cff, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_0baa071f826d56099c6fdc801d356547, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_b610fda388f455f393ab839647d9b5aa, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_d33acf61ca8e511db127f6e7b739588e, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_e720974d1bdb5eb3aaf6e01f215fde1d, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_952beab197495f0c814d9f9f7fc7404b, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_92de67f3c93d5ab78eb8ba53c876ab75, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_2febc23206c6568391f6500e3b3817ca, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}