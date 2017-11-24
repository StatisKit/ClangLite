#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ClassTemplateDecl const volatile * get_pointer<class ::clang::ClassTemplateDecl const volatile >(class ::clang::ClassTemplateDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4b8444f6e9695ad99a1ccdbf56dc74ac()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ClassTemplateDecl::*method_pointer_5105d4d97db85b69b624a2d865af44fb)() const = &::clang::ClassTemplateDecl::LoadLazySpecializations;
    class ::clang::CXXRecordDecl * (::clang::ClassTemplateDecl::*method_pointer_8a19abec9dde50a49cfd8968a05acecb)() const = &::clang::ClassTemplateDecl::getTemplatedDecl;
    bool  (::clang::ClassTemplateDecl::*method_pointer_e1927b6ba1e15a669e37f192361ae7b8)() const = &::clang::ClassTemplateDecl::isThisDeclarationADefinition;
    class ::clang::ClassTemplateDecl * (*method_pointer_edc773e5957d525aa4e052fae8cd92c0)(class ::clang::ASTContext &, unsigned int ) = ::clang::ClassTemplateDecl::CreateDeserialized;
    class ::clang::ClassTemplateDecl * (::clang::ClassTemplateDecl::*method_pointer_b35a077685d85a5b983777e3c8a4a3f7)() = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::ClassTemplateDecl const * (::clang::ClassTemplateDecl::*method_pointer_11c383200f2b54f49415bdc6c5ad1c03)() const = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::ClassTemplateDecl * (::clang::ClassTemplateDecl::*method_pointer_02f365a7de3f543d886d348389279bd3)() = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::ClassTemplateDecl const * (::clang::ClassTemplateDecl::*method_pointer_cb0c2911e9ae55488822b17e40cadaa5)() const = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::ClassTemplateDecl * (::clang::ClassTemplateDecl::*method_pointer_cfaca2f66bf45a119872235cf44bf21d)() = &::clang::ClassTemplateDecl::getMostRecentDecl;
    class ::clang::ClassTemplateDecl const * (::clang::ClassTemplateDecl::*method_pointer_59f92ffa6ca159ff8c356e48738f06c5)() const = &::clang::ClassTemplateDecl::getMostRecentDecl;
    class ::clang::ClassTemplateDecl * (::clang::ClassTemplateDecl::*method_pointer_dbd24994a73a5d5a8078ba41f703201e)() const = &::clang::ClassTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::ClassTemplatePartialSpecializationDecl * (::clang::ClassTemplateDecl::*method_pointer_3b0a6b86aa1753888323f89a24bc8f7e)(class ::clang::QualType ) = &::clang::ClassTemplateDecl::findPartialSpecialization;
    class ::clang::ClassTemplatePartialSpecializationDecl * (::clang::ClassTemplateDecl::*method_pointer_2cced4fbaf7e50a385b4a8662c30c51f)(class ::clang::ClassTemplatePartialSpecializationDecl *) = &::clang::ClassTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::QualType  (::clang::ClassTemplateDecl::*method_pointer_9e8e600651535e208d8624b288266bc9)() = &::clang::ClassTemplateDecl::getInjectedClassNameSpecialization;
    bool  (*method_pointer_74dedeb949a1540d81e0c9ee09fb15b5)(class ::clang::Decl const *) = ::clang::ClassTemplateDecl::classof;
    bool  (*method_pointer_548717680bae54119cbc1c757e2542b5)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateDecl::classofKind;
    struct function_group
    {
        static class ::boost::python::list  function_1da28d01191e58d8aa492f393e05dcfb(class ::clang::ClassTemplateDecl & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ClassTemplateDecl, autowig::Held< class ::clang::ClassTemplateDecl >::Type, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_4b8444f6e9695ad99a1ccdbf56dc74ac("ClassTemplateDecl", "", boost::python::no_init);
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("load_lazy_specializations", method_pointer_5105d4d97db85b69b624a2d865af44fb, "Load any lazily-loaded specializations from the external source.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_templated_decl", method_pointer_8a19abec9dde50a49cfd8968a05acecb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Get the underlying class declarations of the template.\n\n:Return Type:\n    :py:class:`clanglite.clang.CXXRecordDecl`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("is_this_declaration_a_definition", method_pointer_e1927b6ba1e15a669e37f192361ae7b8, "Returns whether this template declaration defines the primary class\npattern.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("create_deserialized", method_pointer_edc773e5957d525aa4e052fae8cd92c0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Create an empty class template node.\n\n:Parameters:\n  - `C` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n  - `ID` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.ClassTemplateDecl`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_b35a077685d85a5b983777e3c8a4a3f7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_11c383200f2b54f49415bdc6c5ad1c03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_02f365a7de3f543d886d348389279bd3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the previous declaration of this class template, or NULL if no\nsuch declaration exists.\n\n:Return Type:\n    :py:class:`clanglite.clang.ClassTemplateDecl`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_cb0c2911e9ae55488822b17e40cadaa5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the previous declaration of this class template, or NULL if no\nsuch declaration exists.\n\n:Return Type:\n    :py:class:`clanglite.clang.ClassTemplateDecl`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_cfaca2f66bf45a119872235cf44bf21d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_59f92ffa6ca159ff8c356e48738f06c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_instantiated_from_member_template", method_pointer_dbd24994a73a5d5a8078ba41f703201e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_specialization", method_pointer_3b0a6b86aa1753888323f89a24bc8f7e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Find a class template partial specialization with the given type T.\n\n:Parameter:\n    `T` (:py:class:`clanglite.clang.QualType`) - a dependent type that names a specialization of this class template.\n\n:Returns:\n    the class template partial specialization that exactly matches the type\n    :raw-latex:`\\p `T, or NULL if no such partial specialization exists.\n\n:Return Type:\n    :py:class:`clanglite.clang.ClassTemplatePartialSpecializationDecl`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_spec_instantiated_from_member", method_pointer_2cced4fbaf7e50a385b4a8662c30c51f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Find a class template partial specialization which was instantiated from\nthe given member partial specialization.\n\n:Parameter:\n    `D` (:py:class:`clanglite.clang.ClassTemplatePartialSpecializationDecl`) - a member class template partial specialization.\n\n:Returns:\n    the class template partial specialization which was instantiated from\n    the given member partial specialization, or NULL if no such partial\n    specialization exists.\n\n:Return Type:\n    :py:class:`clanglite.clang.ClassTemplatePartialSpecializationDecl`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_injected_class_name_specialization", method_pointer_9e8e600651535e208d8624b288266bc9, "Retrieve the template specialization type of the injected-class-name for\nthis class template.\n\nThe injected-class-name for a class template :raw-latex:`\\c X` is\n:raw-latex:`\\c\nX`, where :raw-latex:`\\c t`emplate-args is formed from the template\narguments that correspond to the template parameters of\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof", method_pointer_74dedeb949a1540d81e0c9ee09fb15b5, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof_kind", method_pointer_548717680bae54119cbc1c757e2542b5, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof_kind");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("create_deserialized");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_children", function_group::function_1da28d01191e58d8aa492f393e05dcfb, "");

    if(autowig::Held< class ::clang::ClassTemplateDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ClassTemplateDecl >::Type, autowig::Held< class ::clang::RedeclarableTemplateDecl >::Type >();
    }

}