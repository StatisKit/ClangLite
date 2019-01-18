#include "_clanglite.h"

class ::clang::PragmaCommentDecl * (*method_pointer_0e3b9e38e75b56e4a86c1b2c70ab9d92)(class ::clang::ASTContext &, unsigned int , unsigned int )= ::clang::PragmaCommentDecl::CreateDeserialized;
class ::llvm::StringRef  (::clang::PragmaCommentDecl::*method_pointer_8fb106cdce645bd685f3eb4e93dd72dd)()const= &::clang::PragmaCommentDecl::getArg;
bool  (*method_pointer_635d7c7dedb2550d8da58b6125a67596)(class ::clang::Decl const *)= ::clang::PragmaCommentDecl::classof;
bool  (*method_pointer_c97acc823f615730a8d58ff8f8f6ee2b)(enum ::clang::Decl::Kind )= ::clang::PragmaCommentDecl::classofKind;

namespace autowig {
}

void wrapper_d3534ea59fd550feac0100e9ad39d4ca(pybind11::module& module)
{

    pybind11::class_<class ::clang::PragmaCommentDecl, autowig::HolderType< class ::clang::PragmaCommentDecl >::Type, class ::clang::Decl > class_d3534ea59fd550feac0100e9ad39d4ca(module, "PragmaCommentDecl", "Represents a ``#pragma comment`` line. Always a child of\nTranslationUnitDecl.\n\n");
    class_d3534ea59fd550feac0100e9ad39d4ca.def_static("create_deserialized", method_pointer_0e3b9e38e75b56e4a86c1b2c70ab9d92, pybind11::return_value_policy::reference_internal, "");
    class_d3534ea59fd550feac0100e9ad39d4ca.def("get_arg", method_pointer_8fb106cdce645bd685f3eb4e93dd72dd, "");
    class_d3534ea59fd550feac0100e9ad39d4ca.def_static("classof", method_pointer_635d7c7dedb2550d8da58b6125a67596, "");
    class_d3534ea59fd550feac0100e9ad39d4ca.def_static("classof_kind", method_pointer_c97acc823f615730a8d58ff8f8f6ee2b, "");

}