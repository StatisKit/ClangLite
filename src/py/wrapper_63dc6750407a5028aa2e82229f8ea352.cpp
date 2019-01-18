#include "_clanglite.h"

bool  (::clang::UnaryTransformType::*method_pointer_60d436277c305535ad99f438a0b42298)()const= &::clang::UnaryTransformType::isSugared;
class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_5220dd43ef9e5e289b59002c32e0899d)()const= &::clang::UnaryTransformType::desugar;
class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_3d6493ce4f765b63b55020dae55ae398)()const= &::clang::UnaryTransformType::getUnderlyingType;
class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_e7e8d907935b506ba1b104b8b26073d8)()const= &::clang::UnaryTransformType::getBaseType;
bool  (*method_pointer_dcde29071db95e3aa112a23257a0be84)(class ::clang::Type const *)= ::clang::UnaryTransformType::classof;

namespace autowig {
}

void wrapper_63dc6750407a5028aa2e82229f8ea352(pybind11::module& module)
{

    pybind11::class_<class ::clang::UnaryTransformType, autowig::HolderType< class ::clang::UnaryTransformType >::Type, class ::clang::Type > class_63dc6750407a5028aa2e82229f8ea352(module, "UnaryTransformType", "");
    class_63dc6750407a5028aa2e82229f8ea352.def("is_sugared", method_pointer_60d436277c305535ad99f438a0b42298, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("desugar", method_pointer_5220dd43ef9e5e289b59002c32e0899d, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_underlying_type", method_pointer_3d6493ce4f765b63b55020dae55ae398, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_base_type", method_pointer_e7e8d907935b506ba1b104b8b26073d8, "");
    class_63dc6750407a5028aa2e82229f8ea352.def_static("classof", method_pointer_dcde29071db95e3aa112a23257a0be84, "");

}