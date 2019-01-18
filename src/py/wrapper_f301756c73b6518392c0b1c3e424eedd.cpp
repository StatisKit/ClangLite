#include "_clanglite.h"

class ::clang::ObjCTypeParamDecl * (*method_pointer_5b1cc0324c2f5bbaa04eeeb201cce4b1)(class ::clang::ASTContext &, unsigned int )= ::clang::ObjCTypeParamDecl::CreateDeserialized;
class ::clang::SourceLocation  (::clang::ObjCTypeParamDecl::*method_pointer_9dd273670de055689b2fe680e4733e51)()const= &::clang::ObjCTypeParamDecl::getVarianceLoc;
unsigned int  (::clang::ObjCTypeParamDecl::*method_pointer_848098375ecf5191ab138f57d7f18be2)()const= &::clang::ObjCTypeParamDecl::getIndex;
bool  (::clang::ObjCTypeParamDecl::*method_pointer_87e9ae4db816519ba865286418a743a2)()const= &::clang::ObjCTypeParamDecl::hasExplicitBound;
class ::clang::SourceLocation  (::clang::ObjCTypeParamDecl::*method_pointer_5ee395c5915e5695bf25b182f385694a)()const= &::clang::ObjCTypeParamDecl::getColonLoc;
bool  (*method_pointer_52818fedab575813b31990c66a75b374)(class ::clang::Decl const *)= ::clang::ObjCTypeParamDecl::classof;
bool  (*method_pointer_dae714d729a45c8f943893482e2d68d1)(enum ::clang::Decl::Kind )= ::clang::ObjCTypeParamDecl::classofKind;

namespace autowig {
}

void wrapper_f301756c73b6518392c0b1c3e424eedd(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCTypeParamDecl, autowig::HolderType< class ::clang::ObjCTypeParamDecl >::Type, class ::clang::TypedefNameDecl > class_f301756c73b6518392c0b1c3e424eedd(module, "ObjCTypeParamDecl", "");
    class_f301756c73b6518392c0b1c3e424eedd.def_static("create_deserialized", method_pointer_5b1cc0324c2f5bbaa04eeeb201cce4b1, pybind11::return_value_policy::reference_internal, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_variance_loc", method_pointer_9dd273670de055689b2fe680e4733e51, ":Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_index", method_pointer_848098375ecf5191ab138f57d7f18be2, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_f301756c73b6518392c0b1c3e424eedd.def("has_explicit_bound", method_pointer_87e9ae4db816519ba865286418a743a2, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_colon_loc", method_pointer_5ee395c5915e5695bf25b182f385694a, ":Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_f301756c73b6518392c0b1c3e424eedd.def_static("classof", method_pointer_52818fedab575813b31990c66a75b374, "");
    class_f301756c73b6518392c0b1c3e424eedd.def_static("classof_kind", method_pointer_dae714d729a45c8f943893482e2d68d1, "");

}