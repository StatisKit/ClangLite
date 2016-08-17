#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_e8de972362795c73b92c7a53a3029be0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::BlockDecl::*method_pointer_0bb1d71b18bb5c20bbb5d67e83632417)() const = &::clang::BlockDecl::param_empty;
    bool  (*method_pointer_1fb3bcff095256749ad6c39b82c60c48)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_d0445f5626d753ceaa248afec056e839)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    void  (::clang::BlockDecl::*method_pointer_110019e56e225c7287cd1aacd0251baa)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_2e9b80146b1b52bcb3fc2e03f5dcc59f)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (*method_pointer_1641699dcdb45eec9447fdcc9f550679)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    class ::clang::DeclContext  * (*method_pointer_37386467f6635c109eb5a621917a20d7)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    void  (::clang::BlockDecl::*method_pointer_321b9e958fa451db8cd706d9317dc990)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    unsigned int  (::clang::BlockDecl::*method_pointer_fdfd41c4fd685444b85a4166bd1e5c29)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_d8ddd0dde47258a7af821d21b05a4e32)() const = &::clang::BlockDecl::getNumParams;
    unsigned int  (::clang::BlockDecl::*method_pointer_762ac821e2b953e09fb03e4cd30acf4c)() const = &::clang::BlockDecl::param_size;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_e819205b79a457e99e63cf591c40bfc8)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    class ::clang::BlockDecl  * (*method_pointer_410dcf0bcb5d5b149af55544f6cc2d9a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    class ::clang::BlockDecl  * (*method_pointer_020c45f338f95f5fad1def7db2a62dca)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    bool  (::clang::BlockDecl::*method_pointer_d99afc44153f56c6a48dc6e67603550d)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_6f898de4a21457f686b7c667c4c0a4f7)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_e64963232cee53428ef14b7e7d339456)() const = &::clang::BlockDecl::blockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_f33b87cfbfe25b3293d33c434a8e02e9)(bool ) = &::clang::BlockDecl::setIsVariadic;
    bool  (::clang::BlockDecl::*method_pointer_b8e8d25c88525f9dbcb51eb138d3a9a2)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_0d89da0b93a85586bb8a01713645f094)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    bool  (::clang::BlockDecl::*method_pointer_f82d1e1a12325f11a5a427218e283b69)() const = &::clang::BlockDecl::isConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_616723f902c35481bd376b3d0e988d82)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    unsigned int  (::clang::BlockDecl::*method_pointer_11b9b6c350dd5a4caf643d50870fc1a0)() const = &::clang::BlockDecl::getBlockManglingNumber;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_0bb1d71b18bb5c20bbb5d67e83632417, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_1fb3bcff095256749ad6c39b82c60c48, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_d0445f5626d753ceaa248afec056e839, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_110019e56e225c7287cd1aacd0251baa, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_2e9b80146b1b52bcb3fc2e03f5dcc59f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_1641699dcdb45eec9447fdcc9f550679, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_37386467f6635c109eb5a621917a20d7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_321b9e958fa451db8cd706d9317dc990, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_fdfd41c4fd685444b85a4166bd1e5c29, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_d8ddd0dde47258a7af821d21b05a4e32, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_762ac821e2b953e09fb03e4cd30acf4c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_e819205b79a457e99e63cf591c40bfc8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_410dcf0bcb5d5b149af55544f6cc2d9a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_020c45f338f95f5fad1def7db2a62dca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_d99afc44153f56c6a48dc6e67603550d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_6f898de4a21457f686b7c667c4c0a4f7, "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_e64963232cee53428ef14b7e7d339456, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_f33b87cfbfe25b3293d33c434a8e02e9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_b8e8d25c88525f9dbcb51eb138d3a9a2, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_0d89da0b93a85586bb8a01713645f094, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_f82d1e1a12325f11a5a427218e283b69, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_616723f902c35481bd376b3d0e988d82, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_11b9b6c350dd5a4caf643d50870fc1a0, "");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof_kind");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("create_deserialized");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_from_decl_context");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::BlockDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}