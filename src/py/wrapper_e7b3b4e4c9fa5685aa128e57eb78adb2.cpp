#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_e7b3b4e4c9fa5685aa128e57eb78adb2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::UsingDecl::*method_pointer_6a5704647ce355cebe89e91eff734ce5)(bool ) = &::clang::UsingDecl::setTypename;
    class ::clang::UsingDecl  * (*method_pointer_eaa0a436bd7e5e2dac7125a5f0d82b10)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDecl::CreateDeserialized;
    void  (::clang::UsingDecl::*method_pointer_5480decd95675ba4aee65c90e7888394)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::removeShadowDecl;
    bool  (*method_pointer_55ebf494f3375b9ba0466f66299b3310)(class ::clang::Decl  const *) = ::clang::UsingDecl::classof;
    class ::clang::UsingDecl  * (::clang::UsingDecl::*method_pointer_f08310812e7555bd81fa1a7c7c1c315a)() = &::clang::UsingDecl::getCanonicalDecl;
    bool  (::clang::UsingDecl::*method_pointer_31667d07dfbb5e81a8d6ab3a9efc7a98)() const = &::clang::UsingDecl::isAccessDeclaration;
    void  (::clang::UsingDecl::*method_pointer_be3b20901af35c6ea0f1f36ceb6af845)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::addShadowDecl;
    unsigned int  (::clang::UsingDecl::*method_pointer_d5a1252c50615edf92f72d417c860827)() const = &::clang::UsingDecl::shadow_size;
    class ::clang::UsingDecl  const * (::clang::UsingDecl::*method_pointer_99224078f2855e76924c56a8d1bdedda)() const = &::clang::UsingDecl::getCanonicalDecl;
    bool  (*method_pointer_2353537178dc541ca050fd94e1bb3d4d)(enum ::clang::Decl::Kind ) = ::clang::UsingDecl::classofKind;
    bool  (::clang::UsingDecl::*method_pointer_de76772482ef5c79aec5e4d5ac1feedd)() const = &::clang::UsingDecl::hasTypename;
    boost::python::class_< class ::clang::UsingDecl, autowig::HeldType< class ::clang::UsingDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_e7b3b4e4c9fa5685aa128e57eb78adb2("UsingDecl", "", boost::python::no_init);
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_typename", method_pointer_6a5704647ce355cebe89e91eff734ce5, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("create_deserialized", method_pointer_eaa0a436bd7e5e2dac7125a5f0d82b10, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("remove_shadow_decl", method_pointer_5480decd95675ba4aee65c90e7888394, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof", method_pointer_55ebf494f3375b9ba0466f66299b3310, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_f08310812e7555bd81fa1a7c7c1c315a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("is_access_declaration", method_pointer_31667d07dfbb5e81a8d6ab3a9efc7a98, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("add_shadow_decl", method_pointer_be3b20901af35c6ea0f1f36ceb6af845, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("shadow_size", method_pointer_d5a1252c50615edf92f72d417c860827, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_99224078f2855e76924c56a8d1bdedda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof_kind", method_pointer_2353537178dc541ca050fd94e1bb3d4d, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("has_typename", method_pointer_de76772482ef5c79aec5e4d5ac1feedd, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof_kind");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("create_deserialized");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}