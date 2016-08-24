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
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_3a1d62972a775b35a6a85c8a018ab930)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    bool  (*method_pointer_293c05986c075f3e9f5ec01dd5a0d3c8)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    bool  (*method_pointer_8a85cf26755a50d3bf4ec7b8a5fb6578)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_33e926eac4505dd08320e4f1de5e1240)() const = &::clang::ObjCPropertyImplDecl::getLocStart;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_f478334b356c57c8b6ea0977dd63fe46)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_7c4bf20b02955baf8c3d0f9410ca1ec5)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_eedb07d05ce2538096b595710b1ba7c6)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDeclLoc;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_5488e0624b9d5117895051ecd311ec6b)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_d9905e3c380b57aba6a4ee23d24316fe)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setAtLoc;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_b94e3860e1295ab7a566a99421b1f1de)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_3055a1e3cbb85020a188f4c5be527032)(class ::clang::ObjCIvarDecl  *, class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setPropertyIvarDecl;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_3a1d62972a775b35a6a85c8a018ab930, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_293c05986c075f3e9f5ec01dd5a0d3c8, "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_8a85cf26755a50d3bf4ec7b8a5fb6578, "");
    class_19b8049789335462bac78de513b121a7.def("get_loc_start", method_pointer_33e926eac4505dd08320e4f1de5e1240, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_f478334b356c57c8b6ea0977dd63fe46, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_7c4bf20b02955baf8c3d0f9410ca1ec5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl_loc", method_pointer_eedb07d05ce2538096b595710b1ba7c6, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_5488e0624b9d5117895051ecd311ec6b, "");
    class_19b8049789335462bac78de513b121a7.def("set_at_loc", method_pointer_d9905e3c380b57aba6a4ee23d24316fe, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_b94e3860e1295ab7a566a99421b1f1de, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_ivar_decl", method_pointer_3055a1e3cbb85020a188f4c5be527032, "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}