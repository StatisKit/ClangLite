#include "_clanglite.h"

class ::clang::CXXMethodDecl * (::clang::ClassScopeFunctionSpecializationDecl::*method_pointer_38437ec3277654c8a69450f4e53bf048)()const= &::clang::ClassScopeFunctionSpecializationDecl::getSpecialization;
bool  (::clang::ClassScopeFunctionSpecializationDecl::*method_pointer_8d728074f4105ca6a5b5149d7497b420)()const= &::clang::ClassScopeFunctionSpecializationDecl::hasExplicitTemplateArgs;
class ::clang::ClassScopeFunctionSpecializationDecl * (*method_pointer_40a50a683c3b52e69f880090fde178c1)(class ::clang::ASTContext &, unsigned int )= ::clang::ClassScopeFunctionSpecializationDecl::CreateDeserialized;
bool  (*method_pointer_05b77dabb1cd5d6590df8ed269e2591f)(class ::clang::Decl const *)= ::clang::ClassScopeFunctionSpecializationDecl::classof;
bool  (*method_pointer_12845d4376a352f5bb1259b0f8ec055f)(enum ::clang::Decl::Kind )= ::clang::ClassScopeFunctionSpecializationDecl::classofKind;


void wrapper_ee2f6fcd9daa55ddac1faab4f85880a8(pybind11::module& module)
{

    pybind11::class_<class ::clang::ClassScopeFunctionSpecializationDecl, autowig::HolderType< class ::clang::ClassScopeFunctionSpecializationDecl >::Type, class ::clang::Decl > class_ee2f6fcd9daa55ddac1faab4f85880a8(module, "ClassScopeFunctionSpecializationDecl", "Declaration of a function specialization at template class scope.\n\nThis is a non-standard extension needed to support MSVC.\n\nFor example:\n\n");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("get_specialization", method_pointer_38437ec3277654c8a69450f4e53bf048, pybind11::return_value_policy::reference_internal, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("has_explicit_template_args", method_pointer_8d728074f4105ca6a5b5149d7497b420, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def_static("create_deserialized", method_pointer_40a50a683c3b52e69f880090fde178c1, pybind11::return_value_policy::reference_internal, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def_static("classof", method_pointer_05b77dabb1cd5d6590df8ed269e2591f, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def_static("classof_kind", method_pointer_12845d4376a352f5bb1259b0f8ec055f, "");

}