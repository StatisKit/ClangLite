#include "_clanglite.h"


namespace autowig
{
}


void wrapper_902a9bb2e95657b784deb3b4e5d5526b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FriendDecl  * (*method_pointer_37c78875bc205ad6b276c82dc2bc2e7b)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::FriendDecl::CreateDeserialized;
    bool  (*method_pointer_e6deac98aec55964ae054be3150fad6c)(class ::clang::Decl  const *) = ::clang::FriendDecl::classof;
    bool  (*method_pointer_b305b874fde253fca89ce55b30114543)(enum ::clang::Decl::Kind ) = ::clang::FriendDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::FriendDecl::*method_pointer_bab9a5f4d94a55cc9f6aa5756cfc90df)() const = &::clang::FriendDecl::getFriendDecl;
    class ::clang::SourceLocation  (::clang::FriendDecl::*method_pointer_a219f67359ab52dfab3271332210e322)() const = &::clang::FriendDecl::getFriendLoc;
    unsigned int  (::clang::FriendDecl::*method_pointer_27ae365ad16a58feae6f382314a992c8)() const = &::clang::FriendDecl::getFriendTypeNumTemplateParameterLists;
    bool  (::clang::FriendDecl::*method_pointer_cb47702cea2c5f34a5191299519b5751)() const = &::clang::FriendDecl::isUnsupportedFriend;
    void  (::clang::FriendDecl::*method_pointer_7994e652af885262b166e50e82a1392e)(bool ) = &::clang::FriendDecl::setUnsupportedFriend;
    boost::python::class_< class ::clang::FriendDecl, autowig::HeldType< class ::clang::FriendDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_902a9bb2e95657b784deb3b4e5d5526b("FriendDecl", "", boost::python::no_init);
    class_902a9bb2e95657b784deb3b4e5d5526b.def("create_deserialized", method_pointer_37c78875bc205ad6b276c82dc2bc2e7b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof", method_pointer_e6deac98aec55964ae054be3150fad6c, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof_kind", method_pointer_b305b874fde253fca89ce55b30114543, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_decl", method_pointer_bab9a5f4d94a55cc9f6aa5756cfc90df, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_loc", method_pointer_a219f67359ab52dfab3271332210e322, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_type_num_template_parameter_lists", method_pointer_27ae365ad16a58feae6f382314a992c8, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("is_unsupported_friend", method_pointer_cb47702cea2c5f34a5191299519b5751, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("set_unsupported_friend", method_pointer_7994e652af885262b166e50e82a1392e, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof_kind");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("create_deserialized");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}