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
    class ::clang::ObjCPropertyDecl  * (*method_pointer_f818c5be0b815b2db650b1dc829afb6b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyDecl::CreateDeserialized;
    bool  (*method_pointer_3884f81dd6925748aa125bbc2cae85c5)(class ::clang::Decl  const *) = ::clang::ObjCPropertyDecl::classof;
    bool  (*method_pointer_671b9e99748f58e5baa08906b1df36e7)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_5ac0d09185f852748e35b1197ddcf107)() const = &::clang::ObjCPropertyDecl::getAtLoc;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_5a1671e29c975bf1be632a066950b9cd)() const = &::clang::ObjCPropertyDecl::getGetterMethodDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_e71810b24b775af5acb05c30ab472e3d)() const = &::clang::ObjCPropertyDecl::getLParenLoc;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyDecl::*method_pointer_ff7c9eea002456f78eec1e915c556f26)() const = &::clang::ObjCPropertyDecl::getPropertyIvarDecl;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_351181e3f10a55d1a503c11158eefecc)() const = &::clang::ObjCPropertyDecl::getSetterMethodDecl;
    class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_c85e4a15a160502e82b78c5a0c8a5738)() const = &::clang::ObjCPropertyDecl::getType;
    class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_29cf5f73d76f5bd8840a5c71d33c9455)(class ::clang::QualType ) const = &::clang::ObjCPropertyDecl::getUsageType;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_ffaebc47e31e50c29c2e4ac6bff7e121)() const = &::clang::ObjCPropertyDecl::isAtomic;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_d443e908af115cd9ace8b3ae8480b35f)() const = &::clang::ObjCPropertyDecl::isReadOnly;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_02b52c7418c0598d933a7e2825cb63a1)() const = &::clang::ObjCPropertyDecl::isRetaining;
    void  (::clang::ObjCPropertyDecl::*method_pointer_2f82859a07625013846716c7f75534ce)(unsigned int ) = &::clang::ObjCPropertyDecl::overwritePropertyAttributes;
    void  (::clang::ObjCPropertyDecl::*method_pointer_e1a94ea671855bd8821cf77c4f2e83a0)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyDecl::setAtLoc;
    void  (::clang::ObjCPropertyDecl::*method_pointer_1b65f3e54e045740a806eac6d20f62b9)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setGetterMethodDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_d9afd4d1af665119b87d6585eadd5e9c)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyDecl::setLParenLoc;
    void  (::clang::ObjCPropertyDecl::*method_pointer_cb6b936075c65d57b2df19c973dc4c5a)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCPropertyDecl::setPropertyIvarDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_2fd72ea815335e1bb5bd04efb2b66dad)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setSetterMethodDecl;
    boost::python::class_< class ::clang::ObjCPropertyDecl, autowig::HeldType< class ::clang::ObjCPropertyDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_772637d055235cf8aad3a634a5362f9b("ObjCPropertyDecl", "", boost::python::no_init);
    class_772637d055235cf8aad3a634a5362f9b.def("create_deserialized", method_pointer_f818c5be0b815b2db650b1dc829afb6b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof", method_pointer_3884f81dd6925748aa125bbc2cae85c5, "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof_kind", method_pointer_671b9e99748f58e5baa08906b1df36e7, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_at_loc", method_pointer_5ac0d09185f852748e35b1197ddcf107, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_getter_method_decl", method_pointer_5a1671e29c975bf1be632a066950b9cd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_l_paren_loc", method_pointer_e71810b24b775af5acb05c30ab472e3d, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_property_ivar_decl", method_pointer_ff7c9eea002456f78eec1e915c556f26, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_setter_method_decl", method_pointer_351181e3f10a55d1a503c11158eefecc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_type", method_pointer_c85e4a15a160502e82b78c5a0c8a5738, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_usage_type", method_pointer_29cf5f73d76f5bd8840a5c71d33c9455, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_atomic", method_pointer_ffaebc47e31e50c29c2e4ac6bff7e121, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_read_only", method_pointer_d443e908af115cd9ace8b3ae8480b35f, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_retaining", method_pointer_02b52c7418c0598d933a7e2825cb63a1, "");
    class_772637d055235cf8aad3a634a5362f9b.def("overwrite_property_attributes", method_pointer_2f82859a07625013846716c7f75534ce, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_at_loc", method_pointer_e1a94ea671855bd8821cf77c4f2e83a0, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_getter_method_decl", method_pointer_1b65f3e54e045740a806eac6d20f62b9, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_l_paren_loc", method_pointer_d9afd4d1af665119b87d6585eadd5e9c, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_property_ivar_decl", method_pointer_cb6b936075c65d57b2df19c973dc4c5a, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_setter_method_decl", method_pointer_2fd72ea815335e1bb5bd04efb2b66dad, "");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof_kind");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("create_deserialized");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}