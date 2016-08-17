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
    void  (::clang::FriendDecl::*method_pointer_15e4695da817519083e3cf319b9f2ebf)(bool ) = &::clang::FriendDecl::setUnsupportedFriend;
    bool  (*method_pointer_8e4a9bca199c5427a929bb2194f8ec4c)(class ::clang::Decl  const *) = ::clang::FriendDecl::classof;
    class ::clang::FriendDecl  * (*method_pointer_0805bf21e3b4566a98d3103b2db0b9df)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::FriendDecl::CreateDeserialized;
    bool  (::clang::FriendDecl::*method_pointer_6d1e713772c25af3863b293bc5cdd130)() const = &::clang::FriendDecl::isUnsupportedFriend;
    unsigned int  (::clang::FriendDecl::*method_pointer_b3787a6fac445808b882bd27f150886e)() const = &::clang::FriendDecl::getFriendTypeNumTemplateParameterLists;
    class ::clang::NamedDecl  * (::clang::FriendDecl::*method_pointer_ec51a9f78c805293856bd5b443398e78)() const = &::clang::FriendDecl::getFriendDecl;
    bool  (*method_pointer_f80bdde72e83500fbd3dd089b6464c94)(enum ::clang::Decl::Kind ) = ::clang::FriendDecl::classofKind;
    boost::python::class_< class ::clang::FriendDecl, autowig::HeldType< class ::clang::FriendDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_902a9bb2e95657b784deb3b4e5d5526b("FriendDecl", "", boost::python::no_init);
    class_902a9bb2e95657b784deb3b4e5d5526b.def("set_unsupported_friend", method_pointer_15e4695da817519083e3cf319b9f2ebf, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof", method_pointer_8e4a9bca199c5427a929bb2194f8ec4c, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("create_deserialized", method_pointer_0805bf21e3b4566a98d3103b2db0b9df, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("is_unsupported_friend", method_pointer_6d1e713772c25af3863b293bc5cdd130, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_type_num_template_parameter_lists", method_pointer_b3787a6fac445808b882bd27f150886e, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_decl", method_pointer_ec51a9f78c805293856bd5b443398e78, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof_kind", method_pointer_f80bdde72e83500fbd3dd089b6464c94, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof_kind");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("create_deserialized");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}