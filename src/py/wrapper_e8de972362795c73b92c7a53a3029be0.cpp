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
    class ::clang::BlockDecl  * (*method_pointer_326ef9a0c882541e9fb44638debaac94)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_fdfd36445bfe5f2880058966adea8247)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_89e849c4cd2757d49bc85b57dd274f63)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_6ec4e817f7c9529c96bf830c16f40dad)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_ba532900813f55d2987e047bcd0aa9da)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_654d91ee799a575191a82d4a600fa39a)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_f7553abed51c5dfe94549df685974bd9)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_eba6181475b8570abc1549be80db0274)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_0b77fdd8f9e357148b9684a444ed5d89)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_7c47dfeea3ad5417a81d0d89125f1857)() const = &::clang::BlockDecl::getBlockManglingNumber;
    unsigned int  (::clang::BlockDecl::*method_pointer_8d6590ae3cb357b3b9bcf8019fa0c893)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_55bd2caf4abd5524ba6f2c627c837294)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_cde27dbda81b5c11a7f215c6b11aa6ec)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_0c9b9a5d7c975c53ae398275949ba2fa)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_35ad52dbf89257e7ac0749696847b4d7)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_767e3ba6a46255868ea11e954b5cf320)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_d85604e3988b5f6288da9e8b85fa0a89)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_cfd5ed94b6b953d4990a5b32f7a912a5)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_a66be929a08255de9bfd299de456b65a)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_9ce1262615ec510a89328a3648b3b56e)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_29f0fa32b18551849dd2278d34462411)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_74a2f77fb8ac5a1e9fb56c22bd59d8b8)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_bf93d4dbb757567f83ab35fc0f111ee9)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_326ef9a0c882541e9fb44638debaac94, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_fdfd36445bfe5f2880058966adea8247, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_89e849c4cd2757d49bc85b57dd274f63, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_6ec4e817f7c9529c96bf830c16f40dad, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_ba532900813f55d2987e047bcd0aa9da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_654d91ee799a575191a82d4a600fa39a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_f7553abed51c5dfe94549df685974bd9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_eba6181475b8570abc1549be80db0274, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_0b77fdd8f9e357148b9684a444ed5d89, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_7c47dfeea3ad5417a81d0d89125f1857, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_8d6590ae3cb357b3b9bcf8019fa0c893, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_55bd2caf4abd5524ba6f2c627c837294, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_cde27dbda81b5c11a7f215c6b11aa6ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_0c9b9a5d7c975c53ae398275949ba2fa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_35ad52dbf89257e7ac0749696847b4d7, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_767e3ba6a46255868ea11e954b5cf320, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_d85604e3988b5f6288da9e8b85fa0a89, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_cfd5ed94b6b953d4990a5b32f7a912a5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_a66be929a08255de9bfd299de456b65a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_9ce1262615ec510a89328a3648b3b56e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_29f0fa32b18551849dd2278d34462411, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_74a2f77fb8ac5a1e9fb56c22bd59d8b8, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_bf93d4dbb757567f83ab35fc0f111ee9, "");
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