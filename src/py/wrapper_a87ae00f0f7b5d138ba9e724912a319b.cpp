#include "_clanglite.h"

class ::clang::NamespaceAliasDecl * (*method_pointer_ba50b3197ffe5ae38aa815c74f48bc38)(class ::clang::ASTContext &, unsigned int )= ::clang::NamespaceAliasDecl::CreateDeserialized;
class ::clang::NamespaceAliasDecl * (::clang::NamespaceAliasDecl::*method_pointer_fd0b4e2f7ca355f8bc2ecf5e618640de)()= &::clang::NamespaceAliasDecl::getCanonicalDecl;
class ::clang::NamespaceAliasDecl const * (::clang::NamespaceAliasDecl::*method_pointer_efd1ffc7b0615c02a7778d8ca5b27520)()const= &::clang::NamespaceAliasDecl::getCanonicalDecl;
class ::clang::NamespaceDecl * (::clang::NamespaceAliasDecl::*method_pointer_cb59f4b612a15d9fbaf01fc097766a73)()= &::clang::NamespaceAliasDecl::getNamespace;
class ::clang::NamespaceDecl const * (::clang::NamespaceAliasDecl::*method_pointer_28b8fc519e3a50c49f18ad19d2da9c9c)()const= &::clang::NamespaceAliasDecl::getNamespace;
class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_137265c33aa05ae9b1beb075af303384)()const= &::clang::NamespaceAliasDecl::getAliasLoc;
class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_d96b9298f6d157b59561135beeb2d592)()const= &::clang::NamespaceAliasDecl::getNamespaceLoc;
class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_0de532cf35f35ad1a57c9f2567ba725a)()const= &::clang::NamespaceAliasDecl::getTargetNameLoc;
class ::clang::NamedDecl * (::clang::NamespaceAliasDecl::*method_pointer_66c9ed73cd835cdfb2bdf4eec3a54541)()const= &::clang::NamespaceAliasDecl::getAliasedNamespace;
bool  (*method_pointer_487a7953e4245d6f894458246c78d852)(class ::clang::Decl const *)= ::clang::NamespaceAliasDecl::classof;
bool  (*method_pointer_142b48d4c5035ddc94b2407b3e82d587)(enum ::clang::Decl::Kind )= ::clang::NamespaceAliasDecl::classofKind;


void wrapper_a87ae00f0f7b5d138ba9e724912a319b(pybind11::module& module)
{

    pybind11::class_<class ::clang::NamespaceAliasDecl, autowig::HolderType< class ::clang::NamespaceAliasDecl >::Type, class ::clang::NamedDecl > class_a87ae00f0f7b5d138ba9e724912a319b(module, "NamespaceAliasDecl", "Represents a C++ namespace alias.\n\nFor example:\n\n");
    class_a87ae00f0f7b5d138ba9e724912a319b.def_static("create_deserialized", method_pointer_ba50b3197ffe5ae38aa815c74f48bc38, pybind11::return_value_policy::reference_internal, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_fd0b4e2f7ca355f8bc2ecf5e618640de, pybind11::return_value_policy::reference_internal, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_efd1ffc7b0615c02a7778d8ca5b27520, pybind11::return_value_policy::reference_internal, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_cb59f4b612a15d9fbaf01fc097766a73, pybind11::return_value_policy::reference_internal, "Retrieve the namespace declaration aliased by this directive.\n\n:Return Type:\n    :cpp:class:`::clang::NamespaceDecl`\n\n");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_28b8fc519e3a50c49f18ad19d2da9c9c, pybind11::return_value_policy::reference_internal, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_alias_loc", method_pointer_137265c33aa05ae9b1beb075af303384, ":Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace_loc", method_pointer_d96b9298f6d157b59561135beeb2d592, ":Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_target_name_loc", method_pointer_0de532cf35f35ad1a57c9f2567ba725a, ":Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_aliased_namespace", method_pointer_66c9ed73cd835cdfb2bdf4eec3a54541, pybind11::return_value_policy::reference_internal, "Retrieve the namespace that this alias refers to, which may either be a\nNamespaceDecl or a NamespaceAliasDecl.\n\n:Return Type:\n    :cpp:class:`::clang::NamedDecl`\n\n");
    class_a87ae00f0f7b5d138ba9e724912a319b.def_static("classof", method_pointer_487a7953e4245d6f894458246c78d852, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def_static("classof_kind", method_pointer_142b48d4c5035ddc94b2407b3e82d587, "");

}