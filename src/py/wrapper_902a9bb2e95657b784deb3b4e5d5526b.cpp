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
    class ::clang::FriendDecl  * (*method_pointer_245cf44d2955551e9f59df66e10752af)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::FriendDecl::CreateDeserialized;
    bool  (*method_pointer_004472d3f2de5ae09763c18eac6a7733)(class ::clang::Decl  const *) = ::clang::FriendDecl::classof;
    bool  (*method_pointer_781139a8b2775ceba1438f1424924953)(enum ::clang::Decl::Kind ) = ::clang::FriendDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::FriendDecl::*method_pointer_33627d6a83df5ef190c4f4ef158159c2)() const = &::clang::FriendDecl::getFriendDecl;
    unsigned int  (::clang::FriendDecl::*method_pointer_47dddde744195ae096a46699f7291cd8)() const = &::clang::FriendDecl::getFriendTypeNumTemplateParameterLists;
    bool  (::clang::FriendDecl::*method_pointer_4bc488956e4f5f08a16bbb9b772232ee)() const = &::clang::FriendDecl::isUnsupportedFriend;
    void  (::clang::FriendDecl::*method_pointer_ced6387a94da55eb85eb85762810118e)(bool ) = &::clang::FriendDecl::setUnsupportedFriend;
    boost::python::class_< class ::clang::FriendDecl, autowig::HeldType< class ::clang::FriendDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_902a9bb2e95657b784deb3b4e5d5526b("FriendDecl", "", boost::python::no_init);
    class_902a9bb2e95657b784deb3b4e5d5526b.def("create_deserialized", method_pointer_245cf44d2955551e9f59df66e10752af, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof", method_pointer_004472d3f2de5ae09763c18eac6a7733, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof_kind", method_pointer_781139a8b2775ceba1438f1424924953, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_decl", method_pointer_33627d6a83df5ef190c4f4ef158159c2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_type_num_template_parameter_lists", method_pointer_47dddde744195ae096a46699f7291cd8, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("is_unsupported_friend", method_pointer_4bc488956e4f5f08a16bbb9b772232ee, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("set_unsupported_friend", method_pointer_ced6387a94da55eb85eb85762810118e, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof_kind");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("create_deserialized");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}