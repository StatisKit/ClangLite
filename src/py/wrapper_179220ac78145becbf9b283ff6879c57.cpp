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
    class ::clang::ObjCProtocolDecl  * (*method_pointer_e267357860b65e66b6d24d0bf64f2b08)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCProtocolDecl::CreateDeserialized;
    bool  (*method_pointer_e04bfe43ffb75d2ebface582064c07a6)(class ::clang::Decl  const *) = ::clang::ObjCProtocolDecl::classof;
    bool  (*method_pointer_3307d814566d5930b02dece5af90d0bb)(enum ::clang::Decl::Kind ) = ::clang::ObjCProtocolDecl::classofKind;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_e2b6cdd68c5d5e93a4407d97ba9db614)() = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_bffa8c48963f5caea6188adc37f0c2ae)() const = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_b4827bd446ed54459730677cc3a619ca)() = &::clang::ObjCProtocolDecl::getDefinition;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_79b50ad6930c5eea941cf1aeb2e32225)() const = &::clang::ObjCProtocolDecl::getDefinition;
    class ::llvm::StringRef  (::clang::ObjCProtocolDecl::*method_pointer_feaf94f80a6f563a99790ef8d4838de6)() const = &::clang::ObjCProtocolDecl::getObjCRuntimeNameAsString;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_76fbc09005a35101a4f2014c4398aee1)() const = &::clang::ObjCProtocolDecl::hasDefinition;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_501f0a4fdfc35c65bc76d5405b6728bd)() const = &::clang::ObjCProtocolDecl::isThisDeclarationADefinition;
    unsigned int  (::clang::ObjCProtocolDecl::*method_pointer_9e23970a224a5bea8196f4c2dd39acf5)() const = &::clang::ObjCProtocolDecl::protocol_size;
    void  (::clang::ObjCProtocolDecl::*method_pointer_e86970548f1b5ec8819bb796b905b8ae)() = &::clang::ObjCProtocolDecl::startDefinition;
    boost::python::class_< class ::clang::ObjCProtocolDecl, autowig::HeldType< class ::clang::ObjCProtocolDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_179220ac78145becbf9b283ff6879c57("ObjCProtocolDecl", "", boost::python::no_init);
    class_179220ac78145becbf9b283ff6879c57.def("create_deserialized", method_pointer_e267357860b65e66b6d24d0bf64f2b08, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("classof", method_pointer_e04bfe43ffb75d2ebface582064c07a6, "");
    class_179220ac78145becbf9b283ff6879c57.def("classof_kind", method_pointer_3307d814566d5930b02dece5af90d0bb, "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_e2b6cdd68c5d5e93a4407d97ba9db614, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_bffa8c48963f5caea6188adc37f0c2ae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_b4827bd446ed54459730677cc3a619ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_79b50ad6930c5eea941cf1aeb2e32225, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_obj_c_runtime_name_as_string", method_pointer_feaf94f80a6f563a99790ef8d4838de6, "");
    class_179220ac78145becbf9b283ff6879c57.def("has_definition", method_pointer_76fbc09005a35101a4f2014c4398aee1, "");
    class_179220ac78145becbf9b283ff6879c57.def("is_this_declaration_a_definition", method_pointer_501f0a4fdfc35c65bc76d5405b6728bd, "");
    class_179220ac78145becbf9b283ff6879c57.def("protocol_size", method_pointer_9e23970a224a5bea8196f4c2dd39acf5, "");
    class_179220ac78145becbf9b283ff6879c57.def("start_definition", method_pointer_e86970548f1b5ec8819bb796b905b8ae, "");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof_kind");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("create_deserialized");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCProtocolDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCProtocolDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}