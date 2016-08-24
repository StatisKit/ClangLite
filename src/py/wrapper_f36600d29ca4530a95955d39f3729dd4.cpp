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
    class ::clang::ClassTemplateSpecializationDecl  * (*method_pointer_edd23d1722715af0b829045b4cbe5f94)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_14133427f86053c98a5ec874fdb0306f)(class ::clang::Decl  const *) = ::clang::ClassTemplateSpecializationDecl::classof;
    bool  (*method_pointer_e0f6983fa1585ab99cb5f7e5e5b8e563)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateSpecializationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_0b170b46de05576f9fec9c2bbf37a72e)() const = &::clang::ClassTemplateSpecializationDecl::getExternLoc;
    class ::clang::ClassTemplateSpecializationDecl  * (::clang::ClassTemplateSpecializationDecl::*method_pointer_201ecd646cec5ed59d111493cf91ca58)() = &::clang::ClassTemplateSpecializationDecl::getMostRecentDecl;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_f562610555b45736a92af913b47e558e)() const = &::clang::ClassTemplateSpecializationDecl::getPointOfInstantiation;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateSpecializationDecl::*method_pointer_b2c61e890129591c868d5ce864bcc1bc)() const = &::clang::ClassTemplateSpecializationDecl::getSpecializedTemplate;
    class ::clang::TemplateArgumentList  const & (::clang::ClassTemplateSpecializationDecl::*method_pointer_84d215aeb9d35e5fa8848b280508025e)() const = &::clang::ClassTemplateSpecializationDecl::getTemplateArgs;
    class ::clang::TemplateArgumentList  const & (::clang::ClassTemplateSpecializationDecl::*method_pointer_3522a8803e805b36b2f97f3e7c8ef0eb)() const = &::clang::ClassTemplateSpecializationDecl::getTemplateInstantiationArgs;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_e4ba7a765e165478bfcba3b1843e3576)() const = &::clang::ClassTemplateSpecializationDecl::getTemplateKeywordLoc;
    bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_17cad5c7084d5b02b891acffcee726d5)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
    bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_a9c5425f0cbb58e8b2b44b836b24c90e)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitSpecialization;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_5168508f38495ac5ac9ade0f3581fb86)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setExternLoc;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_04ecada754f45738947eaa17dec59c81)(class ::clang::ClassTemplateDecl  *) = &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_84909cedad5757efa09d1502e52cf6f2)(class ::clang::ClassTemplatePartialSpecializationDecl  *, class ::clang::TemplateArgumentList  const *) = &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_bbde0b21bea75dcb880007f2f06ce98c)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setPointOfInstantiation;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_9f913adee49b5f20a18769c32cf5983b)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setTemplateKeywordLoc;
    struct function_group
    {
        static class ::boost::python::str  function_a3e78564791151f1944bb8a15c44d835(class ::clang::ClassTemplateSpecializationDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::ClassTemplateSpecializationDecl, autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl >, boost::python::bases< class ::clang::CXXRecordDecl >, boost::noncopyable > class_f36600d29ca4530a95955d39f3729dd4("ClassTemplateSpecializationDecl", "", boost::python::no_init);
    class_f36600d29ca4530a95955d39f3729dd4.def("create_deserialized", method_pointer_edd23d1722715af0b829045b4cbe5f94, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("classof", method_pointer_14133427f86053c98a5ec874fdb0306f, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("classof_kind", method_pointer_e0f6983fa1585ab99cb5f7e5e5b8e563, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_extern_loc", method_pointer_0b170b46de05576f9fec9c2bbf37a72e, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_most_recent_decl", method_pointer_201ecd646cec5ed59d111493cf91ca58, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_point_of_instantiation", method_pointer_f562610555b45736a92af913b47e558e, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_specialized_template", method_pointer_b2c61e890129591c868d5ce864bcc1bc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_template_args", method_pointer_84d215aeb9d35e5fa8848b280508025e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_template_instantiation_args", method_pointer_3522a8803e805b36b2f97f3e7c8ef0eb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_template_keyword_loc", method_pointer_e4ba7a765e165478bfcba3b1843e3576, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_instantiation_or_specialization", method_pointer_17cad5c7084d5b02b891acffcee726d5, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_specialization", method_pointer_a9c5425f0cbb58e8b2b44b836b24c90e, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_extern_loc", method_pointer_5168508f38495ac5ac9ade0f3581fb86, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_04ecada754f45738947eaa17dec59c81, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_84909cedad5757efa09d1502e52cf6f2, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_point_of_instantiation", method_pointer_bbde0b21bea75dcb880007f2f06ce98c, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_template_keyword_loc", method_pointer_9f913adee49b5f20a18769c32cf5983b, "");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("classof_kind");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("create_deserialized");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("classof");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_name", function_group::function_a3e78564791151f1944bb8a15c44d835, "");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl >, autowig::HeldType< class ::clang::CXXRecordDecl > >();
    }

}