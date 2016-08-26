#include "_clanglite.h"


namespace autowig
{
}


void wrapper_3298a1b3ddb4528fa8f00d1841c595c8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FriendTemplateDecl  * (*method_pointer_fae60014159b5251919c46cf77bb32e9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FriendTemplateDecl::CreateDeserialized;
    bool  (*method_pointer_c5c50b58f30e5a4a8fd5674625096b96)(class ::clang::Decl  const *) = ::clang::FriendTemplateDecl::classof;
    bool  (*method_pointer_7f1b8f8abe285205aebe11a469d82a1c)(enum ::clang::Decl::Kind ) = ::clang::FriendTemplateDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::FriendTemplateDecl::*method_pointer_e52d882384485ccb9ef4a8c0481b649f)() const = &::clang::FriendTemplateDecl::getFriendDecl;
    unsigned int  (::clang::FriendTemplateDecl::*method_pointer_cf7620f1aa6a591c976d6570e4b3b591)() const = &::clang::FriendTemplateDecl::getNumTemplateParameters;
    boost::python::class_< class ::clang::FriendTemplateDecl, autowig::HeldType< class ::clang::FriendTemplateDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_3298a1b3ddb4528fa8f00d1841c595c8("FriendTemplateDecl", "", boost::python::no_init);
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("create_deserialized", method_pointer_fae60014159b5251919c46cf77bb32e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof", method_pointer_c5c50b58f30e5a4a8fd5674625096b96, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof_kind", method_pointer_7f1b8f8abe285205aebe11a469d82a1c, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_decl", method_pointer_e52d882384485ccb9ef4a8c0481b649f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_num_template_parameters", method_pointer_cf7620f1aa6a591c976d6570e4b3b591, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof_kind");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("create_deserialized");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendTemplateDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}