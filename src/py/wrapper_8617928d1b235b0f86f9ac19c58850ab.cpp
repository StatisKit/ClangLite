#include "_clanglite.h"

class ::clang::TypeAliasDecl * (*method_pointer_21d4b660c0a15d12a536268039431ff8)(class ::clang::ASTContext &, unsigned int )= ::clang::TypeAliasDecl::CreateDeserialized;
class ::clang::TypeAliasTemplateDecl * (::clang::TypeAliasDecl::*method_pointer_eb1326b4422f5998a5e691510d070ad3)()const= &::clang::TypeAliasDecl::getDescribedAliasTemplate;
void  (::clang::TypeAliasDecl::*method_pointer_10221e90b08e596dbae4c69f82863eee)(class ::clang::TypeAliasTemplateDecl *)= &::clang::TypeAliasDecl::setDescribedAliasTemplate;
bool  (*method_pointer_32e78a22c66957c6899dfaca2ec7dac1)(class ::clang::Decl const *)= ::clang::TypeAliasDecl::classof;
bool  (*method_pointer_6cf8916dcb2c53e49eec8ea84e668218)(enum ::clang::Decl::Kind )= ::clang::TypeAliasDecl::classofKind;


void wrapper_8617928d1b235b0f86f9ac19c58850ab(pybind11::module& module)
{

    pybind11::class_<class ::clang::TypeAliasDecl, autowig::HolderType< class ::clang::TypeAliasDecl >::Type, class ::clang::TypedefNameDecl > class_8617928d1b235b0f86f9ac19c58850ab(module, "TypeAliasDecl", "");
    class_8617928d1b235b0f86f9ac19c58850ab.def_static("create_deserialized", method_pointer_21d4b660c0a15d12a536268039431ff8, pybind11::return_value_policy::reference_internal, "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("get_described_alias_template", method_pointer_eb1326b4422f5998a5e691510d070ad3, pybind11::return_value_policy::reference_internal, "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("set_described_alias_template", method_pointer_10221e90b08e596dbae4c69f82863eee, "");
    class_8617928d1b235b0f86f9ac19c58850ab.def_static("classof", method_pointer_32e78a22c66957c6899dfaca2ec7dac1, "");
    class_8617928d1b235b0f86f9ac19c58850ab.def_static("classof_kind", method_pointer_6cf8916dcb2c53e49eec8ea84e668218, "");

}