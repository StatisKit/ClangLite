#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e8de972362795c73b92c7a53a3029be0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::BlockDecl  * (*method_pointer_94847578e309551d8281775fdda1a742)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_08dd67ff948a5e5d8e3bb211d372a7cd)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_0252ab2deaf35fb9957a2acb48ee3798)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_7e1a6e5375875932821773daa9245dfb)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_ab0758ec33585d80a362fa553303d173)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_ee3a12f45e445415b066ecdecfc19eb5)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_2b031b1103af5c99bc061b362ff1daa4)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_2495ca1015d25cf7aa67c9e16e0b4078)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_b592de027af856e4bf73bf2d9ee150c0)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_c9d7c6051e53535e9f7b95d8b5e3c58c)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_7ab8da1941075fb4b59184032353f9ab)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_c66ee3e7cfed5ca1a1b18357bb01586a)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_a1f2ae6640075d6699148d022fb009a3)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_1368ad22284c5ec7a72c4128b55de4e2)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_62d44b9d18015071bd7a86303fa9500e)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_9bbcd485da625e5c91f482b6b655d41d)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_8542630b6de4522d829d27a5ab3386d6)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_4c0eceab5d2656dba8be4b853ab6be97)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_77fc7838cf145252b7bec6cf6dc0a953)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_12b6987c6053584086ea00ddd32b4bd5)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_e5fa3d4b2fd45b908b9435b34c23fb58)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_b8e5d42a216d55888f8b8189a4377627)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_c897948b5ec65aba8a01a49cf2152121)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_6e362a1eccaa5e8c9cebcab7eaf50854)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_556970a2a21a56b184c313cc0a6bd7fb)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_94847578e309551d8281775fdda1a742, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_08dd67ff948a5e5d8e3bb211d372a7cd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_0252ab2deaf35fb9957a2acb48ee3798, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_7e1a6e5375875932821773daa9245dfb, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_ab0758ec33585d80a362fa553303d173, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_ee3a12f45e445415b066ecdecfc19eb5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_2b031b1103af5c99bc061b362ff1daa4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_2495ca1015d25cf7aa67c9e16e0b4078, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_b592de027af856e4bf73bf2d9ee150c0, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_c9d7c6051e53535e9f7b95d8b5e3c58c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_7ab8da1941075fb4b59184032353f9ab, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_c66ee3e7cfed5ca1a1b18357bb01586a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_a1f2ae6640075d6699148d022fb009a3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_1368ad22284c5ec7a72c4128b55de4e2, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_62d44b9d18015071bd7a86303fa9500e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_9bbcd485da625e5c91f482b6b655d41d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_8542630b6de4522d829d27a5ab3386d6, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_4c0eceab5d2656dba8be4b853ab6be97, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_77fc7838cf145252b7bec6cf6dc0a953, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_12b6987c6053584086ea00ddd32b4bd5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_e5fa3d4b2fd45b908b9435b34c23fb58, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_b8e5d42a216d55888f8b8189a4377627, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_c897948b5ec65aba8a01a49cf2152121, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_6e362a1eccaa5e8c9cebcab7eaf50854, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_556970a2a21a56b184c313cc0a6bd7fb, "");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_from_decl_context");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_to_decl_context");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("create");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof_kind");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("create_deserialized");

    if(std::is_class< autowig::HeldType< class ::clang::BlockDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}