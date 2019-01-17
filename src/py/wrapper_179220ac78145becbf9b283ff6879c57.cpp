#include "_clanglite.h"

class ::clang::ObjCProtocolDecl * (*method_pointer_c2435c10af2a587898e72a37622212fc)(class ::clang::ASTContext &, unsigned int )= ::clang::ObjCProtocolDecl::CreateDeserialized;
::clang::ObjCProtocolDecl::protocol_loc_iterator  (::clang::ObjCProtocolDecl::*method_pointer_40e753551b685ac789803e0f244b4c33)()const= &::clang::ObjCProtocolDecl::protocol_loc_begin;
::clang::ObjCProtocolDecl::protocol_loc_iterator  (::clang::ObjCProtocolDecl::*method_pointer_e7363ba152aa539b9dda7e49b087828e)()const= &::clang::ObjCProtocolDecl::protocol_loc_end;
unsigned int  (::clang::ObjCProtocolDecl::*method_pointer_f6b6e1f7237e511baa352073adf56cf2)()const= &::clang::ObjCProtocolDecl::protocol_size;
bool  (::clang::ObjCProtocolDecl::*method_pointer_2f6e5935fb775a149c9c2044ddb5e0e9)()const= &::clang::ObjCProtocolDecl::hasDefinition;
class ::clang::ObjCProtocolDecl * (::clang::ObjCProtocolDecl::*method_pointer_3ddfc804ceb55e5daff5ea2476a0adc8)()= &::clang::ObjCProtocolDecl::getDefinition;
class ::clang::ObjCProtocolDecl const * (::clang::ObjCProtocolDecl::*method_pointer_64b45b8410c1597ebcbd75081fe20cfc)()const= &::clang::ObjCProtocolDecl::getDefinition;
bool  (::clang::ObjCProtocolDecl::*method_pointer_430f589ed97f5e62917c9542dd40691b)()const= &::clang::ObjCProtocolDecl::isThisDeclarationADefinition;
void  (::clang::ObjCProtocolDecl::*method_pointer_af2078c132445eaebd78b4ea613afcfe)()= &::clang::ObjCProtocolDecl::startDefinition;
class ::llvm::StringRef  (::clang::ObjCProtocolDecl::*method_pointer_4dce564cfb0f5bd8845a88d7278f2463)()const= &::clang::ObjCProtocolDecl::getObjCRuntimeNameAsString;
class ::clang::ObjCProtocolDecl * (::clang::ObjCProtocolDecl::*method_pointer_51bf49cd48af521995f38f7a06cde86a)()= &::clang::ObjCProtocolDecl::getCanonicalDecl;
class ::clang::ObjCProtocolDecl const * (::clang::ObjCProtocolDecl::*method_pointer_bbc8b1190c185b43b425c7d7f87abc1a)()const= &::clang::ObjCProtocolDecl::getCanonicalDecl;
bool  (*method_pointer_3f36db1e71f6528f85b0dea78bb19f75)(class ::clang::Decl const *)= ::clang::ObjCProtocolDecl::classof;
bool  (*method_pointer_5b86596707c651c0aab3efb4bc4c9877)(enum ::clang::Decl::Kind )= ::clang::ObjCProtocolDecl::classofKind;


void wrapper_179220ac78145becbf9b283ff6879c57(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCProtocolDecl, autowig::HolderType< class ::clang::ObjCProtocolDecl >::Type, class ::clang::ObjCContainerDecl > class_179220ac78145becbf9b283ff6879c57(module, "ObjCProtocolDecl", "Represents an Objective-C protocol declaration.\n\nObjective-C protocols declare a pure abstract type (i.e., no instance\nvariables are permitted). Protocols originally drew inspiration from C++\npure virtual functions (a C++ feature with nice semantics and lousy\nsyntax:-). Here is an example:\n\n");
    class_179220ac78145becbf9b283ff6879c57.def_static("create_deserialized", method_pointer_c2435c10af2a587898e72a37622212fc, pybind11::return_value_policy::reference_internal, "");
    class_179220ac78145becbf9b283ff6879c57.def("protocol_loc_begin", method_pointer_40e753551b685ac789803e0f244b4c33, pybind11::return_value_policy::reference_internal, "");
    class_179220ac78145becbf9b283ff6879c57.def("protocol_loc_end", method_pointer_e7363ba152aa539b9dda7e49b087828e, pybind11::return_value_policy::reference_internal, "");
    class_179220ac78145becbf9b283ff6879c57.def("protocol_size", method_pointer_f6b6e1f7237e511baa352073adf56cf2, "");
    class_179220ac78145becbf9b283ff6879c57.def("has_definition", method_pointer_2f6e5935fb775a149c9c2044ddb5e0e9, "Determine whether this protocol has a definition.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_3ddfc804ceb55e5daff5ea2476a0adc8, pybind11::return_value_policy::reference_internal, "Retrieve the definition of this protocol, if any.\n\n:Return Type:\n    :cpp:class:`::clang::ObjCProtocolDecl`\n\n");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_64b45b8410c1597ebcbd75081fe20cfc, pybind11::return_value_policy::reference_internal, "Retrieve the definition of this protocol, if any.\n\n:Return Type:\n    :cpp:class:`::clang::ObjCProtocolDecl`\n\n");
    class_179220ac78145becbf9b283ff6879c57.def("is_this_declaration_a_definition", method_pointer_430f589ed97f5e62917c9542dd40691b, "Determine whether this particular declaration is also the definition.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_179220ac78145becbf9b283ff6879c57.def("start_definition", method_pointer_af2078c132445eaebd78b4ea613afcfe, "Starts the definition of this Objective-C protocol.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_179220ac78145becbf9b283ff6879c57.def("get_obj_c_runtime_name_as_string", method_pointer_4dce564cfb0f5bd8845a88d7278f2463, ":Return Type:\n    :cpp:class:`::llvm::StringRef`\n\n");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_51bf49cd48af521995f38f7a06cde86a, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::ObjCProtocolDecl`\n\n");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_bbc8b1190c185b43b425c7d7f87abc1a, pybind11::return_value_policy::reference_internal, "");
    class_179220ac78145becbf9b283ff6879c57.def_static("classof", method_pointer_3f36db1e71f6528f85b0dea78bb19f75, "");
    class_179220ac78145becbf9b283ff6879c57.def_static("classof_kind", method_pointer_5b86596707c651c0aab3efb4bc4c9877, "");

}