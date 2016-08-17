#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_170cacd8da615406967b5b7d712829ee()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::FunctionTemplateDecl::*method_pointer_3ad5b05cfee05e758077d9a9fa9a3503)() const = &::clang::FunctionTemplateDecl::isThisDeclarationADefinition;
    bool  (*method_pointer_71d86a3234895ce19587e86dd8927194)(class ::clang::Decl  const *) = ::clang::FunctionTemplateDecl::classof;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_8fe1f2511f92558e8d470c3d71e5e0dd)() const = &::clang::FunctionTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_7b3e5a37a22e57438eda8f23f214df23)() const = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_6a08f868d8f65df39cf10e4d33f343b7)() = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_20d2f376e76c5c449f6890b294cdeec9)() = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionTemplateDecl  * (*method_pointer_72068e3c741f56249ce436c666ea3806)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionTemplateDecl::CreateDeserialized;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_9525d2071d9f50bea16158d1eebf4eee)() const = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_e2432d15cb6652f4a873a8569da9e4f6)() const = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    bool  (*method_pointer_25cf223303b05a6597d8a0d5093aed6a)(enum ::clang::Decl::Kind ) = ::clang::FunctionTemplateDecl::classofKind;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_e0cd44007a8252c08bafe8c5b0c04108)() = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionTemplateDecl::*method_pointer_998bdca152ca5710afd64d0b278fa17e)() const = &::clang::FunctionTemplateDecl::getTemplatedDecl;
    void  (::clang::FunctionTemplateDecl::*method_pointer_e8c9efa88ef95ff78bf4a558d107bf9d)() const = &::clang::FunctionTemplateDecl::LoadLazySpecializations;
    boost::python::class_< class ::clang::FunctionTemplateDecl, autowig::HeldType< class ::clang::FunctionTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_170cacd8da615406967b5b7d712829ee("FunctionTemplateDecl", "", boost::python::no_init);
    class_170cacd8da615406967b5b7d712829ee.def("is_this_declaration_a_definition", method_pointer_3ad5b05cfee05e758077d9a9fa9a3503, "");
    class_170cacd8da615406967b5b7d712829ee.def("classof", method_pointer_71d86a3234895ce19587e86dd8927194, "");
    class_170cacd8da615406967b5b7d712829ee.def("get_instantiated_from_member_template", method_pointer_8fe1f2511f92558e8d470c3d71e5e0dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_7b3e5a37a22e57438eda8f23f214df23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_6a08f868d8f65df39cf10e4d33f343b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_20d2f376e76c5c449f6890b294cdeec9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("create_deserialized", method_pointer_72068e3c741f56249ce436c666ea3806, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_9525d2071d9f50bea16158d1eebf4eee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_e2432d15cb6652f4a873a8569da9e4f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("classof_kind", method_pointer_25cf223303b05a6597d8a0d5093aed6a, "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_e0cd44007a8252c08bafe8c5b0c04108, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_templated_decl", method_pointer_998bdca152ca5710afd64d0b278fa17e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("load_lazy_specializations", method_pointer_e8c9efa88ef95ff78bf4a558d107bf9d, "");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof_kind");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("create_deserialized");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}