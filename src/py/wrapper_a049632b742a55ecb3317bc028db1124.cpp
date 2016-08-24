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
    bool  (*method_pointer_fbdc3bd2a7b5525cb037a1efb9d998ee)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_48f09cd5ac225fe2a9b935e73449dc66)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_6110d28c49545ded805f63bc77b26216)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_221635b0aa7b55d595837f2f50ffd9e1)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_23f79d59c55253f7a1a7da226b498b73)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_0333f4ed5f0458498ea56e0b6272acb5)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_9dc3cab673f55f6a85d9bcf23784f5bf)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_adf04813ee9d54b49941eb0aa65f06b0)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_c7d7fe2f9494501cb7ebf5628a895dfe)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_9c6c4a844a525579bfb4dc9c01e8a52e)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_7a311568f618504cb2daa6c68c2fa304)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_af9d02955eca5f6b923c1298b4b49f84)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_30f8de21209d56d29cb444ede5751224)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_0b87799f85ee52fd93f3ce8ac540deba)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_1ad55fbf1b885e3cae5269ac8c7dd925)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_6db35e6f700d590582eb778f0b0e07ac)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_bba2bb2b115b576db8280732b63f64aa)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_b14683125d1e5bd48253af676e895ade(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_fbdc3bd2a7b5525cb037a1efb9d998ee, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_48f09cd5ac225fe2a9b935e73449dc66, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_6110d28c49545ded805f63bc77b26216, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_221635b0aa7b55d595837f2f50ffd9e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_23f79d59c55253f7a1a7da226b498b73, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_0333f4ed5f0458498ea56e0b6272acb5, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_9dc3cab673f55f6a85d9bcf23784f5bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_adf04813ee9d54b49941eb0aa65f06b0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_c7d7fe2f9494501cb7ebf5628a895dfe, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_9c6c4a844a525579bfb4dc9c01e8a52e, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_7a311568f618504cb2daa6c68c2fa304, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_af9d02955eca5f6b923c1298b4b49f84, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_30f8de21209d56d29cb444ede5751224, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_0b87799f85ee52fd93f3ce8ac540deba, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_1ad55fbf1b885e3cae5269ac8c7dd925, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_6db35e6f700d590582eb778f0b0e07ac, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_bba2bb2b115b576db8280732b63f64aa, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_b14683125d1e5bd48253af676e895ade, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}