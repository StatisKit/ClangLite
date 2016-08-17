#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_a87ae00f0f7b5d138ba9e724912a319b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamespaceDecl  * (::clang::NamespaceAliasDecl::*method_pointer_5f1af1e4e3c15835908d4039883c7da3)() = &::clang::NamespaceAliasDecl::getNamespace;
    class ::clang::NamespaceAliasDecl  * (::clang::NamespaceAliasDecl::*method_pointer_8ad559c3074c504b90ebf18c66968fae)() = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    class ::clang::NamedDecl  * (::clang::NamespaceAliasDecl::*method_pointer_1202b2bf2c885161aad1305f47cdb871)() const = &::clang::NamespaceAliasDecl::getAliasedNamespace;
    class ::clang::NamespaceAliasDecl  * (*method_pointer_ffcc4c4fc7975cd5a5e2ef305ceb688a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceAliasDecl::CreateDeserialized;
    bool  (*method_pointer_8a9988b0b2a9559d81830ec594e8b940)(class ::clang::Decl  const *) = ::clang::NamespaceAliasDecl::classof;
    bool  (*method_pointer_499822d1a11a571ea0e145a1739a5b52)(enum ::clang::Decl::Kind ) = ::clang::NamespaceAliasDecl::classofKind;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceAliasDecl::*method_pointer_04a7b13bd24053f3ac7be3f21d68bba4)() const = &::clang::NamespaceAliasDecl::getNamespace;
    class ::clang::NamespaceAliasDecl  const * (::clang::NamespaceAliasDecl::*method_pointer_eb01cb379db055349b8901a7b1f1b63b)() const = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    boost::python::class_< class ::clang::NamespaceAliasDecl, autowig::HeldType< class ::clang::NamespaceAliasDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_a87ae00f0f7b5d138ba9e724912a319b("NamespaceAliasDecl", "", boost::python::no_init);
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_5f1af1e4e3c15835908d4039883c7da3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_8ad559c3074c504b90ebf18c66968fae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_aliased_namespace", method_pointer_1202b2bf2c885161aad1305f47cdb871, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("create_deserialized", method_pointer_ffcc4c4fc7975cd5a5e2ef305ceb688a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof", method_pointer_8a9988b0b2a9559d81830ec594e8b940, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof_kind", method_pointer_499822d1a11a571ea0e145a1739a5b52, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_04a7b13bd24053f3ac7be3f21d68bba4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_eb01cb379db055349b8901a7b1f1b63b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof_kind");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("create_deserialized");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NamespaceAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamespaceAliasDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}