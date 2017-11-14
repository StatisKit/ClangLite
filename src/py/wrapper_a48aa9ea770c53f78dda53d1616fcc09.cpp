#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::VarTemplateDecl const volatile * get_pointer<class ::clang::VarTemplateDecl const volatile >(class ::clang::VarTemplateDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a48aa9ea770c53f78dda53d1616fcc09()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::VarTemplateDecl::*method_pointer_0a7ecaabaf7754679efc0b51e2a9b72d)() const = &::clang::VarTemplateDecl::LoadLazySpecializations;
    class ::clang::VarDecl * (::clang::VarTemplateDecl::*method_pointer_4c18ac0f52745c0a8f58a22491022c05)() const = &::clang::VarTemplateDecl::getTemplatedDecl;
    bool  (::clang::VarTemplateDecl::*method_pointer_25a4190bec455865b48a33b01146e6b3)() const = &::clang::VarTemplateDecl::isThisDeclarationADefinition;
    class ::clang::VarTemplateDecl * (::clang::VarTemplateDecl::*method_pointer_6c536b3dfa3254f585fa97f6fa85e723)() = &::clang::VarTemplateDecl::getDefinition;
    class ::clang::VarTemplateDecl * (*method_pointer_d11e1bb416fd5367869bc5306d63c624)(class ::clang::ASTContext &, unsigned int ) = ::clang::VarTemplateDecl::CreateDeserialized;
    class ::clang::VarTemplateDecl * (::clang::VarTemplateDecl::*method_pointer_115b649d25685ebba19ff329a0961f6f)() = &::clang::VarTemplateDecl::getCanonicalDecl;
    class ::clang::VarTemplateDecl const * (::clang::VarTemplateDecl::*method_pointer_0f84fe10c6d35ca993cef218ae5d6163)() const = &::clang::VarTemplateDecl::getCanonicalDecl;
    class ::clang::VarTemplateDecl * (::clang::VarTemplateDecl::*method_pointer_6cda65950c515e4bbd621d31c5bb312d)() = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarTemplateDecl const * (::clang::VarTemplateDecl::*method_pointer_3fdffd6c40345ddfbf96df81b02bd0e6)() const = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarTemplateDecl * (::clang::VarTemplateDecl::*method_pointer_d662f021616e565dbc6a9ddeb19993ef)() = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl const * (::clang::VarTemplateDecl::*method_pointer_5aaff90e5396506b85db819b85d41a7b)() const = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl * (::clang::VarTemplateDecl::*method_pointer_a3cb3117a6f951ca9ded41c5c082ed03)() const = &::clang::VarTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::VarTemplatePartialSpecializationDecl * (::clang::VarTemplateDecl::*method_pointer_1c1e722d4a5250dda5a68f9475f184ac)(class ::clang::VarTemplatePartialSpecializationDecl *) = &::clang::VarTemplateDecl::findPartialSpecInstantiatedFromMember;
    bool  (*method_pointer_5b2375b928d75b7b9776173f625040b6)(class ::clang::Decl const *) = ::clang::VarTemplateDecl::classof;
    bool  (*method_pointer_3381c8ce5aa6575b996a7f957098fde9)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateDecl::classofKind;
    boost::python::class_< class ::clang::VarTemplateDecl, autowig::Held< class ::clang::VarTemplateDecl >::Type, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_a48aa9ea770c53f78dda53d1616fcc09("VarTemplateDecl", "", boost::python::no_init);
    class_a48aa9ea770c53f78dda53d1616fcc09.def("load_lazy_specializations", method_pointer_0a7ecaabaf7754679efc0b51e2a9b72d, "Load any lazily-loaded specializations from the external source.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_templated_decl", method_pointer_4c18ac0f52745c0a8f58a22491022c05, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Get the underlying variable declarations of the template.\n\n:Return Type:\n    :py:class:`clanglite.clang.VarDecl`\n\n");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("is_this_declaration_a_definition", method_pointer_25a4190bec455865b48a33b01146e6b3, "Returns whether this template declaration defines the primary variable\npattern.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_definition", method_pointer_6c536b3dfa3254f585fa97f6fa85e723, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("create_deserialized", method_pointer_d11e1bb416fd5367869bc5306d63c624, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Create an empty variable template node.\n\n:Parameters:\n  - `C` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n  - `ID` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.VarTemplateDecl`\n\n");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_115b649d25685ebba19ff329a0961f6f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_0f84fe10c6d35ca993cef218ae5d6163, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_6cda65950c515e4bbd621d31c5bb312d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the previous declaration of this variable template, or NULL if\nno such declaration exists.\n\n:Return Type:\n    :py:class:`clanglite.clang.VarTemplateDecl`\n\n");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_3fdffd6c40345ddfbf96df81b02bd0e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the previous declaration of this variable template, or NULL if\nno such declaration exists.\n\n:Return Type:\n    :py:class:`clanglite.clang.VarTemplateDecl`\n\n");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_d662f021616e565dbc6a9ddeb19993ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_5aaff90e5396506b85db819b85d41a7b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_instantiated_from_member_template", method_pointer_a3cb3117a6f951ca9ded41c5c082ed03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("find_partial_spec_instantiated_from_member", method_pointer_1c1e722d4a5250dda5a68f9475f184ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Find a variable template partial specialization which was instantiated\nfrom the given member partial specialization.\n\n:Parameter:\n    `D` (:py:class:`clanglite.clang.VarTemplatePartialSpecializationDecl`) - a member variable template partial specialization.\n\n:Returns:\n    the variable template partial specialization which was instantiated from\n    the given member partial specialization, or NULL if no such partial\n    specialization exists.\n\n:Return Type:\n    :py:class:`clanglite.clang.VarTemplatePartialSpecializationDecl`\n\n");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof", method_pointer_5b2375b928d75b7b9776173f625040b6, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof_kind", method_pointer_3381c8ce5aa6575b996a7f957098fde9, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof_kind");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("create_deserialized");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof");

    if(autowig::Held< class ::clang::VarTemplateDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::VarTemplateDecl >::Type, autowig::Held< class ::clang::RedeclarableTemplateDecl >::Type >();
    }

}