#include "_clanglite.h"

bool  (::clang::ObjCContainerDecl::*method_pointer_c6774f70a0225632985a797510a1ce49)(class ::clang::ObjCPropertyDecl const *)const= &::clang::ObjCContainerDecl::HasUserDeclaredSetterMethod;
class ::clang::SourceLocation  (::clang::ObjCContainerDecl::*method_pointer_5401646073bb5821ba5607c7079e256c)()const= &::clang::ObjCContainerDecl::getAtStartLoc;
void  (::clang::ObjCContainerDecl::*method_pointer_37c23eea0de25866a599f42c9e42350e)(class ::clang::SourceLocation )= &::clang::ObjCContainerDecl::setAtStartLoc;
bool  (*method_pointer_5540f186565f538fb84fdd725a963480)(class ::clang::Decl const *)= ::clang::ObjCContainerDecl::classof;
bool  (*method_pointer_b763881bc8705a7b80e85cdf41ccb7ae)(enum ::clang::Decl::Kind )= ::clang::ObjCContainerDecl::classofKind;
class ::clang::DeclContext * (*method_pointer_d4cf67fd2b7354c185f7790407628d66)(class ::clang::ObjCContainerDecl const *)= ::clang::ObjCContainerDecl::castToDeclContext;
class ::clang::ObjCContainerDecl * (*method_pointer_9999f3d1a1625c8e8458ecd7c9ae7de6)(class ::clang::DeclContext const *)= ::clang::ObjCContainerDecl::castFromDeclContext;


void wrapper_7f94615a46d751afa71bfa020eacfecb(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCContainerDecl, autowig::HolderType< class ::clang::ObjCContainerDecl >::Type, class ::clang::NamedDecl, class ::clang::DeclContext > class_7f94615a46d751afa71bfa020eacfecb(module, "ObjCContainerDecl", "");
    class_7f94615a46d751afa71bfa020eacfecb.def("has_user_declared_setter_method", method_pointer_c6774f70a0225632985a797510a1ce49, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("get_at_start_loc", method_pointer_5401646073bb5821ba5607c7079e256c, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("set_at_start_loc", method_pointer_37c23eea0de25866a599f42c9e42350e, "");
    class_7f94615a46d751afa71bfa020eacfecb.def_static("classof", method_pointer_5540f186565f538fb84fdd725a963480, "");
    class_7f94615a46d751afa71bfa020eacfecb.def_static("classof_kind", method_pointer_b763881bc8705a7b80e85cdf41ccb7ae, "");
    class_7f94615a46d751afa71bfa020eacfecb.def_static("cast_to_decl_context", method_pointer_d4cf67fd2b7354c185f7790407628d66, pybind11::return_value_policy::reference_internal, "");
    class_7f94615a46d751afa71bfa020eacfecb.def_static("cast_from_decl_context", method_pointer_9999f3d1a1625c8e8458ecd7c9ae7de6, pybind11::return_value_policy::reference_internal, "");

}