#include "_clanglite.h"

class ::clang::QualType  (::clang::AttributedType::*method_pointer_262e98ffbbe25a3d9e827680d4810c5a)()const= &::clang::AttributedType::getModifiedType;
class ::clang::QualType  (::clang::AttributedType::*method_pointer_b7cb074d87de5043bfb1276561b63e4d)()const= &::clang::AttributedType::getEquivalentType;
bool  (::clang::AttributedType::*method_pointer_9d2b250a31a15765a8e0b293ae29ce1f)()const= &::clang::AttributedType::isSugared;
class ::clang::QualType  (::clang::AttributedType::*method_pointer_a9f094b684855942b472378a81f9ff10)()const= &::clang::AttributedType::desugar;
bool  (::clang::AttributedType::*method_pointer_58f6a74c443954df9880ec7f14dabfd8)()const= &::clang::AttributedType::isQualifier;
bool  (::clang::AttributedType::*method_pointer_3776f362fc9d5531a94d59477f5871a5)()const= &::clang::AttributedType::isMSTypeSpec;
bool  (::clang::AttributedType::*method_pointer_7f4e0c93278d5cbeb45e6bb8910e623e)()const= &::clang::AttributedType::isCallingConv;
bool  (*method_pointer_dbc4e9e8f9de5e0ab1170774fe2ea3c9)(class ::clang::Type const *)= ::clang::AttributedType::classof;

namespace autowig {
}

void wrapper_1d580556003654da9f00e93300e8c7d9(pybind11::module& module)
{

    pybind11::class_<class ::clang::AttributedType, autowig::HolderType< class ::clang::AttributedType >::Type, class ::clang::Type > class_1d580556003654da9f00e93300e8c7d9(module, "AttributedType", "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_262e98ffbbe25a3d9e827680d4810c5a, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_b7cb074d87de5043bfb1276561b63e4d, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_9d2b250a31a15765a8e0b293ae29ce1f, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_a9f094b684855942b472378a81f9ff10, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_58f6a74c443954df9880ec7f14dabfd8, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_3776f362fc9d5531a94d59477f5871a5, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_7f4e0c93278d5cbeb45e6bb8910e623e, "");
    class_1d580556003654da9f00e93300e8c7d9.def_static("classof", method_pointer_dbc4e9e8f9de5e0ab1170774fe2ea3c9, "");

}