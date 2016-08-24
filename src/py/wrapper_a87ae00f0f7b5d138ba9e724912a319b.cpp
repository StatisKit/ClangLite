#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_a87ae00f0f7b5d138ba9e724912a319b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamespaceAliasDecl  * (*method_pointer_7ae4d5a1f8535f65a90d9e534cf60e27)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceAliasDecl::CreateDeserialized;
    bool  (*method_pointer_87e78c1f3f755f278ebe034c71b61a25)(class ::clang::Decl  const *) = ::clang::NamespaceAliasDecl::classof;
    bool  (*method_pointer_3c0f01f692c25cdd84743ef158c19c35)(enum ::clang::Decl::Kind ) = ::clang::NamespaceAliasDecl::classofKind;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_7f8dc3c4282657dd8d3a4016509a7526)() const = &::clang::NamespaceAliasDecl::getAliasLoc;
    class ::clang::NamedDecl  * (::clang::NamespaceAliasDecl::*method_pointer_561a50f3836d565a87c396542c0a10df)() const = &::clang::NamespaceAliasDecl::getAliasedNamespace;
    class ::clang::NamespaceAliasDecl  * (::clang::NamespaceAliasDecl::*method_pointer_0a205cd876f051d8a585fca6bac4175e)() = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    class ::clang::NamespaceAliasDecl  const * (::clang::NamespaceAliasDecl::*method_pointer_be00d0efb2ff5e308e6c83e5b0e56615)() const = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceAliasDecl::*method_pointer_d74db0edf5af540ab37cdb65fdd45e59)() const = &::clang::NamespaceAliasDecl::getNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceAliasDecl::*method_pointer_48005ee7904756858289450d1cf615ea)() = &::clang::NamespaceAliasDecl::getNamespace;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_5e7105d4cd9f5aefb4f1108a062eeb29)() const = &::clang::NamespaceAliasDecl::getNamespaceLoc;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_e3a5d69a63db5d5da9418511c19c5f52)() const = &::clang::NamespaceAliasDecl::getTargetNameLoc;
    boost::python::class_< class ::clang::NamespaceAliasDecl, autowig::HeldType< class ::clang::NamespaceAliasDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_a87ae00f0f7b5d138ba9e724912a319b("NamespaceAliasDecl", "", boost::python::no_init);
    class_a87ae00f0f7b5d138ba9e724912a319b.def("create_deserialized", method_pointer_7ae4d5a1f8535f65a90d9e534cf60e27, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof", method_pointer_87e78c1f3f755f278ebe034c71b61a25, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof_kind", method_pointer_3c0f01f692c25cdd84743ef158c19c35, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_alias_loc", method_pointer_7f8dc3c4282657dd8d3a4016509a7526, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_aliased_namespace", method_pointer_561a50f3836d565a87c396542c0a10df, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_0a205cd876f051d8a585fca6bac4175e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_be00d0efb2ff5e308e6c83e5b0e56615, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_d74db0edf5af540ab37cdb65fdd45e59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_48005ee7904756858289450d1cf615ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace_loc", method_pointer_5e7105d4cd9f5aefb4f1108a062eeb29, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_target_name_loc", method_pointer_e3a5d69a63db5d5da9418511c19c5f52, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof_kind");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("create_deserialized");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NamespaceAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamespaceAliasDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}