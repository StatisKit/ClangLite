#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_3298a1b3ddb4528fa8f00d1841c595c8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamedDecl  * (::clang::FriendTemplateDecl::*method_pointer_ed6f97f7f4e05f5e81909493491c8d95)() const = &::clang::FriendTemplateDecl::getFriendDecl;
    bool  (*method_pointer_7c54e9d9cafb5360901d7ac7df9b6318)(class ::clang::Decl  const *) = ::clang::FriendTemplateDecl::classof;
    class ::clang::FriendTemplateDecl  * (*method_pointer_d439e0c3d764534c9b59cda514b9e5a5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FriendTemplateDecl::CreateDeserialized;
    bool  (*method_pointer_4e698e98c9c451ada76c45a766110c38)(enum ::clang::Decl::Kind ) = ::clang::FriendTemplateDecl::classofKind;
    unsigned int  (::clang::FriendTemplateDecl::*method_pointer_8db561ef50c4503297513081d6c70edf)() const = &::clang::FriendTemplateDecl::getNumTemplateParameters;
    boost::python::class_< class ::clang::FriendTemplateDecl, autowig::HeldType< class ::clang::FriendTemplateDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_3298a1b3ddb4528fa8f00d1841c595c8("FriendTemplateDecl", "", boost::python::no_init);
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_decl", method_pointer_ed6f97f7f4e05f5e81909493491c8d95, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof", method_pointer_7c54e9d9cafb5360901d7ac7df9b6318, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("create_deserialized", method_pointer_d439e0c3d764534c9b59cda514b9e5a5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof_kind", method_pointer_4e698e98c9c451ada76c45a766110c38, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_num_template_parameters", method_pointer_8db561ef50c4503297513081d6c70edf, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof_kind");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("create_deserialized");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendTemplateDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}