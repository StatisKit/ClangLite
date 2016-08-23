#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e536a5cae34e54058d1fe69715937f7a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ASTContext::*method_pointer_29e4fc5d97ce5748ba97cfcf2bc2f366)() = &::clang::ASTContext::AnyObjCImplementation;
    bool  (::clang::ASTContext::*method_pointer_6e3389508a4b524aa16590d4fbdb9a27)(class ::clang::Decl  const *) = &::clang::ASTContext::DeclMustBeEmitted;
    bool  (::clang::ASTContext::*method_pointer_56e292fb16b8593988162b78ac9ae356)(class ::clang::FunctionProtoType  const *, class ::clang::FunctionProtoType  const *) = &::clang::ASTContext::FunctionTypesMatchOnNSConsumedAttrs;
    void  (::clang::ASTContext::*method_pointer_c2eab246d5ca5d398b0d840c63b095e0)() const = &::clang::ASTContext::PrintStats;
    bool  (::clang::ASTContext::*method_pointer_e813f32b38bf5304a1bf79b0f2bf06ae)(class ::clang::QualType  &, class ::clang::QualType  &) = &::clang::ASTContext::UnwrapSimilarPointerTypes;
    bool  (::clang::ASTContext::*method_pointer_8de7796cd350563a87042102e9b0d643)(unsigned int ) const = &::clang::ASTContext::addressSpaceMapManglingFor;
    bool  (::clang::ASTContext::*method_pointer_506bdcd7df5950f39d3c2678818603cf)(class ::clang::ObjCObjectType  const *, class ::clang::ObjCObjectType  const *) = &::clang::ASTContext::canAssignObjCInterfaces;
    bool  (::clang::ASTContext::*method_pointer_9f5617f1da3d56d4b5eb421b5b113801)(class ::clang::ObjCObjectPointerType  const *, class ::clang::ObjCObjectPointerType  const *) = &::clang::ASTContext::canAssignObjCInterfaces;
    bool  (::clang::ASTContext::*method_pointer_783bf6e17c2d5b718d4e9cfbb6155817)(class ::clang::ObjCObjectPointerType  const *, class ::clang::ObjCObjectPointerType  const *, bool ) = &::clang::ASTContext::canAssignObjCInterfacesInBlockPointer;
    void  (::clang::ASTContext::*method_pointer_73fe729a39eb5c58ac0963d55d029336)(class ::clang::Decl  const *) = &::clang::ASTContext::eraseDeclAttrs;
    unsigned long int  (::clang::ASTContext::*method_pointer_b8b0b06a0a8e542389a43bcb0d85673f)() const = &::clang::ASTContext::getASTAllocatedMemory;
    class ::clang::TemplateArgument  (::clang::ASTContext::*method_pointer_fb055d7ca57b5833b2d4c1dd06f6ee78)(class ::clang::TemplateArgument  const &) const = &::clang::ASTContext::getCanonicalTemplateArgument;
    class ::clang::Type  const * (::clang::ASTContext::*method_pointer_6b06e4c9893958be919bf92b24c78aee)(class ::clang::Type  const *) const = &::clang::ASTContext::getCanonicalType;
    unsigned long int  (::clang::ASTContext::*method_pointer_5083037b2a195614a7709e2848a151e7)() const = &::clang::ASTContext::getCharWidth;
    unsigned long int  (::clang::ASTContext::*method_pointer_a0435fcc4e745e29a3355fc83f2f1d7f)(class ::clang::ConstantArrayType  const *) const = &::clang::ASTContext::getConstantArrayElementCount;
    void  (::clang::ASTContext::*method_pointer_cadbe4c783cf5dde962cf3d104064a89)(class ::clang::QualType  &) const = &::clang::ASTContext::getLegacyIntegralTypeEncoding;
    unsigned int  (::clang::ASTContext::*method_pointer_d494a153b5295f39922a5c68f77d963f)(class ::clang::Type  const *) const = &::clang::ASTContext::getPreferredTypeAlign;
    class ::clang::Decl  * (::clang::ASTContext::*method_pointer_fa0314d0e1205028b106ca3cc5282920)(class ::clang::Decl  *) = &::clang::ASTContext::getPrimaryMergedDecl;
    unsigned long int  (::clang::ASTContext::*method_pointer_56c8e027bddb5a4ba27af00b2c19476a)() const = &::clang::ASTContext::getSideTableAllocatedMemory;
    unsigned int  (::clang::ASTContext::*method_pointer_e5d1bc11519b5f8d85b9913fdd1beb98)(unsigned int ) const = &::clang::ASTContext::getTargetAddressSpace;
    unsigned int  (::clang::ASTContext::*method_pointer_67facf0f0d6a57ba97b000baeebe4a30)() const = &::clang::ASTContext::getTargetDefaultAlignForAttributeAligned;
    unsigned int  (::clang::ASTContext::*method_pointer_845a3f18a36b592d8597a39871a170d3)(class ::clang::Type  const *) const = &::clang::ASTContext::getTypeAlign;
    unsigned long int  (::clang::ASTContext::*method_pointer_643f8df489dd54b2b6f7fc6b9e0a27a0)(class ::clang::Type  const *) const = &::clang::ASTContext::getTypeSize;
    class ::clang::Decl  * (::clang::ASTContext::*method_pointer_875b7503f4c85c05a75f3c713ce2a3be)() const = &::clang::ASTContext::getVaListTagDecl;
    bool  (::clang::ASTContext::*method_pointer_63c092d48ea259c2a8ae8d1e6daa7e7f)(class ::clang::Type  const *, class ::clang::Type  const *) const = &::clang::ASTContext::hasSameType;
    bool  (::clang::ASTContext::*method_pointer_0c1a97b2c82c5e92bc3681d10ea58608)(class ::clang::Type  const *) const = &::clang::ASTContext::isAlignmentRequired;
    void  (::clang::ASTContext::*method_pointer_791901b614e2517786628a175d28a0d6)(class ::clang::Decl  *, class ::clang::Decl  *) = &::clang::ASTContext::setPrimaryMergedDecl;
    boost::python::class_< class ::clang::ASTContext, autowig::HeldType< class ::clang::ASTContext >, boost::noncopyable > class_e536a5cae34e54058d1fe69715937f7a("ASTContext", "", boost::python::no_init);
    class_e536a5cae34e54058d1fe69715937f7a.def("any_obj_c_implementation", method_pointer_29e4fc5d97ce5748ba97cfcf2bc2f366, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("decl_must_be_emitted", method_pointer_6e3389508a4b524aa16590d4fbdb9a27, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("function_types_match_on_ns_consumed_attrs", method_pointer_56e292fb16b8593988162b78ac9ae356, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("print_stats", method_pointer_c2eab246d5ca5d398b0d840c63b095e0, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("unwrap_similar_pointer_types", method_pointer_e813f32b38bf5304a1bf79b0f2bf06ae, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("address_space_map_mangling_for", method_pointer_8de7796cd350563a87042102e9b0d643, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("can_assign_obj_c_interfaces", method_pointer_506bdcd7df5950f39d3c2678818603cf, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("can_assign_obj_c_interfaces", method_pointer_9f5617f1da3d56d4b5eb421b5b113801, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("can_assign_obj_c_interfaces_in_block_pointer", method_pointer_783bf6e17c2d5b718d4e9cfbb6155817, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("erase_decl_attrs", method_pointer_73fe729a39eb5c58ac0963d55d029336, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_ast_allocated_memory", method_pointer_b8b0b06a0a8e542389a43bcb0d85673f, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_canonical_template_argument", method_pointer_fb055d7ca57b5833b2d4c1dd06f6ee78, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_canonical_type", method_pointer_6b06e4c9893958be919bf92b24c78aee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_char_width", method_pointer_5083037b2a195614a7709e2848a151e7, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_constant_array_element_count", method_pointer_a0435fcc4e745e29a3355fc83f2f1d7f, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_legacy_integral_type_encoding", method_pointer_cadbe4c783cf5dde962cf3d104064a89, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_preferred_type_align", method_pointer_d494a153b5295f39922a5c68f77d963f, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_primary_merged_decl", method_pointer_fa0314d0e1205028b106ca3cc5282920, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_side_table_allocated_memory", method_pointer_56c8e027bddb5a4ba27af00b2c19476a, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_target_address_space", method_pointer_e5d1bc11519b5f8d85b9913fdd1beb98, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_target_default_align_for_attribute_aligned", method_pointer_67facf0f0d6a57ba97b000baeebe4a30, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_type_align", method_pointer_845a3f18a36b592d8597a39871a170d3, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_type_size", method_pointer_643f8df489dd54b2b6f7fc6b9e0a27a0, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_va_list_tag_decl", method_pointer_875b7503f4c85c05a75f3c713ce2a3be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("has_same_type", method_pointer_63c092d48ea259c2a8ae8d1e6daa7e7f, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("is_alignment_required", method_pointer_0c1a97b2c82c5e92bc3681d10ea58608, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_primary_merged_decl", method_pointer_791901b614e2517786628a175d28a0d6, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("comments_loaded", &::clang::ASTContext::CommentsLoaded, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_copy_assignment_operators", ::clang::ASTContext::NumImplicitCopyAssignmentOperators, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_copy_assignment_operators_declared", ::clang::ASTContext::NumImplicitCopyAssignmentOperatorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_copy_constructors", ::clang::ASTContext::NumImplicitCopyConstructors, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_copy_constructors_declared", ::clang::ASTContext::NumImplicitCopyConstructorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_default_constructors", ::clang::ASTContext::NumImplicitDefaultConstructors, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_default_constructors_declared", ::clang::ASTContext::NumImplicitDefaultConstructorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_destructors", ::clang::ASTContext::NumImplicitDestructors, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_destructors_declared", ::clang::ASTContext::NumImplicitDestructorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_move_assignment_operators", ::clang::ASTContext::NumImplicitMoveAssignmentOperators, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_move_assignment_operators_declared", ::clang::ASTContext::NumImplicitMoveAssignmentOperatorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_move_constructors", ::clang::ASTContext::NumImplicitMoveConstructors, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_move_constructors_declared", ::clang::ASTContext::NumImplicitMoveConstructorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("parsed_comments", &::clang::ASTContext::ParsedComments, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("redecl_comments", &::clang::ASTContext::RedeclComments, "");

}