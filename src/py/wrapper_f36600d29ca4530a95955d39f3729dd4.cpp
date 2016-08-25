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
    class ::clang::ClassTemplateSpecializationDecl  * (*method_pointer_5d94982b95c25665a7181042387f29b5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_d18e79fa8a2359c78edd71859f52b238)(class ::clang::Decl  const *) = ::clang::ClassTemplateSpecializationDecl::classof;
    bool  (*method_pointer_3b92f58372575b66b7d301e5eeb3d2bc)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateSpecializationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_d099357c7c115510990ae2de143621aa)() const = &::clang::ClassTemplateSpecializationDecl::getExternLoc;
    class ::clang::ClassTemplateSpecializationDecl  * (::clang::ClassTemplateSpecializationDecl::*method_pointer_47596fa4e6e75ed6b54a7565760f6921)() = &::clang::ClassTemplateSpecializationDecl::getMostRecentDecl;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_7fd2f78b877d5961b0e3f646dc222e55)() const = &::clang::ClassTemplateSpecializationDecl::getPointOfInstantiation;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateSpecializationDecl::*method_pointer_9ff2286e780250a8ae5af0053b7bcc9a)() const = &::clang::ClassTemplateSpecializationDecl::getSpecializedTemplate;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_7813b5730c6f582a9e292699fe74d8cf)() const = &::clang::ClassTemplateSpecializationDecl::getTemplateKeywordLoc;
    bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_b52b67dd44355455857e74ba55520b78)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
    bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_d6d98a9e58505496ac0bd7c6c60265eb)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitSpecialization;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_f3b9b56f31725953bc0c362bf89adf12)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setExternLoc;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_468bc6f5437b53b5823616d7d874e76e)(class ::clang::ClassTemplatePartialSpecializationDecl  *, class ::clang::TemplateArgumentList  const *) = &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_ac0c56f86d6d5b73ae1a1152620c2d6d)(class ::clang::ClassTemplateDecl  *) = &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_ffdf499038b952b48ee6761ebdebe636)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setPointOfInstantiation;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_8bada3413f945e50a1922d6a6a161d96)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setTemplateKeywordLoc;
    struct function_group
    {
        static class ::boost::python::str  function_4a23162a4ed851e78adebcd53db394a2(class ::clang::ClassTemplateSpecializationDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
        static class ::clang::TemplateArgumentList  * function_2038b2dc241e5943b87858f799bcbed5(class ::clang::ClassTemplateSpecializationDecl  & parameter_0)
        { return ::clanglite::get_template_args(parameter_0); }
    };
    boost::python::class_< class ::clang::ClassTemplateSpecializationDecl, autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl >, boost::python::bases< class ::clang::CXXRecordDecl >, boost::noncopyable > class_f36600d29ca4530a95955d39f3729dd4("ClassTemplateSpecializationDecl", "", boost::python::no_init);
    class_f36600d29ca4530a95955d39f3729dd4.def("create_deserialized", method_pointer_5d94982b95c25665a7181042387f29b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("classof", method_pointer_d18e79fa8a2359c78edd71859f52b238, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("classof_kind", method_pointer_3b92f58372575b66b7d301e5eeb3d2bc, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_extern_loc", method_pointer_d099357c7c115510990ae2de143621aa, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_most_recent_decl", method_pointer_47596fa4e6e75ed6b54a7565760f6921, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_point_of_instantiation", method_pointer_7fd2f78b877d5961b0e3f646dc222e55, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_specialized_template", method_pointer_9ff2286e780250a8ae5af0053b7bcc9a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_template_keyword_loc", method_pointer_7813b5730c6f582a9e292699fe74d8cf, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_instantiation_or_specialization", method_pointer_b52b67dd44355455857e74ba55520b78, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_specialization", method_pointer_d6d98a9e58505496ac0bd7c6c60265eb, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_extern_loc", method_pointer_f3b9b56f31725953bc0c362bf89adf12, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_468bc6f5437b53b5823616d7d874e76e, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_ac0c56f86d6d5b73ae1a1152620c2d6d, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_point_of_instantiation", method_pointer_ffdf499038b952b48ee6761ebdebe636, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_template_keyword_loc", method_pointer_8bada3413f945e50a1922d6a6a161d96, "");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("classof_kind");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("create_deserialized");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("classof");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_name", function_group::function_4a23162a4ed851e78adebcd53db394a2, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_template_args", function_group::function_2038b2dc241e5943b87858f799bcbed5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl >, autowig::HeldType< class ::clang::CXXRecordDecl > >();
    }

}