#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_179220ac78145becbf9b283ff6879c57()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ObjCProtocolDecl::*method_pointer_dc417656eb885a87bbdce98db82ac7fa)() = &::clang::ObjCProtocolDecl::startDefinition;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_f531875d4dbf55d295ef4c392e0d9d6a)() = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_5830b0911cb755c2a64460105daf200b)() const = &::clang::ObjCProtocolDecl::getDefinition;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_b315f34f16735a40895f581381c47daf)() const = &::clang::ObjCProtocolDecl::isThisDeclarationADefinition;
    unsigned int  (::clang::ObjCProtocolDecl::*method_pointer_22aa1c6147bf5e898d961e0011e1e900)() const = &::clang::ObjCProtocolDecl::protocol_size;
    class ::clang::ObjCProtocolDecl  * (*method_pointer_8e0fe2849d5252bfa86a548a5e8155b9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCProtocolDecl::CreateDeserialized;
    bool  (*method_pointer_4ca96f37c1a35be491d7af02cc9e57da)(enum ::clang::Decl::Kind ) = ::clang::ObjCProtocolDecl::classofKind;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_ad7f06775ded57b98b986b946cfa4190)() = &::clang::ObjCProtocolDecl::getDefinition;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_fd4f5c3c5e51573fb6daa1d613b97420)() const = &::clang::ObjCProtocolDecl::hasDefinition;
    bool  (*method_pointer_504de97eae415b168223fdb5aa1331cf)(class ::clang::Decl  const *) = ::clang::ObjCProtocolDecl::classof;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_74fe856cf7fe5b28b31c39224e4bcab9)() const = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    boost::python::class_< class ::clang::ObjCProtocolDecl, autowig::HeldType< class ::clang::ObjCProtocolDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_179220ac78145becbf9b283ff6879c57("ObjCProtocolDecl", "", boost::python::no_init);
    class_179220ac78145becbf9b283ff6879c57.def("start_definition", method_pointer_dc417656eb885a87bbdce98db82ac7fa, "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_f531875d4dbf55d295ef4c392e0d9d6a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_5830b0911cb755c2a64460105daf200b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("is_this_declaration_a_definition", method_pointer_b315f34f16735a40895f581381c47daf, "");
    class_179220ac78145becbf9b283ff6879c57.def("protocol_size", method_pointer_22aa1c6147bf5e898d961e0011e1e900, "");
    class_179220ac78145becbf9b283ff6879c57.def("create_deserialized", method_pointer_8e0fe2849d5252bfa86a548a5e8155b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("classof_kind", method_pointer_4ca96f37c1a35be491d7af02cc9e57da, "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_ad7f06775ded57b98b986b946cfa4190, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("has_definition", method_pointer_fd4f5c3c5e51573fb6daa1d613b97420, "");
    class_179220ac78145becbf9b283ff6879c57.def("classof", method_pointer_504de97eae415b168223fdb5aa1331cf, "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_74fe856cf7fe5b28b31c39224e4bcab9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof_kind");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("create_deserialized");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCProtocolDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCProtocolDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}