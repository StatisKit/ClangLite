#include "_clanglite.h"

class ::clang::SourceLocation  (::clang::UsingDecl::*method_pointer_b36139fc68ad536dae803c9c0a658de9)()const= &::clang::UsingDecl::getUsingLoc;
void  (::clang::UsingDecl::*method_pointer_0adf0cfc43965418ba99266d031213b9)(class ::clang::SourceLocation )= &::clang::UsingDecl::setUsingLoc;
bool  (::clang::UsingDecl::*method_pointer_b5a5d8ad527b5f339618fecbbdba45ac)()const= &::clang::UsingDecl::isAccessDeclaration;
bool  (::clang::UsingDecl::*method_pointer_177554ee466d56c8bd64dc83c7a4453a)()const= &::clang::UsingDecl::hasTypename;
void  (::clang::UsingDecl::*method_pointer_e5a07da8d2df5b5c835d4ed4d0d928e4)(bool )= &::clang::UsingDecl::setTypename;
unsigned int  (::clang::UsingDecl::*method_pointer_2fa642104fd458d0b9565d2337e1d765)()const= &::clang::UsingDecl::shadow_size;
void  (::clang::UsingDecl::*method_pointer_3c5bf25e9afd51878664ed8d2c3bfdf3)(class ::clang::UsingShadowDecl *)= &::clang::UsingDecl::addShadowDecl;
void  (::clang::UsingDecl::*method_pointer_1d0533e6a0dc503393972f4a6c9d9f0d)(class ::clang::UsingShadowDecl *)= &::clang::UsingDecl::removeShadowDecl;
class ::clang::UsingDecl * (*method_pointer_4a19b7814930548f933cbef14a077f28)(class ::clang::ASTContext &, unsigned int )= ::clang::UsingDecl::CreateDeserialized;
class ::clang::UsingDecl * (::clang::UsingDecl::*method_pointer_0269e44773365d91901c0227c1a00e83)()= &::clang::UsingDecl::getCanonicalDecl;
class ::clang::UsingDecl const * (::clang::UsingDecl::*method_pointer_22cc9f1cca4a599f9a02e7e97f87bcd4)()const= &::clang::UsingDecl::getCanonicalDecl;
bool  (*method_pointer_f119a7997fb05895963480bf52d68eb9)(class ::clang::Decl const *)= ::clang::UsingDecl::classof;
bool  (*method_pointer_ad10e1a8162557079d305922aaedc551)(enum ::clang::Decl::Kind )= ::clang::UsingDecl::classofKind;

namespace autowig {
}

void wrapper_e7b3b4e4c9fa5685aa128e57eb78adb2(pybind11::module& module)
{

    pybind11::class_<class ::clang::UsingDecl, autowig::HolderType< class ::clang::UsingDecl >::Type, class ::clang::NamedDecl > class_e7b3b4e4c9fa5685aa128e57eb78adb2(module, "UsingDecl", "Represents a C++ using-declaration.\n\nFor example:\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_using_loc", method_pointer_b36139fc68ad536dae803c9c0a658de9, "Return the source location of the ‘using’ keyword.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_using_loc", method_pointer_0adf0cfc43965418ba99266d031213b9, "Set the source location of the ‘using’ keyword.\n\n:Parameter:\n    `L` (:cpp:class:`::clang::SourceLocation`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("is_access_declaration", method_pointer_b5a5d8ad527b5f339618fecbbdba45ac, "Return true if it is a C++03 access declaration (no ‘using’).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("has_typename", method_pointer_177554ee466d56c8bd64dc83c7a4453a, "Return true if the using declaration has ‘typename’.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_typename", method_pointer_e5a07da8d2df5b5c835d4ed4d0d928e4, "Sets whether the using declaration has ‘typename’.\n\n:Parameter:\n    `TN` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("shadow_size", method_pointer_2fa642104fd458d0b9565d2337e1d765, "Return the number of shadowed declarations associated with this using\ndeclaration.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("add_shadow_decl", method_pointer_3c5bf25e9afd51878664ed8d2c3bfdf3, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("remove_shadow_decl", method_pointer_1d0533e6a0dc503393972f4a6c9d9f0d, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def_static("create_deserialized", method_pointer_4a19b7814930548f933cbef14a077f28, pybind11::return_value_policy::reference_internal, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_0269e44773365d91901c0227c1a00e83, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::UsingDecl`\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_22cc9f1cca4a599f9a02e7e97f87bcd4, pybind11::return_value_policy::reference_internal, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def_static("classof", method_pointer_f119a7997fb05895963480bf52d68eb9, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def_static("classof_kind", method_pointer_ad10e1a8162557079d305922aaedc551, "");

}