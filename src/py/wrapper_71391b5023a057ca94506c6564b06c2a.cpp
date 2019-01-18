#include "_clanglite.h"

bool  (::clang::TypedefNameDecl::*method_pointer_7e5523bfe00e506abb6b133833dfed3e)()const= &::clang::TypedefNameDecl::isModed;
class ::clang::QualType  (::clang::TypedefNameDecl::*method_pointer_51c8b603df205b508e87bddad3218b5a)()const= &::clang::TypedefNameDecl::getUnderlyingType;
class ::clang::TypedefNameDecl * (::clang::TypedefNameDecl::*method_pointer_17f1a9ed9d07511894399bfcc36d3118)()= &::clang::TypedefNameDecl::getCanonicalDecl;
class ::clang::TypedefNameDecl const * (::clang::TypedefNameDecl::*method_pointer_864cbde415bb5a1e9f280c59e018f3cf)()const= &::clang::TypedefNameDecl::getCanonicalDecl;
class ::clang::TagDecl * (::clang::TypedefNameDecl::*method_pointer_5e787220b638524fa776031f1c24a81c)(bool )const= &::clang::TypedefNameDecl::getAnonDeclWithTypedefName;
bool  (*method_pointer_d1684748675b5484af41e78ec7cd0b6c)(class ::clang::Decl const *)= ::clang::TypedefNameDecl::classof;
bool  (*method_pointer_1530aa9c98af5fcb97830a08b09c9659)(enum ::clang::Decl::Kind )= ::clang::TypedefNameDecl::classofKind;

namespace autowig {
}

void wrapper_71391b5023a057ca94506c6564b06c2a(pybind11::module& module)
{

    pybind11::class_<class ::clang::TypedefNameDecl, autowig::HolderType< class ::clang::TypedefNameDecl >::Type, class ::clang::TypeDecl > class_71391b5023a057ca94506c6564b06c2a(module, "TypedefNameDecl", "");
    class_71391b5023a057ca94506c6564b06c2a.def("is_moded", method_pointer_7e5523bfe00e506abb6b133833dfed3e, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_underlying_type", method_pointer_51c8b603df205b508e87bddad3218b5a, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_17f1a9ed9d07511894399bfcc36d3118, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::TypedefNameDecl`\n\n");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_864cbde415bb5a1e9f280c59e018f3cf, pybind11::return_value_policy::reference_internal, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_anon_decl_with_typedef_name", method_pointer_5e787220b638524fa776031f1c24a81c, pybind11::return_value_policy::reference_internal, ":Parameter:\n    `AnyRedecl` (:cpp:any:`bool`) - Look for the tag declaration in any redeclaration of this typedef\n                                    declaration.\n\n:Return Type:\n    :cpp:class:`::clang::TagDecl`\n\n");
    class_71391b5023a057ca94506c6564b06c2a.def_static("classof", method_pointer_d1684748675b5484af41e78ec7cd0b6c, "");
    class_71391b5023a057ca94506c6564b06c2a.def_static("classof_kind", method_pointer_1530aa9c98af5fcb97830a08b09c9659, "");

}