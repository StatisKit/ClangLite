#include "_clanglite.h"


namespace autowig
{
}


void wrapper_a87ae00f0f7b5d138ba9e724912a319b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamespaceAliasDecl  * (*method_pointer_36df9b8208b95b90910b1b8e5da88b8f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceAliasDecl::CreateDeserialized;
    bool  (*method_pointer_c19c9c17a77d50b0ac75d03cfff0408d)(class ::clang::Decl  const *) = ::clang::NamespaceAliasDecl::classof;
    bool  (*method_pointer_8c3ad03b3e7a5c0abbcfb6a6584c682c)(enum ::clang::Decl::Kind ) = ::clang::NamespaceAliasDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::NamespaceAliasDecl::*method_pointer_4f7a74e859ad515cb1b1e29ef5a59105)() const = &::clang::NamespaceAliasDecl::getAliasedNamespace;
    class ::clang::NamespaceAliasDecl  * (::clang::NamespaceAliasDecl::*method_pointer_1cb10d0bf8d15e68be3cf644778c2b31)() = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    class ::clang::NamespaceAliasDecl  const * (::clang::NamespaceAliasDecl::*method_pointer_19113d6c3086545a97462ea1b43f16b2)() const = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceAliasDecl::*method_pointer_6e89462bcaeb5c75ac2a783470218ec8)() const = &::clang::NamespaceAliasDecl::getNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceAliasDecl::*method_pointer_bcab17cf6b11559d8f5f3420cdedea36)() = &::clang::NamespaceAliasDecl::getNamespace;
    boost::python::class_< class ::clang::NamespaceAliasDecl, autowig::HeldType< class ::clang::NamespaceAliasDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_a87ae00f0f7b5d138ba9e724912a319b("NamespaceAliasDecl", "", boost::python::no_init);
    class_a87ae00f0f7b5d138ba9e724912a319b.def("create_deserialized", method_pointer_36df9b8208b95b90910b1b8e5da88b8f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof", method_pointer_c19c9c17a77d50b0ac75d03cfff0408d, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof_kind", method_pointer_8c3ad03b3e7a5c0abbcfb6a6584c682c, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_aliased_namespace", method_pointer_4f7a74e859ad515cb1b1e29ef5a59105, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_1cb10d0bf8d15e68be3cf644778c2b31, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_19113d6c3086545a97462ea1b43f16b2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_6e89462bcaeb5c75ac2a783470218ec8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_bcab17cf6b11559d8f5f3420cdedea36, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof_kind");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("create_deserialized");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NamespaceAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamespaceAliasDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}