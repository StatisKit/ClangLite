#include "_clanglite.h"

class ::clang::UsingShadowDecl * (*method_pointer_ab165a2b9f555eea93e0daf9dea8711b)(class ::clang::ASTContext &, class ::clang::DeclContext *, class ::clang::SourceLocation , class ::clang::UsingDecl *, class ::clang::NamedDecl *)= ::clang::UsingShadowDecl::Create;
class ::clang::UsingShadowDecl * (*method_pointer_956b2972581c5a0a8c67f5e99b8fbd7d)(class ::clang::ASTContext &, unsigned int )= ::clang::UsingShadowDecl::CreateDeserialized;
class ::clang::UsingShadowDecl * (::clang::UsingShadowDecl::*method_pointer_7eea10668e605bcf8fe9e603fe3391b7)()= &::clang::UsingShadowDecl::getCanonicalDecl;
class ::clang::UsingShadowDecl const * (::clang::UsingShadowDecl::*method_pointer_28670bc7d400527a9b3cb3736611ff46)()const= &::clang::UsingShadowDecl::getCanonicalDecl;
class ::clang::NamedDecl * (::clang::UsingShadowDecl::*method_pointer_9d109885e6d75cd7b34f0a220943aa8f)()const= &::clang::UsingShadowDecl::getTargetDecl;
void  (::clang::UsingShadowDecl::*method_pointer_5ff8d916fa3b5825835084c2fc5b832d)(class ::clang::NamedDecl *)= &::clang::UsingShadowDecl::setTargetDecl;
class ::clang::UsingDecl * (::clang::UsingShadowDecl::*method_pointer_6e02fbd1249653a6bd687e882786e921)()const= &::clang::UsingShadowDecl::getUsingDecl;
class ::clang::UsingShadowDecl * (::clang::UsingShadowDecl::*method_pointer_2b62529882545bd5969cfbefc13553a8)()const= &::clang::UsingShadowDecl::getNextUsingShadowDecl;
bool  (*method_pointer_de2c137bcfb552189e09c4a983129224)(class ::clang::Decl const *)= ::clang::UsingShadowDecl::classof;
bool  (*method_pointer_ecff7f40a4e458e5a1ebb9e899cc97ec)(enum ::clang::Decl::Kind )= ::clang::UsingShadowDecl::classofKind;

namespace autowig {
}

void wrapper_8ed765a365325afd812394a92e49d498(pybind11::module& module)
{

    pybind11::class_<class ::clang::UsingShadowDecl, autowig::HolderType< class ::clang::UsingShadowDecl >::Type, class ::clang::NamedDecl > class_8ed765a365325afd812394a92e49d498(module, "UsingShadowDecl", "Represents a shadow declaration introduced into a scope by a (resolved)\nusing declaration.\n\nFor example,\n\n");
    class_8ed765a365325afd812394a92e49d498.def_static("create", method_pointer_ab165a2b9f555eea93e0daf9dea8711b, pybind11::return_value_policy::reference_internal, "");
    class_8ed765a365325afd812394a92e49d498.def_static("create_deserialized", method_pointer_956b2972581c5a0a8c67f5e99b8fbd7d, pybind11::return_value_policy::reference_internal, "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_7eea10668e605bcf8fe9e603fe3391b7, pybind11::return_value_policy::reference_internal, "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_28670bc7d400527a9b3cb3736611ff46, pybind11::return_value_policy::reference_internal, "");
    class_8ed765a365325afd812394a92e49d498.def("get_target_decl", method_pointer_9d109885e6d75cd7b34f0a220943aa8f, pybind11::return_value_policy::reference_internal, "Gets the underlying declaration which has been brought into the local\nscope.\n\n:Return Type:\n    :cpp:class:`::clang::NamedDecl`\n\n");
    class_8ed765a365325afd812394a92e49d498.def("set_target_decl", method_pointer_5ff8d916fa3b5825835084c2fc5b832d, "Sets the underlying declaration which has been brought into the local\nscope.\n\n:Parameter:\n    `ND` (:cpp:class:`::clang::NamedDecl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_8ed765a365325afd812394a92e49d498.def("get_using_decl", method_pointer_6e02fbd1249653a6bd687e882786e921, pybind11::return_value_policy::reference_internal, "Gets the using declaration to which this declaration is tied.\n\n:Return Type:\n    :cpp:class:`::clang::UsingDecl`\n\n");
    class_8ed765a365325afd812394a92e49d498.def("get_next_using_shadow_decl", method_pointer_2b62529882545bd5969cfbefc13553a8, pybind11::return_value_policy::reference_internal, "The next using shadow declaration contained in the shadow decl chain of\nthe using declaration which introduced this decl.\n\n:Return Type:\n    :cpp:class:`::clang::UsingShadowDecl`\n\n");
    class_8ed765a365325afd812394a92e49d498.def_static("classof", method_pointer_de2c137bcfb552189e09c4a983129224, "");
    class_8ed765a365325afd812394a92e49d498.def_static("classof_kind", method_pointer_ecff7f40a4e458e5a1ebb9e899cc97ec, "");

}