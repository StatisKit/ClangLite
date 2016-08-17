#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_902a9bb2e95657b784deb3b4e5d5526b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamedDecl  * (::clang::FriendDecl::*method_pointer_3f78135d9ed05855a986c775afd93b0b)() const = &::clang::FriendDecl::getFriendDecl;
    bool  (*method_pointer_a099f22e53e35642b07cf2ea93a482e7)(class ::clang::Decl  const *) = ::clang::FriendDecl::classof;
    unsigned int  (::clang::FriendDecl::*method_pointer_74c841c0bfb2568f892511205858624d)() const = &::clang::FriendDecl::getFriendTypeNumTemplateParameterLists;
    void  (::clang::FriendDecl::*method_pointer_f99a3b77ce6d5d9592f31e83fac32009)(bool ) = &::clang::FriendDecl::setUnsupportedFriend;
    bool  (*method_pointer_2e75e64811ad56ab8389a8a0342bccfd)(enum ::clang::Decl::Kind ) = ::clang::FriendDecl::classofKind;
    class ::clang::FriendDecl  * (*method_pointer_1863887200075949bf0cb0d849b93f5c)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::FriendDecl::CreateDeserialized;
    bool  (::clang::FriendDecl::*method_pointer_adcbd08baf085aff90f58b3e4bc8fb86)() const = &::clang::FriendDecl::isUnsupportedFriend;
    boost::python::class_< class ::clang::FriendDecl, autowig::HeldType< class ::clang::FriendDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_902a9bb2e95657b784deb3b4e5d5526b("FriendDecl", "", boost::python::no_init);
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_decl", method_pointer_3f78135d9ed05855a986c775afd93b0b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof", method_pointer_a099f22e53e35642b07cf2ea93a482e7, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_type_num_template_parameter_lists", method_pointer_74c841c0bfb2568f892511205858624d, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("set_unsupported_friend", method_pointer_f99a3b77ce6d5d9592f31e83fac32009, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof_kind", method_pointer_2e75e64811ad56ab8389a8a0342bccfd, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("create_deserialized", method_pointer_1863887200075949bf0cb0d849b93f5c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("is_unsupported_friend", method_pointer_adcbd08baf085aff90f58b3e4bc8fb86, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof_kind");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("create_deserialized");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}