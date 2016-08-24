#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_902a9bb2e95657b784deb3b4e5d5526b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FriendDecl  * (*method_pointer_b19b522eb0c35deb92d004446875fbfd)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::FriendDecl::CreateDeserialized;
    bool  (*method_pointer_f5b53c7b16615dc0b8fd69cd6efd1e84)(class ::clang::Decl  const *) = ::clang::FriendDecl::classof;
    bool  (*method_pointer_4a554dbf9b785a7f9ca0455798d4522b)(enum ::clang::Decl::Kind ) = ::clang::FriendDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::FriendDecl::*method_pointer_3c1cf85f75765b998b9d16fba8a613fa)() const = &::clang::FriendDecl::getFriendDecl;
    class ::clang::SourceLocation  (::clang::FriendDecl::*method_pointer_0b795088039253d98614d4c99a0d88ec)() const = &::clang::FriendDecl::getFriendLoc;
    unsigned int  (::clang::FriendDecl::*method_pointer_e2f303c8186c59f698d7ecf97bfa3373)() const = &::clang::FriendDecl::getFriendTypeNumTemplateParameterLists;
    bool  (::clang::FriendDecl::*method_pointer_478dc1c0622c51ff9f5bd35b3de27a67)() const = &::clang::FriendDecl::isUnsupportedFriend;
    void  (::clang::FriendDecl::*method_pointer_e448fa483db45ab1a459061d7db6f56a)(bool ) = &::clang::FriendDecl::setUnsupportedFriend;
    boost::python::class_< class ::clang::FriendDecl, autowig::HeldType< class ::clang::FriendDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_902a9bb2e95657b784deb3b4e5d5526b("FriendDecl", "", boost::python::no_init);
    class_902a9bb2e95657b784deb3b4e5d5526b.def("create_deserialized", method_pointer_b19b522eb0c35deb92d004446875fbfd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof", method_pointer_f5b53c7b16615dc0b8fd69cd6efd1e84, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof_kind", method_pointer_4a554dbf9b785a7f9ca0455798d4522b, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_decl", method_pointer_3c1cf85f75765b998b9d16fba8a613fa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_loc", method_pointer_0b795088039253d98614d4c99a0d88ec, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_type_num_template_parameter_lists", method_pointer_e2f303c8186c59f698d7ecf97bfa3373, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("is_unsupported_friend", method_pointer_478dc1c0622c51ff9f5bd35b3de27a67, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("set_unsupported_friend", method_pointer_e448fa483db45ab1a459061d7db6f56a, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof_kind");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("create_deserialized");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}