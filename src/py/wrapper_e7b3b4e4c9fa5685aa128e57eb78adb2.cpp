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
    bool  (*method_pointer_82e84a1633f65c88b85f41429891f860)(class ::clang::Decl  const *) = ::clang::UsingDecl::classof;
    unsigned int  (::clang::UsingDecl::*method_pointer_8abe5d0a72b55896b9ced1e3995b01a6)() const = &::clang::UsingDecl::shadow_size;
    class ::clang::UsingDecl  const * (::clang::UsingDecl::*method_pointer_cd7a55c00494596a99b4ec79d33a0bc3)() const = &::clang::UsingDecl::getCanonicalDecl;
    void  (::clang::UsingDecl::*method_pointer_3645e64ec41d5a76b4d8a32457c465d4)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::removeShadowDecl;
    void  (::clang::UsingDecl::*method_pointer_623775029d2a5200a3d0b0313d0161f3)(bool ) = &::clang::UsingDecl::setTypename;
    void  (::clang::UsingDecl::*method_pointer_c75b250a7e0d5ea785960d32c9974a8c)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::addShadowDecl;
    class ::clang::UsingDecl  * (*method_pointer_faac493ab90e59a6981d6fff2ba92bcf)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDecl::CreateDeserialized;
    bool  (::clang::UsingDecl::*method_pointer_c2ce76dab6ab5ce6ba80135defbd78f4)() const = &::clang::UsingDecl::isAccessDeclaration;
    class ::clang::UsingDecl  * (::clang::UsingDecl::*method_pointer_b04fdb8d268a5460b77943e463820b27)() = &::clang::UsingDecl::getCanonicalDecl;
    bool  (::clang::UsingDecl::*method_pointer_24b0902b4a3651138815d676d0db214b)() const = &::clang::UsingDecl::hasTypename;
    bool  (*method_pointer_38b175579a2353ac823e68107b89f8a9)(enum ::clang::Decl::Kind ) = ::clang::UsingDecl::classofKind;
    boost::python::class_< class ::clang::UsingDecl, autowig::HeldType< class ::clang::UsingDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_e7b3b4e4c9fa5685aa128e57eb78adb2("UsingDecl", "", boost::python::no_init);
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof", method_pointer_82e84a1633f65c88b85f41429891f860, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("shadow_size", method_pointer_8abe5d0a72b55896b9ced1e3995b01a6, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_cd7a55c00494596a99b4ec79d33a0bc3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("remove_shadow_decl", method_pointer_3645e64ec41d5a76b4d8a32457c465d4, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_typename", method_pointer_623775029d2a5200a3d0b0313d0161f3, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("add_shadow_decl", method_pointer_c75b250a7e0d5ea785960d32c9974a8c, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("create_deserialized", method_pointer_faac493ab90e59a6981d6fff2ba92bcf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("is_access_declaration", method_pointer_c2ce76dab6ab5ce6ba80135defbd78f4, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_b04fdb8d268a5460b77943e463820b27, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("has_typename", method_pointer_24b0902b4a3651138815d676d0db214b, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof_kind", method_pointer_38b175579a2353ac823e68107b89f8a9, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof_kind");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("create_deserialized");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}