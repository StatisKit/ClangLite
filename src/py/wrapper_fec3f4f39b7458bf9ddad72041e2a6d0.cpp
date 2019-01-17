#include "_clanglite.h"

class ::clang::ObjCInterfaceDecl * (::clang::ObjCInterfaceType::*method_pointer_ce9c9e4ee9d65267abd8ac0d585a0186)()const= &::clang::ObjCInterfaceType::getDecl;
bool  (::clang::ObjCInterfaceType::*method_pointer_51ef6346a5e65cf889544f31ab5e0e18)()const= &::clang::ObjCInterfaceType::isSugared;
class ::clang::QualType  (::clang::ObjCInterfaceType::*method_pointer_8fd83c457aa75eec9f036123354f2241)()const= &::clang::ObjCInterfaceType::desugar;
bool  (*method_pointer_f1dbef92457b59c1877b7426021d8433)(class ::clang::Type const *)= ::clang::ObjCInterfaceType::classof;


void wrapper_fec3f4f39b7458bf9ddad72041e2a6d0(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCInterfaceType, autowig::HolderType< class ::clang::ObjCInterfaceType >::Type, class ::clang::ObjCObjectType > class_fec3f4f39b7458bf9ddad72041e2a6d0(module, "ObjCInterfaceType", "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("get_decl", method_pointer_ce9c9e4ee9d65267abd8ac0d585a0186, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::ObjCInterfaceDecl`\n\n");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("is_sugared", method_pointer_51ef6346a5e65cf889544f31ab5e0e18, "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("desugar", method_pointer_8fd83c457aa75eec9f036123354f2241, "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def_static("classof", method_pointer_f1dbef92457b59c1877b7426021d8433, "");

}