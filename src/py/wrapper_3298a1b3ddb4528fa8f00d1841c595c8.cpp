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
    class ::clang::FriendTemplateDecl  * (*method_pointer_698799babd915f74bcd2c350ac3acf2d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FriendTemplateDecl::CreateDeserialized;
    bool  (*method_pointer_4b7499c8b68b5f46ac69f6bd8dd4b4f7)(class ::clang::Decl  const *) = ::clang::FriendTemplateDecl::classof;
    bool  (*method_pointer_d0f80c73b4f25af69ce8d3bf7c73cbed)(enum ::clang::Decl::Kind ) = ::clang::FriendTemplateDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::FriendTemplateDecl::*method_pointer_08c80091e1015c4bbe296e051cdaea2a)() const = &::clang::FriendTemplateDecl::getFriendDecl;
    class ::clang::SourceLocation  (::clang::FriendTemplateDecl::*method_pointer_ac3479e27ff253e9aa660a7cbcb75dab)() const = &::clang::FriendTemplateDecl::getFriendLoc;
    unsigned int  (::clang::FriendTemplateDecl::*method_pointer_93a212f254e850f3a8eb34c5820678bf)() const = &::clang::FriendTemplateDecl::getNumTemplateParameters;
    boost::python::class_< class ::clang::FriendTemplateDecl, autowig::HeldType< class ::clang::FriendTemplateDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_3298a1b3ddb4528fa8f00d1841c595c8("FriendTemplateDecl", "", boost::python::no_init);
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("create_deserialized", method_pointer_698799babd915f74bcd2c350ac3acf2d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof", method_pointer_4b7499c8b68b5f46ac69f6bd8dd4b4f7, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("classof_kind", method_pointer_d0f80c73b4f25af69ce8d3bf7c73cbed, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_decl", method_pointer_08c80091e1015c4bbe296e051cdaea2a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_friend_loc", method_pointer_ac3479e27ff253e9aa660a7cbcb75dab, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.def("get_num_template_parameters", method_pointer_93a212f254e850f3a8eb34c5820678bf, "");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof_kind");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("create_deserialized");
    class_3298a1b3ddb4528fa8f00d1841c595c8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FriendTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FriendTemplateDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}