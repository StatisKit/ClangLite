#include "_clanglite.h"


namespace autowig
{
}


void wrapper_a049632b742a55ecb3317bc028db1124()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_ef1853879809557e9a12ae63aab6b51e)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_fed8bfaf7ecb5c54b0669932a27d52eb)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_cfe000246b725b35b61251dd560a53d7)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_4f9c68b062775a0e86460cd81b5bb29c)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_cecba905d9d25878958158e44a3eded8)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_aac2a7f396605f12903fffc8ecf4fc24)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_0adfa8d876c85e40b6322115ee1b9b24)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_2a7d523bf75252309ac06491a5d56c77)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_d211c6e3d4ea56b89b97ec396c092dc0)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_a93a4423b4685889bf83b18695003981)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_e5319b5576455ba2997037f87c29edc6)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_8bde15167cfd5fefb1494e04d07546b0)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_1190dc8cd340581d98e31508f1ef5f79)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_34f62d525ece59d390f4ec0c5b681630)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_d040afe1436f5ff6bd4bbff3584bbd32)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_6a2cd2f496505be6803ef91a6e12c768)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_9567c2d4984a56d491cdd74447c9e9bd(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_ef1853879809557e9a12ae63aab6b51e, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_fed8bfaf7ecb5c54b0669932a27d52eb, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_cfe000246b725b35b61251dd560a53d7, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_4f9c68b062775a0e86460cd81b5bb29c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_cecba905d9d25878958158e44a3eded8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_aac2a7f396605f12903fffc8ecf4fc24, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_0adfa8d876c85e40b6322115ee1b9b24, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_2a7d523bf75252309ac06491a5d56c77, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_d211c6e3d4ea56b89b97ec396c092dc0, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_a93a4423b4685889bf83b18695003981, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_e5319b5576455ba2997037f87c29edc6, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_8bde15167cfd5fefb1494e04d07546b0, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_1190dc8cd340581d98e31508f1ef5f79, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_34f62d525ece59d390f4ec0c5b681630, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_d040afe1436f5ff6bd4bbff3584bbd32, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_6a2cd2f496505be6803ef91a6e12c768, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_9567c2d4984a56d491cdd74447c9e9bd, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}