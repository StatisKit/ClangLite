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
    unsigned int  (::clang::FriendDecl::*method_pointer_5e5f5c44c8fc584b94f9203bcc76ea0b)() const = &::clang::FriendDecl::getFriendTypeNumTemplateParameterLists;
    void  (::clang::FriendDecl::*method_pointer_897e0acf24f7536fa035dd5d5705c7bf)(bool ) = &::clang::FriendDecl::setUnsupportedFriend;
    bool  (*method_pointer_749c8485d91c5c15a2146d7ba377e35c)(class ::clang::Decl  const *) = ::clang::FriendDecl::classof;
    bool  (::clang::FriendDecl::*method_pointer_5ea515195d2656a7b4a4695da301fa4f)() const = &::clang::FriendDecl::isUnsupportedFriend;
    class ::clang::NamedDecl  * (::clang::FriendDecl::*method_pointer_ebd275cddf82514daa0e57ba660f3d2a)() const = &::clang::FriendDecl::getFriendDecl;
    bool  (*method_pointer_89f97cfb1e755ce7b2864e0f6687d51c)(enum ::clang::Decl::Kind ) = ::clang::FriendDecl::classofKind;
    class ::clang::FriendDecl  * (*method_pointer_4ac68e055cb059f6b52a333a4f866c1c)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::FriendDecl::CreateDeserialized;
    boost::python::class_< class ::clang::FriendDecl, autowig::HeldType< class ::clang::FriendDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_902a9bb2e95657b784deb3b4e5d5526b("FriendDecl", "", boost::python::no_init);
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_type_num_template_parameter_lists", method_pointer_5e5f5c44c8fc584b94f9203bcc76ea0b, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("set_unsupported_friend", method_pointer_897e0acf24f7536fa035dd5d5705c7bf, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof", method_pointer_749c8485d91c5c15a2146d7ba377e35c, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("is_unsupported_friend", method_pointer_5ea515195d2656a7b4a4695da301fa4f, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_decl", method_pointer_ebd275cddf82514daa0e57ba660f3d2a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof_kind", method_pointer_89f97cfb1e755ce7b2864e0f6687d51c, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("create_deserialized", method_pointer_4ac68e055cb059f6b52a333a4f866c1c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof_kind");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("create_deserialized");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}