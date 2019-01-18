#include "_clanglite.h"

class ::clang::SourceLocation  (::clang::DependentSizedArrayType::*method_pointer_682f079c6e9256a69397721d0e3a7500)()const= &::clang::DependentSizedArrayType::getLBracketLoc;
class ::clang::SourceLocation  (::clang::DependentSizedArrayType::*method_pointer_2b1237176cbc56b4a67a194c401047eb)()const= &::clang::DependentSizedArrayType::getRBracketLoc;
bool  (::clang::DependentSizedArrayType::*method_pointer_ab751aa73f695031971b64f3c5085f0d)()const= &::clang::DependentSizedArrayType::isSugared;
class ::clang::QualType  (::clang::DependentSizedArrayType::*method_pointer_8ac7367c465551a38f93999defacfd6d)()const= &::clang::DependentSizedArrayType::desugar;
bool  (*method_pointer_d3e800454abd5db3937147a6bfd4d680)(class ::clang::Type const *)= ::clang::DependentSizedArrayType::classof;

namespace autowig {
}

void wrapper_47d43e4eda7252d2bec0204a93977671(pybind11::module& module)
{

    pybind11::class_<class ::clang::DependentSizedArrayType, autowig::HolderType< class ::clang::DependentSizedArrayType >::Type, class ::clang::ArrayType > class_47d43e4eda7252d2bec0204a93977671(module, "DependentSizedArrayType", "");
    class_47d43e4eda7252d2bec0204a93977671.def("get_l_bracket_loc", method_pointer_682f079c6e9256a69397721d0e3a7500, "");
    class_47d43e4eda7252d2bec0204a93977671.def("get_r_bracket_loc", method_pointer_2b1237176cbc56b4a67a194c401047eb, "");
    class_47d43e4eda7252d2bec0204a93977671.def("is_sugared", method_pointer_ab751aa73f695031971b64f3c5085f0d, "");
    class_47d43e4eda7252d2bec0204a93977671.def("desugar", method_pointer_8ac7367c465551a38f93999defacfd6d, "");
    class_47d43e4eda7252d2bec0204a93977671.def_static("classof", method_pointer_d3e800454abd5db3937147a6bfd4d680, "");

}