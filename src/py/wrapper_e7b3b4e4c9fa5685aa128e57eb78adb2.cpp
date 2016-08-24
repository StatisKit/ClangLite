#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e7b3b4e4c9fa5685aa128e57eb78adb2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UsingDecl  * (*method_pointer_a8a76a6ade705435a1dacd3f93b4edd6)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDecl::CreateDeserialized;
    void  (::clang::UsingDecl::*method_pointer_39a63c8af32e5646b70815eb551efc64)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::addShadowDecl;
    bool  (*method_pointer_856cddac64795ddaadba7bf92ca5b364)(class ::clang::Decl  const *) = ::clang::UsingDecl::classof;
    bool  (*method_pointer_dd0da68ddadc507db830aa3875bfc817)(enum ::clang::Decl::Kind ) = ::clang::UsingDecl::classofKind;
    class ::clang::UsingDecl  const * (::clang::UsingDecl::*method_pointer_4e9db18a5b555b3f83f6bb8722f5ebd0)() const = &::clang::UsingDecl::getCanonicalDecl;
    class ::clang::UsingDecl  * (::clang::UsingDecl::*method_pointer_7921c227695b53a5a2c998894c12d686)() = &::clang::UsingDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::UsingDecl::*method_pointer_10d605663cfb579bbb1bde304ff39912)() const = &::clang::UsingDecl::getUsingLoc;
    bool  (::clang::UsingDecl::*method_pointer_9f8fa4b9eed0599e87a385a9ce2da6d0)() const = &::clang::UsingDecl::hasTypename;
    bool  (::clang::UsingDecl::*method_pointer_05ebf01ddeb65d7298a5e0357cc528e4)() const = &::clang::UsingDecl::isAccessDeclaration;
    void  (::clang::UsingDecl::*method_pointer_5607915a1f1a5d6a92376231a44ac650)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::removeShadowDecl;
    void  (::clang::UsingDecl::*method_pointer_25e3c5df77c75f05a920c5a447ef7a98)(bool ) = &::clang::UsingDecl::setTypename;
    void  (::clang::UsingDecl::*method_pointer_53a1cf60be1c5f4d92f47c8d5a96dca2)(class ::clang::SourceLocation ) = &::clang::UsingDecl::setUsingLoc;
    unsigned int  (::clang::UsingDecl::*method_pointer_3a4f9b86da8f54bfa72f69e9550e5b5b)() const = &::clang::UsingDecl::shadow_size;
    boost::python::class_< class ::clang::UsingDecl, autowig::HeldType< class ::clang::UsingDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_e7b3b4e4c9fa5685aa128e57eb78adb2("UsingDecl", "", boost::python::no_init);
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("create_deserialized", method_pointer_a8a76a6ade705435a1dacd3f93b4edd6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("add_shadow_decl", method_pointer_39a63c8af32e5646b70815eb551efc64, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof", method_pointer_856cddac64795ddaadba7bf92ca5b364, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof_kind", method_pointer_dd0da68ddadc507db830aa3875bfc817, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_4e9db18a5b555b3f83f6bb8722f5ebd0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_7921c227695b53a5a2c998894c12d686, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_using_loc", method_pointer_10d605663cfb579bbb1bde304ff39912, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("has_typename", method_pointer_9f8fa4b9eed0599e87a385a9ce2da6d0, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("is_access_declaration", method_pointer_05ebf01ddeb65d7298a5e0357cc528e4, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("remove_shadow_decl", method_pointer_5607915a1f1a5d6a92376231a44ac650, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_typename", method_pointer_25e3c5df77c75f05a920c5a447ef7a98, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_using_loc", method_pointer_53a1cf60be1c5f4d92f47c8d5a96dca2, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("shadow_size", method_pointer_3a4f9b86da8f54bfa72f69e9550e5b5b, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof_kind");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("create_deserialized");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}