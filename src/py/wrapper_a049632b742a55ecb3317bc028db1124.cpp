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
    bool  (*method_pointer_943665e3fbcf5b6ca72d8dcc404ac561)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_ae9d05042eb050e1a309de4384484a85)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_44e5c853d93d53938d41e11f571e380e)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_91e1dd615cc45393860e240ae70a65ce)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_08ec2c7a0d885cafb341e0ec015aa56d)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_482b2d5123485281a41a3330760c30a5)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_bf04516872d950bcaed7d876f0bf2aa6)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_985484e925d152eab5aaf6c9352a3324)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_3d6e2633f3d05fef90220bf0305eaf30)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_405f5dfce344585eab29413261ea7b55)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_8a7f571e7c80574eaf7027dffad91922)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_be48eef1ff1b517283718b737fe9b53e)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_81be52f5e6295062a9d94279feacb1bc)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_f39730baf5075aa5aa56d54038b5b79e)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_e43d4557b6c05f4992caca562bed71f3)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_92d3f0e2fc5e5724a9c75a9f1c010370)(bool ) = &::clang::NamedDecl::setHidden;
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_943665e3fbcf5b6ca72d8dcc404ac561, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_ae9d05042eb050e1a309de4384484a85, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_44e5c853d93d53938d41e11f571e380e, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_91e1dd615cc45393860e240ae70a65ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_08ec2c7a0d885cafb341e0ec015aa56d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_482b2d5123485281a41a3330760c30a5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_bf04516872d950bcaed7d876f0bf2aa6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_985484e925d152eab5aaf6c9352a3324, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_3d6e2633f3d05fef90220bf0305eaf30, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_405f5dfce344585eab29413261ea7b55, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_8a7f571e7c80574eaf7027dffad91922, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_be48eef1ff1b517283718b737fe9b53e, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_81be52f5e6295062a9d94279feacb1bc, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_f39730baf5075aa5aa56d54038b5b79e, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_e43d4557b6c05f4992caca562bed71f3, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_92d3f0e2fc5e5724a9c75a9f1c010370, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}