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
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_8e303d43eb525689826a4cb2f7872cfc)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    bool  (*method_pointer_af2a14de282d52ecb16e3bfdac31daaf)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    bool  (*method_pointer_d07c126c171d5a80a98333c9155faa8a)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_064968be92b7599891b49b863b3eded9)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_81d85d3a99b252c0b284a4aa65aff061)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_67a0fd6614aa592e8575dfa5500343f0)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_9262a68d83365c658f02a828f6ee551c)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_8e303d43eb525689826a4cb2f7872cfc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_af2a14de282d52ecb16e3bfdac31daaf, "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_d07c126c171d5a80a98333c9155faa8a, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_064968be92b7599891b49b863b3eded9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_81d85d3a99b252c0b284a4aa65aff061, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_67a0fd6614aa592e8575dfa5500343f0, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_9262a68d83365c658f02a828f6ee551c, "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}