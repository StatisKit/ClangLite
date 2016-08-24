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
    class ::clang::FriendTemplateDecl  * (*method_pointer_bd7553e441ab5e6d82a7625aaee683be)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FriendTemplateDecl::CreateDeserialized;
    bool  (*method_pointer_b2c1d4efe76153d4a841101869293d43)(class ::clang::Decl  const *) = ::clang::FriendTemplateDecl::classof;
    bool  (*method_pointer_1fa7a3ab35035f6fb139eae3810c37b6)(enum ::clang::Decl::Kind ) = ::clang::FriendTemplateDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::FriendTemplateDecl::*method_pointer_200fb1a5fb8d5743ac23d719c793911c)() const = &::clang::FriendTemplateDecl::getFriendDecl;
    class ::clang::SourceLocation  (::clang::FriendTemplateDecl::*method_pointer_d8de221c1c935b3dbfcb4e4f00769358)() const = &::clang::FriendTemplateDecl::getFriendLoc;
    unsigned int  (::clang::FriendTemplateDecl::*method_pointer_027c9c5b473054dba7f3dc1f4df50545)() const = &::clang::FriendTemplateDecl::getNumTemplateParameters;
    boost::python::class_< class ::clang::FriendTemplateDecl, autowig::HeldType< class ::clang::FriendTemplateDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_3298a1b3ddb4528fa8f00d1841c595c8("FriendTemplateDecl", "", boost::python::no_init);
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("create_deserialized", method_pointer_bd7553e441ab5e6d82a7625aaee683be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof", method_pointer_b2c1d4efe76153d4a841101869293d43, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof_kind", method_pointer_1fa7a3ab35035f6fb139eae3810c37b6, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_decl", method_pointer_200fb1a5fb8d5743ac23d719c793911c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_loc", method_pointer_d8de221c1c935b3dbfcb4e4f00769358, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_num_template_parameters", method_pointer_027c9c5b473054dba7f3dc1f4df50545, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof_kind");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("create_deserialized");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendTemplateDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}