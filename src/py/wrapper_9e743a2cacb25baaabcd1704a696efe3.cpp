#include "_clanglite.h"

class ::clang::TemplateArgument const * (::clang::DependentTemplateSpecializationType::*method_pointer_4dda21f9c2565253833dbaeaa960ea0f)()const= &::clang::DependentTemplateSpecializationType::getArgs;
unsigned int  (::clang::DependentTemplateSpecializationType::*method_pointer_e43f459b2df452168010f43e6706dc32)()const= &::clang::DependentTemplateSpecializationType::getNumArgs;
class ::clang::TemplateArgument const & (::clang::DependentTemplateSpecializationType::*method_pointer_32813aebf4505644a3898aa7bf614afa)(unsigned int )const= &::clang::DependentTemplateSpecializationType::getArg;
::clang::DependentTemplateSpecializationType::iterator  (::clang::DependentTemplateSpecializationType::*method_pointer_af2ba50c86d65bd79c725e6c36cb335a)()const= &::clang::DependentTemplateSpecializationType::begin;
::clang::DependentTemplateSpecializationType::iterator  (::clang::DependentTemplateSpecializationType::*method_pointer_8310724ae7585ffbb0e3a187fc3f0edd)()const= &::clang::DependentTemplateSpecializationType::end;
bool  (::clang::DependentTemplateSpecializationType::*method_pointer_203b5d22fc4859608a86edc82748a7ba)()const= &::clang::DependentTemplateSpecializationType::isSugared;
class ::clang::QualType  (::clang::DependentTemplateSpecializationType::*method_pointer_4b9387990b81543389290f78b5e9639e)()const= &::clang::DependentTemplateSpecializationType::desugar;
bool  (*method_pointer_4a1c60cb16d95a8d8474395526fbf6fc)(class ::clang::Type const *)= ::clang::DependentTemplateSpecializationType::classof;

namespace autowig {
}

void wrapper_9e743a2cacb25baaabcd1704a696efe3(pybind11::module& module)
{

    pybind11::class_<class ::clang::DependentTemplateSpecializationType, autowig::HolderType< class ::clang::DependentTemplateSpecializationType >::Type, class ::clang::TypeWithKeyword > class_9e743a2cacb25baaabcd1704a696efe3(module, "DependentTemplateSpecializationType", "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_args", method_pointer_4dda21f9c2565253833dbaeaa960ea0f, pybind11::return_value_policy::reference_internal, "Retrieve the template arguments.\n\n:Return Type:\n    :cpp:class:`::clang::TemplateArgument`\n\n");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_num_args", method_pointer_e43f459b2df452168010f43e6706dc32, "Retrieve the number of template arguments.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_arg", method_pointer_32813aebf4505644a3898aa7bf614afa, pybind11::return_value_policy::copy, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("begin", method_pointer_af2ba50c86d65bd79c725e6c36cb335a, pybind11::return_value_policy::reference_internal, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("end", method_pointer_8310724ae7585ffbb0e3a187fc3f0edd, pybind11::return_value_policy::reference_internal, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("is_sugared", method_pointer_203b5d22fc4859608a86edc82748a7ba, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("desugar", method_pointer_4b9387990b81543389290f78b5e9639e, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def_static("classof", method_pointer_4a1c60cb16d95a8d8474395526fbf6fc, "");

}