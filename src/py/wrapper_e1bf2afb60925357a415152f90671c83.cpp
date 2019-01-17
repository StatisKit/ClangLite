#include "_clanglite.h"

class ::clang::TemplateTypeParmType const * (::clang::SubstTemplateTypeParmType::*method_pointer_bdbc7d2d82f55c61b41a7799e0096a94)()const= &::clang::SubstTemplateTypeParmType::getReplacedParameter;
class ::clang::QualType  (::clang::SubstTemplateTypeParmType::*method_pointer_6b652ccaf67155d594f91dbd22dbeae4)()const= &::clang::SubstTemplateTypeParmType::getReplacementType;
bool  (::clang::SubstTemplateTypeParmType::*method_pointer_ceb6ae8c6fc4507ebdf1282c48457b4f)()const= &::clang::SubstTemplateTypeParmType::isSugared;
class ::clang::QualType  (::clang::SubstTemplateTypeParmType::*method_pointer_65a5d58ce4c35411bdcdd4125582ef59)()const= &::clang::SubstTemplateTypeParmType::desugar;
bool  (*method_pointer_6199bb15e058531bb780b59f98613138)(class ::clang::Type const *)= ::clang::SubstTemplateTypeParmType::classof;


void wrapper_e1bf2afb60925357a415152f90671c83(pybind11::module& module)
{

    pybind11::class_<class ::clang::SubstTemplateTypeParmType, autowig::HolderType< class ::clang::SubstTemplateTypeParmType >::Type, class ::clang::Type > class_e1bf2afb60925357a415152f90671c83(module, "SubstTemplateTypeParmType", "Represents the result of substituting a type for a template type\nparameter.\n\nWithin an instantiated template, all template type parameters have been\nreplaced with these. They are used solely to record that a type was\noriginally written as a template type parameter; therefore they are\nnever canonical.\n\n");
    class_e1bf2afb60925357a415152f90671c83.def("get_replaced_parameter", method_pointer_bdbc7d2d82f55c61b41a7799e0096a94, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::TemplateTypeParmType`\n\n");
    class_e1bf2afb60925357a415152f90671c83.def("get_replacement_type", method_pointer_6b652ccaf67155d594f91dbd22dbeae4, ":Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_e1bf2afb60925357a415152f90671c83.def("is_sugared", method_pointer_ceb6ae8c6fc4507ebdf1282c48457b4f, "");
    class_e1bf2afb60925357a415152f90671c83.def("desugar", method_pointer_65a5d58ce4c35411bdcdd4125582ef59, "");
    class_e1bf2afb60925357a415152f90671c83.def_static("classof", method_pointer_6199bb15e058531bb780b59f98613138, "");

}