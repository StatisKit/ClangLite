#include "_clanglite.h"

class ::clang::CXXConstructorDecl * (*method_pointer_704898e9dd8b5724b599549aac4b65e0)(class ::clang::ASTContext &, unsigned int , bool )= ::clang::CXXConstructorDecl::CreateDeserialized;
bool  (::clang::CXXConstructorDecl::*method_pointer_436d8e0f25ad5f86b5250c3e83b67df6)()const= &::clang::CXXConstructorDecl::isExplicitSpecified;
bool  (::clang::CXXConstructorDecl::*method_pointer_2a420bc1202c520da699e3439e9e2335)()const= &::clang::CXXConstructorDecl::isExplicit;
unsigned int  (::clang::CXXConstructorDecl::*method_pointer_848581732eed58c9954fe9c77e2af5e2)()const= &::clang::CXXConstructorDecl::getNumCtorInitializers;
void  (::clang::CXXConstructorDecl::*method_pointer_f982c46e431b5b9aa4800fe0822163c9)(unsigned int )= &::clang::CXXConstructorDecl::setNumCtorInitializers;
bool  (::clang::CXXConstructorDecl::*method_pointer_d4f83507ddcb5fcbad0bae71da05b7bb)()const= &::clang::CXXConstructorDecl::isDelegatingConstructor;
class ::clang::CXXConstructorDecl * (::clang::CXXConstructorDecl::*method_pointer_755bbc08e36f525eb88f6723f0907ef7)()const= &::clang::CXXConstructorDecl::getTargetConstructor;
bool  (::clang::CXXConstructorDecl::*method_pointer_1e86e7ed0dc458b1bf4339d34221f5d2)()const= &::clang::CXXConstructorDecl::isDefaultConstructor;
bool  (::clang::CXXConstructorDecl::*method_pointer_1c9cf0c16b355de2809294ec18b71660)(unsigned int &)const= &::clang::CXXConstructorDecl::isCopyConstructor;
bool  (::clang::CXXConstructorDecl::*method_pointer_835991fb67b05fb6924ce1536801d7fb)()const= &::clang::CXXConstructorDecl::isCopyConstructor;
bool  (::clang::CXXConstructorDecl::*method_pointer_3ccd73aaeb7a5c2a84216ccf80218d0a)(unsigned int &)const= &::clang::CXXConstructorDecl::isMoveConstructor;
bool  (::clang::CXXConstructorDecl::*method_pointer_9147159f4f49532c9cbd09ab77e88376)()const= &::clang::CXXConstructorDecl::isMoveConstructor;
bool  (::clang::CXXConstructorDecl::*method_pointer_316871ecb9af57908fc485e5f2a27aa5)(unsigned int &)const= &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
bool  (::clang::CXXConstructorDecl::*method_pointer_a696f27374b459edbdc706c253a8ac42)()const= &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
bool  (::clang::CXXConstructorDecl::*method_pointer_805b15ae6ed55633b4d32a0f2ae96127)(bool )const= &::clang::CXXConstructorDecl::isConvertingConstructor;
bool  (::clang::CXXConstructorDecl::*method_pointer_ef2f912b098f5489a049b915206b20b3)()const= &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
bool  (::clang::CXXConstructorDecl::*method_pointer_823a2b81a91257cd89f753e83f7e1c36)()const= &::clang::CXXConstructorDecl::isInheritingConstructor;
class ::clang::CXXConstructorDecl * (::clang::CXXConstructorDecl::*method_pointer_b20e3e2e82e25a42bec5d7236cf25da6)()= &::clang::CXXConstructorDecl::getCanonicalDecl;
class ::clang::CXXConstructorDecl const * (::clang::CXXConstructorDecl::*method_pointer_eb929aa62f8d531986921295245a7b76)()const= &::clang::CXXConstructorDecl::getCanonicalDecl;
bool  (*method_pointer_20196d97cf25588c96e8ebbe1eaca97b)(class ::clang::Decl const *)= ::clang::CXXConstructorDecl::classof;
bool  (*method_pointer_25cdcd0db32050a9abe13e3b4062ca7b)(enum ::clang::Decl::Kind )= ::clang::CXXConstructorDecl::classofKind;


void wrapper_69ef5751cb19567085dced299c047c9f(pybind11::module& module)
{

    pybind11::class_<class ::clang::CXXConstructorDecl, autowig::HolderType< class ::clang::CXXConstructorDecl >::Type, class ::clang::CXXMethodDecl > class_69ef5751cb19567085dced299c047c9f(module, "CXXConstructorDecl", "Represents a C++ constructor within a class.\n\nFor example:\n\n");
    class_69ef5751cb19567085dced299c047c9f.def_static("create_deserialized", method_pointer_704898e9dd8b5724b599549aac4b65e0, pybind11::return_value_policy::reference_internal, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_436d8e0f25ad5f86b5250c3e83b67df6, "Determine whether this constructor declaration has the\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_2a420bc1202c520da699e3439e9e2335, "Determine whether this constructor was marked “explicit” or not.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_848581732eed58c9954fe9c77e2af5e2, "Determine the number of arguments used to initialize the member or base.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_f982c46e431b5b9aa4800fe0822163c9, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_d4f83507ddcb5fcbad0bae71da05b7bb, "Determine whether this constructor is a delegating constructor.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_755bbc08e36f525eb88f6723f0907ef7, pybind11::return_value_policy::reference_internal, "When this constructor delegates to another, retrieve the target.\n\n:Return Type:\n    :cpp:class:`::clang::CXXConstructorDecl`\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_1e86e7ed0dc458b1bf4339d34221f5d2, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_1c9cf0c16b355de2809294ec18b71660, "Whether this constructor is a copy constructor (C++ [class.copy]p2,\nwhich can be used to copy the class.\n\n:Parameter:\n    `TypeQuals` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_835991fb67b05fb6924ce1536801d7fb, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_3ccd73aaeb7a5c2a84216ccf80218d0a, "Determine whether this constructor is a move constructor (C++11\n[class.copy]p3), which can be used to move values of the class.\n\n:Parameter:\n    `TypeQuals` (:cpp:any:`unsigned` int) - If this constructor is a move constructor, will be set to the type\n                                            qualifiers on the referent of the first parameter’s type.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_9147159f4f49532c9cbd09ab77e88376, "Determine whether this constructor is a move constructor (C++11\n[class.copy]p3), which can be used to move values of the class.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_316871ecb9af57908fc485e5f2a27aa5, "Determine whether this is a copy or move constructor.\n\n:Parameter:\n    `TypeQuals` (:cpp:any:`unsigned` int) - Will be set to the type qualifiers on the reference parameter, if in\n                                            fact this is a copy or move constructor.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_a696f27374b459edbdc706c253a8ac42, "Determine whether this a copy or move constructor.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_805b15ae6ed55633b4d32a0f2ae96127, ":Parameter:\n    `AllowExplicit` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_ef2f912b098f5489a049b915206b20b3, "Determine whether this is a member template specialization that would\ncopy the object to itself. Such constructors are never used to copy an\nobject.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("is_inheriting_constructor", method_pointer_823a2b81a91257cd89f753e83f7e1c36, "Determine whether this is an implicit constructor synthesized to model a\ncall to a constructor inherited from a base class.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_b20e3e2e82e25a42bec5d7236cf25da6, pybind11::return_value_policy::reference_internal, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_eb929aa62f8d531986921295245a7b76, pybind11::return_value_policy::reference_internal, "");
    class_69ef5751cb19567085dced299c047c9f.def_static("classof", method_pointer_20196d97cf25588c96e8ebbe1eaca97b, "");
    class_69ef5751cb19567085dced299c047c9f.def_static("classof_kind", method_pointer_25cdcd0db32050a9abe13e3b4062ca7b, "");

}