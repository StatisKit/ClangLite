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
    class ::clang::ObjCProtocolDecl  * (*method_pointer_6f08626a1de8585191dd685ed3fb4fd0)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCProtocolDecl::CreateDeserialized;
    bool  (*method_pointer_92614e4ff4fd52a8ae056f8b22e43688)(class ::clang::Decl  const *) = ::clang::ObjCProtocolDecl::classof;
    bool  (*method_pointer_ca66a27877695582adc2f354f68479c8)(enum ::clang::Decl::Kind ) = ::clang::ObjCProtocolDecl::classofKind;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_c3675d5c21c7510abd05334d5d890d7d)() const = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_f1e58ca255a358d9afad76f2a494fda8)() = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_bd393f36265a572fa33bbc99a2390120)() const = &::clang::ObjCProtocolDecl::getDefinition;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_5bdb107c4eeb53a890fac854c222d56f)() = &::clang::ObjCProtocolDecl::getDefinition;
    class ::llvm::StringRef  (::clang::ObjCProtocolDecl::*method_pointer_de00159c5d415121a44c820ea8ed6609)() const = &::clang::ObjCProtocolDecl::getObjCRuntimeNameAsString;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_6c81916a85b35d0295fcdc932596ccb4)() const = &::clang::ObjCProtocolDecl::hasDefinition;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_866efc8df920561e9378411407327733)() const = &::clang::ObjCProtocolDecl::isThisDeclarationADefinition;
    unsigned int  (::clang::ObjCProtocolDecl::*method_pointer_c475dd2d266c525b98a19e393609d4cf)() const = &::clang::ObjCProtocolDecl::protocol_size;
    void  (::clang::ObjCProtocolDecl::*method_pointer_f543652e233c5062b9af1a746c39d8e3)() = &::clang::ObjCProtocolDecl::startDefinition;
    boost::python::class_< class ::clang::ObjCProtocolDecl, autowig::HeldType< class ::clang::ObjCProtocolDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_179220ac78145becbf9b283ff6879c57("ObjCProtocolDecl", "", boost::python::no_init);
    class_179220ac78145becbf9b283ff6879c57.def("create_deserialized", method_pointer_6f08626a1de8585191dd685ed3fb4fd0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("classof", method_pointer_92614e4ff4fd52a8ae056f8b22e43688, "");
    class_179220ac78145becbf9b283ff6879c57.def("classof_kind", method_pointer_ca66a27877695582adc2f354f68479c8, "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_c3675d5c21c7510abd05334d5d890d7d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_f1e58ca255a358d9afad76f2a494fda8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_bd393f36265a572fa33bbc99a2390120, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_5bdb107c4eeb53a890fac854c222d56f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_obj_c_runtime_name_as_string", method_pointer_de00159c5d415121a44c820ea8ed6609, "");
    class_179220ac78145becbf9b283ff6879c57.def("has_definition", method_pointer_6c81916a85b35d0295fcdc932596ccb4, "");
    class_179220ac78145becbf9b283ff6879c57.def("is_this_declaration_a_definition", method_pointer_866efc8df920561e9378411407327733, "");
    class_179220ac78145becbf9b283ff6879c57.def("protocol_size", method_pointer_c475dd2d266c525b98a19e393609d4cf, "");
    class_179220ac78145becbf9b283ff6879c57.def("start_definition", method_pointer_f543652e233c5062b9af1a746c39d8e3, "");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof_kind");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("create_deserialized");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCProtocolDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCProtocolDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}