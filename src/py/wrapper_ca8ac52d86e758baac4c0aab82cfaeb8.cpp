#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::VarTemplateSpecializationDecl const volatile * get_pointer<class ::clang::VarTemplateSpecializationDecl const volatile >(class ::clang::VarTemplateSpecializationDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ca8ac52d86e758baac4c0aab82cfaeb8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarTemplateSpecializationDecl * (*method_pointer_0957b4245f415283a81512fbcbb8da8e)(class ::clang::ASTContext &, unsigned int ) = ::clang::VarTemplateSpecializationDecl::CreateDeserialized;
    class ::clang::VarTemplateSpecializationDecl * (::clang::VarTemplateSpecializationDecl::*method_pointer_8071e1590dd35f99b75be6c1743a07f2)() = &::clang::VarTemplateSpecializationDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl * (::clang::VarTemplateSpecializationDecl::*method_pointer_a51f8a21797457748c2fe4eec45ef575)() const = &::clang::VarTemplateSpecializationDecl::getSpecializedTemplate;
    bool  (::clang::VarTemplateSpecializationDecl::*method_pointer_03a323d529c856e7a62d38593625065f)() const = &::clang::VarTemplateSpecializationDecl::isExplicitSpecialization;
    bool  (::clang::VarTemplateSpecializationDecl::*method_pointer_84baf9657820571db5a605bc9b15a959)() const = &::clang::VarTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_347b2bd3b7395db8931e2754bfcd97b6)() const = &::clang::VarTemplateSpecializationDecl::getPointOfInstantiation;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_cef8199c5a675456aaa7e9677d5dd73c)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setPointOfInstantiation;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_03c95157e2e65340a7fbd7f95cb43149)(class ::clang::VarTemplatePartialSpecializationDecl *, class ::clang::TemplateArgumentList const *) = &::clang::VarTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_4b1e65133d3d5e2f84d7bfa16dc07143)(class ::clang::VarTemplateDecl *) = &::clang::VarTemplateSpecializationDecl::setInstantiationOf;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_831c4c2bc7cd5bdf806228f6ac37f854)() const = &::clang::VarTemplateSpecializationDecl::getExternLoc;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_7b7171a4ff3d54c4b3588b1d9bda3f99)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setExternLoc;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_bf8bede4572a5f4593d9202ed1d635b4)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setTemplateKeywordLoc;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_ecb6ab8c2209574785f16052ea327265)() const = &::clang::VarTemplateSpecializationDecl::getTemplateKeywordLoc;
    bool  (*method_pointer_fa844a9441d75625a9c8e44134f67485)(class ::clang::Decl const *) = ::clang::VarTemplateSpecializationDecl::classof;
    bool  (*method_pointer_66455db2f5ab5cf8ba056bd631ba3714)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateSpecializationDecl::classofKind;
    boost::python::class_< class ::clang::VarTemplateSpecializationDecl, autowig::Held< class ::clang::VarTemplateSpecializationDecl >::Type, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_ca8ac52d86e758baac4c0aab82cfaeb8("VarTemplateSpecializationDecl", "Represents a variable template specialization, which refers to a\nvariable template with a given set of template arguments.\n\nVariable template specializations represent both explicit\nspecializations of variable templates, as in the example below, and\nimplicit instantiations of variable templates.\n\n", boost::python::no_init);
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("create_deserialized", method_pointer_0957b4245f415283a81512fbcbb8da8e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_most_recent_decl", method_pointer_8071e1590dd35f99b75be6c1743a07f2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_specialized_template", method_pointer_a51f8a21797457748c2fe4eec45ef575, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the template that this specialization specializes.\n\n:Return Type:\n    :py:class:`clanglite.clang.VarTemplateDecl`\n\n");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("is_explicit_specialization", method_pointer_03a323d529c856e7a62d38593625065f, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("is_explicit_instantiation_or_specialization", method_pointer_84baf9657820571db5a605bc9b15a959, "True if this declaration is an explicit specialization, explicit\ninstantiation declaration, or explicit instantiation definition.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_point_of_instantiation", method_pointer_347b2bd3b7395db8931e2754bfcd97b6, "Get the point of instantiation (if any), or null if none.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_point_of_instantiation", method_pointer_cef8199c5a675456aaa7e9677d5dd73c, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_instantiation_of", method_pointer_03c95157e2e65340a7fbd7f95cb43149, "Note that this variable template specialization is actually an\ninstantiation of the given variable template partial specialization\nwhose template arguments have been deduced.\n\n:Parameters:\n  - `PartialSpec` (:py:class:`clanglite.clang.VarTemplatePartialSpecializationDecl`) - Undocumented\n  - `TemplateArgs` (:py:class:`clanglite.clang.TemplateArgumentList`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_instantiation_of", method_pointer_4b1e65133d3d5e2f84d7bfa16dc07143, "Note that this variable template specialization is an instantiation of\nthe given variable template.\n\n:Parameter:\n    `TemplDecl` (:py:class:`clanglite.clang.VarTemplateDecl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_extern_loc", method_pointer_831c4c2bc7cd5bdf806228f6ac37f854, "Gets the location of the extern keyword, if present.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_extern_loc", method_pointer_7b7171a4ff3d54c4b3588b1d9bda3f99, "Sets the location of the extern keyword.\n\n:Parameter:\n    `Loc` (:py:class:`clanglite.clang.SourceLocation`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_template_keyword_loc", method_pointer_bf8bede4572a5f4593d9202ed1d635b4, "Sets the location of the template keyword.\n\n:Parameter:\n    `Loc` (:py:class:`clanglite.clang.SourceLocation`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_template_keyword_loc", method_pointer_ecb6ab8c2209574785f16052ea327265, "Gets the location of the template keyword, if present.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("classof", method_pointer_fa844a9441d75625a9c8e44134f67485, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("classof_kind", method_pointer_66455db2f5ab5cf8ba056bd631ba3714, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("classof_kind");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("create_deserialized");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("classof");

    if(autowig::Held< class ::clang::VarTemplateSpecializationDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::VarTemplateSpecializationDecl >::Type, autowig::Held< class ::clang::VarDecl >::Type >();
    }

}