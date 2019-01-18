#include "_clanglite.h"

class ::clang::SourceLocation  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_18ba354845bb53ba86b181ef7d9892c9)()const= &::clang::UnresolvedUsingTypenameDecl::getUsingLoc;
class ::clang::SourceLocation  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_1afb07a45de35fa4aa27afbb1c872f2b)()const= &::clang::UnresolvedUsingTypenameDecl::getTypenameLoc;
bool  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_5b991e1e497f5d38896fb91d406cc080)()const= &::clang::UnresolvedUsingTypenameDecl::isPackExpansion;
class ::clang::SourceLocation  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_6a6b7a92c7b55182ad665f0b57ac8165)()const= &::clang::UnresolvedUsingTypenameDecl::getEllipsisLoc;
class ::clang::UnresolvedUsingTypenameDecl * (*method_pointer_e97c7477db6f5f29aedc61ffcf33e2d8)(class ::clang::ASTContext &, unsigned int )= ::clang::UnresolvedUsingTypenameDecl::CreateDeserialized;
class ::clang::UnresolvedUsingTypenameDecl * (::clang::UnresolvedUsingTypenameDecl::*method_pointer_047bd3939ee0507caa0ffd970cc8d2ff)()= &::clang::UnresolvedUsingTypenameDecl::getCanonicalDecl;
class ::clang::UnresolvedUsingTypenameDecl const * (::clang::UnresolvedUsingTypenameDecl::*method_pointer_12dcee017acf5bae8c384cdda502e2b7)()const= &::clang::UnresolvedUsingTypenameDecl::getCanonicalDecl;
bool  (*method_pointer_af92266bff3352da98249ac9cc72b42e)(class ::clang::Decl const *)= ::clang::UnresolvedUsingTypenameDecl::classof;
bool  (*method_pointer_1b5fbae185a65c99aa6bfd0a22ec5a2e)(enum ::clang::Decl::Kind )= ::clang::UnresolvedUsingTypenameDecl::classofKind;

namespace autowig {
}

void wrapper_9e44afaac15f57249b2dc948f4ddc4d0(pybind11::module& module)
{

    pybind11::class_<class ::clang::UnresolvedUsingTypenameDecl, autowig::HolderType< class ::clang::UnresolvedUsingTypenameDecl >::Type, class ::clang::TypeDecl > class_9e44afaac15f57249b2dc948f4ddc4d0(module, "UnresolvedUsingTypenameDecl", "Represents a dependent using declaration which was marked with\n\n");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_using_loc", method_pointer_18ba354845bb53ba86b181ef7d9892c9, "Returns the source location of the ‘using’ keyword.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_typename_loc", method_pointer_1afb07a45de35fa4aa27afbb1c872f2b, "Returns the source location of the ‘typename’ keyword.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("is_pack_expansion", method_pointer_5b991e1e497f5d38896fb91d406cc080, "Determine whether this is a pack expansion.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_ellipsis_loc", method_pointer_6a6b7a92c7b55182ad665f0b57ac8165, "Get the location of the ellipsis if this is a pack expansion.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def_static("create_deserialized", method_pointer_e97c7477db6f5f29aedc61ffcf33e2d8, pybind11::return_value_policy::reference_internal, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_canonical_decl", method_pointer_047bd3939ee0507caa0ffd970cc8d2ff, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::UnresolvedUsingTypenameDecl`\n\n");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_canonical_decl", method_pointer_12dcee017acf5bae8c384cdda502e2b7, pybind11::return_value_policy::reference_internal, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def_static("classof", method_pointer_af92266bff3352da98249ac9cc72b42e, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def_static("classof_kind", method_pointer_1b5fbae185a65c99aa6bfd0a22ec5a2e, "");

}