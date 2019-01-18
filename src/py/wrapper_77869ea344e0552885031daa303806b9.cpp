#include "_clanglite.h"

class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_91fa005535c05c1f8b7db2e454978229)()const= &::clang::VariableArrayType::getLBracketLoc;
class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_0eff004e01eb57f2995721d08cd7a82a)()const= &::clang::VariableArrayType::getRBracketLoc;
bool  (::clang::VariableArrayType::*method_pointer_b9307fd0eb2f5345b55ec88fc82cfb89)()const= &::clang::VariableArrayType::isSugared;
class ::clang::QualType  (::clang::VariableArrayType::*method_pointer_64bbc0896de95e48973d6c6f429f48e8)()const= &::clang::VariableArrayType::desugar;
bool  (*method_pointer_551d4d399de55b229f38a8b0c928c78f)(class ::clang::Type const *)= ::clang::VariableArrayType::classof;

namespace autowig {
}

void wrapper_77869ea344e0552885031daa303806b9(pybind11::module& module)
{

    pybind11::class_<class ::clang::VariableArrayType, autowig::HolderType< class ::clang::VariableArrayType >::Type, class ::clang::ArrayType > class_77869ea344e0552885031daa303806b9(module, "VariableArrayType", "");
    class_77869ea344e0552885031daa303806b9.def("get_l_bracket_loc", method_pointer_91fa005535c05c1f8b7db2e454978229, "");
    class_77869ea344e0552885031daa303806b9.def("get_r_bracket_loc", method_pointer_0eff004e01eb57f2995721d08cd7a82a, "");
    class_77869ea344e0552885031daa303806b9.def("is_sugared", method_pointer_b9307fd0eb2f5345b55ec88fc82cfb89, "");
    class_77869ea344e0552885031daa303806b9.def("desugar", method_pointer_64bbc0896de95e48973d6c6f429f48e8, "");
    class_77869ea344e0552885031daa303806b9.def_static("classof", method_pointer_551d4d399de55b229f38a8b0c928c78f, "");

}