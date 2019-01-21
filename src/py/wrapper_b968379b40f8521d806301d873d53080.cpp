#include "_clanglite.h"

class ::clang::ASTContext & (::clang::TranslationUnitDecl::*method_pointer_2bd67ec6dfd3505b97e4b5e071aa959c)()const= &::clang::TranslationUnitDecl::getASTContext;
class ::clang::NamespaceDecl * (::clang::TranslationUnitDecl::*method_pointer_969c1e0c83b45b5a90557b8ea88354c5)()const= &::clang::TranslationUnitDecl::getAnonymousNamespace;
void  (::clang::TranslationUnitDecl::*method_pointer_9b72dcbe0c14514b91d135e15d99b193)(class ::clang::NamespaceDecl *)= &::clang::TranslationUnitDecl::setAnonymousNamespace;
class ::clang::TranslationUnitDecl * (*method_pointer_64e404a41f4d56c98640039063118208)(class ::clang::ASTContext &)= ::clang::TranslationUnitDecl::Create;
bool  (*method_pointer_ce02c8b4feb95457b9ad9f91f71d3476)(class ::clang::Decl const *)= ::clang::TranslationUnitDecl::classof;
bool  (*method_pointer_c98df1610ef05283a599f30ef2c955e8)(enum ::clang::Decl::Kind )= ::clang::TranslationUnitDecl::classofKind;
class ::clang::DeclContext * (*method_pointer_15cf6962e6c457daa799f6cfbadf8f56)(class ::clang::TranslationUnitDecl const *)= ::clang::TranslationUnitDecl::castToDeclContext;
class ::clang::TranslationUnitDecl * (*method_pointer_0ad4e62f603d574bb7ff20e01d34ce03)(class ::clang::DeclContext const *)= ::clang::TranslationUnitDecl::castFromDeclContext;

namespace autowig {
    void method_decorator_2bd67ec6dfd3505b97e4b5e071aa959c(class ::clang::TranslationUnitDecl const & instance, const class ::clang::ASTContext & param_out) { instance.getASTContext() = param_out; }
}

void wrapper_b968379b40f8521d806301d873d53080(pybind11::module& module)
{

    pybind11::class_<class ::clang::TranslationUnitDecl, autowig::HolderType< class ::clang::TranslationUnitDecl >::Type, class ::clang::Decl, class ::clang::DeclContext > class_b968379b40f8521d806301d873d53080(module, "TranslationUnitDecl", "");
    class_b968379b40f8521d806301d873d53080.def("get_ast_context", method_pointer_2bd67ec6dfd3505b97e4b5e071aa959c, pybind11::return_value_policy::reference_internal, "");
    class_b968379b40f8521d806301d873d53080.def("get_ast_context", autowig::method_decorator_2bd67ec6dfd3505b97e4b5e071aa959c);
    class_b968379b40f8521d806301d873d53080.def("get_anonymous_namespace", method_pointer_969c1e0c83b45b5a90557b8ea88354c5, pybind11::return_value_policy::reference_internal, "");
    class_b968379b40f8521d806301d873d53080.def("set_anonymous_namespace", method_pointer_9b72dcbe0c14514b91d135e15d99b193, "");
    class_b968379b40f8521d806301d873d53080.def_static("create", method_pointer_64e404a41f4d56c98640039063118208, pybind11::return_value_policy::reference_internal, "");
    class_b968379b40f8521d806301d873d53080.def_static("classof", method_pointer_ce02c8b4feb95457b9ad9f91f71d3476, "");
    class_b968379b40f8521d806301d873d53080.def_static("classof_kind", method_pointer_c98df1610ef05283a599f30ef2c955e8, "");
    class_b968379b40f8521d806301d873d53080.def_static("cast_to_decl_context", method_pointer_15cf6962e6c457daa799f6cfbadf8f56, pybind11::return_value_policy::reference_internal, "");
    class_b968379b40f8521d806301d873d53080.def_static("cast_from_decl_context", method_pointer_0ad4e62f603d574bb7ff20e01d34ce03, pybind11::return_value_policy::reference_internal, "");

}