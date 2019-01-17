#include "_clanglite.h"

class ::clang::StaticAssertDecl * (*method_pointer_963caab436945549ab07244ad2283dee)(class ::clang::ASTContext &, unsigned int )= ::clang::StaticAssertDecl::CreateDeserialized;
bool  (::clang::StaticAssertDecl::*method_pointer_7e93a72396f9524ea38b7bffd26e77d6)()const= &::clang::StaticAssertDecl::isFailed;
class ::clang::SourceLocation  (::clang::StaticAssertDecl::*method_pointer_c40008a3cf7f528e93ad078517e6b4d4)()const= &::clang::StaticAssertDecl::getRParenLoc;
bool  (*method_pointer_ce2a42003f2e58e093275d99c22a2083)(class ::clang::Decl const *)= ::clang::StaticAssertDecl::classof;
bool  (*method_pointer_066b8f603f1c5898a6bfce4cd6dfd57e)(enum ::clang::Decl::Kind )= ::clang::StaticAssertDecl::classofKind;


void wrapper_0dd00d729e905a24a952147ef6cb1f26(pybind11::module& module)
{

    pybind11::class_<class ::clang::StaticAssertDecl, autowig::HolderType< class ::clang::StaticAssertDecl >::Type, class ::clang::Decl > class_0dd00d729e905a24a952147ef6cb1f26(module, "StaticAssertDecl", "Represents a C++11 static_assert declaration.\n\n");
    class_0dd00d729e905a24a952147ef6cb1f26.def_static("create_deserialized", method_pointer_963caab436945549ab07244ad2283dee, pybind11::return_value_policy::reference_internal, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("is_failed", method_pointer_7e93a72396f9524ea38b7bffd26e77d6, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("get_r_paren_loc", method_pointer_c40008a3cf7f528e93ad078517e6b4d4, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def_static("classof", method_pointer_ce2a42003f2e58e093275d99c22a2083, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def_static("classof_kind", method_pointer_066b8f603f1c5898a6bfce4cd6dfd57e, "");

}