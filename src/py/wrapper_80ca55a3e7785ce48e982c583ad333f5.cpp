#include "_clanglite.h"

class ::clang::EnumConstantDecl * (*method_pointer_c14353c0ae1e592cb7c4003230f49e7c)(class ::clang::ASTContext &, unsigned int )= ::clang::EnumConstantDecl::CreateDeserialized;
class ::clang::EnumConstantDecl * (::clang::EnumConstantDecl::*method_pointer_8e55757ef56c593696327adb07bb7a7e)()= &::clang::EnumConstantDecl::getCanonicalDecl;
class ::clang::EnumConstantDecl const * (::clang::EnumConstantDecl::*method_pointer_584dc6539c845beb983ad822ced9f154)()const= &::clang::EnumConstantDecl::getCanonicalDecl;
bool  (*method_pointer_c6facb55ea055be89a37290c16131f64)(class ::clang::Decl const *)= ::clang::EnumConstantDecl::classof;
bool  (*method_pointer_61c982bc91ed548cba4bd09086cec134)(enum ::clang::Decl::Kind )= ::clang::EnumConstantDecl::classofKind;


void wrapper_80ca55a3e7785ce48e982c583ad333f5(pybind11::module& module)
{

    pybind11::class_<class ::clang::EnumConstantDecl, autowig::HolderType< class ::clang::EnumConstantDecl >::Type, class ::clang::ValueDecl > class_80ca55a3e7785ce48e982c583ad333f5(module, "EnumConstantDecl", "");
    class_80ca55a3e7785ce48e982c583ad333f5.def_static("create_deserialized", method_pointer_c14353c0ae1e592cb7c4003230f49e7c, pybind11::return_value_policy::reference_internal, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_8e55757ef56c593696327adb07bb7a7e, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::EnumConstantDecl`\n\n");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_584dc6539c845beb983ad822ced9f154, pybind11::return_value_policy::reference_internal, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def_static("classof", method_pointer_c6facb55ea055be89a37290c16131f64, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def_static("classof_kind", method_pointer_61c982bc91ed548cba4bd09086cec134, "");

}