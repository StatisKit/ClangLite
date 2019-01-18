#include "_clanglite.h"

bool  (::clang::ConstantArrayType::*method_pointer_80541c3ebe145f59b6f7608c856cb1f3)()const= &::clang::ConstantArrayType::isSugared;
class ::clang::QualType  (::clang::ConstantArrayType::*method_pointer_fbc2e7f4543d584a904fb8834cc5b698)()const= &::clang::ConstantArrayType::desugar;
bool  (*method_pointer_8f70bd4f364656b9b53df83b653acc78)(class ::clang::Type const *)= ::clang::ConstantArrayType::classof;

namespace autowig {
}

void wrapper_f851c7810ad1557e8a7e1af726d40e21(pybind11::module& module)
{

    pybind11::class_<class ::clang::ConstantArrayType, autowig::HolderType< class ::clang::ConstantArrayType >::Type, class ::clang::ArrayType > class_f851c7810ad1557e8a7e1af726d40e21(module, "ConstantArrayType", "");
    class_f851c7810ad1557e8a7e1af726d40e21.def("is_sugared", method_pointer_80541c3ebe145f59b6f7608c856cb1f3, "");
    class_f851c7810ad1557e8a7e1af726d40e21.def("desugar", method_pointer_fbc2e7f4543d584a904fb8834cc5b698, "");
    class_f851c7810ad1557e8a7e1af726d40e21.def_static("classof", method_pointer_8f70bd4f364656b9b53df83b653acc78, "");

}