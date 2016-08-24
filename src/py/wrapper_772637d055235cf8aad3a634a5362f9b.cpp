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
    class ::clang::ObjCPropertyDecl  * (*method_pointer_99b4707cf98a52f1ba7701acadfc8e30)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyDecl::CreateDeserialized;
    bool  (*method_pointer_4dcd54a08dac5df397179f5b0f6baefb)(class ::clang::Decl  const *) = ::clang::ObjCPropertyDecl::classof;
    bool  (*method_pointer_bf72f767150958b188c9fec534e557da)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_6898f62677c755a6a6d3d4e8f5408670)() const = &::clang::ObjCPropertyDecl::getAtLoc;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_5c97da190fdf59818fbb28156b60bc1a)() const = &::clang::ObjCPropertyDecl::getGetterMethodDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_5a920be501055307ba2d82ea233c19cb)() const = &::clang::ObjCPropertyDecl::getLParenLoc;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyDecl::*method_pointer_2b06472c550956aa8c03b8c54c7b5b83)() const = &::clang::ObjCPropertyDecl::getPropertyIvarDecl;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_35ff93f01b00554b975c56dc11c9056c)() const = &::clang::ObjCPropertyDecl::getSetterMethodDecl;
    class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_7e707e874e1b566399b999f928048886)() const = &::clang::ObjCPropertyDecl::getType;
    class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_fa933ff2306b5c9fb30eceeefc0fb560)(class ::clang::QualType ) const = &::clang::ObjCPropertyDecl::getUsageType;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_dc529b2a17fc5c7fa1ebdc6ab29dbc41)() const = &::clang::ObjCPropertyDecl::isAtomic;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_d4764b65c82d560d9d1b36451123e4e3)() const = &::clang::ObjCPropertyDecl::isReadOnly;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_b1ff7684fe705d928444f31975dbfb7b)() const = &::clang::ObjCPropertyDecl::isRetaining;
    void  (::clang::ObjCPropertyDecl::*method_pointer_fcebd88c0bca58cf846e4b1057aaa425)(unsigned int ) = &::clang::ObjCPropertyDecl::overwritePropertyAttributes;
    void  (::clang::ObjCPropertyDecl::*method_pointer_71b31902ec255497bfe018d72b327490)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyDecl::setAtLoc;
    void  (::clang::ObjCPropertyDecl::*method_pointer_14e86d9177b554daa793d151c54cac59)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setGetterMethodDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_2587604f6d605ecc81e762e52466a16f)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyDecl::setLParenLoc;
    void  (::clang::ObjCPropertyDecl::*method_pointer_8303b177d0e65ca783d03df42f59d634)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCPropertyDecl::setPropertyIvarDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_c13ef483f2fb5141bb211146d10b45e9)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setSetterMethodDecl;
    boost::python::class_< class ::clang::ObjCPropertyDecl, autowig::HeldType< class ::clang::ObjCPropertyDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_772637d055235cf8aad3a634a5362f9b("ObjCPropertyDecl", "", boost::python::no_init);
    class_772637d055235cf8aad3a634a5362f9b.def("create_deserialized", method_pointer_99b4707cf98a52f1ba7701acadfc8e30, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof", method_pointer_4dcd54a08dac5df397179f5b0f6baefb, "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof_kind", method_pointer_bf72f767150958b188c9fec534e557da, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_at_loc", method_pointer_6898f62677c755a6a6d3d4e8f5408670, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_getter_method_decl", method_pointer_5c97da190fdf59818fbb28156b60bc1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_l_paren_loc", method_pointer_5a920be501055307ba2d82ea233c19cb, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_property_ivar_decl", method_pointer_2b06472c550956aa8c03b8c54c7b5b83, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_setter_method_decl", method_pointer_35ff93f01b00554b975c56dc11c9056c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_type", method_pointer_7e707e874e1b566399b999f928048886, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_usage_type", method_pointer_fa933ff2306b5c9fb30eceeefc0fb560, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_atomic", method_pointer_dc529b2a17fc5c7fa1ebdc6ab29dbc41, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_read_only", method_pointer_d4764b65c82d560d9d1b36451123e4e3, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_retaining", method_pointer_b1ff7684fe705d928444f31975dbfb7b, "");
    class_772637d055235cf8aad3a634a5362f9b.def("overwrite_property_attributes", method_pointer_fcebd88c0bca58cf846e4b1057aaa425, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_at_loc", method_pointer_71b31902ec255497bfe018d72b327490, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_getter_method_decl", method_pointer_14e86d9177b554daa793d151c54cac59, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_l_paren_loc", method_pointer_2587604f6d605ecc81e762e52466a16f, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_property_ivar_decl", method_pointer_8303b177d0e65ca783d03df42f59d634, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_setter_method_decl", method_pointer_c13ef483f2fb5141bb211146d10b45e9, "");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof_kind");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("create_deserialized");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}