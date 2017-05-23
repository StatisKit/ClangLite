#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::FriendTemplateDecl const volatile * get_pointer<class ::clang::FriendTemplateDecl const volatile >(class ::clang::FriendTemplateDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3298a1b3ddb4528fa8f00d1841c595c8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FriendTemplateDecl * (*method_pointer_3177dbbc54535b22ae3926acbdb97c48)(class ::clang::ASTContext &, unsigned int ) = ::clang::FriendTemplateDecl::CreateDeserialized;
    class ::clang::NamedDecl * (::clang::FriendTemplateDecl::*method_pointer_40edc20eaf3753a3bb6ff64cb31ebd96)() const = &::clang::FriendTemplateDecl::getFriendDecl;
    class ::clang::SourceLocation  (::clang::FriendTemplateDecl::*method_pointer_a8b169fbddc3505e9973306ec942cbd7)() const = &::clang::FriendTemplateDecl::getFriendLoc;
    unsigned int  (::clang::FriendTemplateDecl::*method_pointer_8b9f981fff44566d841c46e3f846e78c)() const = &::clang::FriendTemplateDecl::getNumTemplateParameters;
    bool  (*method_pointer_768f934959b856668a1665b00bd4b374)(class ::clang::Decl const *) = ::clang::FriendTemplateDecl::classof;
    bool  (*method_pointer_df37ab77f6e451ff8e1e436f02b5fd94)(enum ::clang::Decl::Kind ) = ::clang::FriendTemplateDecl::classofKind;
    boost::python::class_< class ::clang::FriendTemplateDecl, autowig::Held< class ::clang::FriendTemplateDecl >::Type, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_3298a1b3ddb4528fa8f00d1841c595c8("FriendTemplateDecl", "Declaration of a friend template.\n\nFor example:\n\n.. note::\n\n    This class is not currently in use. All of the above will yield a\n    FriendDecl, not a FriendTemplateDecl.\n\n", boost::python::no_init);
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("create_deserialized", method_pointer_3177dbbc54535b22ae3926acbdb97c48, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_decl", method_pointer_40edc20eaf3753a3bb6ff64cb31ebd96, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.NamedDecl`\n\n");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_loc", method_pointer_a8b169fbddc3505e9973306ec942cbd7, "Retrieves the location of the 'friend' keyword.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_num_template_parameters", method_pointer_8b9f981fff44566d841c46e3f846e78c, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof", method_pointer_768f934959b856668a1665b00bd4b374, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof_kind", method_pointer_df37ab77f6e451ff8e1e436f02b5fd94, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof_kind");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("create_deserialized");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof");

    if(autowig::Held< class ::clang::FriendTemplateDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::FriendTemplateDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::FriendTemplateDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::FriendTemplateDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::FriendTemplateDecl >::Type, class ::clang::FriendTemplateDecl > > >();
    }

}