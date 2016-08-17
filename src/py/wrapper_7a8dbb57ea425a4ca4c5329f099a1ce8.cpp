#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_7a8dbb57ea425a4ca4c5329f099a1ce8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ParmVarDecl::*method_pointer_ee08d7a7e7c2587c9c671f63667f527a)() const = &::clang::ParmVarDecl::hasUninstantiatedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_d26b2e24e09651ac8208283843fb3a7e)() const = &::clang::ParmVarDecl::isKNRPromoted;
    bool  (*method_pointer_e1b4f0baaf4754d7bc6e8e840d7597a3)(class ::clang::Decl  const *) = ::clang::ParmVarDecl::classof;
    bool  (*method_pointer_a7d5a3f46d055085827ce87339ac67b4)(enum ::clang::Decl::Kind ) = ::clang::ParmVarDecl::classofKind;
    void  (::clang::ParmVarDecl::*method_pointer_9b3bc878adf354c7a8460ecb9f010d45)(class ::clang::DeclContext  *) = &::clang::ParmVarDecl::setOwningFunction;
    void  (::clang::ParmVarDecl::*method_pointer_e6f8c880fb8b5a24bc727c05851e12b9)() = &::clang::ParmVarDecl::setUnparsedDefaultArg;
    class ::clang::ParmVarDecl  * (*method_pointer_128af0a74d985286a514e95718c3bf48)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ParmVarDecl::CreateDeserialized;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_11c1190d2aed5b7a855082378ed0f290)() const = &::clang::ParmVarDecl::getFunctionScopeDepth;
    bool  (::clang::ParmVarDecl::*method_pointer_f1f1bcf71e0055318421cd21e2ab3a1c)() const = &::clang::ParmVarDecl::hasInheritedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_6e9729506e685d09a6c8e634eed024ab)() const = &::clang::ParmVarDecl::isParameterPack;
    void  (::clang::ParmVarDecl::*method_pointer_aee92629ca9c5138b19382c3f8da3484)(unsigned int ) = &::clang::ParmVarDecl::setObjCMethodScopeInfo;
    void  (::clang::ParmVarDecl::*method_pointer_1b7329dbbb1e50319c05f6e2aaf72eb8)(bool ) = &::clang::ParmVarDecl::setKNRPromoted;
    void  (::clang::ParmVarDecl::*method_pointer_985c3ea54ec152bbad3768afdd398026)(unsigned int , unsigned int ) = &::clang::ParmVarDecl::setScopeInfo;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_17a37c28e1905b289126ed3394e697c0)() const = &::clang::ParmVarDecl::getFunctionScopeIndex;
    void  (::clang::ParmVarDecl::*method_pointer_9f6351c72efb52f68f5466107d03929e)(bool ) = &::clang::ParmVarDecl::setHasInheritedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_9f24aec440095dcb85d1e7fe0d34ae7d)() const = &::clang::ParmVarDecl::isObjCMethodParameter;
    bool  (::clang::ParmVarDecl::*method_pointer_6b64b15cfc155826b9d6db28afc36c83)() const = &::clang::ParmVarDecl::hasDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_bd30aad772eb551d8e0a71ceb5b33b74)() const = &::clang::ParmVarDecl::hasUnparsedDefaultArg;
    boost::python::class_< class ::clang::ParmVarDecl, autowig::HeldType< class ::clang::ParmVarDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_7a8dbb57ea425a4ca4c5329f099a1ce8("ParmVarDecl", "", boost::python::no_init);
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_uninstantiated_default_arg", method_pointer_ee08d7a7e7c2587c9c671f63667f527a, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_knr_promoted", method_pointer_d26b2e24e09651ac8208283843fb3a7e, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof", method_pointer_e1b4f0baaf4754d7bc6e8e840d7597a3, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof_kind", method_pointer_a7d5a3f46d055085827ce87339ac67b4, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_owning_function", method_pointer_9b3bc878adf354c7a8460ecb9f010d45, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_unparsed_default_arg", method_pointer_e6f8c880fb8b5a24bc727c05851e12b9, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("create_deserialized", method_pointer_128af0a74d985286a514e95718c3bf48, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_depth", method_pointer_11c1190d2aed5b7a855082378ed0f290, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_inherited_default_arg", method_pointer_f1f1bcf71e0055318421cd21e2ab3a1c, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_parameter_pack", method_pointer_6e9729506e685d09a6c8e634eed024ab, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_obj_c_method_scope_info", method_pointer_aee92629ca9c5138b19382c3f8da3484, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_knr_promoted", method_pointer_1b7329dbbb1e50319c05f6e2aaf72eb8, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_scope_info", method_pointer_985c3ea54ec152bbad3768afdd398026, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_index", method_pointer_17a37c28e1905b289126ed3394e697c0, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_has_inherited_default_arg", method_pointer_9f6351c72efb52f68f5466107d03929e, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_obj_c_method_parameter", method_pointer_9f24aec440095dcb85d1e7fe0d34ae7d, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_default_arg", method_pointer_6b64b15cfc155826b9d6db28afc36c83, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_unparsed_default_arg", method_pointer_bd30aad772eb551d8e0a71ceb5b33b74, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof_kind");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("create_deserialized");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ParmVarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ParmVarDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}