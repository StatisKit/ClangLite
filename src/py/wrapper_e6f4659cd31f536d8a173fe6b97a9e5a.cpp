#include "_clanglite.h"

bool  (::clang::IncompleteArrayType::*method_pointer_32b3f2d111aa59c5b48174d233070a2c)()const= &::clang::IncompleteArrayType::isSugared;
class ::clang::QualType  (::clang::IncompleteArrayType::*method_pointer_fba3184af93a55d9a0d7167dbdd5a6f9)()const= &::clang::IncompleteArrayType::desugar;
bool  (*method_pointer_a617b10eec4d5582a668071a32513c2e)(class ::clang::Type const *)= ::clang::IncompleteArrayType::classof;


void wrapper_e6f4659cd31f536d8a173fe6b97a9e5a(pybind11::module& module)
{

    pybind11::class_<class ::clang::IncompleteArrayType, autowig::HolderType< class ::clang::IncompleteArrayType >::Type, class ::clang::ArrayType > class_e6f4659cd31f536d8a173fe6b97a9e5a(module, "IncompleteArrayType", "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def("is_sugared", method_pointer_32b3f2d111aa59c5b48174d233070a2c, "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def("desugar", method_pointer_fba3184af93a55d9a0d7167dbdd5a6f9, "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def_static("classof", method_pointer_a617b10eec4d5582a668071a32513c2e, "");

}