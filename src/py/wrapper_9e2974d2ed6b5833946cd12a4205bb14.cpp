#include "_clanglite.h"

class ::clang::OMPThreadPrivateDecl * (*method_pointer_3eb975a8e60f5867a91d24cf4f65c268)(class ::clang::ASTContext &, unsigned int , unsigned int )= ::clang::OMPThreadPrivateDecl::CreateDeserialized;
unsigned int  (::clang::OMPThreadPrivateDecl::*method_pointer_0ea384a7028e5b81b1490daf41472c5b)()const= &::clang::OMPThreadPrivateDecl::varlist_size;
bool  (::clang::OMPThreadPrivateDecl::*method_pointer_2319219169d85a93a23d9b18c46223f0)()const= &::clang::OMPThreadPrivateDecl::varlist_empty;
bool  (*method_pointer_5209c5362ad558f683e2da4c1d95f174)(class ::clang::Decl const *)= ::clang::OMPThreadPrivateDecl::classof;
bool  (*method_pointer_c62dc7ff539456679abd95c24df2ddd8)(enum ::clang::Decl::Kind )= ::clang::OMPThreadPrivateDecl::classofKind;


void wrapper_9e2974d2ed6b5833946cd12a4205bb14(pybind11::module& module)
{

    pybind11::class_<class ::clang::OMPThreadPrivateDecl, autowig::HolderType< class ::clang::OMPThreadPrivateDecl >::Type, class ::clang::Decl > class_9e2974d2ed6b5833946cd12a4205bb14(module, "OMPThreadPrivateDecl", "This represents ‘#pragma omp threadprivate …’ directive. For example, in\nthe following, both ‘a’ and ‘A::b’ are threadprivate:\n\n");
    class_9e2974d2ed6b5833946cd12a4205bb14.def_static("create_deserialized", method_pointer_3eb975a8e60f5867a91d24cf4f65c268, pybind11::return_value_policy::reference_internal, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_size", method_pointer_0ea384a7028e5b81b1490daf41472c5b, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_empty", method_pointer_2319219169d85a93a23d9b18c46223f0, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def_static("classof", method_pointer_5209c5362ad558f683e2da4c1d95f174, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def_static("classof_kind", method_pointer_c62dc7ff539456679abd95c24df2ddd8, "");

}