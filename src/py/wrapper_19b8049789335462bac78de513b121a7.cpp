#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_19b8049789335462bac78de513b121a7()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_d978a1fdda6258f7bddace10574e0c59)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    bool  (*method_pointer_5ef6d6a78c3c52af95d2f0e9ca4142a4)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    bool  (*method_pointer_8dc25c329daf5d4daa3886f6672e9ab5)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_6e548cf08e095bd9ab5d74a1bf7a6c57)() const = &::clang::ObjCPropertyImplDecl::getLocStart;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_c6cd4871f68a531890fdea63faed9804)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_8ad6f3f8a76b5fbcb43765ebde5413b2)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_04b80a870dd253ff9851f4abdd7ae136)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDeclLoc;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_91a0933efada57f7894b99e00d598714)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_e98f242d1f495fabaf5cc144775100fb)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setAtLoc;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_4861449419845b22b93ad1ddc9a3e6a5)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_ac92594cf1ad5340a4f55b48fbd3a99e)(class ::clang::ObjCIvarDecl  *, class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setPropertyIvarDecl;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_d978a1fdda6258f7bddace10574e0c59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_5ef6d6a78c3c52af95d2f0e9ca4142a4, "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_8dc25c329daf5d4daa3886f6672e9ab5, "");
    class_19b8049789335462bac78de513b121a7.def("get_loc_start", method_pointer_6e548cf08e095bd9ab5d74a1bf7a6c57, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_c6cd4871f68a531890fdea63faed9804, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_8ad6f3f8a76b5fbcb43765ebde5413b2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl_loc", method_pointer_04b80a870dd253ff9851f4abdd7ae136, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_91a0933efada57f7894b99e00d598714, "");
    class_19b8049789335462bac78de513b121a7.def("set_at_loc", method_pointer_e98f242d1f495fabaf5cc144775100fb, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_4861449419845b22b93ad1ddc9a3e6a5, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_ivar_decl", method_pointer_ac92594cf1ad5340a4f55b48fbd3a99e, "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}