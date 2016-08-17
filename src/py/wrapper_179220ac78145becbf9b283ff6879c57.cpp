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
    class ::clang::ObjCProtocolDecl  * (*method_pointer_705cf05a52b3586fa6926b2f0f08f775)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCProtocolDecl::CreateDeserialized;
    unsigned int  (::clang::ObjCProtocolDecl::*method_pointer_4744d15509f954b6ad867711825d0bc4)() const = &::clang::ObjCProtocolDecl::protocol_size;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_7176bd8924025846ba07f692459f4d90)() const = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_a19e66b5a83b5d8f81e0182849cbbb2c)() const = &::clang::ObjCProtocolDecl::getDefinition;
    bool  (*method_pointer_6f36ad15a8e25d028d7e1d032c3b681e)(class ::clang::Decl  const *) = ::clang::ObjCProtocolDecl::classof;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_a9ee4ae43dd65f5d87556d93617d0fde)() = &::clang::ObjCProtocolDecl::getDefinition;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_b899f5256a62552bb417de0ab8bb3cc8)() = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_cbd0010d0b645b1db4851bbf4c719df6)() const = &::clang::ObjCProtocolDecl::isThisDeclarationADefinition;
    void  (::clang::ObjCProtocolDecl::*method_pointer_22e42dccd9275e2496a791c0c43c5a69)() = &::clang::ObjCProtocolDecl::startDefinition;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_4bfe913de51a517cbb9023e52c5f404a)() const = &::clang::ObjCProtocolDecl::hasDefinition;
    bool  (*method_pointer_199f89bbc57d5ba1a7f08cfc85dd0fc5)(enum ::clang::Decl::Kind ) = ::clang::ObjCProtocolDecl::classofKind;
    boost::python::class_< class ::clang::ObjCProtocolDecl, autowig::HeldType< class ::clang::ObjCProtocolDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_179220ac78145becbf9b283ff6879c57("ObjCProtocolDecl", "", boost::python::no_init);
    class_179220ac78145becbf9b283ff6879c57.def("create_deserialized", method_pointer_705cf05a52b3586fa6926b2f0f08f775, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("protocol_size", method_pointer_4744d15509f954b6ad867711825d0bc4, "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_7176bd8924025846ba07f692459f4d90, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_a19e66b5a83b5d8f81e0182849cbbb2c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("classof", method_pointer_6f36ad15a8e25d028d7e1d032c3b681e, "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_a9ee4ae43dd65f5d87556d93617d0fde, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_b899f5256a62552bb417de0ab8bb3cc8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("is_this_declaration_a_definition", method_pointer_cbd0010d0b645b1db4851bbf4c719df6, "");
    class_179220ac78145becbf9b283ff6879c57.def("start_definition", method_pointer_22e42dccd9275e2496a791c0c43c5a69, "");
    class_179220ac78145becbf9b283ff6879c57.def("has_definition", method_pointer_4bfe913de51a517cbb9023e52c5f404a, "");
    class_179220ac78145becbf9b283ff6879c57.def("classof_kind", method_pointer_199f89bbc57d5ba1a7f08cfc85dd0fc5, "");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof_kind");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("create_deserialized");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCProtocolDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCProtocolDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}