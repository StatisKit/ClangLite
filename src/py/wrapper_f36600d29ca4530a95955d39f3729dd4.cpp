#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_f36600d29ca4530a95955d39f3729dd4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ClassTemplateSpecializationDecl  * (*method_pointer_79413ffd9e68532fad426f29489142c7)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_966024eacd39501bac6881c859b7a2fa)(class ::clang::Decl  const *) = ::clang::ClassTemplateSpecializationDecl::classof;
    bool  (*method_pointer_4c7f5327bbf45e3cade7eb39bb974c7c)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateSpecializationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_0aa7fb1fac235f40ac1bc7bd13d43435)() const = &::clang::ClassTemplateSpecializationDecl::getExternLoc;
    class ::clang::ClassTemplateSpecializationDecl  * (::clang::ClassTemplateSpecializationDecl::*method_pointer_dfdeb98b88465a9593d6ad310c462291)() = &::clang::ClassTemplateSpecializationDecl::getMostRecentDecl;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_678bd4255f2956bbb060bde5b669f3be)() const = &::clang::ClassTemplateSpecializationDecl::getPointOfInstantiation;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateSpecializationDecl::*method_pointer_2df41cac37035a12bc500c9c28f428d0)() const = &::clang::ClassTemplateSpecializationDecl::getSpecializedTemplate;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_bf208affb984580e84e5c25e951331dc)() const = &::clang::ClassTemplateSpecializationDecl::getTemplateKeywordLoc;
    bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_f90bbbe3c2285e50a24e9248fa044f3b)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
    bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_1b8f78d46a395ece882eec6a586a2fc1)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitSpecialization;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_6161df5a4c39547c87d4fe4f382198e9)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setExternLoc;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_ae93c7d82be2543eb70e83f16f2fd669)(class ::clang::ClassTemplatePartialSpecializationDecl  *, class ::clang::TemplateArgumentList  const *) = &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_46b4a92addf55717a9da5fc1efe308e4)(class ::clang::ClassTemplateDecl  *) = &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_34bb06570de45e0ba18bfb27b0d34f91)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setPointOfInstantiation;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_f80a3bec4e3952cbba66f8e7c7cb28e3)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setTemplateKeywordLoc;
    struct function_group
    {
        static class ::boost::python::str  function_029954401ff157c39ba61b9190a41711(class ::clang::ClassTemplateSpecializationDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::ClassTemplateSpecializationDecl, autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl >, boost::python::bases< class ::clang::CXXRecordDecl >, boost::noncopyable > class_f36600d29ca4530a95955d39f3729dd4("ClassTemplateSpecializationDecl", "", boost::python::no_init);
    class_f36600d29ca4530a95955d39f3729dd4.def("create_deserialized", method_pointer_79413ffd9e68532fad426f29489142c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("classof", method_pointer_966024eacd39501bac6881c859b7a2fa, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("classof_kind", method_pointer_4c7f5327bbf45e3cade7eb39bb974c7c, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_extern_loc", method_pointer_0aa7fb1fac235f40ac1bc7bd13d43435, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_most_recent_decl", method_pointer_dfdeb98b88465a9593d6ad310c462291, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_point_of_instantiation", method_pointer_678bd4255f2956bbb060bde5b669f3be, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_specialized_template", method_pointer_2df41cac37035a12bc500c9c28f428d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_template_keyword_loc", method_pointer_bf208affb984580e84e5c25e951331dc, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_instantiation_or_specialization", method_pointer_f90bbbe3c2285e50a24e9248fa044f3b, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_specialization", method_pointer_1b8f78d46a395ece882eec6a586a2fc1, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_extern_loc", method_pointer_6161df5a4c39547c87d4fe4f382198e9, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_ae93c7d82be2543eb70e83f16f2fd669, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_46b4a92addf55717a9da5fc1efe308e4, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_point_of_instantiation", method_pointer_34bb06570de45e0ba18bfb27b0d34f91, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_template_keyword_loc", method_pointer_f80a3bec4e3952cbba66f8e7c7cb28e3, "");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("classof_kind");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("create_deserialized");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("classof");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_name", function_group::function_029954401ff157c39ba61b9190a41711, "");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl >, autowig::HeldType< class ::clang::CXXRecordDecl > >();
    }

}