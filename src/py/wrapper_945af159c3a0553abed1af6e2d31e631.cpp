#include "_clanglite.h"

class ::clang::Type const * (::clang::TypeDecl::*method_pointer_4d889ca109c85f99a4aa8d651f77192c)()const= &::clang::TypeDecl::getTypeForDecl;
void  (::clang::TypeDecl::*method_pointer_573b1311c49c58c6ad28503995558b7d)(class ::clang::Type const *)= &::clang::TypeDecl::setTypeForDecl;
class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_21782ce4de6858238e1dfa3115dab0a8)()const= &::clang::TypeDecl::getLocStart;
void  (::clang::TypeDecl::*method_pointer_77260870f0a153f5840b33d168afbdec)(class ::clang::SourceLocation )= &::clang::TypeDecl::setLocStart;
bool  (*method_pointer_e6b9131680cc5433a597ce39f0ccdd50)(class ::clang::Decl const *)= ::clang::TypeDecl::classof;
bool  (*method_pointer_e2eccbbf413c58d1bc2324f8ba8b1c17)(enum ::clang::Decl::Kind )= ::clang::TypeDecl::classofKind;


void wrapper_945af159c3a0553abed1af6e2d31e631(pybind11::module& module)
{

    pybind11::class_<class ::clang::TypeDecl, autowig::HolderType< class ::clang::TypeDecl >::Type, class ::clang::NamedDecl > class_945af159c3a0553abed1af6e2d31e631(module, "TypeDecl", "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_4d889ca109c85f99a4aa8d651f77192c, pybind11::return_value_policy::reference_internal, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_573b1311c49c58c6ad28503995558b7d, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_21782ce4de6858238e1dfa3115dab0a8, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_77260870f0a153f5840b33d168afbdec, "");
    class_945af159c3a0553abed1af6e2d31e631.def_static("classof", method_pointer_e6b9131680cc5433a597ce39f0ccdd50, "");
    class_945af159c3a0553abed1af6e2d31e631.def_static("classof_kind", method_pointer_e2eccbbf413c58d1bc2324f8ba8b1c17, "");

}