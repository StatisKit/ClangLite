#include "_clanglite.h"

class ::clang::QualType  (::clang::ElaboratedType::*method_pointer_c3ecb4da55d654c6b7bd85b091867b66)()const= &::clang::ElaboratedType::getNamedType;
class ::clang::QualType  (::clang::ElaboratedType::*method_pointer_208a3bca904a5cb1809a6791ba81eca3)()const= &::clang::ElaboratedType::desugar;
bool  (::clang::ElaboratedType::*method_pointer_6ca2441e2cf656fca7cb1c8c6e17c7e5)()const= &::clang::ElaboratedType::isSugared;
bool  (*method_pointer_fc58dcad99fc5bcdbaa1f837e3c11b8e)(class ::clang::Type const *)= ::clang::ElaboratedType::classof;


void wrapper_e4cef5772c4f56478cdedd9f0b21301a(pybind11::module& module)
{

    pybind11::class_<class ::clang::ElaboratedType, autowig::HolderType< class ::clang::ElaboratedType >::Type, class ::clang::TypeWithKeyword > class_e4cef5772c4f56478cdedd9f0b21301a(module, "ElaboratedType", "Represents a type that was referred to using an elaborated type keyword,\ne.g., struct S, or via a qualified name, e.g., N::M::type, or both.\n\nThis type is used to keep track of a type name as written in the source\ncode, including tag keywords and any nested-name-specifiers. The type\nitself is always “sugar”, used to express what was written in the source\ncode but containing no additional semantic information.\n\n");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("get_named_type", method_pointer_c3ecb4da55d654c6b7bd85b091867b66, ":Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("desugar", method_pointer_208a3bca904a5cb1809a6791ba81eca3, ":Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("is_sugared", method_pointer_6ca2441e2cf656fca7cb1c8c6e17c7e5, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e4cef5772c4f56478cdedd9f0b21301a.def_static("classof", method_pointer_fc58dcad99fc5bcdbaa1f837e3c11b8e, "");

}