#include "_clanglite.h"

class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_ab9998e5e0885430875c2fc8cd1ad775)()const= &::clang::DeclaratorDecl::getInnerLocStart;
void  (::clang::DeclaratorDecl::*method_pointer_36a389672d6f5460af1e3a39c83f568e)(class ::clang::SourceLocation )= &::clang::DeclaratorDecl::setInnerLocStart;
class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_64b9abf1d21357b193bcdc39d9c96682)()const= &::clang::DeclaratorDecl::getOuterLocStart;
class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_58ee57fc476c540ab08bc7dcb698897d)()const= &::clang::DeclaratorDecl::getLocStart;
unsigned int  (::clang::DeclaratorDecl::*method_pointer_3bd6d987a7865534a195f65922b9462f)()const= &::clang::DeclaratorDecl::getNumTemplateParameterLists;
class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_36229576723857529c84e41401fccc7a)()const= &::clang::DeclaratorDecl::getTypeSpecStartLoc;
bool  (*method_pointer_b3658cce40755fe6a7e7dd4b54ddeef3)(class ::clang::Decl const *)= ::clang::DeclaratorDecl::classof;
bool  (*method_pointer_7233360e90415f578f404b7256c33ffb)(enum ::clang::Decl::Kind )= ::clang::DeclaratorDecl::classofKind;


void wrapper_905349ffcd105c71941a2e3b1ec8ec3a(pybind11::module& module)
{

    pybind11::class_<class ::clang::DeclaratorDecl, autowig::HolderType< class ::clang::DeclaratorDecl >::Type, class ::clang::ValueDecl > class_905349ffcd105c71941a2e3b1ec8ec3a(module, "DeclaratorDecl", "Represents a ValueDecl that came out of a declarator. Contains type\nsource information through TypeSourceInfo.\n\n");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_inner_loc_start", method_pointer_ab9998e5e0885430875c2fc8cd1ad775, ":Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("set_inner_loc_start", method_pointer_36a389672d6f5460af1e3a39c83f568e, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_outer_loc_start", method_pointer_64b9abf1d21357b193bcdc39d9c96682, ":Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_loc_start", method_pointer_58ee57fc476c540ab08bc7dcb698897d, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_num_template_parameter_lists", method_pointer_3bd6d987a7865534a195f65922b9462f, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_type_spec_start_loc", method_pointer_36229576723857529c84e41401fccc7a, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def_static("classof", method_pointer_b3658cce40755fe6a7e7dd4b54ddeef3, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def_static("classof_kind", method_pointer_7233360e90415f578f404b7256c33ffb, "");

}