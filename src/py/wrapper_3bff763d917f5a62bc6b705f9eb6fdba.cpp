#include "_clanglite.h"

class ::clang::QualType  (::clang::TypeOfExprType::*method_pointer_2986677fb5cc52c185a3dadfe5276f22)()const= &::clang::TypeOfExprType::desugar;
bool  (::clang::TypeOfExprType::*method_pointer_127a875d8a4c5167aaee7d8cad487479)()const= &::clang::TypeOfExprType::isSugared;
bool  (*method_pointer_ca4b7c018479539fac03fd4863c9fa9d)(class ::clang::Type const *)= ::clang::TypeOfExprType::classof;

namespace autowig {
}

void wrapper_3bff763d917f5a62bc6b705f9eb6fdba(pybind11::module& module)
{

    pybind11::class_<class ::clang::TypeOfExprType, autowig::HolderType< class ::clang::TypeOfExprType >::Type, class ::clang::Type > class_3bff763d917f5a62bc6b705f9eb6fdba(module, "TypeOfExprType", "");
    class_3bff763d917f5a62bc6b705f9eb6fdba.def("desugar", method_pointer_2986677fb5cc52c185a3dadfe5276f22, "Remove a single level of sugar.\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_3bff763d917f5a62bc6b705f9eb6fdba.def("is_sugared", method_pointer_127a875d8a4c5167aaee7d8cad487479, "Returns whether this type directly provides sugar.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bff763d917f5a62bc6b705f9eb6fdba.def_static("classof", method_pointer_ca4b7c018479539fac03fd4863c9fa9d, "");

}