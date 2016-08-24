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
    class ::clang::FriendTemplateDecl  * (*method_pointer_8bb28e54d90c508c98f21973322845c3)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FriendTemplateDecl::CreateDeserialized;
    bool  (*method_pointer_5fb9dd908c0852e0941729a15dbef279)(class ::clang::Decl  const *) = ::clang::FriendTemplateDecl::classof;
    bool  (*method_pointer_5c6b6f441a7d58ad92cbdd3ffd284e50)(enum ::clang::Decl::Kind ) = ::clang::FriendTemplateDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::FriendTemplateDecl::*method_pointer_cabbb2d261a255f683a4344a11e9ae55)() const = &::clang::FriendTemplateDecl::getFriendDecl;
    class ::clang::SourceLocation  (::clang::FriendTemplateDecl::*method_pointer_bee460cdb2dc519b832d9d99fda19bd8)() const = &::clang::FriendTemplateDecl::getFriendLoc;
    unsigned int  (::clang::FriendTemplateDecl::*method_pointer_ea64b5b002cd5ec9bc27874f21de479f)() const = &::clang::FriendTemplateDecl::getNumTemplateParameters;
    boost::python::class_< class ::clang::FriendTemplateDecl, autowig::HeldType< class ::clang::FriendTemplateDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_3298a1b3ddb4528fa8f00d1841c595c8("FriendTemplateDecl", "", boost::python::no_init);
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("create_deserialized", method_pointer_8bb28e54d90c508c98f21973322845c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof", method_pointer_5fb9dd908c0852e0941729a15dbef279, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof_kind", method_pointer_5c6b6f441a7d58ad92cbdd3ffd284e50, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_decl", method_pointer_cabbb2d261a255f683a4344a11e9ae55, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_loc", method_pointer_bee460cdb2dc519b832d9d99fda19bd8, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_num_template_parameters", method_pointer_ea64b5b002cd5ec9bc27874f21de479f, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof_kind");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("create_deserialized");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendTemplateDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}