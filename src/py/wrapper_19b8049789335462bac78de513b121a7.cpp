#include "_clanglite.h"


namespace autowig
{
}


void wrapper_19b8049789335462bac78de513b121a7()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_d254dcf91a0953daa328a891fbafb204)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    bool  (*method_pointer_6b31830154f551c78adb472b4d2a4f50)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    bool  (*method_pointer_0d277fff003d5615a56e9ce23fe4f705)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_778c284b14f254e68a8c8f2933a43bbb)() const = &::clang::ObjCPropertyImplDecl::getLocStart;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_46779851429250a7946ddb7f928f1b97)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_7fb27b145dcf554ba660b2deda2e1d1a)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_84c712090fdf56458f6ff4bfe487b6ed)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDeclLoc;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_b98c34b0a473567cbcfbab8cf7aa8b29)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_de7a68bdc5b65fd6ad4a808f598e1ab0)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setAtLoc;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_e6129f9f86d55ad3aecd5ad1621a0f79)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_c6db1916d9e7528f84763354ebe130d2)(class ::clang::ObjCIvarDecl  *, class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setPropertyIvarDecl;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_d254dcf91a0953daa328a891fbafb204, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_6b31830154f551c78adb472b4d2a4f50, "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_0d277fff003d5615a56e9ce23fe4f705, "");
    class_19b8049789335462bac78de513b121a7.def("get_loc_start", method_pointer_778c284b14f254e68a8c8f2933a43bbb, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_46779851429250a7946ddb7f928f1b97, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_7fb27b145dcf554ba660b2deda2e1d1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl_loc", method_pointer_84c712090fdf56458f6ff4bfe487b6ed, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_b98c34b0a473567cbcfbab8cf7aa8b29, "");
    class_19b8049789335462bac78de513b121a7.def("set_at_loc", method_pointer_de7a68bdc5b65fd6ad4a808f598e1ab0, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_e6129f9f86d55ad3aecd5ad1621a0f79, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_ivar_decl", method_pointer_c6db1916d9e7528f84763354ebe130d2, "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}