#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_7fe14ac9706f5b4d9d341b651fb0117a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TagDecl  * (*method_pointer_d7cc40720e4057f5ae78bc2deadd1310)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_0adc17b46be05b9ea3a80228c393ff72)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_f27d667a04485f90aeeca7115395984d)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_5dce64f2c800516b9ccc942d20e9c3f4)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_1169066fe6ee5477b38ef5ec866f702e)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_d8e031a513685169ad3bc6144c89423b)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_85a061c5d32355e59c5af8aeae346751)() const = &::clang::TagDecl::getDefinition;
    unsigned int  (::clang::TagDecl::*method_pointer_ed009c581dfb5e269b757609dc83d454)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_ef07261128185c968fa1613497a8baf9)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_9b9b260ee864562786dc0d86604425a7)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_557f8dde5f765373998b5831907b85a2)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_843c5459638f595ab7d13cb3a0cc7081)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_d65568d634fb5003ac598d34444cab0d)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_b4f3a5e82df553b1b3e9981a728fd508)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_bab3b893407f52d4b9a813875f897b04)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_93f8e0b0feac520ca1aaa293f56df864)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_b5343289ba525d7e811d43c480cf155d)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_373f617175e654cebd3106d60461cba8)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_b123dea13885542fb8f268b50774cc9f)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_f65a6732d6fe592fb4029be2f2da62ce)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_a0ae8d5d609b5186ac9222070def7681)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_4107ddb2aa5953bbb763f1d243aa5285)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_d25ba82932f9561f8b98dae5abc3256b)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_9d71575b96ee55e5a5c2bb655b05738f)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_d54b4789d2f058a18d03ec5a1b1b06ca)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_bbe6dd6b597b5351b267ee674a38badd)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_4e7be52dd07a53adb2a007f5b3afe435)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_d5ba344b2d085266a3e8eae5be6109a6)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_d7cc40720e4057f5ae78bc2deadd1310, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_0adc17b46be05b9ea3a80228c393ff72, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_f27d667a04485f90aeeca7115395984d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_5dce64f2c800516b9ccc942d20e9c3f4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_1169066fe6ee5477b38ef5ec866f702e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_d8e031a513685169ad3bc6144c89423b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_85a061c5d32355e59c5af8aeae346751, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_ed009c581dfb5e269b757609dc83d454, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_ef07261128185c968fa1613497a8baf9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_9b9b260ee864562786dc0d86604425a7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_557f8dde5f765373998b5831907b85a2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_843c5459638f595ab7d13cb3a0cc7081, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_d65568d634fb5003ac598d34444cab0d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_b4f3a5e82df553b1b3e9981a728fd508, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_bab3b893407f52d4b9a813875f897b04, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_93f8e0b0feac520ca1aaa293f56df864, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_b5343289ba525d7e811d43c480cf155d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_373f617175e654cebd3106d60461cba8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_b123dea13885542fb8f268b50774cc9f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_f65a6732d6fe592fb4029be2f2da62ce, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_a0ae8d5d609b5186ac9222070def7681, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_4107ddb2aa5953bbb763f1d243aa5285, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_d25ba82932f9561f8b98dae5abc3256b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_9d71575b96ee55e5a5c2bb655b05738f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_d54b4789d2f058a18d03ec5a1b1b06ca, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_bbe6dd6b597b5351b267ee674a38badd, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_4e7be52dd07a53adb2a007f5b3afe435, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_d5ba344b2d085266a3e8eae5be6109a6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("classof_kind");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("classof");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("cast_from_decl_context");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::TagDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TagDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TagDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}