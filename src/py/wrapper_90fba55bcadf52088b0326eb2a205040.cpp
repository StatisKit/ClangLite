#include "_clanglite.h"

class ::clang::ObjCAtDefsFieldDecl * (*method_pointer_83c5fa6f39485e8f901598dba33095be)(class ::clang::ASTContext &, unsigned int )= ::clang::ObjCAtDefsFieldDecl::CreateDeserialized;
bool  (*method_pointer_d221044262765a60acaf9e3b81cca3c6)(class ::clang::Decl const *)= ::clang::ObjCAtDefsFieldDecl::classof;
bool  (*method_pointer_149b9040920c5fffbdec7c6fceea3d15)(enum ::clang::Decl::Kind )= ::clang::ObjCAtDefsFieldDecl::classofKind;


void wrapper_90fba55bcadf52088b0326eb2a205040(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCAtDefsFieldDecl, autowig::HolderType< class ::clang::ObjCAtDefsFieldDecl >::Type, class ::clang::FieldDecl > class_90fba55bcadf52088b0326eb2a205040(module, "ObjCAtDefsFieldDecl", "Represents a field declaration created by an @defs(…).\n\n");
    class_90fba55bcadf52088b0326eb2a205040.def_static("create_deserialized", method_pointer_83c5fa6f39485e8f901598dba33095be, pybind11::return_value_policy::reference_internal, "");
    class_90fba55bcadf52088b0326eb2a205040.def_static("classof", method_pointer_d221044262765a60acaf9e3b81cca3c6, "");
    class_90fba55bcadf52088b0326eb2a205040.def_static("classof_kind", method_pointer_149b9040920c5fffbdec7c6fceea3d15, "");

}