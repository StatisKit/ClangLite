#include "_clanglite.h"

class ::clang::FriendDecl * (*method_pointer_313d62f5e1155c27a374d262d1d0cf10)(class ::clang::ASTContext &, unsigned int , unsigned int )= ::clang::FriendDecl::CreateDeserialized;
unsigned int  (::clang::FriendDecl::*method_pointer_64f9b69545bb5b55be711fb798e02a8f)()const= &::clang::FriendDecl::getFriendTypeNumTemplateParameterLists;
class ::clang::NamedDecl * (::clang::FriendDecl::*method_pointer_9d0769e1c5a95ef1bbd3f3ce2053e7df)()const= &::clang::FriendDecl::getFriendDecl;
class ::clang::SourceLocation  (::clang::FriendDecl::*method_pointer_abd897004ca95fbf89204c2891b614bb)()const= &::clang::FriendDecl::getFriendLoc;
bool  (::clang::FriendDecl::*method_pointer_9e33cbbfc29f57ecbd64aeef13b5429c)()const= &::clang::FriendDecl::isUnsupportedFriend;
void  (::clang::FriendDecl::*method_pointer_b8260f1b5684520db53ab443ff976b0c)(bool )= &::clang::FriendDecl::setUnsupportedFriend;
bool  (*method_pointer_9c6213a019b65e60ad27d703fbd785c5)(class ::clang::Decl const *)= ::clang::FriendDecl::classof;
bool  (*method_pointer_81efb23d1246509e8074c1574b4f25f1)(enum ::clang::Decl::Kind )= ::clang::FriendDecl::classofKind;


void wrapper_902a9bb2e95657b784deb3b4e5d5526b(pybind11::module& module)
{

    pybind11::class_<class ::clang::FriendDecl, autowig::HolderType< class ::clang::FriendDecl >::Type, class ::clang::Decl > class_902a9bb2e95657b784deb3b4e5d5526b(module, "FriendDecl", "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def_static("create_deserialized", method_pointer_313d62f5e1155c27a374d262d1d0cf10, pybind11::return_value_policy::reference_internal, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_type_num_template_parameter_lists", method_pointer_64f9b69545bb5b55be711fb798e02a8f, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_decl", method_pointer_9d0769e1c5a95ef1bbd3f3ce2053e7df, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::NamedDecl`\n\n");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_loc", method_pointer_abd897004ca95fbf89204c2891b614bb, ":Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("is_unsupported_friend", method_pointer_9e33cbbfc29f57ecbd64aeef13b5429c, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("set_unsupported_friend", method_pointer_b8260f1b5684520db53ab443ff976b0c, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def_static("classof", method_pointer_9c6213a019b65e60ad27d703fbd785c5, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def_static("classof_kind", method_pointer_81efb23d1246509e8074c1574b4f25f1, "");

}