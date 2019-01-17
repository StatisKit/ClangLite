#include "_clanglite.h"

bool  (::clang::ObjCTypeParamType::*method_pointer_62ac0ac2a8d65fc08f4ded4f8a9fedb1)()const= &::clang::ObjCTypeParamType::isSugared;
class ::clang::QualType  (::clang::ObjCTypeParamType::*method_pointer_60960340744551e39ef488e2263f8a34)()const= &::clang::ObjCTypeParamType::desugar;
bool  (*method_pointer_2479339096ef5751bf5c8c9dbeedc791)(class ::clang::Type const *)= ::clang::ObjCTypeParamType::classof;
class ::clang::ObjCTypeParamDecl * (::clang::ObjCTypeParamType::*method_pointer_e6b8591b3caa5f608c2368b460108cd7)()const= &::clang::ObjCTypeParamType::getDecl;


void wrapper_fb096fe49e3450f3b997520c4a6283ec(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCTypeParamType, autowig::HolderType< class ::clang::ObjCTypeParamType >::Type, class ::clang::Type > class_fb096fe49e3450f3b997520c4a6283ec(module, "ObjCTypeParamType", "");
    class_fb096fe49e3450f3b997520c4a6283ec.def("is_sugared", method_pointer_62ac0ac2a8d65fc08f4ded4f8a9fedb1, "");
    class_fb096fe49e3450f3b997520c4a6283ec.def("desugar", method_pointer_60960340744551e39ef488e2263f8a34, "");
    class_fb096fe49e3450f3b997520c4a6283ec.def_static("classof", method_pointer_2479339096ef5751bf5c8c9dbeedc791, "");
    class_fb096fe49e3450f3b997520c4a6283ec.def("get_decl", method_pointer_e6b8591b3caa5f608c2368b460108cd7, pybind11::return_value_policy::reference_internal, "");

}