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
    class ::clang::NamespaceAliasDecl  * (*method_pointer_8e815d2c8eb85bad9df7963950e827ae)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceAliasDecl::CreateDeserialized;
    bool  (*method_pointer_b0ff586f77485da3bd999cd932d85bb9)(class ::clang::Decl  const *) = ::clang::NamespaceAliasDecl::classof;
    bool  (*method_pointer_e4979370ef4d5b259604342ef15d2c0c)(enum ::clang::Decl::Kind ) = ::clang::NamespaceAliasDecl::classofKind;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_873d7733e5045d8c83c432967fcb1943)() const = &::clang::NamespaceAliasDecl::getAliasLoc;
    class ::clang::NamedDecl  * (::clang::NamespaceAliasDecl::*method_pointer_08494874536e58b48beb0530c142076c)() const = &::clang::NamespaceAliasDecl::getAliasedNamespace;
    class ::clang::NamespaceAliasDecl  * (::clang::NamespaceAliasDecl::*method_pointer_e3ee69dea4875ce19a06b9ad429d1688)() = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    class ::clang::NamespaceAliasDecl  const * (::clang::NamespaceAliasDecl::*method_pointer_bf03ef58530c54aa9208ad94ccc68164)() const = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  * (::clang::NamespaceAliasDecl::*method_pointer_7748d2f62f6f57e2bf9b741600ac1939)() = &::clang::NamespaceAliasDecl::getNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceAliasDecl::*method_pointer_6837a48ec819561a91201e5217a14611)() const = &::clang::NamespaceAliasDecl::getNamespace;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_e94b9c0e23e35156bda76a1833545357)() const = &::clang::NamespaceAliasDecl::getNamespaceLoc;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_b4be52cf64fb5185a10d1a82395eb68d)() const = &::clang::NamespaceAliasDecl::getTargetNameLoc;
    boost::python::class_< class ::clang::NamespaceAliasDecl, autowig::HeldType< class ::clang::NamespaceAliasDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_a87ae00f0f7b5d138ba9e724912a319b("NamespaceAliasDecl", "", boost::python::no_init);
    class_a87ae00f0f7b5d138ba9e724912a319b.def("create_deserialized", method_pointer_8e815d2c8eb85bad9df7963950e827ae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof", method_pointer_b0ff586f77485da3bd999cd932d85bb9, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof_kind", method_pointer_e4979370ef4d5b259604342ef15d2c0c, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_alias_loc", method_pointer_873d7733e5045d8c83c432967fcb1943, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_aliased_namespace", method_pointer_08494874536e58b48beb0530c142076c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_e3ee69dea4875ce19a06b9ad429d1688, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_bf03ef58530c54aa9208ad94ccc68164, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_7748d2f62f6f57e2bf9b741600ac1939, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_6837a48ec819561a91201e5217a14611, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace_loc", method_pointer_e94b9c0e23e35156bda76a1833545357, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_target_name_loc", method_pointer_b4be52cf64fb5185a10d1a82395eb68d, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof_kind");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("create_deserialized");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NamespaceAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamespaceAliasDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}