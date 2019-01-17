#include "_clanglite.h"

class ::clang::QualType  (::clang::TypeOfType::*method_pointer_1c953d3302d051e79d282c7ecff266bc)()const= &::clang::TypeOfType::getUnderlyingType;
class ::clang::QualType  (::clang::TypeOfType::*method_pointer_75a001cdafcb542a8df5e5ccd5a5c894)()const= &::clang::TypeOfType::desugar;
bool  (::clang::TypeOfType::*method_pointer_7de6f64d01e250c390259f230956f1fa)()const= &::clang::TypeOfType::isSugared;
bool  (*method_pointer_f0571cdd3a155e3b8c87b70bbe8d88ef)(class ::clang::Type const *)= ::clang::TypeOfType::classof;


void wrapper_69d409490fc05f00af970e471a94279a(pybind11::module& module)
{

    pybind11::class_<class ::clang::TypeOfType, autowig::HolderType< class ::clang::TypeOfType >::Type, class ::clang::Type > class_69d409490fc05f00af970e471a94279a(module, "TypeOfType", "");
    class_69d409490fc05f00af970e471a94279a.def("get_underlying_type", method_pointer_1c953d3302d051e79d282c7ecff266bc, "");
    class_69d409490fc05f00af970e471a94279a.def("desugar", method_pointer_75a001cdafcb542a8df5e5ccd5a5c894, "Remove a single level of sugar.\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_69d409490fc05f00af970e471a94279a.def("is_sugared", method_pointer_7de6f64d01e250c390259f230956f1fa, "Returns whether this type directly provides sugar.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_69d409490fc05f00af970e471a94279a.def_static("classof", method_pointer_f0571cdd3a155e3b8c87b70bbe8d88ef, "");

}