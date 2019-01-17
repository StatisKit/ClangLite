#include "_clanglite.h"

void  (::clang::ClassTemplateDecl::*method_pointer_5105d4d97db85b69b624a2d865af44fb)()const= &::clang::ClassTemplateDecl::LoadLazySpecializations;
class ::clang::CXXRecordDecl * (::clang::ClassTemplateDecl::*method_pointer_8a19abec9dde50a49cfd8968a05acecb)()const= &::clang::ClassTemplateDecl::getTemplatedDecl;
bool  (::clang::ClassTemplateDecl::*method_pointer_e1927b6ba1e15a669e37f192361ae7b8)()const= &::clang::ClassTemplateDecl::isThisDeclarationADefinition;
class ::clang::ClassTemplateDecl * (*method_pointer_edc773e5957d525aa4e052fae8cd92c0)(class ::clang::ASTContext &, unsigned int )= ::clang::ClassTemplateDecl::CreateDeserialized;
class ::clang::ClassTemplateDecl * (::clang::ClassTemplateDecl::*method_pointer_b35a077685d85a5b983777e3c8a4a3f7)()= &::clang::ClassTemplateDecl::getCanonicalDecl;
class ::clang::ClassTemplateDecl const * (::clang::ClassTemplateDecl::*method_pointer_11c383200f2b54f49415bdc6c5ad1c03)()const= &::clang::ClassTemplateDecl::getCanonicalDecl;
class ::clang::ClassTemplateDecl * (::clang::ClassTemplateDecl::*method_pointer_02f365a7de3f543d886d348389279bd3)()= &::clang::ClassTemplateDecl::getPreviousDecl;
class ::clang::ClassTemplateDecl const * (::clang::ClassTemplateDecl::*method_pointer_cb0c2911e9ae55488822b17e40cadaa5)()const= &::clang::ClassTemplateDecl::getPreviousDecl;
class ::clang::ClassTemplateDecl * (::clang::ClassTemplateDecl::*method_pointer_cfaca2f66bf45a119872235cf44bf21d)()= &::clang::ClassTemplateDecl::getMostRecentDecl;
class ::clang::ClassTemplateDecl const * (::clang::ClassTemplateDecl::*method_pointer_59f92ffa6ca159ff8c356e48738f06c5)()const= &::clang::ClassTemplateDecl::getMostRecentDecl;
class ::clang::ClassTemplateDecl * (::clang::ClassTemplateDecl::*method_pointer_dbd24994a73a5d5a8078ba41f703201e)()const= &::clang::ClassTemplateDecl::getInstantiatedFromMemberTemplate;
class ::clang::ClassTemplatePartialSpecializationDecl * (::clang::ClassTemplateDecl::*method_pointer_3b0a6b86aa1753888323f89a24bc8f7e)(class ::clang::QualType )= &::clang::ClassTemplateDecl::findPartialSpecialization;
class ::clang::ClassTemplatePartialSpecializationDecl * (::clang::ClassTemplateDecl::*method_pointer_2cced4fbaf7e50a385b4a8662c30c51f)(class ::clang::ClassTemplatePartialSpecializationDecl *)= &::clang::ClassTemplateDecl::findPartialSpecInstantiatedFromMember;
class ::clang::QualType  (::clang::ClassTemplateDecl::*method_pointer_9e8e600651535e208d8624b288266bc9)()= &::clang::ClassTemplateDecl::getInjectedClassNameSpecialization;
bool  (*method_pointer_74dedeb949a1540d81e0c9ee09fb15b5)(class ::clang::Decl const *)= ::clang::ClassTemplateDecl::classof;
bool  (*method_pointer_548717680bae54119cbc1c757e2542b5)(enum ::clang::Decl::Kind )= ::clang::ClassTemplateDecl::classofKind;


void wrapper_4b8444f6e9695ad99a1ccdbf56dc74ac(pybind11::module& module)
{

    struct function_group
    {
        static class ::pybind11::list  function_1da28d01191e58d8aa492f393e05dcfb(class ::clang::ClassTemplateDecl & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    pybind11::class_<class ::clang::ClassTemplateDecl, autowig::HolderType< class ::clang::ClassTemplateDecl >::Type, class ::clang::RedeclarableTemplateDecl > class_4b8444f6e9695ad99a1ccdbf56dc74ac(module, "ClassTemplateDecl", "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("load_lazy_specializations", method_pointer_5105d4d97db85b69b624a2d865af44fb, "Load any lazily-loaded specializations from the external source.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_templated_decl", method_pointer_8a19abec9dde50a49cfd8968a05acecb, pybind11::return_value_policy::reference_internal, "Get the underlying class declarations of the template.\n\n:Return Type:\n    :cpp:class:`::clang::CXXRecordDecl`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("is_this_declaration_a_definition", method_pointer_e1927b6ba1e15a669e37f192361ae7b8, "Returns whether this template declaration defines the primary class\npattern.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def_static("create_deserialized", method_pointer_edc773e5957d525aa4e052fae8cd92c0, pybind11::return_value_policy::reference_internal, "Create an empty class template node.\n\n:Parameters:\n  - `C` (:cpp:class:`::clang::ASTContext`) - Undocumented\n  - `ID` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::ClassTemplateDecl`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_b35a077685d85a5b983777e3c8a4a3f7, pybind11::return_value_policy::reference_internal, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_11c383200f2b54f49415bdc6c5ad1c03, pybind11::return_value_policy::reference_internal, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_02f365a7de3f543d886d348389279bd3, pybind11::return_value_policy::reference_internal, "Retrieve the previous declaration of this class template, or NULL if no\nsuch declaration exists.\n\n:Return Type:\n    :cpp:class:`::clang::ClassTemplateDecl`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_cb0c2911e9ae55488822b17e40cadaa5, pybind11::return_value_policy::reference_internal, "Retrieve the previous declaration of this class template, or NULL if no\nsuch declaration exists.\n\n:Return Type:\n    :cpp:class:`::clang::ClassTemplateDecl`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_cfaca2f66bf45a119872235cf44bf21d, pybind11::return_value_policy::reference_internal, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_59f92ffa6ca159ff8c356e48738f06c5, pybind11::return_value_policy::reference_internal, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_instantiated_from_member_template", method_pointer_dbd24994a73a5d5a8078ba41f703201e, pybind11::return_value_policy::reference_internal, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_specialization", method_pointer_3b0a6b86aa1753888323f89a24bc8f7e, pybind11::return_value_policy::reference_internal, "Find a class template partial specialization with the given type T.\n\n:Parameter:\n    `T` (:cpp:class:`::clang::QualType`) - a dependent type that names a specialization of this class template.\n\n:Returns:\n    the class template partial specialization that exactly matches the type\n    :raw-latex:`\\p `T, or NULL if no such partial specialization exists.\n\n:Return Type:\n    :cpp:class:`::clang::ClassTemplatePartialSpecializationDecl`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_spec_instantiated_from_member", method_pointer_2cced4fbaf7e50a385b4a8662c30c51f, pybind11::return_value_policy::reference_internal, "Find a class template partial specialization which was instantiated from\nthe given member partial specialization.\n\n:Parameter:\n    `D` (:cpp:class:`::clang::ClassTemplatePartialSpecializationDecl`) - a member class template partial specialization.\n\n:Returns:\n    the class template partial specialization which was instantiated from\n    the given member partial specialization, or NULL if no such partial\n    specialization exists.\n\n:Return Type:\n    :cpp:class:`::clang::ClassTemplatePartialSpecializationDecl`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_injected_class_name_specialization", method_pointer_9e8e600651535e208d8624b288266bc9, "Retrieve the template specialization type of the injected-class-name for\nthis class template.\n\nThe injected-class-name for a class template :raw-latex:`\\c X` is\n:raw-latex:`\\c\nX`, where :raw-latex:`\\c template-args is formed from the\ntemplate arguments that correspond to the template parameters of`\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def_static("classof", method_pointer_74dedeb949a1540d81e0c9ee09fb15b5, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def_static("classof_kind", method_pointer_548717680bae54119cbc1c757e2542b5, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_children", function_group::function_1da28d01191e58d8aa492f393e05dcfb, "");

}