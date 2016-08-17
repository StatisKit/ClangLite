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
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_228f0245ceff552784ea70a9b9aa71c6)() const = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionTemplateDecl  * (*method_pointer_5ee2ae581ab355f3b5e5879adb1674a3)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionTemplateDecl::CreateDeserialized;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_20ea9bd5d6145118a0bb225e4df5f58b)() const = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    bool  (*method_pointer_352bba9418225000890ee42310c95fd7)(enum ::clang::Decl::Kind ) = ::clang::FunctionTemplateDecl::classofKind;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_aeefe4a9b7d95d5fa059fe45f811dfbf)() = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_4010e597b61c5bb0bc25a96cc131ee16)() = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_35f0dcca62ed5f9390b86c6629f231b1)() const = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_a9c492fbacbd56999dd3093d52aad31e)() = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    bool  (::clang::FunctionTemplateDecl::*method_pointer_bf20954a57575d189a4ddefbde4355cf)() const = &::clang::FunctionTemplateDecl::isThisDeclarationADefinition;
    bool  (*method_pointer_60affc8aacfc58e6bb9084832c5bd1f3)(class ::clang::Decl  const *) = ::clang::FunctionTemplateDecl::classof;
    void  (::clang::FunctionTemplateDecl::*method_pointer_cfa07ba007635462966d05bf1832af19)() const = &::clang::FunctionTemplateDecl::LoadLazySpecializations;
    class ::clang::FunctionDecl  * (::clang::FunctionTemplateDecl::*method_pointer_4e64c51c42845d0aabdb2da5e2e6b194)() const = &::clang::FunctionTemplateDecl::getTemplatedDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_ff9397292e98553fab6924558f7adaeb)() const = &::clang::FunctionTemplateDecl::getInstantiatedFromMemberTemplate;
    boost::python::class_< class ::clang::FunctionTemplateDecl, autowig::HeldType< class ::clang::FunctionTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_170cacd8da615406967b5b7d712829ee("FunctionTemplateDecl", "", boost::python::no_init);
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_228f0245ceff552784ea70a9b9aa71c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("create_deserialized", method_pointer_5ee2ae581ab355f3b5e5879adb1674a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_20ea9bd5d6145118a0bb225e4df5f58b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("classof_kind", method_pointer_352bba9418225000890ee42310c95fd7, "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_aeefe4a9b7d95d5fa059fe45f811dfbf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_4010e597b61c5bb0bc25a96cc131ee16, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_35f0dcca62ed5f9390b86c6629f231b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_a9c492fbacbd56999dd3093d52aad31e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("is_this_declaration_a_definition", method_pointer_bf20954a57575d189a4ddefbde4355cf, "");
    class_170cacd8da615406967b5b7d712829ee.def("classof", method_pointer_60affc8aacfc58e6bb9084832c5bd1f3, "");
    class_170cacd8da615406967b5b7d712829ee.def("load_lazy_specializations", method_pointer_cfa07ba007635462966d05bf1832af19, "");
    class_170cacd8da615406967b5b7d712829ee.def("get_templated_decl", method_pointer_4e64c51c42845d0aabdb2da5e2e6b194, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_instantiated_from_member_template", method_pointer_ff9397292e98553fab6924558f7adaeb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof_kind");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("create_deserialized");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}