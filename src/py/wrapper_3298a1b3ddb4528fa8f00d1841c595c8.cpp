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
    bool  (*method_pointer_a07a3d0bfa0559729e92278ef704bf47)(enum ::clang::Decl::Kind ) = ::clang::FriendTemplateDecl::classofKind;
    unsigned int  (::clang::FriendTemplateDecl::*method_pointer_4709f5d296105036a36c9ec680acba89)() const = &::clang::FriendTemplateDecl::getNumTemplateParameters;
    bool  (*method_pointer_50dfd2ab625e536886e6b4dd68b08268)(class ::clang::Decl  const *) = ::clang::FriendTemplateDecl::classof;
    class ::clang::NamedDecl  * (::clang::FriendTemplateDecl::*method_pointer_67a4d2e72c0f5e8d95bba4f9dde7d3ab)() const = &::clang::FriendTemplateDecl::getFriendDecl;
    class ::clang::FriendTemplateDecl  * (*method_pointer_618f5306db9657d188bfac014ed15ad0)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FriendTemplateDecl::CreateDeserialized;
    boost::python::class_< class ::clang::FriendTemplateDecl, autowig::HeldType< class ::clang::FriendTemplateDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_3298a1b3ddb4528fa8f00d1841c595c8("FriendTemplateDecl", "", boost::python::no_init);
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof_kind", method_pointer_a07a3d0bfa0559729e92278ef704bf47, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_num_template_parameters", method_pointer_4709f5d296105036a36c9ec680acba89, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof", method_pointer_50dfd2ab625e536886e6b4dd68b08268, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_decl", method_pointer_67a4d2e72c0f5e8d95bba4f9dde7d3ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("create_deserialized", method_pointer_618f5306db9657d188bfac014ed15ad0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof_kind");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("create_deserialized");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendTemplateDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}