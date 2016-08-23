#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_3298a1b3ddb4528fa8f00d1841c595c8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FriendTemplateDecl  * (*method_pointer_8329a158191f5dd0a1c2f16a20090f43)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FriendTemplateDecl::CreateDeserialized;
    bool  (*method_pointer_470249c0a2fa5e519fe1204d17575117)(class ::clang::Decl  const *) = ::clang::FriendTemplateDecl::classof;
    bool  (*method_pointer_3c947b5716625f9b8254d9bedd1a906e)(enum ::clang::Decl::Kind ) = ::clang::FriendTemplateDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::FriendTemplateDecl::*method_pointer_958520479354591db4a0caffd28f26f3)() const = &::clang::FriendTemplateDecl::getFriendDecl;
    class ::clang::SourceLocation  (::clang::FriendTemplateDecl::*method_pointer_209d95a54e1159a4b68bed4095f84aeb)() const = &::clang::FriendTemplateDecl::getFriendLoc;
    unsigned int  (::clang::FriendTemplateDecl::*method_pointer_760f2edf4b815f96b59a0ac8fd2df5e1)() const = &::clang::FriendTemplateDecl::getNumTemplateParameters;
    boost::python::class_< class ::clang::FriendTemplateDecl, autowig::HeldType< class ::clang::FriendTemplateDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_3298a1b3ddb4528fa8f00d1841c595c8("FriendTemplateDecl", "", boost::python::no_init);
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("create_deserialized", method_pointer_8329a158191f5dd0a1c2f16a20090f43, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof", method_pointer_470249c0a2fa5e519fe1204d17575117, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof_kind", method_pointer_3c947b5716625f9b8254d9bedd1a906e, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_decl", method_pointer_958520479354591db4a0caffd28f26f3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_loc", method_pointer_209d95a54e1159a4b68bed4095f84aeb, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_num_template_parameters", method_pointer_760f2edf4b815f96b59a0ac8fd2df5e1, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof_kind");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("create_deserialized");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendTemplateDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}