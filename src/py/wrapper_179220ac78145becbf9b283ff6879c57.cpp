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
    class ::clang::ObjCProtocolDecl  * (*method_pointer_fef96de6a19353c4a02ce70af0da8f41)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCProtocolDecl::CreateDeserialized;
    bool  (*method_pointer_324f7a588c7d57029a679f449710d058)(class ::clang::Decl  const *) = ::clang::ObjCProtocolDecl::classof;
    bool  (*method_pointer_11e799732dba5ba8b580f78799b1da1f)(enum ::clang::Decl::Kind ) = ::clang::ObjCProtocolDecl::classofKind;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_202ca88069145e58a31e5c64e9ea30ef)() = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_937dcfe6cb875b3481602fe948a3bed6)() const = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_fb8e9112bbed545c8767ce474d1e7879)() = &::clang::ObjCProtocolDecl::getDefinition;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_2e5f6f6d8e03532cb286be4f150644a1)() const = &::clang::ObjCProtocolDecl::getDefinition;
    class ::llvm::StringRef  (::clang::ObjCProtocolDecl::*method_pointer_4d63f58a52ba5b508ddad8ca2febb9bb)() const = &::clang::ObjCProtocolDecl::getObjCRuntimeNameAsString;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_6d5b677ca5f658a781312bf6c6f6a96b)() const = &::clang::ObjCProtocolDecl::hasDefinition;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_cc53d5570b55511292067bd6364401b8)() const = &::clang::ObjCProtocolDecl::isThisDeclarationADefinition;
    unsigned int  (::clang::ObjCProtocolDecl::*method_pointer_d3c4c65da5835f6f83c736e641f483ef)() const = &::clang::ObjCProtocolDecl::protocol_size;
    void  (::clang::ObjCProtocolDecl::*method_pointer_87c87f1c00f25feebe28230757cde376)() = &::clang::ObjCProtocolDecl::startDefinition;
    boost::python::class_< class ::clang::ObjCProtocolDecl, autowig::HeldType< class ::clang::ObjCProtocolDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_179220ac78145becbf9b283ff6879c57("ObjCProtocolDecl", "", boost::python::no_init);
    class_179220ac78145becbf9b283ff6879c57.def("create_deserialized", method_pointer_fef96de6a19353c4a02ce70af0da8f41, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("classof", method_pointer_324f7a588c7d57029a679f449710d058, "");
    class_179220ac78145becbf9b283ff6879c57.def("classof_kind", method_pointer_11e799732dba5ba8b580f78799b1da1f, "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_202ca88069145e58a31e5c64e9ea30ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_937dcfe6cb875b3481602fe948a3bed6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_fb8e9112bbed545c8767ce474d1e7879, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_2e5f6f6d8e03532cb286be4f150644a1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_obj_c_runtime_name_as_string", method_pointer_4d63f58a52ba5b508ddad8ca2febb9bb, "");
    class_179220ac78145becbf9b283ff6879c57.def("has_definition", method_pointer_6d5b677ca5f658a781312bf6c6f6a96b, "");
    class_179220ac78145becbf9b283ff6879c57.def("is_this_declaration_a_definition", method_pointer_cc53d5570b55511292067bd6364401b8, "");
    class_179220ac78145becbf9b283ff6879c57.def("protocol_size", method_pointer_d3c4c65da5835f6f83c736e641f483ef, "");
    class_179220ac78145becbf9b283ff6879c57.def("start_definition", method_pointer_87c87f1c00f25feebe28230757cde376, "");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof_kind");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("create_deserialized");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCProtocolDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCProtocolDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}