#include "_clanglite.h"

class ::clang::ExportDecl * (*method_pointer_1cc9cbbba96e50b39bc9c380dab095a4)(class ::clang::ASTContext &, class ::clang::DeclContext *, class ::clang::SourceLocation )= ::clang::ExportDecl::Create;
class ::clang::ExportDecl * (*method_pointer_43385f3bda8251b183d7a4954b572b17)(class ::clang::ASTContext &, unsigned int )= ::clang::ExportDecl::CreateDeserialized;
class ::clang::SourceLocation  (::clang::ExportDecl::*method_pointer_d5ba3b5a51d3578786ad6d0b5e58a622)()const= &::clang::ExportDecl::getExportLoc;
class ::clang::SourceLocation  (::clang::ExportDecl::*method_pointer_2c28d89a661253e49771ae49a77b7a2d)()const= &::clang::ExportDecl::getRBraceLoc;
void  (::clang::ExportDecl::*method_pointer_e9d7eeb30f8e51a69e5192469a261503)(class ::clang::SourceLocation )= &::clang::ExportDecl::setRBraceLoc;
class ::clang::SourceLocation  (::clang::ExportDecl::*method_pointer_b90206a062da5e55a91b59fbca71f571)()const= &::clang::ExportDecl::getLocEnd;
bool  (*method_pointer_a9bee5e33f705034a650029265b70be6)(class ::clang::Decl const *)= ::clang::ExportDecl::classof;
bool  (*method_pointer_07e959c2e8ee59479c048085b1828695)(enum ::clang::Decl::Kind )= ::clang::ExportDecl::classofKind;
class ::clang::DeclContext * (*method_pointer_d8087fb1539b533abecb9bfc4a268bb5)(class ::clang::ExportDecl const *)= ::clang::ExportDecl::castToDeclContext;
class ::clang::ExportDecl * (*method_pointer_25caf11557a55f6b859d71099d21b798)(class ::clang::DeclContext const *)= ::clang::ExportDecl::castFromDeclContext;

namespace autowig {
}

void wrapper_a60596ded37e539999a00c7eddb373aa(pybind11::module& module)
{

    pybind11::class_<class ::clang::ExportDecl, autowig::HolderType< class ::clang::ExportDecl >::Type, class ::clang::Decl, class ::clang::DeclContext > class_a60596ded37e539999a00c7eddb373aa(module, "ExportDecl", "Represents a C++ Modules TS module export declaration.\n\nFor example:\n\n");
    class_a60596ded37e539999a00c7eddb373aa.def_static("create", method_pointer_1cc9cbbba96e50b39bc9c380dab095a4, pybind11::return_value_policy::reference_internal, "");
    class_a60596ded37e539999a00c7eddb373aa.def_static("create_deserialized", method_pointer_43385f3bda8251b183d7a4954b572b17, pybind11::return_value_policy::reference_internal, "");
    class_a60596ded37e539999a00c7eddb373aa.def("get_export_loc", method_pointer_d5ba3b5a51d3578786ad6d0b5e58a622, "");
    class_a60596ded37e539999a00c7eddb373aa.def("get_r_brace_loc", method_pointer_2c28d89a661253e49771ae49a77b7a2d, "");
    class_a60596ded37e539999a00c7eddb373aa.def("set_r_brace_loc", method_pointer_e9d7eeb30f8e51a69e5192469a261503, "");
    class_a60596ded37e539999a00c7eddb373aa.def("get_loc_end", method_pointer_b90206a062da5e55a91b59fbca71f571, "");
    class_a60596ded37e539999a00c7eddb373aa.def_static("classof", method_pointer_a9bee5e33f705034a650029265b70be6, "");
    class_a60596ded37e539999a00c7eddb373aa.def_static("classof_kind", method_pointer_07e959c2e8ee59479c048085b1828695, "");
    class_a60596ded37e539999a00c7eddb373aa.def_static("cast_to_decl_context", method_pointer_d8087fb1539b533abecb9bfc4a268bb5, pybind11::return_value_policy::reference_internal, "");
    class_a60596ded37e539999a00c7eddb373aa.def_static("cast_from_decl_context", method_pointer_25caf11557a55f6b859d71099d21b798, pybind11::return_value_policy::reference_internal, "");

}