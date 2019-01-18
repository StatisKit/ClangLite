#include "_clanglite.h"

class ::clang::ClassTemplateSpecializationDecl * (*method_pointer_e8261de462b558e0a7de6505db07d6ea)(class ::clang::ASTContext &, unsigned int )= ::clang::ClassTemplateSpecializationDecl::CreateDeserialized;
class ::clang::ClassTemplateSpecializationDecl * (::clang::ClassTemplateSpecializationDecl::*method_pointer_abbed1fd4d9a51a095cc09c371337455)()= &::clang::ClassTemplateSpecializationDecl::getMostRecentDecl;
class ::clang::ClassTemplateDecl * (::clang::ClassTemplateSpecializationDecl::*method_pointer_96248976868755f896edca666dc106a9)()const= &::clang::ClassTemplateSpecializationDecl::getSpecializedTemplate;
bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_7b190fe4d64453acac438b33a7cbd05b)()const= &::clang::ClassTemplateSpecializationDecl::isExplicitSpecialization;
bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_cbd7f41c2e6356eda19012862adb2fae)()const= &::clang::ClassTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_88add950484951af8758309ae93f957d)()const= &::clang::ClassTemplateSpecializationDecl::getPointOfInstantiation;
void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_67336c579be853aa945c7e1f1803eaaf)(class ::clang::SourceLocation )= &::clang::ClassTemplateSpecializationDecl::setPointOfInstantiation;
void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_056e7ce12aba5be692716f4c3abb23e5)(class ::clang::ClassTemplatePartialSpecializationDecl *, class ::clang::TemplateArgumentList const *)= &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_a17f4274466350638b771e8c88f29fc8)(class ::clang::ClassTemplateDecl *)= &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_d5222eadef945ac7b6d1c401b70fd66e)()const= &::clang::ClassTemplateSpecializationDecl::getExternLoc;
void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_7c4b12d971fb5404903593b9c1035641)(class ::clang::SourceLocation )= &::clang::ClassTemplateSpecializationDecl::setExternLoc;
void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_4b419c08a77a55e6ad14b7b66f47bdaf)(class ::clang::SourceLocation )= &::clang::ClassTemplateSpecializationDecl::setTemplateKeywordLoc;
class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_663196895a5558b8aa02903dce616674)()const= &::clang::ClassTemplateSpecializationDecl::getTemplateKeywordLoc;
bool  (*method_pointer_9755af619be45c09a73c71f46c2dd9e6)(class ::clang::Decl const *)= ::clang::ClassTemplateSpecializationDecl::classof;
bool  (*method_pointer_ef8d7e1fffbf51ed890e5d4ae95f346d)(enum ::clang::Decl::Kind )= ::clang::ClassTemplateSpecializationDecl::classofKind;

namespace autowig {
}

void wrapper_f36600d29ca4530a95955d39f3729dd4(pybind11::module& module)
{

    struct function_group
    {
        static class ::pybind11::str  function_de5de23e21ab5dd1b97b03116e31a5a4(class ::clang::ClassTemplateSpecializationDecl * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
        static class ::clang::TemplateArgumentList * function_6b868fc13814573583abb8d4545c6cc5(class ::clang::ClassTemplateSpecializationDecl & parameter_0)
        { return ::clanglite::get_template_args(parameter_0); }
    };
    pybind11::class_<class ::clang::ClassTemplateSpecializationDecl, autowig::HolderType< class ::clang::ClassTemplateSpecializationDecl >::Type, class ::clang::CXXRecordDecl > class_f36600d29ca4530a95955d39f3729dd4(module, "ClassTemplateSpecializationDecl", "Represents a class template specialization, which refers to a class\ntemplate with a given set of template arguments.\n\nClass template specializations represent both explicit specialization of\nclass templates, as in the example below, and implicit instantiations of\nclass templates.\n\n");
    class_f36600d29ca4530a95955d39f3729dd4.def_static("create_deserialized", method_pointer_e8261de462b558e0a7de6505db07d6ea, pybind11::return_value_policy::reference_internal, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_most_recent_decl", method_pointer_abbed1fd4d9a51a095cc09c371337455, pybind11::return_value_policy::reference_internal, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_specialized_template", method_pointer_96248976868755f896edca666dc106a9, pybind11::return_value_policy::reference_internal, "Retrieve the template that this specialization specializes.\n\n:Return Type:\n    :cpp:class:`::clang::ClassTemplateDecl`\n\n");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_specialization", method_pointer_7b190fe4d64453acac438b33a7cbd05b, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_instantiation_or_specialization", method_pointer_cbd7f41c2e6356eda19012862adb2fae, "True if this declaration is an explicit specialization, explicit\ninstantiation declaration, or explicit instantiation definition.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_point_of_instantiation", method_pointer_88add950484951af8758309ae93f957d, "Get the point of instantiation (if any), or null if none.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_point_of_instantiation", method_pointer_67336c579be853aa945c7e1f1803eaaf, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_056e7ce12aba5be692716f4c3abb23e5, "Note that this class template specialization is actually an\ninstantiation of the given class template partial specialization whose\ntemplate arguments have been deduced.\n\n:Parameters:\n  - `PartialSpec` (:cpp:class:`::clang::ClassTemplatePartialSpecializationDecl`) - Undocumented\n  - `TemplateArgs` (:cpp:class:`::clang::TemplateArgumentList`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_a17f4274466350638b771e8c88f29fc8, "Note that this class template specialization is an instantiation of the\ngiven class template.\n\n:Parameter:\n    `TemplDecl` (:cpp:class:`::clang::ClassTemplateDecl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_extern_loc", method_pointer_d5222eadef945ac7b6d1c401b70fd66e, "Gets the location of the extern keyword, if present.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_extern_loc", method_pointer_7c4b12d971fb5404903593b9c1035641, "Sets the location of the extern keyword.\n\n:Parameter:\n    `Loc` (:cpp:class:`::clang::SourceLocation`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_template_keyword_loc", method_pointer_4b419c08a77a55e6ad14b7b66f47bdaf, "Sets the location of the template keyword.\n\n:Parameter:\n    `Loc` (:cpp:class:`::clang::SourceLocation`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_template_keyword_loc", method_pointer_663196895a5558b8aa02903dce616674, "Gets the location of the template keyword, if present.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_f36600d29ca4530a95955d39f3729dd4.def_static("classof", method_pointer_9755af619be45c09a73c71f46c2dd9e6, "");
    class_f36600d29ca4530a95955d39f3729dd4.def_static("classof_kind", method_pointer_ef8d7e1fffbf51ed890e5d4ae95f346d, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_name", function_group::function_de5de23e21ab5dd1b97b03116e31a5a4, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_template_args", function_group::function_6b868fc13814573583abb8d4545c6cc5, pybind11::return_value_policy::reference, "");

}