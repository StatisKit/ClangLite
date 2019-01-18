#include "_clanglite.h"

class ::clang::TemplateArgument  (*method_pointer_ddf4ccff9701594687e32ec45d2a1be6)()= ::clang::TemplateArgument::getEmptyPack;
enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_87b135b94a7854e0935cbbbfb3ba4b9c)()const= &::clang::TemplateArgument::getKind;
bool  (::clang::TemplateArgument::*method_pointer_e648e0565c24505e96d1f4b1fa2473fe)()const= &::clang::TemplateArgument::isNull;
bool  (::clang::TemplateArgument::*method_pointer_4f0017a64d3f5623884feb9142bcd5a2)()const= &::clang::TemplateArgument::isDependent;
bool  (::clang::TemplateArgument::*method_pointer_1bf0e46199ab554da18fbbb55dae6f87)()const= &::clang::TemplateArgument::isInstantiationDependent;
bool  (::clang::TemplateArgument::*method_pointer_f95dc96a71ec511791666b2691fca59b)()const= &::clang::TemplateArgument::containsUnexpandedParameterPack;
bool  (::clang::TemplateArgument::*method_pointer_32be4b09a99c5c9dbdcd7e391fe6735e)()const= &::clang::TemplateArgument::isPackExpansion;
class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_c3a4864c2153579eaed85a6503b82f80)()const= &::clang::TemplateArgument::getAsType;
class ::clang::ValueDecl * (::clang::TemplateArgument::*method_pointer_d14564868804596f81746684870cb78f)()const= &::clang::TemplateArgument::getAsDecl;
class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_3e1e65df8f2455de831d98a75584b627)()const= &::clang::TemplateArgument::getParamTypeForDecl;
class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_3f4088fd784d510f89ea2aadcbaff58e)()const= &::clang::TemplateArgument::getNullPtrType;
class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_04d815b923315818a2c25604c25bedf5)()const= &::clang::TemplateArgument::getIntegralType;
void  (::clang::TemplateArgument::*method_pointer_5d83ef71c8775c3f90a0438ad413ea7e)(class ::clang::QualType )= &::clang::TemplateArgument::setIntegralType;
class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_8b17397eae1c55e1967cfb0fc0370ea1)()const= &::clang::TemplateArgument::getNonTypeTemplateArgumentType;
::clang::TemplateArgument::pack_iterator  (::clang::TemplateArgument::*method_pointer_d86cd617373c5094965705a7cfd60b65)()const= &::clang::TemplateArgument::pack_begin;
::clang::TemplateArgument::pack_iterator  (::clang::TemplateArgument::*method_pointer_4c2a7f4993f250f7be8f418084855424)()const= &::clang::TemplateArgument::pack_end;
unsigned int  (::clang::TemplateArgument::*method_pointer_511023b032205f879ba902c0593fae9d)()const= &::clang::TemplateArgument::pack_size;
bool  (::clang::TemplateArgument::*method_pointer_fc30acfd0a5853babf8e9517bd1117c7)(class ::clang::TemplateArgument const &)const= &::clang::TemplateArgument::structurallyEquals;
class ::clang::TemplateArgument  (::clang::TemplateArgument::*method_pointer_a43fc2d3f9a85c4e91cc8ab97327dd36)()const= &::clang::TemplateArgument::getPackExpansionPattern;
void  (::clang::TemplateArgument::*method_pointer_6a4502d4bd075c7eaf34b8ea67cb1784)()const= &::clang::TemplateArgument::dump;

namespace autowig {
}

void wrapper_c135a712d4ea5ecca5fd38e224a91e4a(pybind11::module& module)
{

    struct function_group
    {
        static class ::pybind11::str  function_ff6374551bf55e369f5d000b1edb1b8b(class ::clang::TemplateArgument * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    pybind11::class_<class ::clang::TemplateArgument, autowig::HolderType< class ::clang::TemplateArgument >::Type > class_c135a712d4ea5ecca5fd38e224a91e4a(module, "TemplateArgument", "Represents a template argument.\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def_static("get_empty_pack", method_pointer_ddf4ccff9701594687e32ec45d2a1be6, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_87b135b94a7854e0935cbbbfb3ba4b9c, "Return the kind of stored template argument.\n\n:Return Type:\n    :cpp:enumerator:`::clang::TemplateArgument::ArgKind`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_e648e0565c24505e96d1f4b1fa2473fe, "Determine whether this template argument has no value.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_4f0017a64d3f5623884feb9142bcd5a2, "Whether this template argument is dependent on a template parameter such\nthat its result can change from one instantiation to another.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_1bf0e46199ab554da18fbbb55dae6f87, "Whether this template argument is dependent on a template parameter.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_f95dc96a71ec511791666b2691fca59b, "Whether this template argument contains an unexpanded parameter pack.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_32be4b09a99c5c9dbdcd7e391fe6735e, "Determine whether this template argument is a pack expansion.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_type", method_pointer_c3a4864c2153579eaed85a6503b82f80, "Retrieve the type for a type template argument.\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_decl", method_pointer_d14564868804596f81746684870cb78f, pybind11::return_value_policy::reference_internal, "Retrieve the declaration for a declaration non-type template argument.\n\n:Return Type:\n    :cpp:class:`::clang::ValueDecl`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_param_type_for_decl", method_pointer_3e1e65df8f2455de831d98a75584b627, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_null_ptr_type", method_pointer_3f4088fd784d510f89ea2aadcbaff58e, "Retrieve the type for null non-type template argument.\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_integral_type", method_pointer_04d815b923315818a2c25604c25bedf5, "Retrieve the type of the integral value.\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("set_integral_type", method_pointer_5d83ef71c8775c3f90a0438ad413ea7e, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_non_type_template_argument_type", method_pointer_8b17397eae1c55e1967cfb0fc0370ea1, "If this is a non-type template argument, get its type. Otherwise,\nreturns a null QualType.\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_begin", method_pointer_d86cd617373c5094965705a7cfd60b65, pybind11::return_value_policy::reference_internal, "Iterator referencing the first argument of a template argument pack.\n\n:Return Type:\n    :cpp:class:`::clang::TemplateArgument`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_end", method_pointer_4c2a7f4993f250f7be8f418084855424, pybind11::return_value_policy::reference_internal, "Iterator referencing one past the last argument of a template argument\npack.\n\n:Return Type:\n    :cpp:class:`::clang::TemplateArgument`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_511023b032205f879ba902c0593fae9d, "The number of template arguments in the given template argument pack.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("structurally_equals", method_pointer_fc30acfd0a5853babf8e9517bd1117c7, "Determines whether two template arguments are superficially the same.\n\n:Parameter:\n    `Other` (:cpp:class:`::clang::TemplateArgument`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_pack_expansion_pattern", method_pointer_a43fc2d3f9a85c4e91cc8ab97327dd36, "When the template argument is a pack expansion, returns the pattern of\nthe pack expansion.\n\n:Return Type:\n    :cpp:class:`::clang::TemplateArgument`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("dump", method_pointer_6a4502d4bd075c7eaf34b8ea67cb1784, "Debugging aid that dumps the template argument to standard error.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_ff6374551bf55e369f5d000b1edb1b8b, "");

}