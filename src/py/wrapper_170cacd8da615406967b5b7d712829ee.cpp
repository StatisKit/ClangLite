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
    class ::clang::FunctionTemplateDecl  * (*method_pointer_c046919708735801990c0a684a5cbb5f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionTemplateDecl::CreateDeserialized;
    void  (::clang::FunctionTemplateDecl::*method_pointer_15d1fcbdd7385599ae1cf3571a130211)() const = &::clang::FunctionTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_c6912dbf2e535579a575d7c3f7771926)(class ::clang::Decl  const *) = ::clang::FunctionTemplateDecl::classof;
    bool  (*method_pointer_6cc1d50dc342567aa91d67f90ddc6b86)(enum ::clang::Decl::Kind ) = ::clang::FunctionTemplateDecl::classofKind;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_4f0e83434a555ce4922f256ca627963a)() const = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_ef188d6b07fd566d8037dc6c1fcdce2d)() = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_393fc2b7bf46579b92c77965ce540bf9)() const = &::clang::FunctionTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_29cf2cb19e375326952914534e9af643)() = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_b529ec9aa2945dbf8127e57f57874099)() const = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_05b414b75f555eb2a11843d13355107a)() const = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_26c80046e96b5481ae6f88898614e57a)() = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionTemplateDecl::*method_pointer_9fd4d6c3086657d5a99dafc254e0883b)() const = &::clang::FunctionTemplateDecl::getTemplatedDecl;
    bool  (::clang::FunctionTemplateDecl::*method_pointer_1fbc26d0e3ca5c27ad994ddc02eab594)() const = &::clang::FunctionTemplateDecl::isThisDeclarationADefinition;
    boost::python::class_< class ::clang::FunctionTemplateDecl, autowig::HeldType< class ::clang::FunctionTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_170cacd8da615406967b5b7d712829ee("FunctionTemplateDecl", "", boost::python::no_init);
    class_170cacd8da615406967b5b7d712829ee.def("create_deserialized", method_pointer_c046919708735801990c0a684a5cbb5f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("load_lazy_specializations", method_pointer_15d1fcbdd7385599ae1cf3571a130211, "");
    class_170cacd8da615406967b5b7d712829ee.def("classof", method_pointer_c6912dbf2e535579a575d7c3f7771926, "");
    class_170cacd8da615406967b5b7d712829ee.def("classof_kind", method_pointer_6cc1d50dc342567aa91d67f90ddc6b86, "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_4f0e83434a555ce4922f256ca627963a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_ef188d6b07fd566d8037dc6c1fcdce2d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_instantiated_from_member_template", method_pointer_393fc2b7bf46579b92c77965ce540bf9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_29cf2cb19e375326952914534e9af643, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_b529ec9aa2945dbf8127e57f57874099, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_05b414b75f555eb2a11843d13355107a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_26c80046e96b5481ae6f88898614e57a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_templated_decl", method_pointer_9fd4d6c3086657d5a99dafc254e0883b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("is_this_declaration_a_definition", method_pointer_1fbc26d0e3ca5c27ad994ddc02eab594, "");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof_kind");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("create_deserialized");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}