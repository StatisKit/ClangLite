#include "_clanglite.h"

bool  (::clang::DependentNameType::*method_pointer_e9382f0de3af5ecab4a0b8bac03a20e8)()const= &::clang::DependentNameType::isSugared;
class ::clang::QualType  (::clang::DependentNameType::*method_pointer_c155e08860d951389c669e2d2fa816d9)()const= &::clang::DependentNameType::desugar;
bool  (*method_pointer_e0286efa07e65ec883a9cf4bfa594a48)(class ::clang::Type const *)= ::clang::DependentNameType::classof;


void wrapper_411e70b105bb5141b394c3e9e429e0b0(pybind11::module& module)
{

    pybind11::class_<class ::clang::DependentNameType, autowig::HolderType< class ::clang::DependentNameType >::Type, class ::clang::TypeWithKeyword > class_411e70b105bb5141b394c3e9e429e0b0(module, "DependentNameType", "Represents a qualified type name for which the type name is dependent.\n\nDependentNameType represents a class of dependent types that involve a\npossibly dependent nested-name-specifier (e.g., “T::”) followed by a\nname of a type. The DependentNameType may start with a “typename” (for a\ntypename-specifier), “class”, “struct”, “union”, or “enum” (for a\ndependent elaborated-type-specifier), or nothing (in contexts where we\nknow that we must be referring to a type, e.g., in a base class\nspecifier). Typically the nested-name-specifier is dependent, but in\nMSVC compatibility mode, this type is used with non-dependent names to\ndelay name lookup until instantiation.\n\n");
    class_411e70b105bb5141b394c3e9e429e0b0.def("is_sugared", method_pointer_e9382f0de3af5ecab4a0b8bac03a20e8, "");
    class_411e70b105bb5141b394c3e9e429e0b0.def("desugar", method_pointer_c155e08860d951389c669e2d2fa816d9, "");
    class_411e70b105bb5141b394c3e9e429e0b0.def_static("classof", method_pointer_e0286efa07e65ec883a9cf4bfa594a48, "");

}