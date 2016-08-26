#include "_clanglite.h"


namespace autowig
{
}


void wrapper_772637d055235cf8aad3a634a5362f9b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCPropertyDecl  * (*method_pointer_6c1d3eebdaf8533e85fb8c45887b4393)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyDecl::CreateDeserialized;
    bool  (*method_pointer_a436dd41907d5979adc95521b70a6a72)(class ::clang::Decl  const *) = ::clang::ObjCPropertyDecl::classof;
    bool  (*method_pointer_52901f5fed215de589f78ac201afd153)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_61d8e4d3ff935f64a4e734472064943f)() const = &::clang::ObjCPropertyDecl::getAtLoc;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_038226fdcda0561fa890dd3cdbb8e8fd)() const = &::clang::ObjCPropertyDecl::getGetterMethodDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyDecl::*method_pointer_f14211fa8e0950e9a549837d4a514cdb)() const = &::clang::ObjCPropertyDecl::getLParenLoc;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyDecl::*method_pointer_56c2a41349a55f9ba2bdbf4ed6fe91c8)() const = &::clang::ObjCPropertyDecl::getPropertyIvarDecl;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCPropertyDecl::*method_pointer_1ca56a7b1e15556888e33620a23b38b3)() const = &::clang::ObjCPropertyDecl::getSetterMethodDecl;
    class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_7f5d293e927a59e2a61f3c7be7c7f586)() const = &::clang::ObjCPropertyDecl::getType;
    class ::clang::QualType  (::clang::ObjCPropertyDecl::*method_pointer_e8455ad2ee1656dd8a848f3fd20c89b0)(class ::clang::QualType ) const = &::clang::ObjCPropertyDecl::getUsageType;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_d2fe262bde7c561e914f671a74c90b7c)() const = &::clang::ObjCPropertyDecl::isAtomic;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_00e7b4ff99a95e77a15ea87b47c1997e)() const = &::clang::ObjCPropertyDecl::isReadOnly;
    bool  (::clang::ObjCPropertyDecl::*method_pointer_2e8e866b8433557ca9997844865a500e)() const = &::clang::ObjCPropertyDecl::isRetaining;
    void  (::clang::ObjCPropertyDecl::*method_pointer_c57c8d51518651ea93d9a8ae1beb5904)(unsigned int ) = &::clang::ObjCPropertyDecl::overwritePropertyAttributes;
    void  (::clang::ObjCPropertyDecl::*method_pointer_3a534ab6537252c7823f1c7719761a04)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyDecl::setAtLoc;
    void  (::clang::ObjCPropertyDecl::*method_pointer_13d2c064476a5dbdb00a3f025147f2a6)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setGetterMethodDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_277567e1a3035a4196a3c65e6f7bbb19)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyDecl::setLParenLoc;
    void  (::clang::ObjCPropertyDecl::*method_pointer_11bba94ffaff54e7a24ccc0e14414ea1)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCPropertyDecl::setPropertyIvarDecl;
    void  (::clang::ObjCPropertyDecl::*method_pointer_00d43521c4685f8b8e6e84cf8a0c78a3)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCPropertyDecl::setSetterMethodDecl;
    boost::python::class_< class ::clang::ObjCPropertyDecl, autowig::HeldType< class ::clang::ObjCPropertyDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_772637d055235cf8aad3a634a5362f9b("ObjCPropertyDecl", "", boost::python::no_init);
    class_772637d055235cf8aad3a634a5362f9b.def("create_deserialized", method_pointer_6c1d3eebdaf8533e85fb8c45887b4393, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof", method_pointer_a436dd41907d5979adc95521b70a6a72, "");
    class_772637d055235cf8aad3a634a5362f9b.def("classof_kind", method_pointer_52901f5fed215de589f78ac201afd153, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_at_loc", method_pointer_61d8e4d3ff935f64a4e734472064943f, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_getter_method_decl", method_pointer_038226fdcda0561fa890dd3cdbb8e8fd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_l_paren_loc", method_pointer_f14211fa8e0950e9a549837d4a514cdb, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_property_ivar_decl", method_pointer_56c2a41349a55f9ba2bdbf4ed6fe91c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_setter_method_decl", method_pointer_1ca56a7b1e15556888e33620a23b38b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_type", method_pointer_7f5d293e927a59e2a61f3c7be7c7f586, "");
    class_772637d055235cf8aad3a634a5362f9b.def("get_usage_type", method_pointer_e8455ad2ee1656dd8a848f3fd20c89b0, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_atomic", method_pointer_d2fe262bde7c561e914f671a74c90b7c, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_read_only", method_pointer_00e7b4ff99a95e77a15ea87b47c1997e, "");
    class_772637d055235cf8aad3a634a5362f9b.def("is_retaining", method_pointer_2e8e866b8433557ca9997844865a500e, "");
    class_772637d055235cf8aad3a634a5362f9b.def("overwrite_property_attributes", method_pointer_c57c8d51518651ea93d9a8ae1beb5904, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_at_loc", method_pointer_3a534ab6537252c7823f1c7719761a04, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_getter_method_decl", method_pointer_13d2c064476a5dbdb00a3f025147f2a6, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_l_paren_loc", method_pointer_277567e1a3035a4196a3c65e6f7bbb19, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_property_ivar_decl", method_pointer_11bba94ffaff54e7a24ccc0e14414ea1, "");
    class_772637d055235cf8aad3a634a5362f9b.def("set_setter_method_decl", method_pointer_00d43521c4685f8b8e6e84cf8a0c78a3, "");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof_kind");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("create_deserialized");
    class_772637d055235cf8aad3a634a5362f9b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}