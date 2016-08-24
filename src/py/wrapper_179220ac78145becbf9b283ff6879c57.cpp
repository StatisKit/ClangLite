#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_179220ac78145becbf9b283ff6879c57()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCProtocolDecl  * (*method_pointer_66dd7da64c5151da9f6ac2af48fe24cc)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCProtocolDecl::CreateDeserialized;
    bool  (*method_pointer_6d8c25e5a3e85b329ca7707f4fc59886)(class ::clang::Decl  const *) = ::clang::ObjCProtocolDecl::classof;
    bool  (*method_pointer_a084a437c198523ca87f0c4903443d59)(enum ::clang::Decl::Kind ) = ::clang::ObjCProtocolDecl::classofKind;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_27684bccf731596386f019b6618df5f1)() const = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_f4e0127cd6095992a50eed1851ca115c)() = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_39b0180433aa50f1b1f61927be61e831)() = &::clang::ObjCProtocolDecl::getDefinition;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_b0a95a15318154dbb73b88c95c56e767)() const = &::clang::ObjCProtocolDecl::getDefinition;
    class ::llvm::StringRef  (::clang::ObjCProtocolDecl::*method_pointer_717d0763eb185089b93fc4ec22ee66cb)() const = &::clang::ObjCProtocolDecl::getObjCRuntimeNameAsString;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_18a41cb13df55b7ab8d0e0e26604b883)() const = &::clang::ObjCProtocolDecl::hasDefinition;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_67d51ddad3115394a1faeff0786267b9)() const = &::clang::ObjCProtocolDecl::isThisDeclarationADefinition;
    unsigned int  (::clang::ObjCProtocolDecl::*method_pointer_1b3eb616dd845b54a6a9aa779fcf19b3)() const = &::clang::ObjCProtocolDecl::protocol_size;
    void  (::clang::ObjCProtocolDecl::*method_pointer_40fb04162a785b45a92f1eecf14c3843)() = &::clang::ObjCProtocolDecl::startDefinition;
    boost::python::class_< class ::clang::ObjCProtocolDecl, autowig::HeldType< class ::clang::ObjCProtocolDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_179220ac78145becbf9b283ff6879c57("ObjCProtocolDecl", "", boost::python::no_init);
    class_179220ac78145becbf9b283ff6879c57.def("create_deserialized", method_pointer_66dd7da64c5151da9f6ac2af48fe24cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("classof", method_pointer_6d8c25e5a3e85b329ca7707f4fc59886, "");
    class_179220ac78145becbf9b283ff6879c57.def("classof_kind", method_pointer_a084a437c198523ca87f0c4903443d59, "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_27684bccf731596386f019b6618df5f1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_f4e0127cd6095992a50eed1851ca115c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_39b0180433aa50f1b1f61927be61e831, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_b0a95a15318154dbb73b88c95c56e767, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_obj_c_runtime_name_as_string", method_pointer_717d0763eb185089b93fc4ec22ee66cb, "");
    class_179220ac78145becbf9b283ff6879c57.def("has_definition", method_pointer_18a41cb13df55b7ab8d0e0e26604b883, "");
    class_179220ac78145becbf9b283ff6879c57.def("is_this_declaration_a_definition", method_pointer_67d51ddad3115394a1faeff0786267b9, "");
    class_179220ac78145becbf9b283ff6879c57.def("protocol_size", method_pointer_1b3eb616dd845b54a6a9aa779fcf19b3, "");
    class_179220ac78145becbf9b283ff6879c57.def("start_definition", method_pointer_40fb04162a785b45a92f1eecf14c3843, "");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof_kind");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("create_deserialized");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCProtocolDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCProtocolDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}