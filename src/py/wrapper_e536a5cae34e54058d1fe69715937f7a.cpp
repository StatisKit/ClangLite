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
    bool  (::clang::ASTContext::*method_pointer_0287a952bd21504da4d63bc1c63b2288)() = &::clang::ASTContext::AnyObjCImplementation;
    bool  (::clang::ASTContext::*method_pointer_bfe473de1da3578a8ecc005db5b47280)(class ::clang::Decl  const *) = &::clang::ASTContext::DeclMustBeEmitted;
    bool  (::clang::ASTContext::*method_pointer_7d4c4cf3eae8521b8bad2e6bae1dd638)(class ::clang::FunctionProtoType  const *, class ::clang::FunctionProtoType  const *) = &::clang::ASTContext::FunctionTypesMatchOnNSConsumedAttrs;
    void  (::clang::ASTContext::*method_pointer_006940a2b78a50d791041ba0eee46a9d)() const = &::clang::ASTContext::PrintStats;
    bool  (::clang::ASTContext::*method_pointer_af3a85ccad4a580ab005668436e62697)(class ::clang::QualType  &, class ::clang::QualType  &) = &::clang::ASTContext::UnwrapSimilarPointerTypes;
    bool  (::clang::ASTContext::*method_pointer_2bd83227791d502f96c825a78be18ef0)(unsigned int ) const = &::clang::ASTContext::addressSpaceMapManglingFor;
    bool  (::clang::ASTContext::*method_pointer_1c8dc558d44651f6abcad111cbcc1ea1)(class ::clang::ObjCObjectPointerType  const *, class ::clang::ObjCObjectPointerType  const *) = &::clang::ASTContext::canAssignObjCInterfaces;
    bool  (::clang::ASTContext::*method_pointer_4ae23d4e9df85b1da6d496513ceee909)(class ::clang::ObjCObjectType  const *, class ::clang::ObjCObjectType  const *) = &::clang::ASTContext::canAssignObjCInterfaces;
    bool  (::clang::ASTContext::*method_pointer_dd4e688caa1452cfabc010c49af55749)(class ::clang::ObjCObjectPointerType  const *, class ::clang::ObjCObjectPointerType  const *, bool ) = &::clang::ASTContext::canAssignObjCInterfacesInBlockPointer;
    void  (::clang::ASTContext::*method_pointer_5314338157565524a3ca5f8a2b434725)(class ::clang::Decl  const *) = &::clang::ASTContext::eraseDeclAttrs;
    unsigned long int  (::clang::ASTContext::*method_pointer_126d63b875925b1595bbd1fdf61588a0)() const = &::clang::ASTContext::getASTAllocatedMemory;
    class ::clang::TemplateArgument  (::clang::ASTContext::*method_pointer_71c34f302d0d5460b7353f3575910af1)(class ::clang::TemplateArgument  const &) const = &::clang::ASTContext::getCanonicalTemplateArgument;
    class ::clang::Type  const * (::clang::ASTContext::*method_pointer_4ca4049fe7c85b6f8acb3197c96fa01b)(class ::clang::Type  const *) const = &::clang::ASTContext::getCanonicalType;
    unsigned long int  (::clang::ASTContext::*method_pointer_36a78f07a2a65f99ad7d671cb9eba197)() const = &::clang::ASTContext::getCharWidth;
    unsigned long int  (::clang::ASTContext::*method_pointer_b730878036145d09bdae8d2e47dfa24e)(class ::clang::ConstantArrayType  const *) const = &::clang::ASTContext::getConstantArrayElementCount;
    void  (::clang::ASTContext::*method_pointer_10ffdfbf8773513eb5bf24726b380dc7)(class ::clang::QualType  &) const = &::clang::ASTContext::getLegacyIntegralTypeEncoding;
    unsigned int  (::clang::ASTContext::*method_pointer_e51ec06b546e5a899ea47289a68dc308)(class ::clang::Type  const *) const = &::clang::ASTContext::getPreferredTypeAlign;
    class ::clang::Decl  * (::clang::ASTContext::*method_pointer_40fd28b76b5b5e3d80204816e156fa13)(class ::clang::Decl  *) = &::clang::ASTContext::getPrimaryMergedDecl;
    unsigned long int  (::clang::ASTContext::*method_pointer_337e029221e85aa59df584457203b7e5)() const = &::clang::ASTContext::getSideTableAllocatedMemory;
    unsigned int  (::clang::ASTContext::*method_pointer_81a590d3f5ca54c084805fbd1064145f)(unsigned int ) const = &::clang::ASTContext::getTargetAddressSpace;
    unsigned int  (::clang::ASTContext::*method_pointer_ddb1f8cbc6dc5a44932ea94b940d632a)() const = &::clang::ASTContext::getTargetDefaultAlignForAttributeAligned;
    unsigned int  (::clang::ASTContext::*method_pointer_6be9abe051215e0ab7b13233b3e4d3e4)(class ::clang::Type  const *) const = &::clang::ASTContext::getTypeAlign;
    unsigned long int  (::clang::ASTContext::*method_pointer_98072ec7d7b05a10b4652a7d229a6430)(class ::clang::Type  const *) const = &::clang::ASTContext::getTypeSize;
    class ::clang::Decl  * (::clang::ASTContext::*method_pointer_00c2f4c312415ac08bc7676aee745ad5)() const = &::clang::ASTContext::getVaListTagDecl;
    bool  (::clang::ASTContext::*method_pointer_80cd2e3165b45f808293b41844482c0e)(class ::clang::Type  const *, class ::clang::Type  const *) const = &::clang::ASTContext::hasSameType;
    bool  (::clang::ASTContext::*method_pointer_adabe8b7dcd753d080764f3e872351f4)(class ::clang::Type  const *) const = &::clang::ASTContext::isAlignmentRequired;
    void  (::clang::ASTContext::*method_pointer_b5ac3f34330753198850f58c44ad363b)(class ::clang::Decl  *, class ::clang::Decl  *) = &::clang::ASTContext::setPrimaryMergedDecl;
    boost::python::class_< class ::clang::ASTContext, autowig::HeldType< class ::clang::ASTContext >, boost::noncopyable > class_e536a5cae34e54058d1fe69715937f7a("ASTContext", "", boost::python::no_init);
    class_e536a5cae34e54058d1fe69715937f7a.def("any_obj_c_implementation", method_pointer_0287a952bd21504da4d63bc1c63b2288, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("decl_must_be_emitted", method_pointer_bfe473de1da3578a8ecc005db5b47280, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("function_types_match_on_ns_consumed_attrs", method_pointer_7d4c4cf3eae8521b8bad2e6bae1dd638, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("print_stats", method_pointer_006940a2b78a50d791041ba0eee46a9d, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("unwrap_similar_pointer_types", method_pointer_af3a85ccad4a580ab005668436e62697, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("address_space_map_mangling_for", method_pointer_2bd83227791d502f96c825a78be18ef0, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("can_assign_obj_c_interfaces", method_pointer_1c8dc558d44651f6abcad111cbcc1ea1, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("can_assign_obj_c_interfaces", method_pointer_4ae23d4e9df85b1da6d496513ceee909, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("can_assign_obj_c_interfaces_in_block_pointer", method_pointer_dd4e688caa1452cfabc010c49af55749, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("erase_decl_attrs", method_pointer_5314338157565524a3ca5f8a2b434725, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_ast_allocated_memory", method_pointer_126d63b875925b1595bbd1fdf61588a0, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_canonical_template_argument", method_pointer_71c34f302d0d5460b7353f3575910af1, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_canonical_type", method_pointer_4ca4049fe7c85b6f8acb3197c96fa01b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_char_width", method_pointer_36a78f07a2a65f99ad7d671cb9eba197, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_constant_array_element_count", method_pointer_b730878036145d09bdae8d2e47dfa24e, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_legacy_integral_type_encoding", method_pointer_10ffdfbf8773513eb5bf24726b380dc7, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_preferred_type_align", method_pointer_e51ec06b546e5a899ea47289a68dc308, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_primary_merged_decl", method_pointer_40fd28b76b5b5e3d80204816e156fa13, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_side_table_allocated_memory", method_pointer_337e029221e85aa59df584457203b7e5, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_target_address_space", method_pointer_81a590d3f5ca54c084805fbd1064145f, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_target_default_align_for_attribute_aligned", method_pointer_ddb1f8cbc6dc5a44932ea94b940d632a, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_type_align", method_pointer_6be9abe051215e0ab7b13233b3e4d3e4, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_type_size", method_pointer_98072ec7d7b05a10b4652a7d229a6430, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_va_list_tag_decl", method_pointer_00c2f4c312415ac08bc7676aee745ad5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("has_same_type", method_pointer_80cd2e3165b45f808293b41844482c0e, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("is_alignment_required", method_pointer_adabe8b7dcd753d080764f3e872351f4, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_primary_merged_decl", method_pointer_b5ac3f34330753198850f58c44ad363b, "");
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