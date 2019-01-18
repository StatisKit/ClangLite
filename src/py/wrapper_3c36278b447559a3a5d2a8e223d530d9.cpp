#include "_clanglite.h"

class ::clang::TypedefNameDecl * (::clang::TypedefType::*method_pointer_d037ef2092c459709a7dc5470b6cf362)()const= &::clang::TypedefType::getDecl;
bool  (::clang::TypedefType::*method_pointer_d5806058a73055288d1e9c7daeacb479)()const= &::clang::TypedefType::isSugared;
class ::clang::QualType  (::clang::TypedefType::*method_pointer_bac08253f4a258b1a50dbd2036a6e65d)()const= &::clang::TypedefType::desugar;
bool  (*method_pointer_7d4f00fd55c05aac8843ef3bf3b236ac)(class ::clang::Type const *)= ::clang::TypedefType::classof;

namespace autowig {
}

void wrapper_3c36278b447559a3a5d2a8e223d530d9(pybind11::module& module)
{

    pybind11::class_<class ::clang::TypedefType, autowig::HolderType< class ::clang::TypedefType >::Type, class ::clang::Type > class_3c36278b447559a3a5d2a8e223d530d9(module, "TypedefType", "");
    class_3c36278b447559a3a5d2a8e223d530d9.def("get_decl", method_pointer_d037ef2092c459709a7dc5470b6cf362, pybind11::return_value_policy::reference_internal, "");
    class_3c36278b447559a3a5d2a8e223d530d9.def("is_sugared", method_pointer_d5806058a73055288d1e9c7daeacb479, "");
    class_3c36278b447559a3a5d2a8e223d530d9.def("desugar", method_pointer_bac08253f4a258b1a50dbd2036a6e65d, "");
    class_3c36278b447559a3a5d2a8e223d530d9.def_static("classof", method_pointer_7d4f00fd55c05aac8843ef3bf3b236ac, "");

}