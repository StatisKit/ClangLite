#include "_clanglite.h"


namespace autowig
{
}


void wrapper_39040e7b8b3d52478768b96bddf0e676()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCCompatibleAliasDecl  * (*method_pointer_97abae6e143052a09afe15b394f210fd)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCompatibleAliasDecl::CreateDeserialized;
    bool  (*method_pointer_0048cf831b475ca29489a66fd3d37796)(class ::clang::Decl  const *) = ::clang::ObjCCompatibleAliasDecl::classof;
    bool  (*method_pointer_1c82740175be54c6a882585610f9ef66)(enum ::clang::Decl::Kind ) = ::clang::ObjCCompatibleAliasDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCompatibleAliasDecl::*method_pointer_f46333e1838e5580a8e1928184f9d542)() const = &::clang::ObjCCompatibleAliasDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCompatibleAliasDecl::*method_pointer_e8e3713ea9065dfca6adab85a647ded4)() = &::clang::ObjCCompatibleAliasDecl::getClassInterface;
    void  (::clang::ObjCCompatibleAliasDecl::*method_pointer_a79af7d8f0f95530a93db6eff346d7b7)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCCompatibleAliasDecl::setClassInterface;
    boost::python::class_< class ::clang::ObjCCompatibleAliasDecl, autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_39040e7b8b3d52478768b96bddf0e676("ObjCCompatibleAliasDecl", "", boost::python::no_init);
    class_39040e7b8b3d52478768b96bddf0e676.def("create_deserialized", method_pointer_97abae6e143052a09afe15b394f210fd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("classof", method_pointer_0048cf831b475ca29489a66fd3d37796, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("classof_kind", method_pointer_1c82740175be54c6a882585610f9ef66, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_f46333e1838e5580a8e1928184f9d542, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_e8e3713ea9065dfca6adab85a647ded4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("set_class_interface", method_pointer_a79af7d8f0f95530a93db6eff346d7b7, "");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("classof_kind");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("create_deserialized");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}