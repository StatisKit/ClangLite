#include "_clanglite.h"

class ::clang::TemplateTypeParmType const * (::clang::SubstTemplateTypeParmPackType::*method_pointer_0c33fc3517115f639c8ea0769f7d69c5)()const= &::clang::SubstTemplateTypeParmPackType::getReplacedParameter;
bool  (::clang::SubstTemplateTypeParmPackType::*method_pointer_7a9bf362ddf45fc6a7104f6204416ac9)()const= &::clang::SubstTemplateTypeParmPackType::isSugared;
class ::clang::QualType  (::clang::SubstTemplateTypeParmPackType::*method_pointer_5e37981f84d754189d29f8d079a463c8)()const= &::clang::SubstTemplateTypeParmPackType::desugar;
class ::clang::TemplateArgument  (::clang::SubstTemplateTypeParmPackType::*method_pointer_2c5f487b719c5c99aea2ed69b3e96137)()const= &::clang::SubstTemplateTypeParmPackType::getArgumentPack;
bool  (*method_pointer_82c9b3a123945f5eb1fac41ee0810bae)(class ::clang::Type const *)= ::clang::SubstTemplateTypeParmPackType::classof;


void wrapper_8c3d682fda725ecaa6f62d0cc71e3761(pybind11::module& module)
{

    pybind11::class_<class ::clang::SubstTemplateTypeParmPackType, autowig::HolderType< class ::clang::SubstTemplateTypeParmPackType >::Type, class ::clang::Type > class_8c3d682fda725ecaa6f62d0cc71e3761(module, "SubstTemplateTypeParmPackType", "Represents the result of substituting a set of types for a template type\nparameter pack.\n\nWhen a pack expansion in the source code contains multiple parameter\npacks and those parameter packs correspond to different levels of\ntemplate parameter lists, this type node is used to represent a template\ntype parameter pack from an outer level, which has already had its\nargument pack substituted but that still lives within a pack expansion\nthat itself could not be instantiated. When actually performing a\nsubstitution into that pack expansion (e.g., when all template\nparameters have corresponding arguments), this type will be replaced\nwith the :raw-latex:`\\c SubstTemplateTypeParmType\nat the current pack substitution index.`\n\n");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("get_replaced_parameter", method_pointer_0c33fc3517115f639c8ea0769f7d69c5, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::TemplateTypeParmType`\n\n");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("is_sugared", method_pointer_7a9bf362ddf45fc6a7104f6204416ac9, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("desugar", method_pointer_5e37981f84d754189d29f8d079a463c8, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("get_argument_pack", method_pointer_2c5f487b719c5c99aea2ed69b3e96137, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def_static("classof", method_pointer_82c9b3a123945f5eb1fac41ee0810bae, "");

}