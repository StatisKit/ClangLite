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
    class ::clang::BlockDecl  * (*method_pointer_088be2592f28591292a311f5c8cba7a9)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_d05f5a65a88a50268908177eeb2fe7fa)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_cad5e1bb1d245624ace8db57beaf1466)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_3c59110b5c7f584ab4941f64631412c4)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_b963d97546e95890bc2ea403d4e2e01c)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_c1f42583a098526fa292f0dadb9e0453)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_9d4274ebcaf25164a500da3fda1ac89e)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_bc0fc7b8f7185daab6c8e262beb14de9)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_e725455b9f165ce2bdfbd553bce5ccf9)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_df3693b0ea71598ca2ac636b2dcf1a2e)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_2df719c781275008ab7635cf6d31fcbe)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_2941addc180e56ecb0fb6fcdee2ca48e)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_c766b822d54657eea17453a5ae2b0eda)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_bd2e6ff784c55a41b1cc90bd47aca8ad)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_15121116214f5e37af05de8b7ee13df5)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_70853b7d69275d7f96ed8e05e6bdb52d)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_271ac49d547f509c9b658382cae7e46c)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_e37175e4d89c5672bec6cd2a33c8d151)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_90b019b4e30753b7b9d6fa7f308d2d14)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_827ea6074467506a91994ff23e574db5)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_4d12620e9e165ad1bd47ddd244144fb7)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_f213d0902a1e5694883164d837db5add)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_931c896eeba95b2b8c2554f4ff324c04)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_9fc7e6c3fcbb56dbbae0e2462999b1af)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_eb074573dd8a5a489ffae9becaf00b1d)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_088be2592f28591292a311f5c8cba7a9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_d05f5a65a88a50268908177eeb2fe7fa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_cad5e1bb1d245624ace8db57beaf1466, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_3c59110b5c7f584ab4941f64631412c4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_b963d97546e95890bc2ea403d4e2e01c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_c1f42583a098526fa292f0dadb9e0453, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_9d4274ebcaf25164a500da3fda1ac89e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_bc0fc7b8f7185daab6c8e262beb14de9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_e725455b9f165ce2bdfbd553bce5ccf9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_df3693b0ea71598ca2ac636b2dcf1a2e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_2df719c781275008ab7635cf6d31fcbe, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_2941addc180e56ecb0fb6fcdee2ca48e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_c766b822d54657eea17453a5ae2b0eda, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_bd2e6ff784c55a41b1cc90bd47aca8ad, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_15121116214f5e37af05de8b7ee13df5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_70853b7d69275d7f96ed8e05e6bdb52d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_271ac49d547f509c9b658382cae7e46c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_e37175e4d89c5672bec6cd2a33c8d151, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_90b019b4e30753b7b9d6fa7f308d2d14, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_827ea6074467506a91994ff23e574db5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_4d12620e9e165ad1bd47ddd244144fb7, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_f213d0902a1e5694883164d837db5add, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_931c896eeba95b2b8c2554f4ff324c04, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_9fc7e6c3fcbb56dbbae0e2462999b1af, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_eb074573dd8a5a489ffae9becaf00b1d, "");
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