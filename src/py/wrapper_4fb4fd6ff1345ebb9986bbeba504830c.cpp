#include "_clanglite.h"

class ::clang::MSPropertyDecl * (*method_pointer_4ef4947bf7e55305a11bf03846c3b811)(class ::clang::ASTContext &, unsigned int )= ::clang::MSPropertyDecl::CreateDeserialized;
bool  (*method_pointer_98aab06bbdfc5233a07b7c4d386f4615)(class ::clang::Decl const *)= ::clang::MSPropertyDecl::classof;
bool  (::clang::MSPropertyDecl::*method_pointer_dbe6cfbd0e235d23b939ebc4281f4a7d)()const= &::clang::MSPropertyDecl::hasGetter;
bool  (::clang::MSPropertyDecl::*method_pointer_78607d937d5b5a9e8a0ec9e4b30bca30)()const= &::clang::MSPropertyDecl::hasSetter;

namespace autowig {
}

void wrapper_4fb4fd6ff1345ebb9986bbeba504830c(pybind11::module& module)
{

    pybind11::class_<class ::clang::MSPropertyDecl, autowig::HolderType< class ::clang::MSPropertyDecl >::Type, class ::clang::DeclaratorDecl > class_4fb4fd6ff1345ebb9986bbeba504830c(module, "MSPropertyDecl", "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def_static("create_deserialized", method_pointer_4ef4947bf7e55305a11bf03846c3b811, pybind11::return_value_policy::reference_internal, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def_static("classof", method_pointer_98aab06bbdfc5233a07b7c4d386f4615, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("has_getter", method_pointer_dbe6cfbd0e235d23b939ebc4281f4a7d, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("has_setter", method_pointer_78607d937d5b5a9e8a0ec9e4b30bca30, "");

}