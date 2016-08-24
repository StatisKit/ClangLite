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
    class ::clang::BlockDecl  * (*method_pointer_e223f3e0ea6250bbbf41fc67ea39b024)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_e502ab3966ff54db9bf77e59115ae774)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_d994a6aaa5415988a7aa5be3ee488570)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_775ecd1c999e512ba324c9eae8673f3b)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_8a8fe1d6a7685c35ab5ca13d3ff3ab76)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_a53a3de9f05f5a86b7974d1eeeeb693a)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_f6267fab817a509397d2c6d7bc44c650)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_864003c81dcf51a5a486e15842836a35)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_7dec7f2c5f7456e68c06b5a61fb1fd0f)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_8f9ff8e117835762b8828db3ee8d0370)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_54ada5334cff5938a67904a074444aaf)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_4c903c2072e85647a91c0d7e8ca7dd7c)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_8e2ebc22842d5557ba9d07f030fa9c9f)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_b69f4bfc97025ab1a5c9a55fcd372cb9)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_8d53c8b2a6865efd9c0ae44bef900661)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_d0d5407322945396ba2971d0905abc9a)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_e2d3cb904c8954bc923cf4bb2fe420da)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_46db2551db8156dd81238393a99d5253)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_9cafa597d6665910ae9fa08941558b50)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_1493e6aaefbf5537a68a593e7a58ab53)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_97e54a58fe365eec8c9e4faf061286f4)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_2f05ca989e195970b82b50a8ed9c2a8d)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_fa3dcc59b5e95f2b97182223902d34b2)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_08086082b8ab53e399704fb2b5e63a62)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_2e27cdcd334454878baa3ca38100471a)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_e223f3e0ea6250bbbf41fc67ea39b024, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_e502ab3966ff54db9bf77e59115ae774, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_d994a6aaa5415988a7aa5be3ee488570, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_775ecd1c999e512ba324c9eae8673f3b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_8a8fe1d6a7685c35ab5ca13d3ff3ab76, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_a53a3de9f05f5a86b7974d1eeeeb693a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_f6267fab817a509397d2c6d7bc44c650, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_864003c81dcf51a5a486e15842836a35, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_7dec7f2c5f7456e68c06b5a61fb1fd0f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_8f9ff8e117835762b8828db3ee8d0370, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_54ada5334cff5938a67904a074444aaf, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_4c903c2072e85647a91c0d7e8ca7dd7c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_8e2ebc22842d5557ba9d07f030fa9c9f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_b69f4bfc97025ab1a5c9a55fcd372cb9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_8d53c8b2a6865efd9c0ae44bef900661, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_d0d5407322945396ba2971d0905abc9a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_e2d3cb904c8954bc923cf4bb2fe420da, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_46db2551db8156dd81238393a99d5253, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_9cafa597d6665910ae9fa08941558b50, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_1493e6aaefbf5537a68a593e7a58ab53, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_97e54a58fe365eec8c9e4faf061286f4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_2f05ca989e195970b82b50a8ed9c2a8d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_fa3dcc59b5e95f2b97182223902d34b2, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_08086082b8ab53e399704fb2b5e63a62, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_2e27cdcd334454878baa3ca38100471a, "");
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