#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::NamespaceAliasDecl const volatile * get_pointer<class ::clang::NamespaceAliasDecl const volatile >(class ::clang::NamespaceAliasDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a87ae00f0f7b5d138ba9e724912a319b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamespaceAliasDecl * (*method_pointer_ba50b3197ffe5ae38aa815c74f48bc38)(class ::clang::ASTContext &, unsigned int ) = ::clang::NamespaceAliasDecl::CreateDeserialized;
    class ::clang::NamespaceAliasDecl * (::clang::NamespaceAliasDecl::*method_pointer_fd0b4e2f7ca355f8bc2ecf5e618640de)() = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    class ::clang::NamespaceAliasDecl const * (::clang::NamespaceAliasDecl::*method_pointer_efd1ffc7b0615c02a7778d8ca5b27520)() const = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl * (::clang::NamespaceAliasDecl::*method_pointer_cb59f4b612a15d9fbaf01fc097766a73)() = &::clang::NamespaceAliasDecl::getNamespace;
    class ::clang::NamespaceDecl const * (::clang::NamespaceAliasDecl::*method_pointer_28b8fc519e3a50c49f18ad19d2da9c9c)() const = &::clang::NamespaceAliasDecl::getNamespace;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_137265c33aa05ae9b1beb075af303384)() const = &::clang::NamespaceAliasDecl::getAliasLoc;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_d96b9298f6d157b59561135beeb2d592)() const = &::clang::NamespaceAliasDecl::getNamespaceLoc;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_0de532cf35f35ad1a57c9f2567ba725a)() const = &::clang::NamespaceAliasDecl::getTargetNameLoc;
    class ::clang::NamedDecl * (::clang::NamespaceAliasDecl::*method_pointer_66c9ed73cd835cdfb2bdf4eec3a54541)() const = &::clang::NamespaceAliasDecl::getAliasedNamespace;
    bool  (*method_pointer_487a7953e4245d6f894458246c78d852)(class ::clang::Decl const *) = ::clang::NamespaceAliasDecl::classof;
    bool  (*method_pointer_142b48d4c5035ddc94b2407b3e82d587)(enum ::clang::Decl::Kind ) = ::clang::NamespaceAliasDecl::classofKind;
    boost::python::class_< class ::clang::NamespaceAliasDecl, autowig::Held< class ::clang::NamespaceAliasDecl >::Type, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_a87ae00f0f7b5d138ba9e724912a319b("NamespaceAliasDecl", "Represents a C++ namespace alias.\n\nFor example:\n\n", boost::python::no_init);
    class_a87ae00f0f7b5d138ba9e724912a319b.def("create_deserialized", method_pointer_ba50b3197ffe5ae38aa815c74f48bc38, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_fd0b4e2f7ca355f8bc2ecf5e618640de, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_efd1ffc7b0615c02a7778d8ca5b27520, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_cb59f4b612a15d9fbaf01fc097766a73, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the namespace declaration aliased by this directive.\n\n:Return Type:\n    :py:class:`clanglite.clang.NamespaceDecl`\n\n");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_28b8fc519e3a50c49f18ad19d2da9c9c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_alias_loc", method_pointer_137265c33aa05ae9b1beb075af303384, ":Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace_loc", method_pointer_d96b9298f6d157b59561135beeb2d592, ":Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_target_name_loc", method_pointer_0de532cf35f35ad1a57c9f2567ba725a, ":Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_aliased_namespace", method_pointer_66c9ed73cd835cdfb2bdf4eec3a54541, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the namespace that this alias refers to, which may either be a\nNamespaceDecl or a NamespaceAliasDecl.\n\n:Return Type:\n    :py:class:`clanglite.clang.NamedDecl`\n\n");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof", method_pointer_487a7953e4245d6f894458246c78d852, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof_kind", method_pointer_142b48d4c5035ddc94b2407b3e82d587, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof_kind");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("create_deserialized");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof");

    if(autowig::Held< class ::clang::NamespaceAliasDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::NamespaceAliasDecl >::Type, autowig::Held< class ::clang::NamedDecl >::Type >();
    }

}