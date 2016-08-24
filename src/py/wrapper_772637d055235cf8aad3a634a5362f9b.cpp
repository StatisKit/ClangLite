#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_772637d055235cf8aad3a634a5362f9b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCPropertyDecl  * (*method_pointer_899fe5bf3dd75b909546f3543c7494a0)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyDecl::CreateDeserialized;
    bool  (*method_pointer_f5c1201dd2ee5690b4c7fc3b289c78e4)(class ::clang::Decl  const *) = ::clang::ObjCPropertyDecl::classof;
    bool  (*method_pointer_f99559f8bb2e5eaf9f9f4a904c4914c8)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_1815cb14dd7259aca6eb246fe9e41989)() const = &::clang::ObjCPropertyDecl::getAtLoc;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_7e6e05bd736a5092b349e19290ebcaf4)() const = &::clang::ObjCPropertyDecl::getGetterMethodDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_7010def0364355b0adaad8f5c4a9fe59)() const = &::clang::ObjCPropertyDecl::getLParenLoc;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyDecl::*method_pointer_78f98169c1a35ca3a7385c4ec586cd3a)() const = &::clang::ObjCPropertyDecl::getPropertyIvarDecl;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_75691cac7310557b808f367e89e4c465)() const = &::clang::ObjCPropertyDecl::getSetterMethodDecl;
    class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_6a554a9defe852229779846def75ac90)() const = &::clang::ObjCPropertyDecl::getType;
    class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_fa5bfa1d9da7543a90a970cf5ae381fd)(class ::clang::QualType ) const = &::clang::ObjCPropertyDecl::getUsageType;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_b88eb86ff6025744a27aad6d785a11bf)() const = &::clang::ObjCPropertyDecl::isAtomic;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_d2a5c48af1795fbaa406b6617f47c969)() const = &::clang::ObjCPropertyDecl::isReadOnly;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_e4ba1983b89750868b4515fccaa54e32)() const = &::clang::ObjCPropertyDecl::isRetaining;
    void  (::clang::ObjCPropertyDecl::*method_pointer_dd03929087fa5894a865ee2579d4203c)(unsigned int ) = &::clang::ObjCPropertyDecl::overwritePropertyAttributes;
    void  (::clang::ObjCPropertyDecl::*method_pointer_b5e8c8afc8b858338bc46bd598f14ba5)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyDecl::setAtLoc;
    void  (::clang::ObjCPropertyDecl::*method_pointer_43b8be1e5d6c5694ba24f972a8d4a507)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setGetterMethodDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_e7668b6500f65698825715eedfee2503)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyDecl::setLParenLoc;
    void  (::clang::ObjCPropertyDecl::*method_pointer_c4599f148d7252ddaba9f44fe64405da)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCPropertyDecl::setPropertyIvarDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_632b84cb17d155b7952041412c7084af)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setSetterMethodDecl;
    boost::python::class_< class ::clang::ObjCPropertyDecl, autowig::HeldType< class ::clang::ObjCPropertyDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_772637d055235cf8aad3a634a5362f9b("ObjCPropertyDecl", "", boost::python::no_init);
    class_772637d055235cf8aad3a634a5362f9b.def("create_deserialized", method_pointer_899fe5bf3dd75b909546f3543c7494a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof", method_pointer_f5c1201dd2ee5690b4c7fc3b289c78e4, "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof_kind", method_pointer_f99559f8bb2e5eaf9f9f4a904c4914c8, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_at_loc", method_pointer_1815cb14dd7259aca6eb246fe9e41989, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_getter_method_decl", method_pointer_7e6e05bd736a5092b349e19290ebcaf4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_l_paren_loc", method_pointer_7010def0364355b0adaad8f5c4a9fe59, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_property_ivar_decl", method_pointer_78f98169c1a35ca3a7385c4ec586cd3a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_setter_method_decl", method_pointer_75691cac7310557b808f367e89e4c465, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_type", method_pointer_6a554a9defe852229779846def75ac90, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_usage_type", method_pointer_fa5bfa1d9da7543a90a970cf5ae381fd, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_atomic", method_pointer_b88eb86ff6025744a27aad6d785a11bf, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_read_only", method_pointer_d2a5c48af1795fbaa406b6617f47c969, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_retaining", method_pointer_e4ba1983b89750868b4515fccaa54e32, "");
    class_772637d055235cf8aad3a634a5362f9b.def("overwrite_property_attributes", method_pointer_dd03929087fa5894a865ee2579d4203c, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_at_loc", method_pointer_b5e8c8afc8b858338bc46bd598f14ba5, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_getter_method_decl", method_pointer_43b8be1e5d6c5694ba24f972a8d4a507, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_l_paren_loc", method_pointer_e7668b6500f65698825715eedfee2503, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_property_ivar_decl", method_pointer_c4599f148d7252ddaba9f44fe64405da, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_setter_method_decl", method_pointer_632b84cb17d155b7952041412c7084af, "");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof_kind");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("create_deserialized");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}