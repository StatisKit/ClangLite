#include "_clanglite.h"

class ::clang::NamedDecl * (::clang::UsingDirectiveDecl::*method_pointer_b714b72c22565ea7b312458b1291f991)()= &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
class ::clang::NamedDecl const * (::clang::UsingDirectiveDecl::*method_pointer_e71daea08952503381bacae31bee3217)()const= &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
class ::clang::NamespaceDecl * (::clang::UsingDirectiveDecl::*method_pointer_26e04525fb715605bb82722fcd59faa0)()= &::clang::UsingDirectiveDecl::getNominatedNamespace;
class ::clang::NamespaceDecl const * (::clang::UsingDirectiveDecl::*method_pointer_e510e3270e3c58b8be7315d6df9daabc)()const= &::clang::UsingDirectiveDecl::getNominatedNamespace;
class ::clang::DeclContext * (::clang::UsingDirectiveDecl::*method_pointer_d150a1d93cb45e09b052cfa92e0bc341)()= &::clang::UsingDirectiveDecl::getCommonAncestor;
class ::clang::DeclContext const * (::clang::UsingDirectiveDecl::*method_pointer_e15be1eaeb6b521f803a3bc7209dc83d)()const= &::clang::UsingDirectiveDecl::getCommonAncestor;
class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_b26c3ec326ec589881fcb50cd4e24eab)()const= &::clang::UsingDirectiveDecl::getUsingLoc;
class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_726b2edb545e5b0792b768d94e0d0307)()const= &::clang::UsingDirectiveDecl::getNamespaceKeyLocation;
class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_743fbd46ce0852dbbcb2f7f021c5fd0c)()const= &::clang::UsingDirectiveDecl::getIdentLocation;
class ::clang::UsingDirectiveDecl * (*method_pointer_ac59574b74b75234a9f3c2c108e48bac)(class ::clang::ASTContext &, unsigned int )= ::clang::UsingDirectiveDecl::CreateDeserialized;
bool  (*method_pointer_067da93903645928a49f46a27b914b3d)(class ::clang::Decl const *)= ::clang::UsingDirectiveDecl::classof;
bool  (*method_pointer_b0c8f3edfc2e52ed9a9b202314979a2e)(enum ::clang::Decl::Kind )= ::clang::UsingDirectiveDecl::classofKind;


void wrapper_fcccd64b80075599a0a8ea554051b540(pybind11::module& module)
{

    pybind11::class_<class ::clang::UsingDirectiveDecl, autowig::HolderType< class ::clang::UsingDirectiveDecl >::Type, class ::clang::NamedDecl > class_fcccd64b80075599a0a8ea554051b540(module, "UsingDirectiveDecl", "Represents C++ using-directive.\n\nFor example:\n\n.. note::\n\n    UsingDirectiveDecl should be Decl not NamedDecl, but we provide\n    artificial names for all using-directives in order to store them in\n    DeclContext effectively.\n\n");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_b714b72c22565ea7b312458b1291f991, pybind11::return_value_policy::reference_internal, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_e71daea08952503381bacae31bee3217, pybind11::return_value_policy::reference_internal, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_26e04525fb715605bb82722fcd59faa0, pybind11::return_value_policy::reference_internal, "Returns the namespace nominated by this using-directive.\n\n:Return Type:\n    :cpp:class:`::clang::NamespaceDecl`\n\n");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_e510e3270e3c58b8be7315d6df9daabc, pybind11::return_value_policy::reference_internal, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_d150a1d93cb45e09b052cfa92e0bc341, pybind11::return_value_policy::reference_internal, "Returns the common ancestor context of this using-directive and its\nnominated namespace.\n\n:Return Type:\n    :cpp:class:`::clang::DeclContext`\n\n");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_e15be1eaeb6b521f803a3bc7209dc83d, pybind11::return_value_policy::reference_internal, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_using_loc", method_pointer_b26c3ec326ec589881fcb50cd4e24eab, "Return the location of the :raw-latex:`\\c using keyword.`\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_fcccd64b80075599a0a8ea554051b540.def("get_namespace_key_location", method_pointer_726b2edb545e5b0792b768d94e0d0307, "Returns the location of the :raw-latex:`\\c namespace keyword.`\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_fcccd64b80075599a0a8ea554051b540.def("get_ident_location", method_pointer_743fbd46ce0852dbbcb2f7f021c5fd0c, "Returns the location of this using declaration’s identifier.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_fcccd64b80075599a0a8ea554051b540.def_static("create_deserialized", method_pointer_ac59574b74b75234a9f3c2c108e48bac, pybind11::return_value_policy::reference_internal, "");
    class_fcccd64b80075599a0a8ea554051b540.def_static("classof", method_pointer_067da93903645928a49f46a27b914b3d, "");
    class_fcccd64b80075599a0a8ea554051b540.def_static("classof_kind", method_pointer_b0c8f3edfc2e52ed9a9b202314979a2e, "");

}