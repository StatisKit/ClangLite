#include "_clanglite.h"

class ::clang::CXXConversionDecl * (*method_pointer_0815cb9bc0a851ad9ae4ae10f68d0926)(class ::clang::ASTContext &, unsigned int )= ::clang::CXXConversionDecl::CreateDeserialized;
bool  (::clang::CXXConversionDecl::*method_pointer_b4733c362c665875aff5ef5a8a70745d)()const= &::clang::CXXConversionDecl::isExplicitSpecified;
bool  (::clang::CXXConversionDecl::*method_pointer_5b3e7e42899a5c67b92301839b5dc5b7)()const= &::clang::CXXConversionDecl::isExplicit;
class ::clang::QualType  (::clang::CXXConversionDecl::*method_pointer_a459079147cd5f398695c74ecfc9edb3)()const= &::clang::CXXConversionDecl::getConversionType;
bool  (::clang::CXXConversionDecl::*method_pointer_8e165126c20a5a07a4ce8507d498eccc)()const= &::clang::CXXConversionDecl::isLambdaToBlockPointerConversion;
bool  (*method_pointer_72c075270ab55948a64a14f23390aeb9)(class ::clang::Decl const *)= ::clang::CXXConversionDecl::classof;
bool  (*method_pointer_c5688187cda35852bb303e549692e958)(enum ::clang::Decl::Kind )= ::clang::CXXConversionDecl::classofKind;

namespace autowig {
}

void wrapper_f985630f6d5d5a2083b01d182b863d7a(pybind11::module& module)
{

    pybind11::class_<class ::clang::CXXConversionDecl, autowig::HolderType< class ::clang::CXXConversionDecl >::Type, class ::clang::CXXMethodDecl > class_f985630f6d5d5a2083b01d182b863d7a(module, "CXXConversionDecl", "Represents a C++ conversion function within a class.\n\nFor example:\n\n");
    class_f985630f6d5d5a2083b01d182b863d7a.def_static("create_deserialized", method_pointer_0815cb9bc0a851ad9ae4ae10f68d0926, pybind11::return_value_policy::reference_internal, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit_specified", method_pointer_b4733c362c665875aff5ef5a8a70745d, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit", method_pointer_5b3e7e42899a5c67b92301839b5dc5b7, "Whether this is an explicit conversion operator (C++11 and later).\n\nExplicit conversion operators are only considered for direct\ninitialization, e.g., when the user has explicitly written a cast.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_f985630f6d5d5a2083b01d182b863d7a.def("get_conversion_type", method_pointer_a459079147cd5f398695c74ecfc9edb3, "Returns the type that this conversion function is converting to.\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_lambda_to_block_pointer_conversion", method_pointer_8e165126c20a5a07a4ce8507d498eccc, "Determine whether this conversion function is a conversion from a lambda\nclosure type to a block pointer.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_f985630f6d5d5a2083b01d182b863d7a.def_static("classof", method_pointer_72c075270ab55948a64a14f23390aeb9, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def_static("classof_kind", method_pointer_c5688187cda35852bb303e549692e958, "");

}