#include "_clanglite.h"

class ::clang::ConstructorUsingShadowDecl * (*method_pointer_c4b918ac39155b0a900dcfa85e003fbb)(class ::clang::ASTContext &, class ::clang::DeclContext *, class ::clang::SourceLocation , class ::clang::UsingDecl *, class ::clang::NamedDecl *, bool )= ::clang::ConstructorUsingShadowDecl::Create;
class ::clang::ConstructorUsingShadowDecl * (*method_pointer_945b3ec2717450468b643a3946c8a988)(class ::clang::ASTContext &, unsigned int )= ::clang::ConstructorUsingShadowDecl::CreateDeserialized;
class ::clang::CXXRecordDecl const * (::clang::ConstructorUsingShadowDecl::*method_pointer_7d8fe187704659bfbc68f3cb6eab2d86)()const= &::clang::ConstructorUsingShadowDecl::getParent;
class ::clang::CXXRecordDecl * (::clang::ConstructorUsingShadowDecl::*method_pointer_bcd2883cdd7250bf8f30de7b6ced4b98)()= &::clang::ConstructorUsingShadowDecl::getParent;
class ::clang::ConstructorUsingShadowDecl * (::clang::ConstructorUsingShadowDecl::*method_pointer_7478c6ce0ca65da18d9567c7013e9a06)()const= &::clang::ConstructorUsingShadowDecl::getNominatedBaseClassShadowDecl;
class ::clang::ConstructorUsingShadowDecl * (::clang::ConstructorUsingShadowDecl::*method_pointer_4e1ee143b6335c02bd0367e52103afda)()const= &::clang::ConstructorUsingShadowDecl::getConstructedBaseClassShadowDecl;
class ::clang::CXXRecordDecl * (::clang::ConstructorUsingShadowDecl::*method_pointer_8fef68184f2c588497447f16d34d765c)()const= &::clang::ConstructorUsingShadowDecl::getNominatedBaseClass;
class ::clang::CXXRecordDecl * (::clang::ConstructorUsingShadowDecl::*method_pointer_f8b32b454cbd5e3baf27e2ddc1f9b1f1)()const= &::clang::ConstructorUsingShadowDecl::getConstructedBaseClass;
bool  (::clang::ConstructorUsingShadowDecl::*method_pointer_09d6ab552a86507f97e3f12c80b9eec6)()const= &::clang::ConstructorUsingShadowDecl::constructsVirtualBase;
class ::clang::CXXConstructorDecl * (::clang::ConstructorUsingShadowDecl::*method_pointer_e9ef33993a8057d49e9f2c89634b4f54)()const= &::clang::ConstructorUsingShadowDecl::getConstructor;
void  (::clang::ConstructorUsingShadowDecl::*method_pointer_f75d716b070c54d79b7e1d919edfb0c5)(class ::clang::NamedDecl *)= &::clang::ConstructorUsingShadowDecl::setConstructor;
bool  (*method_pointer_fe76d27284825a60ba2aa933194150a9)(class ::clang::Decl const *)= ::clang::ConstructorUsingShadowDecl::classof;
bool  (*method_pointer_28c10fe860ff54d49cd2f9581f46232c)(enum ::clang::Decl::Kind )= ::clang::ConstructorUsingShadowDecl::classofKind;

namespace autowig {
}

void wrapper_1826ae426a86563c999d176eb03c6750(pybind11::module& module)
{

    pybind11::class_<class ::clang::ConstructorUsingShadowDecl, autowig::HolderType< class ::clang::ConstructorUsingShadowDecl >::Type, class ::clang::UsingShadowDecl > class_1826ae426a86563c999d176eb03c6750(module, "ConstructorUsingShadowDecl", "Represents a shadow constructor declaration introduced into a class by a\nC++11 using-declaration that names a constructor.\n\nFor example:\n\n");
    class_1826ae426a86563c999d176eb03c6750.def_static("create", method_pointer_c4b918ac39155b0a900dcfa85e003fbb, pybind11::return_value_policy::reference_internal, "");
    class_1826ae426a86563c999d176eb03c6750.def_static("create_deserialized", method_pointer_945b3ec2717450468b643a3946c8a988, pybind11::return_value_policy::reference_internal, "");
    class_1826ae426a86563c999d176eb03c6750.def("get_parent", method_pointer_7d8fe187704659bfbc68f3cb6eab2d86, pybind11::return_value_policy::reference_internal, "");
    class_1826ae426a86563c999d176eb03c6750.def("get_parent", method_pointer_bcd2883cdd7250bf8f30de7b6ced4b98, pybind11::return_value_policy::reference_internal, "");
    class_1826ae426a86563c999d176eb03c6750.def("get_nominated_base_class_shadow_decl", method_pointer_7478c6ce0ca65da18d9567c7013e9a06, pybind11::return_value_policy::reference_internal, "Get the inheriting constructor declaration for the direct base class\nfrom which this using shadow declaration was inherited, if there is one.\nThis can be different for each redeclaration of the same shadow decl.\n\n:Return Type:\n    :cpp:class:`::clang::ConstructorUsingShadowDecl`\n\n");
    class_1826ae426a86563c999d176eb03c6750.def("get_constructed_base_class_shadow_decl", method_pointer_4e1ee143b6335c02bd0367e52103afda, pybind11::return_value_policy::reference_internal, "Get the inheriting constructor declaration for the base class for which\nwe don’t have an explicit initializer, if there is one.\n\n:Return Type:\n    :cpp:class:`::clang::ConstructorUsingShadowDecl`\n\n");
    class_1826ae426a86563c999d176eb03c6750.def("get_nominated_base_class", method_pointer_8fef68184f2c588497447f16d34d765c, pybind11::return_value_policy::reference_internal, "Get the base class that was named in the using declaration. This can be\ndifferent for each redeclaration of this same shadow decl.\n\n:Return Type:\n    :cpp:class:`::clang::CXXRecordDecl`\n\n");
    class_1826ae426a86563c999d176eb03c6750.def("get_constructed_base_class", method_pointer_f8b32b454cbd5e3baf27e2ddc1f9b1f1, pybind11::return_value_policy::reference_internal, "Get the base class whose constructor or constructor shadow declaration\nis passed the constructor arguments.\n\n:Return Type:\n    :cpp:class:`::clang::CXXRecordDecl`\n\n");
    class_1826ae426a86563c999d176eb03c6750.def("constructs_virtual_base", method_pointer_09d6ab552a86507f97e3f12c80b9eec6, "Returns\n:raw-latex:`\\c true if the constructed base class is a virtual base\nclass subobject of this declaration's class.`\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_1826ae426a86563c999d176eb03c6750.def("get_constructor", method_pointer_e9ef33993a8057d49e9f2c89634b4f54, pybind11::return_value_policy::reference_internal, "Get the constructor or constructor template in the derived class\ncorrespnding to this using shadow declaration, if it has been implicitly\ndeclared already.\n\n:Return Type:\n    :cpp:class:`::clang::CXXConstructorDecl`\n\n");
    class_1826ae426a86563c999d176eb03c6750.def("set_constructor", method_pointer_f75d716b070c54d79b7e1d919edfb0c5, "");
    class_1826ae426a86563c999d176eb03c6750.def_static("classof", method_pointer_fe76d27284825a60ba2aa933194150a9, "");
    class_1826ae426a86563c999d176eb03c6750.def_static("classof_kind", method_pointer_28c10fe860ff54d49cd2f9581f46232c, "");

}