#include "_clanglite.h"

class ::clang::FieldDecl * (*method_pointer_3ae30625338d53879e7b6094f1dc366b)(class ::clang::ASTContext &, unsigned int )= ::clang::FieldDecl::CreateDeserialized;
unsigned int  (::clang::FieldDecl::*method_pointer_34d47c7ba1b058ecad3cc05b62501b38)()const= &::clang::FieldDecl::getFieldIndex;
bool  (::clang::FieldDecl::*method_pointer_79d0f35e58aa58a48a3d7b11fd608c2b)()const= &::clang::FieldDecl::isMutable;
bool  (::clang::FieldDecl::*method_pointer_11cf7bcd364e53e686e5a1bff9e0db00)()const= &::clang::FieldDecl::isBitField;
bool  (::clang::FieldDecl::*method_pointer_85635fda25c75c9ea0c4bf9e377dcdc7)()const= &::clang::FieldDecl::isUnnamedBitfield;
bool  (::clang::FieldDecl::*method_pointer_b565294828455219bf938a54bf2e25b1)()const= &::clang::FieldDecl::isAnonymousStructOrUnion;
void  (::clang::FieldDecl::*method_pointer_eca8536f27bf5056bcbd927f4bb6f197)()= &::clang::FieldDecl::removeBitWidth;
bool  (::clang::FieldDecl::*method_pointer_aad5670aba055eb881f8657df919b036)()const= &::clang::FieldDecl::hasInClassInitializer;
void  (::clang::FieldDecl::*method_pointer_9eaebdf3aea4519ab6487cdec9e40cdc)()= &::clang::FieldDecl::removeInClassInitializer;
bool  (::clang::FieldDecl::*method_pointer_4f242c602a2157c6b371dfd50aceb473)()const= &::clang::FieldDecl::hasCapturedVLAType;
class ::clang::VariableArrayType const * (::clang::FieldDecl::*method_pointer_9591ff621ef1518281b22fa8a6fa2775)()const= &::clang::FieldDecl::getCapturedVLAType;
void  (::clang::FieldDecl::*method_pointer_3304df5f5c7659548aab4d8b05d05ae8)(class ::clang::VariableArrayType const *)= &::clang::FieldDecl::setCapturedVLAType;
class ::clang::RecordDecl const * (::clang::FieldDecl::*method_pointer_c8df6249d5f357479a227cefa4c56779)()const= &::clang::FieldDecl::getParent;
class ::clang::RecordDecl * (::clang::FieldDecl::*method_pointer_08132954844350e39f18cb51933c3d07)()= &::clang::FieldDecl::getParent;
class ::clang::FieldDecl * (::clang::FieldDecl::*method_pointer_060f7975a40354bab3288de47b050031)()= &::clang::FieldDecl::getCanonicalDecl;
class ::clang::FieldDecl const * (::clang::FieldDecl::*method_pointer_f8cc9bb9edbf5de18ef8b4d8960b52b7)()const= &::clang::FieldDecl::getCanonicalDecl;
bool  (*method_pointer_0afa4fd563f656daa13d9a7ed551a5f9)(class ::clang::Decl const *)= ::clang::FieldDecl::classof;
bool  (*method_pointer_110696eae10d5d0ebf6f92db4e1b1bf6)(enum ::clang::Decl::Kind )= ::clang::FieldDecl::classofKind;

namespace autowig {
}

void wrapper_72a947d59e2e5194bab98d04fc2841fb(pybind11::module& module)
{

    pybind11::class_<class ::clang::FieldDecl, autowig::HolderType< class ::clang::FieldDecl >::Type, class ::clang::DeclaratorDecl > class_72a947d59e2e5194bab98d04fc2841fb(module, "FieldDecl", "");
    class_72a947d59e2e5194bab98d04fc2841fb.def_static("create_deserialized", method_pointer_3ae30625338d53879e7b6094f1dc366b, pybind11::return_value_policy::reference_internal, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_34d47c7ba1b058ecad3cc05b62501b38, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_79d0f35e58aa58a48a3d7b11fd608c2b, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_11cf7bcd364e53e686e5a1bff9e0db00, "Determines whether this field is a bitfield.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_85635fda25c75c9ea0c4bf9e377dcdc7, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_b565294828455219bf938a54bf2e25b1, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_eca8536f27bf5056bcbd927f4bb6f197, ":Return Type:\n    :cpp:any:`void`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_aad5670aba055eb881f8657df919b036, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_9eaebdf3aea4519ab6487cdec9e40cdc, ":Return Type:\n    :cpp:any:`void`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_4f242c602a2157c6b371dfd50aceb473, "Determine whether this member captures the variable length array type.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_9591ff621ef1518281b22fa8a6fa2775, pybind11::return_value_policy::reference_internal, "Get the captured variable length array type.\n\n:Return Type:\n    :cpp:class:`::clang::VariableArrayType`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_3304df5f5c7659548aab4d8b05d05ae8, "Set the captured variable length array type for this field.\n\n:Parameter:\n    `VLAType` (:cpp:class:`::clang::VariableArrayType`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_c8df6249d5f357479a227cefa4c56779, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::RecordDecl`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_08132954844350e39f18cb51933c3d07, pybind11::return_value_policy::reference_internal, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_060f7975a40354bab3288de47b050031, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::FieldDecl`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_f8cc9bb9edbf5de18ef8b4d8960b52b7, pybind11::return_value_policy::reference_internal, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def_static("classof", method_pointer_0afa4fd563f656daa13d9a7ed551a5f9, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def_static("classof_kind", method_pointer_110696eae10d5d0ebf6f92db4e1b1bf6, "");

}