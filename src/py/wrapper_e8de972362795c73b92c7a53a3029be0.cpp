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
    class ::clang::BlockDecl  * (*method_pointer_d354374699605730b19510c87228aa05)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_a28b8e93352457c8bdc8eee460935de9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_5003721783f254e78fa4feab7be81503)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_839231756ccf556488af43f569b4f908)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_a8f3b8265f2d591ea607d8a6b149faad)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_efd04309e3bb50f9a9ed2132e3bc6f3c)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_c735747887785896b3c3f8a733fca016)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_5fdc6d9b6cbd5a40a69fce574c81135e)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_a0710f9c97d1590e96a285d7cbb7a30d)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_cf77eaa7840b54218d045eb17d17ae5f)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_ec7aacf6aa1d57058ec86af9a5c7e612)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_823e43ba2d6e5ee1b19ebe1d88a186b1)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_ba0aec43bf4a52e7809604f4c7861473)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_838884dc5bc7590aa6fdfa3cf1906688)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_0dac24281c755c3ab288c22e0305935f)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_057b5f1eba5153b7bf88881bc6eb6efc)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_9e8c1e8794cd50319cf93d34d5d5ef05)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_1b6a4333f44b5d26a86564958e715f83)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_25f521580527540c8f1a4ebf9096881b)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_1b8a77ae1a0c5d82ad1aadadea8e3b1a)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_8ccc1a93f86e5d2d8b483e8d43e93cd7)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_082a57569f0851e7b4e6e89093a6c412)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_4b1057e211ab55e3b50bc11a696549cd)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_511c1feb8643575d970b6cd61d26f8f9)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_2e65161139ec51f9933a29ea892f6891)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_d354374699605730b19510c87228aa05, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_a28b8e93352457c8bdc8eee460935de9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_5003721783f254e78fa4feab7be81503, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_839231756ccf556488af43f569b4f908, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_a8f3b8265f2d591ea607d8a6b149faad, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_efd04309e3bb50f9a9ed2132e3bc6f3c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_c735747887785896b3c3f8a733fca016, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_5fdc6d9b6cbd5a40a69fce574c81135e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_a0710f9c97d1590e96a285d7cbb7a30d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_cf77eaa7840b54218d045eb17d17ae5f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_ec7aacf6aa1d57058ec86af9a5c7e612, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_823e43ba2d6e5ee1b19ebe1d88a186b1, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_ba0aec43bf4a52e7809604f4c7861473, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_838884dc5bc7590aa6fdfa3cf1906688, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_0dac24281c755c3ab288c22e0305935f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_057b5f1eba5153b7bf88881bc6eb6efc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_9e8c1e8794cd50319cf93d34d5d5ef05, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_1b6a4333f44b5d26a86564958e715f83, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_25f521580527540c8f1a4ebf9096881b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_1b8a77ae1a0c5d82ad1aadadea8e3b1a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_8ccc1a93f86e5d2d8b483e8d43e93cd7, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_082a57569f0851e7b4e6e89093a6c412, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_4b1057e211ab55e3b50bc11a696549cd, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_511c1feb8643575d970b6cd61d26f8f9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_2e65161139ec51f9933a29ea892f6891, "");
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