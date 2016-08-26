#include "_clanglite.h"


namespace autowig
{
}


void wrapper_f36600d29ca4530a95955d39f3729dd4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ClassTemplateSpecializationDecl  * (*method_pointer_fe7bcf6cf92852c48004cf4e727d2dfc)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_6ff028b12f2950789dcd287829aef125)(class ::clang::Decl  const *) = ::clang::ClassTemplateSpecializationDecl::classof;
    bool  (*method_pointer_052e08433ae8560a97d0e20a18d76d42)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateSpecializationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_0d591af669bf54929719c9b145976aae)() const = &::clang::ClassTemplateSpecializationDecl::getExternLoc;
    class ::clang::ClassTemplateSpecializationDecl  * (::clang::ClassTemplateSpecializationDecl::*method_pointer_d422a043964852b2ba6cd0225c8ec05e)() = &::clang::ClassTemplateSpecializationDecl::getMostRecentDecl;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_fb970e6bb043547ea76e542bbbc5921e)() const = &::clang::ClassTemplateSpecializationDecl::getPointOfInstantiation;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateSpecializationDecl::*method_pointer_5574cb4820595826a0f9181049fcf98e)() const = &::clang::ClassTemplateSpecializationDecl::getSpecializedTemplate;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_e595b99758cd56238db8b35d83c9593c)() const = &::clang::ClassTemplateSpecializationDecl::getTemplateKeywordLoc;
    bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_5a90c42a981f5682b9bba0ad1c517495)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
    bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_570b9ea5af2c5876bdbcc07b2a86ecdd)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitSpecialization;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_ea8a30f6faa2536c9c1aea3677b84a4a)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setExternLoc;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_d76dd69fc52259e6803861fb00880287)(class ::clang::ClassTemplatePartialSpecializationDecl  *, class ::clang::TemplateArgumentList  const *) = &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_143394e31176589d8a61db52278d5b96)(class ::clang::ClassTemplateDecl  *) = &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_86bbe2450e2e548d934c7d40135497c5)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setPointOfInstantiation;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_8d8cb3d73a4d56309d72f904345b9432)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setTemplateKeywordLoc;
    struct function_group
    {
        static class ::boost::python::str  function_179b432a8f8255eeb722060587f76d2c(class ::clang::ClassTemplateSpecializationDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
        static class ::clang::TemplateArgumentList  * function_73b3ed796392515b8bdde61e1d6e1939(class ::clang::ClassTemplateSpecializationDecl  & parameter_0)
        { return ::clanglite::get_template_args(parameter_0); }
    };
    boost::python::class_< class ::clang::ClassTemplateSpecializationDecl, autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl >, boost::python::bases< class ::clang::CXXRecordDecl >, boost::noncopyable > class_f36600d29ca4530a95955d39f3729dd4("ClassTemplateSpecializationDecl", "", boost::python::no_init);
    class_f36600d29ca4530a95955d39f3729dd4.def("create_deserialized", method_pointer_fe7bcf6cf92852c48004cf4e727d2dfc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("classof", method_pointer_6ff028b12f2950789dcd287829aef125, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("classof_kind", method_pointer_052e08433ae8560a97d0e20a18d76d42, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_extern_loc", method_pointer_0d591af669bf54929719c9b145976aae, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_most_recent_decl", method_pointer_d422a043964852b2ba6cd0225c8ec05e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_point_of_instantiation", method_pointer_fb970e6bb043547ea76e542bbbc5921e, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_specialized_template", method_pointer_5574cb4820595826a0f9181049fcf98e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_template_keyword_loc", method_pointer_e595b99758cd56238db8b35d83c9593c, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_instantiation_or_specialization", method_pointer_5a90c42a981f5682b9bba0ad1c517495, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_specialization", method_pointer_570b9ea5af2c5876bdbcc07b2a86ecdd, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_extern_loc", method_pointer_ea8a30f6faa2536c9c1aea3677b84a4a, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_d76dd69fc52259e6803861fb00880287, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_143394e31176589d8a61db52278d5b96, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_point_of_instantiation", method_pointer_86bbe2450e2e548d934c7d40135497c5, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_template_keyword_loc", method_pointer_8d8cb3d73a4d56309d72f904345b9432, "");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("classof_kind");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("create_deserialized");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("classof");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_name", function_group::function_179b432a8f8255eeb722060587f76d2c, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_template_args", function_group::function_73b3ed796392515b8bdde61e1d6e1939, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl >, autowig::HeldType< class ::clang::CXXRecordDecl > >();
    }

}