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
    bool  (*method_pointer_c11eb7472bb6505fabc3772b859e1391)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_f30e0a9f0ba15d79949c0b2e5f6f397b)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_523ff4ef6c7b512ea6c89ca377ce68cf)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_2966a19b4f2e57968d78a89743fc810b)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_913f660067ce58bdb337093e4118aa3f)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_6bf72e01e065532aabc0391f3679040d)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_9c1f42caa66b57f1b6dda1f025756cda)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_0b656223ef3952cbb1c845652ba46063)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_b060f76865df5ba5bc0e365a869f7360)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_4827a00e8144506484d92f42d69dd71d)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_6d96eaae57a259e3aa9604ede65e743d)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_138ca5e845d358fe84c0839a549146fd)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_700cf781ffae54c2b53563e885547a6e)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_baf46c27d14a59b18c8ae5a74df04936)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_65fc684bd39b5f789fbb812dd2ad596d)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_c5a8c44317de57b898d45777ecfdc0fa)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_09eccf8d47bd54a0a11e17c233ff38bf)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_df23faa58b0a57c6af787c8fefdab124(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_c11eb7472bb6505fabc3772b859e1391, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_f30e0a9f0ba15d79949c0b2e5f6f397b, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_523ff4ef6c7b512ea6c89ca377ce68cf, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_2966a19b4f2e57968d78a89743fc810b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_913f660067ce58bdb337093e4118aa3f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_6bf72e01e065532aabc0391f3679040d, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_9c1f42caa66b57f1b6dda1f025756cda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_0b656223ef3952cbb1c845652ba46063, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_b060f76865df5ba5bc0e365a869f7360, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_4827a00e8144506484d92f42d69dd71d, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_6d96eaae57a259e3aa9604ede65e743d, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_138ca5e845d358fe84c0839a549146fd, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_700cf781ffae54c2b53563e885547a6e, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_baf46c27d14a59b18c8ae5a74df04936, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_65fc684bd39b5f789fbb812dd2ad596d, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_c5a8c44317de57b898d45777ecfdc0fa, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_09eccf8d47bd54a0a11e17c233ff38bf, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_df23faa58b0a57c6af787c8fefdab124, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}