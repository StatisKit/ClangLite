#include "_clanglite.h"

class ::clang::ImportDecl * (*method_pointer_3c7757bf88d5591db6887fcc818cc3b1)(class ::clang::ASTContext &, unsigned int , unsigned int )= ::clang::ImportDecl::CreateDeserialized;
bool  (*method_pointer_9dc80c40e3a95b5d8ba62f6ede304db5)(class ::clang::Decl const *)= ::clang::ImportDecl::classof;
bool  (*method_pointer_cae6e150d22355168f0e9a9ce5befff8)(enum ::clang::Decl::Kind )= ::clang::ImportDecl::classofKind;

namespace autowig {
}

void wrapper_e763e0d8384558ef98fffcc5e4c39e65(pybind11::module& module)
{

    pybind11::class_<class ::clang::ImportDecl, autowig::HolderType< class ::clang::ImportDecl >::Type, class ::clang::Decl > class_e763e0d8384558ef98fffcc5e4c39e65(module, "ImportDecl", "Describes a module import declaration, which makes the contents of the\nnamed module visible in the current translation unit.\n\nAn import declaration imports the named module (or submodule). For\nexample:\n\n");
    class_e763e0d8384558ef98fffcc5e4c39e65.def_static("create_deserialized", method_pointer_3c7757bf88d5591db6887fcc818cc3b1, pybind11::return_value_policy::reference_internal, "Create a new, deserialized module import declaration.\n\n:Parameters:\n  - `C` (:cpp:class:`::clang::ASTContext`) - Undocumented\n  - `ID` (:cpp:any:`unsigned` int) - Undocumented\n  - `NumLocations` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::ImportDecl`\n\n");
    class_e763e0d8384558ef98fffcc5e4c39e65.def_static("classof", method_pointer_9dc80c40e3a95b5d8ba62f6ede304db5, "");
    class_e763e0d8384558ef98fffcc5e4c39e65.def_static("classof_kind", method_pointer_cae6e150d22355168f0e9a9ce5befff8, "");

}