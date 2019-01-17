#include "_clanglite.h"

class ::clang::ObjCCategoryImplDecl * (*method_pointer_0b15fc832f665bb494ac06c61e61d1aa)(class ::clang::ASTContext &, unsigned int )= ::clang::ObjCCategoryImplDecl::CreateDeserialized;
class ::clang::ObjCCategoryDecl * (::clang::ObjCCategoryImplDecl::*method_pointer_fb9f75f090e0524cb86f8026f58b7983)()const= &::clang::ObjCCategoryImplDecl::getCategoryDecl;
class ::clang::SourceLocation  (::clang::ObjCCategoryImplDecl::*method_pointer_c09d42bc0ef35da29ca8da3f0d0a1403)()const= &::clang::ObjCCategoryImplDecl::getCategoryNameLoc;
class ::llvm::StringRef  (::clang::ObjCCategoryImplDecl::*method_pointer_ccd77943197f5926997819e01f471fbe)()const= &::clang::ObjCCategoryImplDecl::getName;
bool  (*method_pointer_d07e3837cce45cf595502401f42f8d42)(class ::clang::Decl const *)= ::clang::ObjCCategoryImplDecl::classof;
bool  (*method_pointer_e9441865e5ad5cf8a8f5f57b71dee532)(enum ::clang::Decl::Kind )= ::clang::ObjCCategoryImplDecl::classofKind;


void wrapper_7289d815af725e0c81cacbe193055c17(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCCategoryImplDecl, autowig::HolderType< class ::clang::ObjCCategoryImplDecl >::Type, class ::clang::ObjCImplDecl > class_7289d815af725e0c81cacbe193055c17(module, "ObjCCategoryImplDecl", "");
    class_7289d815af725e0c81cacbe193055c17.def_static("create_deserialized", method_pointer_0b15fc832f665bb494ac06c61e61d1aa, pybind11::return_value_policy::reference_internal, "");
    class_7289d815af725e0c81cacbe193055c17.def("get_category_decl", method_pointer_fb9f75f090e0524cb86f8026f58b7983, pybind11::return_value_policy::reference_internal, "");
    class_7289d815af725e0c81cacbe193055c17.def("get_category_name_loc", method_pointer_c09d42bc0ef35da29ca8da3f0d0a1403, "");
    class_7289d815af725e0c81cacbe193055c17.def("get_name", method_pointer_ccd77943197f5926997819e01f471fbe, ":Return Type:\n    :cpp:class:`::llvm::StringRef`\n\n");
    class_7289d815af725e0c81cacbe193055c17.def_static("classof", method_pointer_d07e3837cce45cf595502401f42f8d42, "");
    class_7289d815af725e0c81cacbe193055c17.def_static("classof_kind", method_pointer_e9441865e5ad5cf8a8f5f57b71dee532, "");

}