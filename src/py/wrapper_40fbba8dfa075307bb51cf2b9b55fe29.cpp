#include "_clanglite.h"

class ::clang::CapturedDecl * (*method_pointer_7c863ca9a2e65c76b6cf1132adbe1c27)(class ::clang::ASTContext &, class ::clang::DeclContext *, unsigned int )= ::clang::CapturedDecl::Create;
class ::clang::CapturedDecl * (*method_pointer_741f705733235de9a04da7554abfc817)(class ::clang::ASTContext &, unsigned int , unsigned int )= ::clang::CapturedDecl::CreateDeserialized;
bool  (::clang::CapturedDecl::*method_pointer_e3a2ade8a6cb57eeb1a154bbfb5da805)()const= &::clang::CapturedDecl::isNothrow;
void  (::clang::CapturedDecl::*method_pointer_15844b3ddf4957ed9c41805b3a546e15)(bool )= &::clang::CapturedDecl::setNothrow;
unsigned int  (::clang::CapturedDecl::*method_pointer_e19a30d3b6205f108d8439cce15eb91d)()const= &::clang::CapturedDecl::getNumParams;
class ::clang::ImplicitParamDecl * (::clang::CapturedDecl::*method_pointer_33341982e95353329dcef849350b6c15)(unsigned int )const= &::clang::CapturedDecl::getParam;
void  (::clang::CapturedDecl::*method_pointer_bf925d7ab9035ef0a2effb17a3280fee)(unsigned int , class ::clang::ImplicitParamDecl *)= &::clang::CapturedDecl::setParam;
class ::clang::ImplicitParamDecl * (::clang::CapturedDecl::*method_pointer_bd053b46f6a35e18aee13a851a5613b1)()const= &::clang::CapturedDecl::getContextParam;
void  (::clang::CapturedDecl::*method_pointer_9459c9345e9e52f699d5d115180b81e3)(unsigned int , class ::clang::ImplicitParamDecl *)= &::clang::CapturedDecl::setContextParam;
unsigned int  (::clang::CapturedDecl::*method_pointer_167d31236e1a5ba29b9403eb2546c6da)()const= &::clang::CapturedDecl::getContextParamPosition;
bool  (*method_pointer_bd608ca0eae55f89bff84c705b073a10)(class ::clang::Decl const *)= ::clang::CapturedDecl::classof;
bool  (*method_pointer_3bcdc31b9f935283af0e8a27ae3541e4)(enum ::clang::Decl::Kind )= ::clang::CapturedDecl::classofKind;
class ::clang::DeclContext * (*method_pointer_43ff79ea6fce5ab68bb21869675daf43)(class ::clang::CapturedDecl const *)= ::clang::CapturedDecl::castToDeclContext;
class ::clang::CapturedDecl * (*method_pointer_4c94d6a3857e528abbe8e40bd7df7e87)(class ::clang::DeclContext const *)= ::clang::CapturedDecl::castFromDeclContext;

namespace autowig {
}

void wrapper_40fbba8dfa075307bb51cf2b9b55fe29(pybind11::module& module)
{

    pybind11::class_<class ::clang::CapturedDecl, autowig::HolderType< class ::clang::CapturedDecl >::Type, class ::clang::Decl, class ::clang::DeclContext > class_40fbba8dfa075307bb51cf2b9b55fe29(module, "CapturedDecl", "This represents the body of a CapturedStmt, and serves as its\nDeclContext.\n\n");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def_static("create", method_pointer_7c863ca9a2e65c76b6cf1132adbe1c27, pybind11::return_value_policy::reference_internal, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def_static("create_deserialized", method_pointer_741f705733235de9a04da7554abfc817, pybind11::return_value_policy::reference_internal, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("is_nothrow", method_pointer_e3a2ade8a6cb57eeb1a154bbfb5da805, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_nothrow", method_pointer_15844b3ddf4957ed9c41805b3a546e15, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_num_params", method_pointer_e19a30d3b6205f108d8439cce15eb91d, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_param", method_pointer_33341982e95353329dcef849350b6c15, pybind11::return_value_policy::reference_internal, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_param", method_pointer_bf925d7ab9035ef0a2effb17a3280fee, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param", method_pointer_bd053b46f6a35e18aee13a851a5613b1, pybind11::return_value_policy::reference_internal, "Retrieve the parameter containing captured variables.\n\n:Return Type:\n    :cpp:class:`::clang::ImplicitParamDecl`\n\n");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_context_param", method_pointer_9459c9345e9e52f699d5d115180b81e3, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param_position", method_pointer_167d31236e1a5ba29b9403eb2546c6da, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def_static("classof", method_pointer_bd608ca0eae55f89bff84c705b073a10, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def_static("classof_kind", method_pointer_3bcdc31b9f935283af0e8a27ae3541e4, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def_static("cast_to_decl_context", method_pointer_43ff79ea6fce5ab68bb21869675daf43, pybind11::return_value_policy::reference_internal, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def_static("cast_from_decl_context", method_pointer_4c94d6a3857e528abbe8e40bd7df7e87, pybind11::return_value_policy::reference_internal, "");

}