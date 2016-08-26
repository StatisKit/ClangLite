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
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_2f7ea36e67e45d2887309750fbc3a411)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    bool  (*method_pointer_7c26176a8f145bb8b5e36eb7b41449b7)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    bool  (*method_pointer_145e277a297d58af84b6d2d47abb366e)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_11a676b9d09857c7b908f93a1310c713)() const = &::clang::ObjCPropertyImplDecl::getLocStart;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_5aea102a9e8c50a6b7b5d529cb3ed076)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_8ab911d23c4854129828a68aba092449)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_58aa4213543c521ca61dc85c436b3317)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDeclLoc;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_ebcde13b304257979c61391304a9fda5)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_99c9e64e041158c9a1e2a9710c11d4ad)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setAtLoc;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_437c598bb64351468a8c01ff264ccdf6)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_7a34b1038f0855ff91f88e6c18fabf6e)(class ::clang::ObjCIvarDecl  *, class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setPropertyIvarDecl;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_2f7ea36e67e45d2887309750fbc3a411, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_7c26176a8f145bb8b5e36eb7b41449b7, "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_145e277a297d58af84b6d2d47abb366e, "");
    class_19b8049789335462bac78de513b121a7.def("get_loc_start", method_pointer_11a676b9d09857c7b908f93a1310c713, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_5aea102a9e8c50a6b7b5d529cb3ed076, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_8ab911d23c4854129828a68aba092449, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl_loc", method_pointer_58aa4213543c521ca61dc85c436b3317, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_ebcde13b304257979c61391304a9fda5, "");
    class_19b8049789335462bac78de513b121a7.def("set_at_loc", method_pointer_99c9e64e041158c9a1e2a9710c11d4ad, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_437c598bb64351468a8c01ff264ccdf6, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_ivar_decl", method_pointer_7a34b1038f0855ff91f88e6c18fabf6e, "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}