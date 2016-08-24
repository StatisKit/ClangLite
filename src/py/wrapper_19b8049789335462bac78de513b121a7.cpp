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
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_3d55bf2a87b852cbb968144601d2e2da)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    bool  (*method_pointer_e2ae92807b855aa0aabf1f6bce3906cf)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    bool  (*method_pointer_8e59463985cc597c852173e8b46ef2dc)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_049ac0c446d5519184cc23d1db712a3b)() const = &::clang::ObjCPropertyImplDecl::getLocStart;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_f78c345c26bb5dffb0c3eafaceeca50d)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_2009de1a1c0a513e80ee7ff58a857b84)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_444f464eee1e5194bf3e601ca98dcef2)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDeclLoc;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_2bc2905e6fdf554a8601a6ac767dfe0d)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_1307ab39eeea53c2b4023b4fb38e18c7)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setAtLoc;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_6625c01eeeac52b8b25309f25a6f2849)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_96b559b9c19f529e9036720153213aa6)(class ::clang::ObjCIvarDecl  *, class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setPropertyIvarDecl;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_3d55bf2a87b852cbb968144601d2e2da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_e2ae92807b855aa0aabf1f6bce3906cf, "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_8e59463985cc597c852173e8b46ef2dc, "");
    class_19b8049789335462bac78de513b121a7.def("get_loc_start", method_pointer_049ac0c446d5519184cc23d1db712a3b, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_f78c345c26bb5dffb0c3eafaceeca50d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_2009de1a1c0a513e80ee7ff58a857b84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl_loc", method_pointer_444f464eee1e5194bf3e601ca98dcef2, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_2bc2905e6fdf554a8601a6ac767dfe0d, "");
    class_19b8049789335462bac78de513b121a7.def("set_at_loc", method_pointer_1307ab39eeea53c2b4023b4fb38e18c7, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_6625c01eeeac52b8b25309f25a6f2849, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_ivar_decl", method_pointer_96b559b9c19f529e9036720153213aa6, "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}