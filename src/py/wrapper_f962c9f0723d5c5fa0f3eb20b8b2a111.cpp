#include "_clanglite.h"

class ::clang::FileScopeAsmDecl * (*method_pointer_39a483a06b98567da31661d22cabb732)(class ::clang::ASTContext &, unsigned int )= ::clang::FileScopeAsmDecl::CreateDeserialized;
class ::clang::SourceLocation  (::clang::FileScopeAsmDecl::*method_pointer_a126e52647505a59849495d7f5190482)()const= &::clang::FileScopeAsmDecl::getAsmLoc;
class ::clang::SourceLocation  (::clang::FileScopeAsmDecl::*method_pointer_7ff376b6548e51d09b4e4834bd9b76fb)()const= &::clang::FileScopeAsmDecl::getRParenLoc;
void  (::clang::FileScopeAsmDecl::*method_pointer_7b61a7d3fef85657aec0eadcc091639b)(class ::clang::SourceLocation )= &::clang::FileScopeAsmDecl::setRParenLoc;
bool  (*method_pointer_11c3f54f369d505db42f7099519a66a5)(class ::clang::Decl const *)= ::clang::FileScopeAsmDecl::classof;
bool  (*method_pointer_752a12b1cf6e5656a57a1fd2fd1b4b65)(enum ::clang::Decl::Kind )= ::clang::FileScopeAsmDecl::classofKind;


void wrapper_f962c9f0723d5c5fa0f3eb20b8b2a111(pybind11::module& module)
{

    pybind11::class_<class ::clang::FileScopeAsmDecl, autowig::HolderType< class ::clang::FileScopeAsmDecl >::Type, class ::clang::Decl > class_f962c9f0723d5c5fa0f3eb20b8b2a111(module, "FileScopeAsmDecl", "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def_static("create_deserialized", method_pointer_39a483a06b98567da31661d22cabb732, pybind11::return_value_policy::reference_internal, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("get_asm_loc", method_pointer_a126e52647505a59849495d7f5190482, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("get_r_paren_loc", method_pointer_7ff376b6548e51d09b4e4834bd9b76fb, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("set_r_paren_loc", method_pointer_7b61a7d3fef85657aec0eadcc091639b, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def_static("classof", method_pointer_11c3f54f369d505db42f7099519a66a5, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def_static("classof_kind", method_pointer_752a12b1cf6e5656a57a1fd2fd1b4b65, "");

}