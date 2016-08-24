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
    class ::clang::NamespaceAliasDecl  * (*method_pointer_36d34014483b5c07ba6eca847254a915)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceAliasDecl::CreateDeserialized;
    bool  (*method_pointer_916d276905bd51e39ae91f2ac234f93e)(class ::clang::Decl  const *) = ::clang::NamespaceAliasDecl::classof;
    bool  (*method_pointer_240070bcad3b51ce8caa90960a6a1592)(enum ::clang::Decl::Kind ) = ::clang::NamespaceAliasDecl::classofKind;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_4d64efa51fa65898978caf41fcfb0c51)() const = &::clang::NamespaceAliasDecl::getAliasLoc;
    class ::clang::NamedDecl  * (::clang::NamespaceAliasDecl::*method_pointer_ea09ec7c9fdd5bf291de0562cd7ef140)() const = &::clang::NamespaceAliasDecl::getAliasedNamespace;
    class ::clang::NamespaceAliasDecl  const * (::clang::NamespaceAliasDecl::*method_pointer_d9e19d3586575aceb975eb7892a37cd4)() const = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    class ::clang::NamespaceAliasDecl  * (::clang::NamespaceAliasDecl::*method_pointer_87e83abe451858f68fcd903057035623)() = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  * (::clang::NamespaceAliasDecl::*method_pointer_c52f0e9c2345503b9c0a2d379a2dc413)() = &::clang::NamespaceAliasDecl::getNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceAliasDecl::*method_pointer_91f736f66bd75942ba4de76052886528)() const = &::clang::NamespaceAliasDecl::getNamespace;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_e3aa3c13f6da525e81f5060c13a78357)() const = &::clang::NamespaceAliasDecl::getNamespaceLoc;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_581599313dd052ca9e808175f5ad477b)() const = &::clang::NamespaceAliasDecl::getTargetNameLoc;
    boost::python::class_< class ::clang::NamespaceAliasDecl, autowig::HeldType< class ::clang::NamespaceAliasDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_a87ae00f0f7b5d138ba9e724912a319b("NamespaceAliasDecl", "", boost::python::no_init);
    class_a87ae00f0f7b5d138ba9e724912a319b.def("create_deserialized", method_pointer_36d34014483b5c07ba6eca847254a915, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof", method_pointer_916d276905bd51e39ae91f2ac234f93e, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof_kind", method_pointer_240070bcad3b51ce8caa90960a6a1592, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_alias_loc", method_pointer_4d64efa51fa65898978caf41fcfb0c51, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_aliased_namespace", method_pointer_ea09ec7c9fdd5bf291de0562cd7ef140, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_d9e19d3586575aceb975eb7892a37cd4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_87e83abe451858f68fcd903057035623, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_c52f0e9c2345503b9c0a2d379a2dc413, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_91f736f66bd75942ba4de76052886528, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace_loc", method_pointer_e3aa3c13f6da525e81f5060c13a78357, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_target_name_loc", method_pointer_581599313dd052ca9e808175f5ad477b, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof_kind");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("create_deserialized");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NamespaceAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamespaceAliasDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}