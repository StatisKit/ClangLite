#include "_clanglite.h"

bool  (::clang::ReferenceType::*method_pointer_d82dfd1b5b9759de8236ce45be69383a)()const= &::clang::ReferenceType::isSpelledAsLValue;
bool  (::clang::ReferenceType::*method_pointer_b79fafc81e6056fba1f8591507f7c279)()const= &::clang::ReferenceType::isInnerRef;
class ::clang::QualType  (::clang::ReferenceType::*method_pointer_160344a51e7b5a56971161cf9532f92d)()const= &::clang::ReferenceType::getPointeeTypeAsWritten;
class ::clang::QualType  (::clang::ReferenceType::*method_pointer_8620fa47fb275d07b12daca1cfdc9743)()const= &::clang::ReferenceType::getPointeeType;
bool  (*method_pointer_81835e39dcd75ddeac44000b376fd6e9)(class ::clang::Type const *)= ::clang::ReferenceType::classof;

namespace autowig {
}

void wrapper_c250e00bbfb75b9aacb637fd13b46571(pybind11::module& module)
{

    pybind11::class_<class ::clang::ReferenceType, autowig::HolderType< class ::clang::ReferenceType >::Type, class ::clang::Type > class_c250e00bbfb75b9aacb637fd13b46571(module, "ReferenceType", "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("is_spelled_as_l_value", method_pointer_d82dfd1b5b9759de8236ce45be69383a, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("is_inner_ref", method_pointer_b79fafc81e6056fba1f8591507f7c279, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("get_pointee_type_as_written", method_pointer_160344a51e7b5a56971161cf9532f92d, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("get_pointee_type", method_pointer_8620fa47fb275d07b12daca1cfdc9743, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def_static("classof", method_pointer_81835e39dcd75ddeac44000b376fd6e9, "");

}