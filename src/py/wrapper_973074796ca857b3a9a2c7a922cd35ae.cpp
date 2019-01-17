#include "_clanglite.h"

class ::clang::QualType  (::clang::DecltypeType::*method_pointer_465231cefe0654f4afcd7c131ae6444a)()const= &::clang::DecltypeType::getUnderlyingType;
class ::clang::QualType  (::clang::DecltypeType::*method_pointer_c5ef3c79017a5e4186cb6eb50bdf15a5)()const= &::clang::DecltypeType::desugar;
bool  (::clang::DecltypeType::*method_pointer_332f7fd0693658a0b28d4d16ae3cfaca)()const= &::clang::DecltypeType::isSugared;
bool  (*method_pointer_57f6791f71475947af8ba2d46d7f31a4)(class ::clang::Type const *)= ::clang::DecltypeType::classof;


void wrapper_973074796ca857b3a9a2c7a922cd35ae(pybind11::module& module)
{

    pybind11::class_<class ::clang::DecltypeType, autowig::HolderType< class ::clang::DecltypeType >::Type, class ::clang::Type > class_973074796ca857b3a9a2c7a922cd35ae(module, "DecltypeType", "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("get_underlying_type", method_pointer_465231cefe0654f4afcd7c131ae6444a, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("desugar", method_pointer_c5ef3c79017a5e4186cb6eb50bdf15a5, "Remove a single level of sugar.\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_973074796ca857b3a9a2c7a922cd35ae.def("is_sugared", method_pointer_332f7fd0693658a0b28d4d16ae3cfaca, "Returns whether this type directly provides sugar.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_973074796ca857b3a9a2c7a922cd35ae.def_static("classof", method_pointer_57f6791f71475947af8ba2d46d7f31a4, "");

}