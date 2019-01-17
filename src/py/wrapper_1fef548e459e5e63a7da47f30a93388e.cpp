#include "_clanglite.h"

class ::clang::LabelDecl * (*method_pointer_700fcfe65c3154d69ea70ebbfcb0fc48)(class ::clang::ASTContext &, unsigned int )= ::clang::LabelDecl::CreateDeserialized;
bool  (::clang::LabelDecl::*method_pointer_7b7acecd7b61526f9ce00b2f6666d59a)()const= &::clang::LabelDecl::isGnuLocal;
void  (::clang::LabelDecl::*method_pointer_4f81f211539757deac8e89b937eafa7b)(class ::clang::SourceLocation )= &::clang::LabelDecl::setLocStart;
bool  (::clang::LabelDecl::*method_pointer_3a8cc3196ae95332b6667a5a346b408c)()const= &::clang::LabelDecl::isMSAsmLabel;
bool  (::clang::LabelDecl::*method_pointer_8b1d4dfc96c95372914dd88ed3d1ae22)()const= &::clang::LabelDecl::isResolvedMSAsmLabel;
void  (::clang::LabelDecl::*method_pointer_7ed1bfe203f350a6b0bdc0eed39d9ea8)(class ::llvm::StringRef )= &::clang::LabelDecl::setMSAsmLabel;
class ::llvm::StringRef  (::clang::LabelDecl::*method_pointer_50808ea71b7e57bf87bbeef880a7d399)()const= &::clang::LabelDecl::getMSAsmLabel;
void  (::clang::LabelDecl::*method_pointer_93323077c03d5db08fc761650151f23a)()= &::clang::LabelDecl::setMSAsmLabelResolved;
bool  (*method_pointer_e2fb4a8d1a165c1996da4bce6a930325)(class ::clang::Decl const *)= ::clang::LabelDecl::classof;
bool  (*method_pointer_bb2d7350e4065ba9b961db310d043fd9)(enum ::clang::Decl::Kind )= ::clang::LabelDecl::classofKind;


void wrapper_1fef548e459e5e63a7da47f30a93388e(pybind11::module& module)
{

    pybind11::class_<class ::clang::LabelDecl, autowig::HolderType< class ::clang::LabelDecl >::Type, class ::clang::NamedDecl > class_1fef548e459e5e63a7da47f30a93388e(module, "LabelDecl", "");
    class_1fef548e459e5e63a7da47f30a93388e.def_static("create_deserialized", method_pointer_700fcfe65c3154d69ea70ebbfcb0fc48, pybind11::return_value_policy::reference_internal, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_gnu_local", method_pointer_7b7acecd7b61526f9ce00b2f6666d59a, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_loc_start", method_pointer_4f81f211539757deac8e89b937eafa7b, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_ms_asm_label", method_pointer_3a8cc3196ae95332b6667a5a346b408c, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_resolved_ms_asm_label", method_pointer_8b1d4dfc96c95372914dd88ed3d1ae22, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label", method_pointer_7ed1bfe203f350a6b0bdc0eed39d9ea8, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("get_ms_asm_label", method_pointer_50808ea71b7e57bf87bbeef880a7d399, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label_resolved", method_pointer_93323077c03d5db08fc761650151f23a, "");
    class_1fef548e459e5e63a7da47f30a93388e.def_static("classof", method_pointer_e2fb4a8d1a165c1996da4bce6a930325, "");
    class_1fef548e459e5e63a7da47f30a93388e.def_static("classof_kind", method_pointer_bb2d7350e4065ba9b961db310d043fd9, "");

}