#include "_clanglite.h"

bool  (::clang::TemplateSpecializationType::*method_pointer_32570f5d573b5fea878e752f4a405e54)()const= &::clang::TemplateSpecializationType::isCurrentInstantiation;
bool  (::clang::TemplateSpecializationType::*method_pointer_e7a0cc626aea5e2c84adea8995e9d802)()const= &::clang::TemplateSpecializationType::isTypeAlias;
class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_1773a270a02d57538b261730313c0c7c)()const= &::clang::TemplateSpecializationType::getAliasedType;
::clang::TemplateSpecializationType::iterator  (::clang::TemplateSpecializationType::*method_pointer_1e81c076c41e56e78490a1238e05f389)()const= &::clang::TemplateSpecializationType::begin;
::clang::TemplateSpecializationType::iterator  (::clang::TemplateSpecializationType::*method_pointer_ab9d699ba6a25ba28611017b22fbd6bc)()const= &::clang::TemplateSpecializationType::end;
class ::clang::TemplateArgument const * (::clang::TemplateSpecializationType::*method_pointer_65645df33dd2561dbc7a57ac992e78f9)()const= &::clang::TemplateSpecializationType::getArgs;
unsigned int  (::clang::TemplateSpecializationType::*method_pointer_bc8e9bedf39f5beabf86cf34e2a7625a)()const= &::clang::TemplateSpecializationType::getNumArgs;
class ::clang::TemplateArgument const & (::clang::TemplateSpecializationType::*method_pointer_e33d043f4f925b8f9cb3cacd8c9d07f8)(unsigned int )const= &::clang::TemplateSpecializationType::getArg;
bool  (::clang::TemplateSpecializationType::*method_pointer_8591e5ab51055abd8cbe7e465f0b2e2b)()const= &::clang::TemplateSpecializationType::isSugared;
class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_8fd4b99c91d65ccd98dafb4dd92e1b9a)()const= &::clang::TemplateSpecializationType::desugar;
bool  (*method_pointer_1e9bd34af7775114b870ebba617f1a8d)(class ::clang::Type const *)= ::clang::TemplateSpecializationType::classof;


void wrapper_13b544d609775d6c82f349029c56dab2(pybind11::module& module)
{

    pybind11::class_<class ::clang::TemplateSpecializationType, autowig::HolderType< class ::clang::TemplateSpecializationType >::Type, class ::clang::Type > class_13b544d609775d6c82f349029c56dab2(module, "TemplateSpecializationType", "Represents a type template specialization; the template must be a class\ntemplate, a type alias template, or a template template parameter. A\ntemplate which cannot be resolved to one of these, e.g. because it is\nwritten with a dependent scope specifier, is instead represented as a @c\nDependentTemplateSpecializationType.\n\nA non-dependent template specialization type is always “sugar”,\ntypically for a\n:raw-latex:`\\c RecordType.  For example, a class template\nspecialization type of \\c vector<int> will refer to a tag type for\nthe instantiation \\c std::vector<int, std::allocator<int>>`\n\n");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_32570f5d573b5fea878e752f4a405e54, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_e7a0cc626aea5e2c84adea8995e9d802, "Determine if this template specialization type is for a type alias\ntemplate that has been substituted.\n\nNearly every template specialization type whose template is an alias\ntemplate will be substituted. However, this is not the case when the\nspecialization contains a pack expansion but the template alias does not\nhave a corresponding parameter pack, e.g.,\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_1773a270a02d57538b261730313c0c7c, ":Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_1e81c076c41e56e78490a1238e05f389, pybind11::return_value_policy::reference_internal, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_ab9d699ba6a25ba28611017b22fbd6bc, pybind11::return_value_policy::reference_internal, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_65645df33dd2561dbc7a57ac992e78f9, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::TemplateArgument`\n\n");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_bc8e9bedf39f5beabf86cf34e2a7625a, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_e33d043f4f925b8f9cb3cacd8c9d07f8, pybind11::return_value_policy::copy, ":Parameter:\n    `Idx` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::TemplateArgument`\n\n");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_8591e5ab51055abd8cbe7e465f0b2e2b, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_8fd4b99c91d65ccd98dafb4dd92e1b9a, "");
    class_13b544d609775d6c82f349029c56dab2.def_static("classof", method_pointer_1e9bd34af7775114b870ebba617f1a8d, "");

}