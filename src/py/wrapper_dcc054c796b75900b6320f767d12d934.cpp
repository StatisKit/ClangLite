#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::VarTemplatePartialSpecializationDecl const volatile * get_pointer<class ::clang::VarTemplatePartialSpecializationDecl const volatile >(class ::clang::VarTemplatePartialSpecializationDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dcc054c796b75900b6320f767d12d934()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarTemplatePartialSpecializationDecl * (*method_pointer_0f507becab4255118435fbdb244ad254)(class ::clang::ASTContext &, unsigned int ) = ::clang::VarTemplatePartialSpecializationDecl::CreateDeserialized;
    class ::clang::VarTemplatePartialSpecializationDecl * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_b6a861c91f475587ad9a65238d00567b)() = &::clang::VarTemplatePartialSpecializationDecl::getMostRecentDecl;
    class ::clang::VarTemplatePartialSpecializationDecl * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_ccbdaa8b550c55be878a625c941f5589)() const = &::clang::VarTemplatePartialSpecializationDecl::getInstantiatedFromMember;
    void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_4f8fdb290b0155ac98a20b6bf81aa088)(class ::clang::VarTemplatePartialSpecializationDecl *) = &::clang::VarTemplatePartialSpecializationDecl::setInstantiatedFromMember;
    bool  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_80cd3f055c445e3981c47232a67df5a4)() = &::clang::VarTemplatePartialSpecializationDecl::isMemberSpecialization;
    void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_00990ce2b30259aaa065142173c4b3c3)() = &::clang::VarTemplatePartialSpecializationDecl::setMemberSpecialization;
    bool  (*method_pointer_e3f3c94b937353b19a1af00fa5ebb6d3)(class ::clang::Decl const *) = ::clang::VarTemplatePartialSpecializationDecl::classof;
    bool  (*method_pointer_532e9077f0525c3aa6b1c0da10624f2e)(enum ::clang::Decl::Kind ) = ::clang::VarTemplatePartialSpecializationDecl::classofKind;
    boost::python::class_< class ::clang::VarTemplatePartialSpecializationDecl, autowig::Held< class ::clang::VarTemplatePartialSpecializationDecl >::Type, boost::python::bases< class ::clang::VarTemplateSpecializationDecl >, boost::noncopyable > class_dcc054c796b75900b6320f767d12d934("VarTemplatePartialSpecializationDecl", "", boost::python::no_init);
    class_dcc054c796b75900b6320f767d12d934.def("create_deserialized", method_pointer_0f507becab4255118435fbdb244ad254, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("get_most_recent_decl", method_pointer_b6a861c91f475587ad9a65238d00567b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("get_instantiated_from_member", method_pointer_ccbdaa8b550c55be878a625c941f5589, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the member variable template partial specialization from which\nthis particular variable template partial specialization was\ninstantiated.\n\n:Return Type:\n    :py:class:`clanglite.clang.VarTemplatePartialSpecializationDecl`\n\n");
    class_dcc054c796b75900b6320f767d12d934.def("set_instantiated_from_member", method_pointer_4f8fdb290b0155ac98a20b6bf81aa088, "");
    class_dcc054c796b75900b6320f767d12d934.def("is_member_specialization", method_pointer_80cd3f055c445e3981c47232a67df5a4, "Determines whether this variable template partial specialization was a\nspecialization of a member partial specialization.\n\nIn the following example, the member template partial specialization\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_dcc054c796b75900b6320f767d12d934.def("set_member_specialization", method_pointer_00990ce2b30259aaa065142173c4b3c3, "Note that this member template is a specialization.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_dcc054c796b75900b6320f767d12d934.def("classof", method_pointer_e3f3c94b937353b19a1af00fa5ebb6d3, "");
    class_dcc054c796b75900b6320f767d12d934.def("classof_kind", method_pointer_532e9077f0525c3aa6b1c0da10624f2e, "");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("classof_kind");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("create_deserialized");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("classof");

    if(autowig::Held< class ::clang::VarTemplatePartialSpecializationDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::VarTemplatePartialSpecializationDecl >::Type, autowig::Held< class ::clang::VarTemplateSpecializationDecl >::Type >();
    }

}