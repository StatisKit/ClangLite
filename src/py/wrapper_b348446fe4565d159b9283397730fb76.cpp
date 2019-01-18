#include "_clanglite.h"

class ::clang::SourceLocation  (::clang::UnresolvedUsingValueDecl::*method_pointer_9c1666d4d33a5fecb7a7af979cea0383)()const= &::clang::UnresolvedUsingValueDecl::getUsingLoc;
void  (::clang::UnresolvedUsingValueDecl::*method_pointer_e02e0fb145585def844b3d71fe2206dc)(class ::clang::SourceLocation )= &::clang::UnresolvedUsingValueDecl::setUsingLoc;
bool  (::clang::UnresolvedUsingValueDecl::*method_pointer_aeebcb3aed5155229a6ea101a370af61)()const= &::clang::UnresolvedUsingValueDecl::isAccessDeclaration;
bool  (::clang::UnresolvedUsingValueDecl::*method_pointer_5a90ed7259b35721b2b2688ad4137459)()const= &::clang::UnresolvedUsingValueDecl::isPackExpansion;
class ::clang::SourceLocation  (::clang::UnresolvedUsingValueDecl::*method_pointer_3656a1f850235010ba33101ac59f5080)()const= &::clang::UnresolvedUsingValueDecl::getEllipsisLoc;
class ::clang::UnresolvedUsingValueDecl * (*method_pointer_15aefe6caa355fabbf6fd2cab2974fc8)(class ::clang::ASTContext &, unsigned int )= ::clang::UnresolvedUsingValueDecl::CreateDeserialized;
class ::clang::UnresolvedUsingValueDecl * (::clang::UnresolvedUsingValueDecl::*method_pointer_d4d841a11e98558f878c69568be7e38e)()= &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
class ::clang::UnresolvedUsingValueDecl const * (::clang::UnresolvedUsingValueDecl::*method_pointer_8710c3e258d256c5860057b4fbad0a81)()const= &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
bool  (*method_pointer_a937392d036d55d4b1e04d545b626eb6)(class ::clang::Decl const *)= ::clang::UnresolvedUsingValueDecl::classof;
bool  (*method_pointer_a187dc7f41a9562ea4483e5370b71a81)(enum ::clang::Decl::Kind )= ::clang::UnresolvedUsingValueDecl::classofKind;

namespace autowig {
}

void wrapper_b348446fe4565d159b9283397730fb76(pybind11::module& module)
{

    pybind11::class_<class ::clang::UnresolvedUsingValueDecl, autowig::HolderType< class ::clang::UnresolvedUsingValueDecl >::Type, class ::clang::ValueDecl > class_b348446fe4565d159b9283397730fb76(module, "UnresolvedUsingValueDecl", "Represents a dependent using declaration which was not marked with\n\n");
    class_b348446fe4565d159b9283397730fb76.def("get_using_loc", method_pointer_9c1666d4d33a5fecb7a7af979cea0383, "Returns the source location of the ‘using’ keyword.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_b348446fe4565d159b9283397730fb76.def("set_using_loc", method_pointer_e02e0fb145585def844b3d71fe2206dc, "Set the source location of the ‘using’ keyword.\n\n:Parameter:\n    `L` (:cpp:class:`::clang::SourceLocation`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_b348446fe4565d159b9283397730fb76.def("is_access_declaration", method_pointer_aeebcb3aed5155229a6ea101a370af61, "Return true if it is a C++03 access declaration (no ‘using’).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b348446fe4565d159b9283397730fb76.def("is_pack_expansion", method_pointer_5a90ed7259b35721b2b2688ad4137459, "Determine whether this is a pack expansion.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b348446fe4565d159b9283397730fb76.def("get_ellipsis_loc", method_pointer_3656a1f850235010ba33101ac59f5080, "Get the location of the ellipsis if this is a pack expansion.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_b348446fe4565d159b9283397730fb76.def_static("create_deserialized", method_pointer_15aefe6caa355fabbf6fd2cab2974fc8, pybind11::return_value_policy::reference_internal, "");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_d4d841a11e98558f878c69568be7e38e, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::UnresolvedUsingValueDecl`\n\n");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_8710c3e258d256c5860057b4fbad0a81, pybind11::return_value_policy::reference_internal, "");
    class_b348446fe4565d159b9283397730fb76.def_static("classof", method_pointer_a937392d036d55d4b1e04d545b626eb6, "");
    class_b348446fe4565d159b9283397730fb76.def_static("classof_kind", method_pointer_a187dc7f41a9562ea4483e5370b71a81, "");

}