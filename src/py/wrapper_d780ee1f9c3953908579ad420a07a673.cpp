#include "_clanglite.h"

bool  (*method_pointer_506c844dcb83509993e2b5e7946fc3a6)(class ::clang::Decl const *)= ::clang::BuiltinTemplateDecl::classof;
bool  (*method_pointer_e05f0673de745da787d6cf12afe97356)(enum ::clang::Decl::Kind )= ::clang::BuiltinTemplateDecl::classofKind;


void wrapper_d780ee1f9c3953908579ad420a07a673(pybind11::module& module)
{

    pybind11::class_<class ::clang::BuiltinTemplateDecl, autowig::HolderType< class ::clang::BuiltinTemplateDecl >::Type, class ::clang::TemplateDecl > class_d780ee1f9c3953908579ad420a07a673(module, "BuiltinTemplateDecl", "Represents the builtin template declaration which is used to implement\n\\__make_integer_seq and other builtin templates. It serves no real\npurpose beyond existing as a place to hold template parameters.\n\n");
    class_d780ee1f9c3953908579ad420a07a673.def_static("classof", method_pointer_506c844dcb83509993e2b5e7946fc3a6, "");
    class_d780ee1f9c3953908579ad420a07a673.def_static("classof_kind", method_pointer_e05f0673de745da787d6cf12afe97356, "");

}