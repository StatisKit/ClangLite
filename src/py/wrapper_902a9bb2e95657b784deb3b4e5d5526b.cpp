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
    class ::clang::FriendDecl  * (*method_pointer_0605f43f9ca852cea6b56be62e682fe7)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::FriendDecl::CreateDeserialized;
    bool  (*method_pointer_4ab6db04fbc05386a614e0d6d4b77cc0)(class ::clang::Decl  const *) = ::clang::FriendDecl::classof;
    bool  (*method_pointer_80f40f4366d05405b1e3bb66ecd309e4)(enum ::clang::Decl::Kind ) = ::clang::FriendDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::FriendDecl::*method_pointer_e3eb7f4ef9625be194adbc4a7b256552)() const = &::clang::FriendDecl::getFriendDecl;
    class ::clang::SourceLocation  (::clang::FriendDecl::*method_pointer_817a9d806ded55a68a96475b55d10af7)() const = &::clang::FriendDecl::getFriendLoc;
    unsigned int  (::clang::FriendDecl::*method_pointer_31d133b69a8854f08de1aa8663497bb7)() const = &::clang::FriendDecl::getFriendTypeNumTemplateParameterLists;
    bool  (::clang::FriendDecl::*method_pointer_0572f80b43cb5462bcde6501a6fdbac1)() const = &::clang::FriendDecl::isUnsupportedFriend;
    void  (::clang::FriendDecl::*method_pointer_8fe880e9810f5537ac32ae38fa907537)(bool ) = &::clang::FriendDecl::setUnsupportedFriend;
    boost::python::class_< class ::clang::FriendDecl, autowig::HeldType< class ::clang::FriendDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_902a9bb2e95657b784deb3b4e5d5526b("FriendDecl", "", boost::python::no_init);
    class_902a9bb2e95657b784deb3b4e5d5526b.def("create_deserialized", method_pointer_0605f43f9ca852cea6b56be62e682fe7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof", method_pointer_4ab6db04fbc05386a614e0d6d4b77cc0, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof_kind", method_pointer_80f40f4366d05405b1e3bb66ecd309e4, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_decl", method_pointer_e3eb7f4ef9625be194adbc4a7b256552, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_loc", method_pointer_817a9d806ded55a68a96475b55d10af7, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_type_num_template_parameter_lists", method_pointer_31d133b69a8854f08de1aa8663497bb7, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("is_unsupported_friend", method_pointer_0572f80b43cb5462bcde6501a6fdbac1, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("set_unsupported_friend", method_pointer_8fe880e9810f5537ac32ae38fa907537, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof_kind");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("create_deserialized");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}