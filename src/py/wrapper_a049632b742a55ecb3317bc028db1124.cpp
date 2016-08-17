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
    bool  (::clang::NamedDecl::*method_pointer_9dda88fa36b2575dbec9054c2009609f)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_f29bc9adc8bd53bb9a2b94cadbec2a19)() const = &::clang::NamedDecl::isLinkageValid;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_82c76a19d4bd5dea8a7f8f3f3bc89f77)() const = &::clang::NamedDecl::getUnderlyingDecl;
    void  (::clang::NamedDecl::*method_pointer_2c4a6d1363465d24b020c4845fe7da64)(bool ) = &::clang::NamedDecl::setHidden;
    bool  (::clang::NamedDecl::*method_pointer_98b7fc3ff9935444bf1cdb850dc900ac)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_50faa3b7592756049b298579b04d94eb)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_2b8d325773605e8480b62835d2182e0e)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_87258d63c8fc530cac698227d8ac2e05)() const = &::clang::NamedDecl::isCXXClassMember;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_ff7f42ec6ba6591fa499f99780325eb4)() const = &::clang::NamedDecl::getMostRecentDecl;
    bool  (::clang::NamedDecl::*method_pointer_dac479122766501d89df8a8d1ad72542)() const = &::clang::NamedDecl::hasLinkage;
    bool  (*method_pointer_095a7da1e55a56d2b15142721041588f)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_595e865486a25ac59858125509ef071d)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_d5ecdf0fbdb157c0824edd70d001678e)() = &::clang::NamedDecl::getMostRecentDecl;
    bool  (::clang::NamedDecl::*method_pointer_abd372a9fbde57c287feac20b6de3010)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    bool  (*method_pointer_9844f5f57b8a5757a64404b1f561f410)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (::clang::NamedDecl::*method_pointer_84894f968fb450bc850e218ca82ae736)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_9dda88fa36b2575dbec9054c2009609f, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_f29bc9adc8bd53bb9a2b94cadbec2a19, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_82c76a19d4bd5dea8a7f8f3f3bc89f77, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_2c4a6d1363465d24b020c4845fe7da64, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_98b7fc3ff9935444bf1cdb850dc900ac, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_50faa3b7592756049b298579b04d94eb, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_2b8d325773605e8480b62835d2182e0e, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_87258d63c8fc530cac698227d8ac2e05, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_ff7f42ec6ba6591fa499f99780325eb4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_dac479122766501d89df8a8d1ad72542, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_095a7da1e55a56d2b15142721041588f, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_595e865486a25ac59858125509ef071d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_d5ecdf0fbdb157c0824edd70d001678e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_abd372a9fbde57c287feac20b6de3010, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_9844f5f57b8a5757a64404b1f561f410, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_84894f968fb450bc850e218ca82ae736, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}