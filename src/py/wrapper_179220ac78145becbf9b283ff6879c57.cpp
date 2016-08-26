#include "_clanglite.h"


namespace autowig
{
}


void wrapper_179220ac78145becbf9b283ff6879c57()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCProtocolDecl  * (*method_pointer_de82635e64ae53c79450c70d87703bc1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCProtocolDecl::CreateDeserialized;
    bool  (*method_pointer_63f7e68d5f2c52e98b1aad582969eb18)(class ::clang::Decl  const *) = ::clang::ObjCProtocolDecl::classof;
    bool  (*method_pointer_3af8b55a12745c548a8b69a396597855)(enum ::clang::Decl::Kind ) = ::clang::ObjCProtocolDecl::classofKind;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_2e83901e97945cddbb605188a17b4fa1)() const = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_4348ebacafa05e31933e93a65075f095)() = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_0c9ffcd1a19c586785bd327ba35f7b6d)() = &::clang::ObjCProtocolDecl::getDefinition;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_a17727b97c115ff69de3f2857f1c0632)() const = &::clang::ObjCProtocolDecl::getDefinition;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_6b740dbe1c4d5832815ab4c7f637104c)() const = &::clang::ObjCProtocolDecl::hasDefinition;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_5acc409846185b1c8eda298132729bf2)() const = &::clang::ObjCProtocolDecl::isThisDeclarationADefinition;
    unsigned int  (::clang::ObjCProtocolDecl::*method_pointer_7bf479e1a8c9586cbbf7c5428f320da5)() const = &::clang::ObjCProtocolDecl::protocol_size;
    void  (::clang::ObjCProtocolDecl::*method_pointer_2c4fc0ee7f6a5da9a780656dd7b353cf)() = &::clang::ObjCProtocolDecl::startDefinition;
    boost::python::class_< class ::clang::ObjCProtocolDecl, autowig::HeldType< class ::clang::ObjCProtocolDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_179220ac78145becbf9b283ff6879c57("ObjCProtocolDecl", "", boost::python::no_init);
    class_179220ac78145becbf9b283ff6879c57.def("create_deserialized", method_pointer_de82635e64ae53c79450c70d87703bc1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("classof", method_pointer_63f7e68d5f2c52e98b1aad582969eb18, "");
    class_179220ac78145becbf9b283ff6879c57.def("classof_kind", method_pointer_3af8b55a12745c548a8b69a396597855, "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_2e83901e97945cddbb605188a17b4fa1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_4348ebacafa05e31933e93a65075f095, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_0c9ffcd1a19c586785bd327ba35f7b6d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_a17727b97c115ff69de3f2857f1c0632, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("has_definition", method_pointer_6b740dbe1c4d5832815ab4c7f637104c, "");
    class_179220ac78145becbf9b283ff6879c57.def("is_this_declaration_a_definition", method_pointer_5acc409846185b1c8eda298132729bf2, "");
    class_179220ac78145becbf9b283ff6879c57.def("protocol_size", method_pointer_7bf479e1a8c9586cbbf7c5428f320da5, "");
    class_179220ac78145becbf9b283ff6879c57.def("start_definition", method_pointer_2c4fc0ee7f6a5da9a780656dd7b353cf, "");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof_kind");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("create_deserialized");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCProtocolDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCProtocolDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}