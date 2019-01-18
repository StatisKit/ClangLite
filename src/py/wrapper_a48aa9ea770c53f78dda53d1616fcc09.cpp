#include "_clanglite.h"

void  (::clang::VarTemplateDecl::*method_pointer_0a7ecaabaf7754679efc0b51e2a9b72d)()const= &::clang::VarTemplateDecl::LoadLazySpecializations;
class ::clang::VarDecl * (::clang::VarTemplateDecl::*method_pointer_4c18ac0f52745c0a8f58a22491022c05)()const= &::clang::VarTemplateDecl::getTemplatedDecl;
bool  (::clang::VarTemplateDecl::*method_pointer_25a4190bec455865b48a33b01146e6b3)()const= &::clang::VarTemplateDecl::isThisDeclarationADefinition;
class ::clang::VarTemplateDecl * (::clang::VarTemplateDecl::*method_pointer_6c536b3dfa3254f585fa97f6fa85e723)()= &::clang::VarTemplateDecl::getDefinition;
class ::clang::VarTemplateDecl * (*method_pointer_d11e1bb416fd5367869bc5306d63c624)(class ::clang::ASTContext &, unsigned int )= ::clang::VarTemplateDecl::CreateDeserialized;
class ::clang::VarTemplateDecl * (::clang::VarTemplateDecl::*method_pointer_115b649d25685ebba19ff329a0961f6f)()= &::clang::VarTemplateDecl::getCanonicalDecl;
class ::clang::VarTemplateDecl const * (::clang::VarTemplateDecl::*method_pointer_0f84fe10c6d35ca993cef218ae5d6163)()const= &::clang::VarTemplateDecl::getCanonicalDecl;
class ::clang::VarTemplateDecl * (::clang::VarTemplateDecl::*method_pointer_6cda65950c515e4bbd621d31c5bb312d)()= &::clang::VarTemplateDecl::getPreviousDecl;
class ::clang::VarTemplateDecl const * (::clang::VarTemplateDecl::*method_pointer_3fdffd6c40345ddfbf96df81b02bd0e6)()const= &::clang::VarTemplateDecl::getPreviousDecl;
class ::clang::VarTemplateDecl * (::clang::VarTemplateDecl::*method_pointer_d662f021616e565dbc6a9ddeb19993ef)()= &::clang::VarTemplateDecl::getMostRecentDecl;
class ::clang::VarTemplateDecl const * (::clang::VarTemplateDecl::*method_pointer_5aaff90e5396506b85db819b85d41a7b)()const= &::clang::VarTemplateDecl::getMostRecentDecl;
class ::clang::VarTemplateDecl * (::clang::VarTemplateDecl::*method_pointer_a3cb3117a6f951ca9ded41c5c082ed03)()const= &::clang::VarTemplateDecl::getInstantiatedFromMemberTemplate;
class ::clang::VarTemplatePartialSpecializationDecl * (::clang::VarTemplateDecl::*method_pointer_1c1e722d4a5250dda5a68f9475f184ac)(class ::clang::VarTemplatePartialSpecializationDecl *)= &::clang::VarTemplateDecl::findPartialSpecInstantiatedFromMember;
bool  (*method_pointer_5b2375b928d75b7b9776173f625040b6)(class ::clang::Decl const *)= ::clang::VarTemplateDecl::classof;
bool  (*method_pointer_3381c8ce5aa6575b996a7f957098fde9)(enum ::clang::Decl::Kind )= ::clang::VarTemplateDecl::classofKind;

namespace autowig {
}

void wrapper_a48aa9ea770c53f78dda53d1616fcc09(pybind11::module& module)
{

    pybind11::class_<class ::clang::VarTemplateDecl, autowig::HolderType< class ::clang::VarTemplateDecl >::Type, class ::clang::RedeclarableTemplateDecl > class_a48aa9ea770c53f78dda53d1616fcc09(module, "VarTemplateDecl", "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("load_lazy_specializations", method_pointer_0a7ecaabaf7754679efc0b51e2a9b72d, "Load any lazily-loaded specializations from the external source.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_templated_decl", method_pointer_4c18ac0f52745c0a8f58a22491022c05, pybind11::return_value_policy::reference_internal, "Get the underlying variable declarations of the template.\n\n:Return Type:\n    :cpp:class:`::clang::VarDecl`\n\n");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("is_this_declaration_a_definition", method_pointer_25a4190bec455865b48a33b01146e6b3, "Returns whether this template declaration defines the primary variable\npattern.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_definition", method_pointer_6c536b3dfa3254f585fa97f6fa85e723, pybind11::return_value_policy::reference_internal, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def_static("create_deserialized", method_pointer_d11e1bb416fd5367869bc5306d63c624, pybind11::return_value_policy::reference_internal, "Create an empty variable template node.\n\n:Parameters:\n  - `C` (:cpp:class:`::clang::ASTContext`) - Undocumented\n  - `ID` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::VarTemplateDecl`\n\n");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_115b649d25685ebba19ff329a0961f6f, pybind11::return_value_policy::reference_internal, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_0f84fe10c6d35ca993cef218ae5d6163, pybind11::return_value_policy::reference_internal, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_6cda65950c515e4bbd621d31c5bb312d, pybind11::return_value_policy::reference_internal, "Retrieve the previous declaration of this variable template, or NULL if\nno such declaration exists.\n\n:Return Type:\n    :cpp:class:`::clang::VarTemplateDecl`\n\n");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_3fdffd6c40345ddfbf96df81b02bd0e6, pybind11::return_value_policy::reference_internal, "Retrieve the previous declaration of this variable template, or NULL if\nno such declaration exists.\n\n:Return Type:\n    :cpp:class:`::clang::VarTemplateDecl`\n\n");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_d662f021616e565dbc6a9ddeb19993ef, pybind11::return_value_policy::reference_internal, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_5aaff90e5396506b85db819b85d41a7b, pybind11::return_value_policy::reference_internal, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_instantiated_from_member_template", method_pointer_a3cb3117a6f951ca9ded41c5c082ed03, pybind11::return_value_policy::reference_internal, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("find_partial_spec_instantiated_from_member", method_pointer_1c1e722d4a5250dda5a68f9475f184ac, pybind11::return_value_policy::reference_internal, "Find a variable template partial specialization which was instantiated\nfrom the given member partial specialization.\n\n:Parameter:\n    `D` (:cpp:class:`::clang::VarTemplatePartialSpecializationDecl`) - a member variable template partial specialization.\n\n:Returns:\n    the variable template partial specialization which was instantiated from\n    the given member partial specialization, or NULL if no such partial\n    specialization exists.\n\n:Return Type:\n    :cpp:class:`::clang::VarTemplatePartialSpecializationDecl`\n\n");
    class_a48aa9ea770c53f78dda53d1616fcc09.def_static("classof", method_pointer_5b2375b928d75b7b9776173f625040b6, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def_static("classof_kind", method_pointer_3381c8ce5aa6575b996a7f957098fde9, "");

}