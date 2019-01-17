#include "_clanglite.h"

class ::clang::FriendTemplateDecl * (*method_pointer_3177dbbc54535b22ae3926acbdb97c48)(class ::clang::ASTContext &, unsigned int )= ::clang::FriendTemplateDecl::CreateDeserialized;
class ::clang::NamedDecl * (::clang::FriendTemplateDecl::*method_pointer_40edc20eaf3753a3bb6ff64cb31ebd96)()const= &::clang::FriendTemplateDecl::getFriendDecl;
class ::clang::SourceLocation  (::clang::FriendTemplateDecl::*method_pointer_a8b169fbddc3505e9973306ec942cbd7)()const= &::clang::FriendTemplateDecl::getFriendLoc;
unsigned int  (::clang::FriendTemplateDecl::*method_pointer_8b9f981fff44566d841c46e3f846e78c)()const= &::clang::FriendTemplateDecl::getNumTemplateParameters;
bool  (*method_pointer_768f934959b856668a1665b00bd4b374)(class ::clang::Decl const *)= ::clang::FriendTemplateDecl::classof;
bool  (*method_pointer_df37ab77f6e451ff8e1e436f02b5fd94)(enum ::clang::Decl::Kind )= ::clang::FriendTemplateDecl::classofKind;


void wrapper_3298a1b3ddb4528fa8f00d1841c595c8(pybind11::module& module)
{

    pybind11::class_<class ::clang::FriendTemplateDecl, autowig::HolderType< class ::clang::FriendTemplateDecl >::Type, class ::clang::Decl > class_3298a1b3ddb4528fa8f00d1841c595c8(module, "FriendTemplateDecl", "Declaration of a friend template.\n\nFor example:\n\n.. note::\n\n    This class is not currently in use. All of the above will yield a\n    FriendDecl, not a FriendTemplateDecl.\n\n");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def_static("create_deserialized", method_pointer_3177dbbc54535b22ae3926acbdb97c48, pybind11::return_value_policy::reference_internal, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_decl", method_pointer_40edc20eaf3753a3bb6ff64cb31ebd96, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::NamedDecl`\n\n");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_loc", method_pointer_a8b169fbddc3505e9973306ec942cbd7, "Retrieves the location of the ‘friend’ keyword.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_num_template_parameters", method_pointer_8b9f981fff44566d841c46e3f846e78c, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def_static("classof", method_pointer_768f934959b856668a1665b00bd4b374, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def_static("classof_kind", method_pointer_df37ab77f6e451ff8e1e436f02b5fd94, "");

}