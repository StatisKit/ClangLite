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
    bool  (::clang::NamedDecl::*method_pointer_b9522ccd3f54565abfea5c5f1dd3ce56)() const = &::clang::NamedDecl::hasLinkage;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_4160f2661c775e829bb0f9276a9f7f70)() = &::clang::NamedDecl::getMostRecentDecl;
    void  (::clang::NamedDecl::*method_pointer_2d064033f91e5d739718bd70c50b7359)(bool ) = &::clang::NamedDecl::setHidden;
    bool  (*method_pointer_5ae14d65e3af5c7b9a791cad82bba6e1)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_140f639d7c7e5ef5a4d31a955bb0c6b7)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_c31de3df4291514b9cc4d5ef77df8408)() const = &::clang::NamedDecl::isExternallyVisible;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_64b9ac9ab8975ea0aa8bc4beda02a16e)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_cfb45abcc8f65146894864b435004c18)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_0e57fc646a455b2bb12b2dbf65b428ef)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_6d75266e5ffa59f5aad98d2d9354e1bc)() const = &::clang::NamedDecl::isHidden;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_4193eb52dfb15ef09de668ced63637ef)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_9c1218a982e45f30914a62e5650a69e9)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_896325712249591485dc8a7151c2aba0)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_92864b7db6e1571e8bd5005bbbb8814b)() const = &::clang::NamedDecl::isLinkageValid;
    bool  (::clang::NamedDecl::*method_pointer_1dd5587172e45a7dbceab9fd3f606f95)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_cfde714b755556c8be69a869f2411012)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_b9522ccd3f54565abfea5c5f1dd3ce56, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_4160f2661c775e829bb0f9276a9f7f70, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_2d064033f91e5d739718bd70c50b7359, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_5ae14d65e3af5c7b9a791cad82bba6e1, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_140f639d7c7e5ef5a4d31a955bb0c6b7, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_c31de3df4291514b9cc4d5ef77df8408, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_64b9ac9ab8975ea0aa8bc4beda02a16e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_cfb45abcc8f65146894864b435004c18, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_0e57fc646a455b2bb12b2dbf65b428ef, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_6d75266e5ffa59f5aad98d2d9354e1bc, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_4193eb52dfb15ef09de668ced63637ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_9c1218a982e45f30914a62e5650a69e9, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_896325712249591485dc8a7151c2aba0, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_92864b7db6e1571e8bd5005bbbb8814b, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_1dd5587172e45a7dbceab9fd3f606f95, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_cfde714b755556c8be69a869f2411012, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}