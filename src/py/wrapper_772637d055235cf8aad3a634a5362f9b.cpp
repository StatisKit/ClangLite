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
    class ::clang::ObjCPropertyDecl  * (*method_pointer_3b55d297579753c09280016e24dfaa60)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyDecl::CreateDeserialized;
    bool  (*method_pointer_b85222d1ac3d51a6b899e89f34cd46a2)(class ::clang::Decl  const *) = ::clang::ObjCPropertyDecl::classof;
    bool  (*method_pointer_92ebfa5e40db5e3ab1d5604d30410988)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_f1eea8dea09f5592a662dd7cdd72f483)() const = &::clang::ObjCPropertyDecl::getAtLoc;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_3e3b22b4d6855dc3a32ad9b565aeb3c1)() const = &::clang::ObjCPropertyDecl::getGetterMethodDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_7f99d8a9390b5f38abcbe3182ab5680c)() const = &::clang::ObjCPropertyDecl::getLParenLoc;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyDecl::*method_pointer_2d9df01fbc40528a933e5d0a712883a8)() const = &::clang::ObjCPropertyDecl::getPropertyIvarDecl;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_39cca4c3edd05bea8eb22373acdcfa2a)() const = &::clang::ObjCPropertyDecl::getSetterMethodDecl;
    class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_334623dd1def5d1fbfc6352549f250c8)() const = &::clang::ObjCPropertyDecl::getType;
    class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_ec7b8db7ad3657c8abeec93d41e7258d)(class ::clang::QualType ) const = &::clang::ObjCPropertyDecl::getUsageType;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_2cc167c84c895759a83f4e88beda3647)() const = &::clang::ObjCPropertyDecl::isAtomic;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_48a711dc70885b4d971f3ff126038d9f)() const = &::clang::ObjCPropertyDecl::isReadOnly;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_0d70eff0c7055e0ea6037d1b9f902780)() const = &::clang::ObjCPropertyDecl::isRetaining;
    void  (::clang::ObjCPropertyDecl::*method_pointer_71cc2279e4e256e19d88c4f551d2070b)(unsigned int ) = &::clang::ObjCPropertyDecl::overwritePropertyAttributes;
    void  (::clang::ObjCPropertyDecl::*method_pointer_66e8089f92575c5aab6b0a27da354b65)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyDecl::setAtLoc;
    void  (::clang::ObjCPropertyDecl::*method_pointer_b3bd35043a42528f9113bcbaa203b4df)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setGetterMethodDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_9a312e3dcba159618acb01913381902b)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyDecl::setLParenLoc;
    void  (::clang::ObjCPropertyDecl::*method_pointer_7a0f35bdc7845b029439d7a6c0c25f1e)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCPropertyDecl::setPropertyIvarDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_a5e48aebf1d35bf4b01705a9f82ba754)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setSetterMethodDecl;
    boost::python::class_< class ::clang::ObjCPropertyDecl, autowig::HeldType< class ::clang::ObjCPropertyDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_772637d055235cf8aad3a634a5362f9b("ObjCPropertyDecl", "", boost::python::no_init);
    class_772637d055235cf8aad3a634a5362f9b.def("create_deserialized", method_pointer_3b55d297579753c09280016e24dfaa60, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof", method_pointer_b85222d1ac3d51a6b899e89f34cd46a2, "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof_kind", method_pointer_92ebfa5e40db5e3ab1d5604d30410988, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_at_loc", method_pointer_f1eea8dea09f5592a662dd7cdd72f483, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_getter_method_decl", method_pointer_3e3b22b4d6855dc3a32ad9b565aeb3c1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_l_paren_loc", method_pointer_7f99d8a9390b5f38abcbe3182ab5680c, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_property_ivar_decl", method_pointer_2d9df01fbc40528a933e5d0a712883a8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_setter_method_decl", method_pointer_39cca4c3edd05bea8eb22373acdcfa2a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_type", method_pointer_334623dd1def5d1fbfc6352549f250c8, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_usage_type", method_pointer_ec7b8db7ad3657c8abeec93d41e7258d, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_atomic", method_pointer_2cc167c84c895759a83f4e88beda3647, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_read_only", method_pointer_48a711dc70885b4d971f3ff126038d9f, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_retaining", method_pointer_0d70eff0c7055e0ea6037d1b9f902780, "");
    class_772637d055235cf8aad3a634a5362f9b.def("overwrite_property_attributes", method_pointer_71cc2279e4e256e19d88c4f551d2070b, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_at_loc", method_pointer_66e8089f92575c5aab6b0a27da354b65, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_getter_method_decl", method_pointer_b3bd35043a42528f9113bcbaa203b4df, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_l_paren_loc", method_pointer_9a312e3dcba159618acb01913381902b, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_property_ivar_decl", method_pointer_7a0f35bdc7845b029439d7a6c0c25f1e, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_setter_method_decl", method_pointer_a5e48aebf1d35bf4b01705a9f82ba754, "");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof_kind");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("create_deserialized");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}