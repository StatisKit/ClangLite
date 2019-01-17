#include "_clanglite.h"

class ::clang::ObjCCompatibleAliasDecl * (*method_pointer_bb9f6ebfd73c54c695ae390e468a1559)(class ::clang::ASTContext &, unsigned int )= ::clang::ObjCCompatibleAliasDecl::CreateDeserialized;
class ::clang::ObjCInterfaceDecl const * (::clang::ObjCCompatibleAliasDecl::*method_pointer_aae7bd566ab053e4801f20c8ba439f50)()const= &::clang::ObjCCompatibleAliasDecl::getClassInterface;
class ::clang::ObjCInterfaceDecl * (::clang::ObjCCompatibleAliasDecl::*method_pointer_4434e57fbefa5fd68dcbc208a915fef9)()= &::clang::ObjCCompatibleAliasDecl::getClassInterface;
void  (::clang::ObjCCompatibleAliasDecl::*method_pointer_a4fc81752fc656dd92bc65619c8a2c75)(class ::clang::ObjCInterfaceDecl *)= &::clang::ObjCCompatibleAliasDecl::setClassInterface;
bool  (*method_pointer_83d8544900995e1ca1ad69621bb5ecb0)(class ::clang::Decl const *)= ::clang::ObjCCompatibleAliasDecl::classof;
bool  (*method_pointer_dc8b4e40d0fc5a32b1f61208b1f32da2)(enum ::clang::Decl::Kind )= ::clang::ObjCCompatibleAliasDecl::classofKind;


void wrapper_39040e7b8b3d52478768b96bddf0e676(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCCompatibleAliasDecl, autowig::HolderType< class ::clang::ObjCCompatibleAliasDecl >::Type, class ::clang::NamedDecl > class_39040e7b8b3d52478768b96bddf0e676(module, "ObjCCompatibleAliasDecl", "");
    class_39040e7b8b3d52478768b96bddf0e676.def_static("create_deserialized", method_pointer_bb9f6ebfd73c54c695ae390e468a1559, pybind11::return_value_policy::reference_internal, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_aae7bd566ab053e4801f20c8ba439f50, pybind11::return_value_policy::reference_internal, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_4434e57fbefa5fd68dcbc208a915fef9, pybind11::return_value_policy::reference_internal, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("set_class_interface", method_pointer_a4fc81752fc656dd92bc65619c8a2c75, "");
    class_39040e7b8b3d52478768b96bddf0e676.def_static("classof", method_pointer_83d8544900995e1ca1ad69621bb5ecb0, "");
    class_39040e7b8b3d52478768b96bddf0e676.def_static("classof_kind", method_pointer_dc8b4e40d0fc5a32b1f61208b1f32da2, "");

}