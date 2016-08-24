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
    class ::clang::ClassTemplateSpecializationDecl  * (*method_pointer_4b971c771be256e892cdfe2c37f8e70d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_94d1f52ff832586d9c87c4fce2f156ac)(class ::clang::Decl  const *) = ::clang::ClassTemplateSpecializationDecl::classof;
    bool  (*method_pointer_3201a143756a525b9638fec8528e3433)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateSpecializationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_f8285fc7a7035a19b221fe4d43aeee0b)() const = &::clang::ClassTemplateSpecializationDecl::getExternLoc;
    class ::clang::ClassTemplateSpecializationDecl  * (::clang::ClassTemplateSpecializationDecl::*method_pointer_46b0cef3745e54cf9bf4972cc3ea4644)() = &::clang::ClassTemplateSpecializationDecl::getMostRecentDecl;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_5f40f1ccbce555cfb24c143e52411fa9)() const = &::clang::ClassTemplateSpecializationDecl::getPointOfInstantiation;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateSpecializationDecl::*method_pointer_9483df7faf855a7abdb32293e56fa55b)() const = &::clang::ClassTemplateSpecializationDecl::getSpecializedTemplate;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_d528846bb8a750188a8846e51df3a652)() const = &::clang::ClassTemplateSpecializationDecl::getTemplateKeywordLoc;
    bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_b0a7e2ecabdc52c393b1d881d77834fd)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
    bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_b31967eb47295a77a4622bfb063b4c93)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitSpecialization;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_bfcf617a2cad58fe93af98c919111328)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setExternLoc;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_e09a4491c4a95d8bb11d90162baf8b48)(class ::clang::ClassTemplatePartialSpecializationDecl  *, class ::clang::TemplateArgumentList  const *) = &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_69ed274d68d95eac9728ec26b39e0a9e)(class ::clang::ClassTemplateDecl  *) = &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_f619fc753f6650aca2e21d756217b00c)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setPointOfInstantiation;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_77c580cce4ec59c5b189263d69a2353f)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setTemplateKeywordLoc;
    struct function_group
    {
        static class ::boost::python::str  function_7c7c436172ed5d8bab1947186823cf9e(class ::clang::ClassTemplateSpecializationDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::ClassTemplateSpecializationDecl, autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl >, boost::python::bases< class ::clang::CXXRecordDecl >, boost::noncopyable > class_f36600d29ca4530a95955d39f3729dd4("ClassTemplateSpecializationDecl", "", boost::python::no_init);
    class_f36600d29ca4530a95955d39f3729dd4.def("create_deserialized", method_pointer_4b971c771be256e892cdfe2c37f8e70d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("classof", method_pointer_94d1f52ff832586d9c87c4fce2f156ac, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("classof_kind", method_pointer_3201a143756a525b9638fec8528e3433, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_extern_loc", method_pointer_f8285fc7a7035a19b221fe4d43aeee0b, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_most_recent_decl", method_pointer_46b0cef3745e54cf9bf4972cc3ea4644, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_point_of_instantiation", method_pointer_5f40f1ccbce555cfb24c143e52411fa9, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_specialized_template", method_pointer_9483df7faf855a7abdb32293e56fa55b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_template_keyword_loc", method_pointer_d528846bb8a750188a8846e51df3a652, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_instantiation_or_specialization", method_pointer_b0a7e2ecabdc52c393b1d881d77834fd, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_specialization", method_pointer_b31967eb47295a77a4622bfb063b4c93, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_extern_loc", method_pointer_bfcf617a2cad58fe93af98c919111328, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_e09a4491c4a95d8bb11d90162baf8b48, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_69ed274d68d95eac9728ec26b39e0a9e, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_point_of_instantiation", method_pointer_f619fc753f6650aca2e21d756217b00c, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_template_keyword_loc", method_pointer_77c580cce4ec59c5b189263d69a2353f, "");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("classof_kind");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("create_deserialized");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("classof");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_name", function_group::function_7c7c436172ed5d8bab1947186823cf9e, "");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl >, autowig::HeldType< class ::clang::CXXRecordDecl > >();
    }

}