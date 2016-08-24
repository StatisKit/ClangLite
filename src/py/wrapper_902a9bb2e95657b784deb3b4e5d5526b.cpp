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
    class ::clang::FriendDecl  * (*method_pointer_11b84d41e22a50828988553a9d30678f)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::FriendDecl::CreateDeserialized;
    bool  (*method_pointer_b5d05ec017d65f84b19796d21f8e18ce)(class ::clang::Decl  const *) = ::clang::FriendDecl::classof;
    bool  (*method_pointer_132322c3015953a99f4d3d9fba256cc7)(enum ::clang::Decl::Kind ) = ::clang::FriendDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::FriendDecl::*method_pointer_ccd6041f7f1851149d7e9d2fe6a480c9)() const = &::clang::FriendDecl::getFriendDecl;
    class ::clang::SourceLocation  (::clang::FriendDecl::*method_pointer_70228579cec057a0848e02542e4abc04)() const = &::clang::FriendDecl::getFriendLoc;
    unsigned int  (::clang::FriendDecl::*method_pointer_5c2a1268289b512e92e9f643920674e8)() const = &::clang::FriendDecl::getFriendTypeNumTemplateParameterLists;
    bool  (::clang::FriendDecl::*method_pointer_b981a53b44a65136a66745e35af72fee)() const = &::clang::FriendDecl::isUnsupportedFriend;
    void  (::clang::FriendDecl::*method_pointer_671a0551f2ee5599b4ca06dd5b1a891a)(bool ) = &::clang::FriendDecl::setUnsupportedFriend;
    boost::python::class_< class ::clang::FriendDecl, autowig::HeldType< class ::clang::FriendDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_902a9bb2e95657b784deb3b4e5d5526b("FriendDecl", "", boost::python::no_init);
    class_902a9bb2e95657b784deb3b4e5d5526b.def("create_deserialized", method_pointer_11b84d41e22a50828988553a9d30678f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof", method_pointer_b5d05ec017d65f84b19796d21f8e18ce, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof_kind", method_pointer_132322c3015953a99f4d3d9fba256cc7, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_decl", method_pointer_ccd6041f7f1851149d7e9d2fe6a480c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_loc", method_pointer_70228579cec057a0848e02542e4abc04, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_type_num_template_parameter_lists", method_pointer_5c2a1268289b512e92e9f643920674e8, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("is_unsupported_friend", method_pointer_b981a53b44a65136a66745e35af72fee, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("set_unsupported_friend", method_pointer_671a0551f2ee5599b4ca06dd5b1a891a, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof_kind");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("create_deserialized");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}