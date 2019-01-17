#include "_clanglite.h"

class ::clang::IndirectFieldDecl * (*method_pointer_a886f6fee3015bb4b341ad05704e4569)(class ::clang::ASTContext &, unsigned int )= ::clang::IndirectFieldDecl::CreateDeserialized;
unsigned int  (::clang::IndirectFieldDecl::*method_pointer_aaffc8f63d6e5c7cb8313fb8500f5d1a)()const= &::clang::IndirectFieldDecl::getChainingSize;
class ::clang::FieldDecl * (::clang::IndirectFieldDecl::*method_pointer_75c2723a1b3b51ae9a949712b0a82b1e)()const= &::clang::IndirectFieldDecl::getAnonField;
class ::clang::VarDecl * (::clang::IndirectFieldDecl::*method_pointer_2090896635f75fa881fa2b91a7e006c9)()const= &::clang::IndirectFieldDecl::getVarDecl;
class ::clang::IndirectFieldDecl * (::clang::IndirectFieldDecl::*method_pointer_381f8c222fdb5b979e0b0c7bf78c6bbc)()= &::clang::IndirectFieldDecl::getCanonicalDecl;
class ::clang::IndirectFieldDecl const * (::clang::IndirectFieldDecl::*method_pointer_0791d4323e4852d0a9b95994719ac80d)()const= &::clang::IndirectFieldDecl::getCanonicalDecl;
bool  (*method_pointer_20a5982871cd59398677bf2d15aa4f49)(class ::clang::Decl const *)= ::clang::IndirectFieldDecl::classof;
bool  (*method_pointer_9cd107317cef5e6a99765f8046e7727e)(enum ::clang::Decl::Kind )= ::clang::IndirectFieldDecl::classofKind;


void wrapper_055e36c244395ee3a248c7839b4485ca(pybind11::module& module)
{

    pybind11::class_<class ::clang::IndirectFieldDecl, autowig::HolderType< class ::clang::IndirectFieldDecl >::Type, class ::clang::ValueDecl > class_055e36c244395ee3a248c7839b4485ca(module, "IndirectFieldDecl", "");
    class_055e36c244395ee3a248c7839b4485ca.def_static("create_deserialized", method_pointer_a886f6fee3015bb4b341ad05704e4569, pybind11::return_value_policy::reference_internal, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_chaining_size", method_pointer_aaffc8f63d6e5c7cb8313fb8500f5d1a, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_anon_field", method_pointer_75c2723a1b3b51ae9a949712b0a82b1e, pybind11::return_value_policy::reference_internal, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_var_decl", method_pointer_2090896635f75fa881fa2b91a7e006c9, pybind11::return_value_policy::reference_internal, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_381f8c222fdb5b979e0b0c7bf78c6bbc, pybind11::return_value_policy::reference_internal, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_0791d4323e4852d0a9b95994719ac80d, pybind11::return_value_policy::reference_internal, "");
    class_055e36c244395ee3a248c7839b4485ca.def_static("classof", method_pointer_20a5982871cd59398677bf2d15aa4f49, "");
    class_055e36c244395ee3a248c7839b4485ca.def_static("classof_kind", method_pointer_9cd107317cef5e6a99765f8046e7727e, "");

}