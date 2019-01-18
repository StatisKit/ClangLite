#include "_clanglite.h"

class ::clang::NamedDecl * (::clang::UsingPackDecl::*method_pointer_cab7f0f1676f58daa02c9a73bdada1ea)()const= &::clang::UsingPackDecl::getInstantiatedFromUsingDecl;
class ::clang::UsingPackDecl * (*method_pointer_813c6a8afb8053a8aa6f6f2ee03284f4)(class ::clang::ASTContext &, unsigned int , unsigned int )= ::clang::UsingPackDecl::CreateDeserialized;
class ::clang::UsingPackDecl * (::clang::UsingPackDecl::*method_pointer_daae5ea6bf125a9fb16886da64d72ada)()= &::clang::UsingPackDecl::getCanonicalDecl;
class ::clang::UsingPackDecl const * (::clang::UsingPackDecl::*method_pointer_16be1f77a2535a3a8dfd29a20bf12c2a)()const= &::clang::UsingPackDecl::getCanonicalDecl;
bool  (*method_pointer_d373c20bb78957daa2654bc2928b87b3)(class ::clang::Decl const *)= ::clang::UsingPackDecl::classof;
bool  (*method_pointer_2fd2eebf49d65449b10b37013e233a41)(enum ::clang::Decl::Kind )= ::clang::UsingPackDecl::classofKind;

namespace autowig {
}

void wrapper_618b3948d49e54c0ab874eb91d982c59(pybind11::module& module)
{

    pybind11::class_<class ::clang::UsingPackDecl, autowig::HolderType< class ::clang::UsingPackDecl >::Type, class ::clang::NamedDecl > class_618b3948d49e54c0ab874eb91d982c59(module, "UsingPackDecl", "");
    class_618b3948d49e54c0ab874eb91d982c59.def("get_instantiated_from_using_decl", method_pointer_cab7f0f1676f58daa02c9a73bdada1ea, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::NamedDecl`\n\n");
    class_618b3948d49e54c0ab874eb91d982c59.def_static("create_deserialized", method_pointer_813c6a8afb8053a8aa6f6f2ee03284f4, pybind11::return_value_policy::reference_internal, "");
    class_618b3948d49e54c0ab874eb91d982c59.def("get_canonical_decl", method_pointer_daae5ea6bf125a9fb16886da64d72ada, pybind11::return_value_policy::reference_internal, "");
    class_618b3948d49e54c0ab874eb91d982c59.def("get_canonical_decl", method_pointer_16be1f77a2535a3a8dfd29a20bf12c2a, pybind11::return_value_policy::reference_internal, "");
    class_618b3948d49e54c0ab874eb91d982c59.def_static("classof", method_pointer_d373c20bb78957daa2654bc2928b87b3, "");
    class_618b3948d49e54c0ab874eb91d982c59.def_static("classof_kind", method_pointer_2fd2eebf49d65449b10b37013e233a41, "");

}