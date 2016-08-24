#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_170cacd8da615406967b5b7d712829ee()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FunctionTemplateDecl  * (*method_pointer_e1faa763a76351d9bafcacaaae42c1a5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionTemplateDecl::CreateDeserialized;
    void  (::clang::FunctionTemplateDecl::*method_pointer_96abd07f261d5758a85c3907624ebfca)() const = &::clang::FunctionTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_aecb982457e55f39aea30198e6881e2b)(class ::clang::Decl  const *) = ::clang::FunctionTemplateDecl::classof;
    bool  (*method_pointer_12978ab8de0e5f2fae1f8e3e8adbbbd6)(enum ::clang::Decl::Kind ) = ::clang::FunctionTemplateDecl::classofKind;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_5010d83d58ba53c39325d68322998c53)() const = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_ed5f52ece4a6522ca71090a6e5e2665e)() = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_e635c638f45b5297af0af91b2ffa8379)() const = &::clang::FunctionTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_778668bc524f57ffb19151b459b8bd07)() = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_56cfc2deb40d533bac7660b00ea577fe)() const = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_28d7edd24a3357cb91f55a64793c56e1)() = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_4d660c4db4115b7fa075522547045075)() const = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionTemplateDecl::*method_pointer_a18d50bd1ce7538fb10b9267db31c2bc)() const = &::clang::FunctionTemplateDecl::getTemplatedDecl;
    bool  (::clang::FunctionTemplateDecl::*method_pointer_c9a5cb11d2ca5fc29de518c9d2cecd3c)() const = &::clang::FunctionTemplateDecl::isThisDeclarationADefinition;
    boost::python::class_< class ::clang::FunctionTemplateDecl, autowig::HeldType< class ::clang::FunctionTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_170cacd8da615406967b5b7d712829ee("FunctionTemplateDecl", "", boost::python::no_init);
    class_170cacd8da615406967b5b7d712829ee.def("create_deserialized", method_pointer_e1faa763a76351d9bafcacaaae42c1a5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("load_lazy_specializations", method_pointer_96abd07f261d5758a85c3907624ebfca, "");
    class_170cacd8da615406967b5b7d712829ee.def("classof", method_pointer_aecb982457e55f39aea30198e6881e2b, "");
    class_170cacd8da615406967b5b7d712829ee.def("classof_kind", method_pointer_12978ab8de0e5f2fae1f8e3e8adbbbd6, "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_5010d83d58ba53c39325d68322998c53, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_ed5f52ece4a6522ca71090a6e5e2665e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_instantiated_from_member_template", method_pointer_e635c638f45b5297af0af91b2ffa8379, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_778668bc524f57ffb19151b459b8bd07, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_56cfc2deb40d533bac7660b00ea577fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_28d7edd24a3357cb91f55a64793c56e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_4d660c4db4115b7fa075522547045075, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_templated_decl", method_pointer_a18d50bd1ce7538fb10b9267db31c2bc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("is_this_declaration_a_definition", method_pointer_c9a5cb11d2ca5fc29de518c9d2cecd3c, "");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof_kind");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("create_deserialized");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}