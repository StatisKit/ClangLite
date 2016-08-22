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
    bool  (*method_pointer_de0c69591d4b566dafc43e6e87a06821)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_5be8053ecf50514c9b175fee2b07704c)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_c55abb7569805f26b7f39ff25ddd893a)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_66c07e23bcfe56c0b27659f5104c9d52)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_9cd6a28a5aaf5294a9d5379ee31e533b)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_1f6a746eccac5ddd8b5d4ffefdae4dd0)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_62794d5b3ee85c80805bab9ed7549b16)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_6a8fef719c455117a75bc9b666692e85)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_6399b953834e5e9a97d77fae4c360a78)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_1ad3fc87371c54cdab46ddad29bf8d7a)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_003ceb8a6a11507dbe41a9d7f90a39ec)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_28db425529c051e58c85f8969bebf569)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_0a921be3c2e9571d8b41d9dba90fc31b)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_2ede5085992b586e823d9b1630711ad3)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_75425547017d525aa31ba0551c2a7032)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_a7e60f2f31915a96adc82275048a9681)(bool ) = &::clang::NamedDecl::setHidden;
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_de0c69591d4b566dafc43e6e87a06821, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_5be8053ecf50514c9b175fee2b07704c, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_c55abb7569805f26b7f39ff25ddd893a, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_66c07e23bcfe56c0b27659f5104c9d52, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_9cd6a28a5aaf5294a9d5379ee31e533b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_1f6a746eccac5ddd8b5d4ffefdae4dd0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_62794d5b3ee85c80805bab9ed7549b16, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_6a8fef719c455117a75bc9b666692e85, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_6399b953834e5e9a97d77fae4c360a78, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_1ad3fc87371c54cdab46ddad29bf8d7a, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_003ceb8a6a11507dbe41a9d7f90a39ec, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_28db425529c051e58c85f8969bebf569, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_0a921be3c2e9571d8b41d9dba90fc31b, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_2ede5085992b586e823d9b1630711ad3, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_75425547017d525aa31ba0551c2a7032, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_a7e60f2f31915a96adc82275048a9681, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}