#include "_clanglite.h"



namespace autowig
{
    class Wrap_2cee44285ee85f019f99b9a11d8414aa : public ::clang::RedeclarableTemplateDecl, public boost::python::wrapper< class ::clang::RedeclarableTemplateDecl >
    {
        public:
            

        protected:
            
            virtual struct ::clang::RedeclarableTemplateDecl::CommonBase * newCommon(class ::clang::ASTContext & param_0) const
            { return this->get_override("newCommon")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_2cee44285ee85f019f99b9a11d8414aa const volatile * get_pointer<autowig::Wrap_2cee44285ee85f019f99b9a11d8414aa const volatile >(autowig::Wrap_2cee44285ee85f019f99b9a11d8414aa const volatile *c) { return c; }
    template <> class ::clang::RedeclarableTemplateDecl const volatile * get_pointer<class ::clang::RedeclarableTemplateDecl const volatile >(class ::clang::RedeclarableTemplateDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2cee44285ee85f019f99b9a11d8414aa()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::RedeclarableTemplateDecl * (::clang::RedeclarableTemplateDecl::*method_pointer_80e2758ee46d54edaf143f0c564e2d26)() = &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
    class ::clang::RedeclarableTemplateDecl const * (::clang::RedeclarableTemplateDecl::*method_pointer_ebdc5c7340dc5fb68213fcd24ceb5322)() const = &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
    bool  (::clang::RedeclarableTemplateDecl::*method_pointer_8f558e12bd1c54a08119423b9af7226a)() const = &::clang::RedeclarableTemplateDecl::isMemberSpecialization;
    void  (::clang::RedeclarableTemplateDecl::*method_pointer_d7124c92758e53a3b184af16e6118664)() = &::clang::RedeclarableTemplateDecl::setMemberSpecialization;
    class ::clang::RedeclarableTemplateDecl * (::clang::RedeclarableTemplateDecl::*method_pointer_c5db5557e5da5873ab1fa1c6136b0e56)() const = &::clang::RedeclarableTemplateDecl::getInstantiatedFromMemberTemplate;
    void  (::clang::RedeclarableTemplateDecl::*method_pointer_f052c6d51f1159f4b48a8a6d31384a85)(class ::clang::RedeclarableTemplateDecl *) = &::clang::RedeclarableTemplateDecl::setInstantiatedFromMemberTemplate;
    bool  (*method_pointer_5d80981664a85a318b967946bc66ac2f)(class ::clang::Decl const *) = ::clang::RedeclarableTemplateDecl::classof;
    bool  (*method_pointer_0f68e86a64c65ab1a06da308f99b0f4f)(enum ::clang::Decl::Kind ) = ::clang::RedeclarableTemplateDecl::classofKind;
    boost::python::class_< autowig::Wrap_2cee44285ee85f019f99b9a11d8414aa, autowig::Held< autowig::Wrap_2cee44285ee85f019f99b9a11d8414aa >::Type, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_2cee44285ee85f019f99b9a11d8414aa("RedeclarableTemplateDecl", "", boost::python::no_init);
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_80e2758ee46d54edaf143f0c564e2d26, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieves the canonical declaration of this template.\n\n:Return Type:\n    :py:class:`clanglite.clang.RedeclarableTemplateDecl`\n\n");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_ebdc5c7340dc5fb68213fcd24ceb5322, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("is_member_specialization", method_pointer_8f558e12bd1c54a08119423b9af7226a, "Determines whether this template was a specialization of a member\ntemplate.\n\nIn the following example, the function template :raw-latex:`\\c X`::f and\nthe member template :raw-latex:`\\c X`::Inner are member specializations.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_member_specialization", method_pointer_d7124c92758e53a3b184af16e6118664, "Note that this member template is a specialization.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_instantiated_from_member_template", method_pointer_c5db5557e5da5873ab1fa1c6136b0e56, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the member template from which this template was instantiated,\nor NULL if this template was not instantiated from a member template.\n\nA template is instantiated from a member template when the member\ntemplate itself is part of a class template (or member thereof). For\nexample, given\n\n:Return Type:\n    :py:class:`clanglite.clang.RedeclarableTemplateDecl`\n\n");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_instantiated_from_member_template", method_pointer_f052c6d51f1159f4b48a8a6d31384a85, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("classof", method_pointer_5d80981664a85a318b967946bc66ac2f, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("classof_kind", method_pointer_0f68e86a64c65ab1a06da308f99b0f4f, "");
    class_2cee44285ee85f019f99b9a11d8414aa.staticmethod("classof_kind");
    class_2cee44285ee85f019f99b9a11d8414aa.staticmethod("classof");

    if(autowig::Held< class ::clang::RedeclarableTemplateDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_2cee44285ee85f019f99b9a11d8414aa >::Type, autowig::Held< class ::clang::RedeclarableTemplateDecl >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::clang::RedeclarableTemplateDecl >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::clang::RedeclarableTemplateDecl >::Type, autowig::Held< class ::clang::TemplateDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::RedeclarableTemplateDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::RedeclarableTemplateDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::RedeclarableTemplateDecl >::Type, class ::clang::RedeclarableTemplateDecl > > >();
    }

}