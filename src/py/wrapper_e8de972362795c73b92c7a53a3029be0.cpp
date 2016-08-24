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
    class ::clang::BlockDecl  * (*method_pointer_f3dc3a1c293659f380c4a2b8f3d3abcd)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_9413a15ce4a0560b9d4ea5cce7252b5e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_70bfa545ff4a53689cab90c9794ef9c9)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_69b360f35f195e4796fee0562b92d0c7)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_ef125f8f6b7b549d84c7814454a61acd)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_38e4cff860cf514ca4acf78e78ae3891)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_57ab4867fad15b3c8c01653df0731b70)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_43f0328831e4577992286cadb55bd3f6)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_885480e3ee5d57e99a247e8328bc096d)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_7c6068936d6e5bdb9b0d9dcc7e3bd2a3)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_39bf6c24d75859f983476a4ab095e6d6)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_9854c5652a855689928ad9445077485d)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_188db6a21b005edb8efafcb1985b22ae)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_ce0ad3e4b7c75aa997712f6455f57d00)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_15777f429e1e51ea8bce5c182949b1c3)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_4a97c19e4a185a3bada247214ba1bcdd)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_f4b1bd46cb595f7ab7228e8bead6d4d5)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_ae9bb47c8df05827b5ed717352bd2361)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_b533187a5a70541caf651c2d0bc29224)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_7363c9d8628c51b39f4c5f613ec20ff6)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_50c47f4cb3905e3e8af5914e1f5146f3)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_6abf29b1264e54389a3781f70b96876a)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_9e233ceb24f45d0b9cd8c36da6ff4ad4)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_b4611a0534d95bdcb7f81380eb735239)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_cefd994ae4d1586c9d808fe1858b2e29)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_f3dc3a1c293659f380c4a2b8f3d3abcd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_9413a15ce4a0560b9d4ea5cce7252b5e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_70bfa545ff4a53689cab90c9794ef9c9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_69b360f35f195e4796fee0562b92d0c7, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_ef125f8f6b7b549d84c7814454a61acd, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_38e4cff860cf514ca4acf78e78ae3891, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_57ab4867fad15b3c8c01653df0731b70, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_43f0328831e4577992286cadb55bd3f6, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_885480e3ee5d57e99a247e8328bc096d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_7c6068936d6e5bdb9b0d9dcc7e3bd2a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_39bf6c24d75859f983476a4ab095e6d6, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_9854c5652a855689928ad9445077485d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_188db6a21b005edb8efafcb1985b22ae, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_ce0ad3e4b7c75aa997712f6455f57d00, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_15777f429e1e51ea8bce5c182949b1c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_4a97c19e4a185a3bada247214ba1bcdd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_f4b1bd46cb595f7ab7228e8bead6d4d5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_ae9bb47c8df05827b5ed717352bd2361, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_b533187a5a70541caf651c2d0bc29224, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_7363c9d8628c51b39f4c5f613ec20ff6, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_50c47f4cb3905e3e8af5914e1f5146f3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_6abf29b1264e54389a3781f70b96876a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_9e233ceb24f45d0b9cd8c36da6ff4ad4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_b4611a0534d95bdcb7f81380eb735239, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_cefd994ae4d1586c9d808fe1858b2e29, "");
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