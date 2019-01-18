#include "_clanglite.h"

class ::clang::PragmaDetectMismatchDecl * (*method_pointer_a2f9ef8e44c65dd1a7770e264f5446cc)(class ::clang::ASTContext &, unsigned int , unsigned int )= ::clang::PragmaDetectMismatchDecl::CreateDeserialized;
class ::llvm::StringRef  (::clang::PragmaDetectMismatchDecl::*method_pointer_6a47147625f1511b8603116a43c6b971)()const= &::clang::PragmaDetectMismatchDecl::getName;
class ::llvm::StringRef  (::clang::PragmaDetectMismatchDecl::*method_pointer_e328a67aca225b55a081cd3176fe37c4)()const= &::clang::PragmaDetectMismatchDecl::getValue;
bool  (*method_pointer_0deb0b6177aa53a9b6a8b53a5a905822)(class ::clang::Decl const *)= ::clang::PragmaDetectMismatchDecl::classof;
bool  (*method_pointer_2b97473c6638509c8faf841cbff23e25)(enum ::clang::Decl::Kind )= ::clang::PragmaDetectMismatchDecl::classofKind;

namespace autowig {
}

void wrapper_6cf5fc1ba526524098edbb6432f5752d(pybind11::module& module)
{

    pybind11::class_<class ::clang::PragmaDetectMismatchDecl, autowig::HolderType< class ::clang::PragmaDetectMismatchDecl >::Type, class ::clang::Decl > class_6cf5fc1ba526524098edbb6432f5752d(module, "PragmaDetectMismatchDecl", "Represents a ``#pragma detect_mismatch`` line. Always a child of\nTranslationUnitDecl.\n\n");
    class_6cf5fc1ba526524098edbb6432f5752d.def_static("create_deserialized", method_pointer_a2f9ef8e44c65dd1a7770e264f5446cc, pybind11::return_value_policy::reference_internal, "");
    class_6cf5fc1ba526524098edbb6432f5752d.def("get_name", method_pointer_6a47147625f1511b8603116a43c6b971, "");
    class_6cf5fc1ba526524098edbb6432f5752d.def("get_value", method_pointer_e328a67aca225b55a081cd3176fe37c4, "");
    class_6cf5fc1ba526524098edbb6432f5752d.def_static("classof", method_pointer_0deb0b6177aa53a9b6a8b53a5a905822, "");
    class_6cf5fc1ba526524098edbb6432f5752d.def_static("classof_kind", method_pointer_2b97473c6638509c8faf841cbff23e25, "");

}