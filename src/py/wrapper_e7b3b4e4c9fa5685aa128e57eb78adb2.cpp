#include "_clanglite.h"


namespace autowig
{
}


void wrapper_e7b3b4e4c9fa5685aa128e57eb78adb2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UsingDecl  * (*method_pointer_8d16a5be96215ef19bb4e3a6fce20431)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDecl::CreateDeserialized;
    void  (::clang::UsingDecl::*method_pointer_0d06d20cbe6352058d01613e9b8a469d)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::addShadowDecl;
    bool  (*method_pointer_9b667413c7395d578c260cabec13372b)(class ::clang::Decl  const *) = ::clang::UsingDecl::classof;
    bool  (*method_pointer_7379afe38c895d1e90b2a92621aa7691)(enum ::clang::Decl::Kind ) = ::clang::UsingDecl::classofKind;
    class ::clang::UsingDecl  const * (::clang::UsingDecl::*method_pointer_065c28a40b315a96820e64f50ea0b26b)() const = &::clang::UsingDecl::getCanonicalDecl;
    class ::clang::UsingDecl  * (::clang::UsingDecl::*method_pointer_4b193397b33d5cb58ad8235a12d5b7c8)() = &::clang::UsingDecl::getCanonicalDecl;
    bool  (::clang::UsingDecl::*method_pointer_56e2ff0204745586ab77edfba1e96ac2)() const = &::clang::UsingDecl::hasTypename;
    bool  (::clang::UsingDecl::*method_pointer_feed30efa04a576db4ce75ef5a0ac7e7)() const = &::clang::UsingDecl::isAccessDeclaration;
    void  (::clang::UsingDecl::*method_pointer_54c8497b47e051e38ea62bae40e002ef)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::removeShadowDecl;
    void  (::clang::UsingDecl::*method_pointer_6b176dbdc7175b00979534507fca2ee2)(bool ) = &::clang::UsingDecl::setTypename;
    unsigned int  (::clang::UsingDecl::*method_pointer_b2baa3d5207b5b8fa04fb6dc3e9a6424)() const = &::clang::UsingDecl::shadow_size;
    boost::python::class_< class ::clang::UsingDecl, autowig::HeldType< class ::clang::UsingDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_e7b3b4e4c9fa5685aa128e57eb78adb2("UsingDecl", "", boost::python::no_init);
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("create_deserialized", method_pointer_8d16a5be96215ef19bb4e3a6fce20431, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("add_shadow_decl", method_pointer_0d06d20cbe6352058d01613e9b8a469d, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof", method_pointer_9b667413c7395d578c260cabec13372b, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof_kind", method_pointer_7379afe38c895d1e90b2a92621aa7691, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_065c28a40b315a96820e64f50ea0b26b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_4b193397b33d5cb58ad8235a12d5b7c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("has_typename", method_pointer_56e2ff0204745586ab77edfba1e96ac2, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("is_access_declaration", method_pointer_feed30efa04a576db4ce75ef5a0ac7e7, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("remove_shadow_decl", method_pointer_54c8497b47e051e38ea62bae40e002ef, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_typename", method_pointer_6b176dbdc7175b00979534507fca2ee2, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("shadow_size", method_pointer_b2baa3d5207b5b8fa04fb6dc3e9a6424, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof_kind");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("create_deserialized");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}