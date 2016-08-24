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
    class ::clang::ObjCProtocolDecl  * (*method_pointer_a91617e2a8ab52b39b2bd8e55152d187)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCProtocolDecl::CreateDeserialized;
    bool  (*method_pointer_837cf86d2168579288c0c5aeb56f9a2c)(class ::clang::Decl  const *) = ::clang::ObjCProtocolDecl::classof;
    bool  (*method_pointer_ac8d6c53dfa25a8b90310f1231950e93)(enum ::clang::Decl::Kind ) = ::clang::ObjCProtocolDecl::classofKind;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_579e7e1dc0065651a4a6d2371088bdaa)() = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_ad820af199eb507e83df221f846a0249)() const = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_a7a704fd4a3858db800533c9af0124ef)() = &::clang::ObjCProtocolDecl::getDefinition;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_4c6d08d5bc3552e591dfe00181187238)() const = &::clang::ObjCProtocolDecl::getDefinition;
    class ::llvm::StringRef  (::clang::ObjCProtocolDecl::*method_pointer_87405269d0955f6a8d4a23b6adf9a58e)() const = &::clang::ObjCProtocolDecl::getObjCRuntimeNameAsString;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_35ea79c9dc94588fb27801908a5d4c99)() const = &::clang::ObjCProtocolDecl::hasDefinition;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_d2736bf22f8b5740ad909532f189754b)() const = &::clang::ObjCProtocolDecl::isThisDeclarationADefinition;
    unsigned int  (::clang::ObjCProtocolDecl::*method_pointer_310058ce1a905a5eba540512d8081411)() const = &::clang::ObjCProtocolDecl::protocol_size;
    void  (::clang::ObjCProtocolDecl::*method_pointer_cba0cf003a25556685e9fc109741a1c7)() = &::clang::ObjCProtocolDecl::startDefinition;
    boost::python::class_< class ::clang::ObjCProtocolDecl, autowig::HeldType< class ::clang::ObjCProtocolDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_179220ac78145becbf9b283ff6879c57("ObjCProtocolDecl", "", boost::python::no_init);
    class_179220ac78145becbf9b283ff6879c57.def("create_deserialized", method_pointer_a91617e2a8ab52b39b2bd8e55152d187, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("classof", method_pointer_837cf86d2168579288c0c5aeb56f9a2c, "");
    class_179220ac78145becbf9b283ff6879c57.def("classof_kind", method_pointer_ac8d6c53dfa25a8b90310f1231950e93, "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_579e7e1dc0065651a4a6d2371088bdaa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_ad820af199eb507e83df221f846a0249, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_a7a704fd4a3858db800533c9af0124ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_4c6d08d5bc3552e591dfe00181187238, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_obj_c_runtime_name_as_string", method_pointer_87405269d0955f6a8d4a23b6adf9a58e, "");
    class_179220ac78145becbf9b283ff6879c57.def("has_definition", method_pointer_35ea79c9dc94588fb27801908a5d4c99, "");
    class_179220ac78145becbf9b283ff6879c57.def("is_this_declaration_a_definition", method_pointer_d2736bf22f8b5740ad909532f189754b, "");
    class_179220ac78145becbf9b283ff6879c57.def("protocol_size", method_pointer_310058ce1a905a5eba540512d8081411, "");
    class_179220ac78145becbf9b283ff6879c57.def("start_definition", method_pointer_cba0cf003a25556685e9fc109741a1c7, "");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof_kind");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("create_deserialized");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCProtocolDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCProtocolDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}