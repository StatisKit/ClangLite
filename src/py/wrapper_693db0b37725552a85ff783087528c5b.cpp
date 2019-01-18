#include "_clanglite.h"

class ::clang::LinkageSpecDecl * (*method_pointer_89e85f4b49be590f9b88a7db71374662)(class ::clang::ASTContext &, class ::clang::DeclContext *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool )= ::clang::LinkageSpecDecl::Create;
class ::clang::LinkageSpecDecl * (*method_pointer_5e5c3b423b5d5790aecd55d843284c34)(class ::clang::ASTContext &, unsigned int )= ::clang::LinkageSpecDecl::CreateDeserialized;
enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_55fd643d0cd35314a9f34f14e86046b2)()const= &::clang::LinkageSpecDecl::getLanguage;
void  (::clang::LinkageSpecDecl::*method_pointer_2f57a6ceca2b5517bd474208b5be3da6)(enum ::clang::LinkageSpecDecl::LanguageIDs )= &::clang::LinkageSpecDecl::setLanguage;
bool  (::clang::LinkageSpecDecl::*method_pointer_9e4a466989a759f19f4ccd2be0f5d302)()const= &::clang::LinkageSpecDecl::hasBraces;
class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_ecdcdb0ce9425d9194853c53f6d6cd99)()const= &::clang::LinkageSpecDecl::getExternLoc;
class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_1842bedf114c511390616ab1ff13fea8)()const= &::clang::LinkageSpecDecl::getRBraceLoc;
void  (::clang::LinkageSpecDecl::*method_pointer_c657ca4cacdd5e1da70bfa0f3dde3aff)(class ::clang::SourceLocation )= &::clang::LinkageSpecDecl::setExternLoc;
void  (::clang::LinkageSpecDecl::*method_pointer_e67dc586c0865cab89c831be8228450f)(class ::clang::SourceLocation )= &::clang::LinkageSpecDecl::setRBraceLoc;
class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_90a1a09ef0e7547ca0f77bf4498fd603)()const= &::clang::LinkageSpecDecl::getLocEnd;
bool  (*method_pointer_601e5617f6715b729fe85a2af4c966b9)(class ::clang::Decl const *)= ::clang::LinkageSpecDecl::classof;
bool  (*method_pointer_9afdd8ad7f1c53a4b68de15c3650941c)(enum ::clang::Decl::Kind )= ::clang::LinkageSpecDecl::classofKind;
class ::clang::DeclContext * (*method_pointer_ba25c54dae0d52ebaf9bc1df6f785748)(class ::clang::LinkageSpecDecl const *)= ::clang::LinkageSpecDecl::castToDeclContext;
class ::clang::LinkageSpecDecl * (*method_pointer_0e1b6b7c0dcc550b865cceef38a0f79c)(class ::clang::DeclContext const *)= ::clang::LinkageSpecDecl::castFromDeclContext;

namespace autowig {
}

void wrapper_693db0b37725552a85ff783087528c5b(pybind11::module& module)
{

    pybind11::class_<class ::clang::LinkageSpecDecl, autowig::HolderType< class ::clang::LinkageSpecDecl >::Type, class ::clang::Decl, class ::clang::DeclContext > class_693db0b37725552a85ff783087528c5b(module, "LinkageSpecDecl", "Represents a linkage specification.\n\nFor example:\n\n");
    class_693db0b37725552a85ff783087528c5b.def_static("create", method_pointer_89e85f4b49be590f9b88a7db71374662, pybind11::return_value_policy::reference_internal, "");
    class_693db0b37725552a85ff783087528c5b.def_static("create_deserialized", method_pointer_5e5c3b423b5d5790aecd55d843284c34, pybind11::return_value_policy::reference_internal, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_55fd643d0cd35314a9f34f14e86046b2, "Return the language specified by this linkage specification.\n\n:Return Type:\n    :cpp:enumerator:`::clang::LinkageSpecDecl::LanguageIDs`\n\n");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_2f57a6ceca2b5517bd474208b5be3da6, "Set the language specified by this linkage specification.\n\n:Parameter:\n    `L` (:cpp:enumerator:`::clang::LinkageSpecDecl::LanguageIDs`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_9e4a466989a759f19f4ccd2be0f5d302, "Determines whether this linkage specification had braces in its\nsyntactic form.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_ecdcdb0ce9425d9194853c53f6d6cd99, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_1842bedf114c511390616ab1ff13fea8, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_c657ca4cacdd5e1da70bfa0f3dde3aff, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_e67dc586c0865cab89c831be8228450f, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_90a1a09ef0e7547ca0f77bf4498fd603, "");
    class_693db0b37725552a85ff783087528c5b.def_static("classof", method_pointer_601e5617f6715b729fe85a2af4c966b9, "");
    class_693db0b37725552a85ff783087528c5b.def_static("classof_kind", method_pointer_9afdd8ad7f1c53a4b68de15c3650941c, "");
    class_693db0b37725552a85ff783087528c5b.def_static("cast_to_decl_context", method_pointer_ba25c54dae0d52ebaf9bc1df6f785748, pybind11::return_value_policy::reference_internal, "");
    class_693db0b37725552a85ff783087528c5b.def_static("cast_from_decl_context", method_pointer_0e1b6b7c0dcc550b865cceef38a0f79c, pybind11::return_value_policy::reference_internal, "");

}