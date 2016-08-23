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
    class ::clang::UsingDecl  * (*method_pointer_6ba84c6f710d51329f8f9bb880b892d8)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDecl::CreateDeserialized;
    void  (::clang::UsingDecl::*method_pointer_41f0e18b83ed5c8baab5511f88c10b56)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::addShadowDecl;
    bool  (*method_pointer_aed044689b97577ab02406940ed608c3)(class ::clang::Decl  const *) = ::clang::UsingDecl::classof;
    bool  (*method_pointer_5e9ae18926d55610a2a16d8f66f3d0a8)(enum ::clang::Decl::Kind ) = ::clang::UsingDecl::classofKind;
    class ::clang::UsingDecl  * (::clang::UsingDecl::*method_pointer_f109c01f3c3b51ec889c39d9ac8c7c48)() = &::clang::UsingDecl::getCanonicalDecl;
    class ::clang::UsingDecl  const * (::clang::UsingDecl::*method_pointer_b54e17570f7c5d4a85cc320aecc295b3)() const = &::clang::UsingDecl::getCanonicalDecl;
    bool  (::clang::UsingDecl::*method_pointer_17bec418a2ed5eeb9422911bef3054c6)() const = &::clang::UsingDecl::hasTypename;
    bool  (::clang::UsingDecl::*method_pointer_67aec4aa6c525b0aa97feacc557d76ed)() const = &::clang::UsingDecl::isAccessDeclaration;
    void  (::clang::UsingDecl::*method_pointer_210963f062bc583c88129e805c5ce99e)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::removeShadowDecl;
    void  (::clang::UsingDecl::*method_pointer_96b123bc2ab55538a57a0e594df6533a)(bool ) = &::clang::UsingDecl::setTypename;
    unsigned int  (::clang::UsingDecl::*method_pointer_87301d362ec05b06928d0205f89e77ae)() const = &::clang::UsingDecl::shadow_size;
    boost::python::class_< class ::clang::UsingDecl, autowig::HeldType< class ::clang::UsingDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_e7b3b4e4c9fa5685aa128e57eb78adb2("UsingDecl", "", boost::python::no_init);
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("create_deserialized", method_pointer_6ba84c6f710d51329f8f9bb880b892d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("add_shadow_decl", method_pointer_41f0e18b83ed5c8baab5511f88c10b56, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof", method_pointer_aed044689b97577ab02406940ed608c3, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof_kind", method_pointer_5e9ae18926d55610a2a16d8f66f3d0a8, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_f109c01f3c3b51ec889c39d9ac8c7c48, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_b54e17570f7c5d4a85cc320aecc295b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("has_typename", method_pointer_17bec418a2ed5eeb9422911bef3054c6, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("is_access_declaration", method_pointer_67aec4aa6c525b0aa97feacc557d76ed, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("remove_shadow_decl", method_pointer_210963f062bc583c88129e805c5ce99e, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_typename", method_pointer_96b123bc2ab55538a57a0e594df6533a, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("shadow_size", method_pointer_87301d362ec05b06928d0205f89e77ae, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof_kind");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("create_deserialized");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}