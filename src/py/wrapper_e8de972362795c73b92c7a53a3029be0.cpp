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
    class ::clang::BlockDecl  * (*method_pointer_9fae5fbc031d556ca6562f4946e86362)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_2bfa553a124d53e0832a5a9e062f04f5)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_5e2756d5a0cb5ce6afbd377dbfd339ed)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_adc1031d95785bb0bc0021ca43f801b0)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_bf4cd956ef365843922824675afea214)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_85a4d3a471105cce99b9be825e53410d)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_5bd0093cc5ec52d5b3db03670f862c0b)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_a7c19e9701075644983cd9c47de76154)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_2709b6cd36425ef28163c63e193e42ba)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_107e63dbef205d2fb7766173a87df18b)() const = &::clang::BlockDecl::getBlockManglingNumber;
    unsigned int  (::clang::BlockDecl::*method_pointer_1fa87b80f90b5efab9fc10c21b0d4da7)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_2eaea39ed85458719941b347d632fa26)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_f0c6543f91685e4d97943e93343e57e7)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_10626155cbb65547b1c20fe8ae11d82b)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_92716007413658feb17964b81f6b8b82)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_72dfcb762d7e5089a4b0b9b5b58188ec)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_e8e18024d2bf53a996f04869c3bb3f58)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_09905929737751ed869264fb287326fb)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_578ca148107a5e6395fe54c793a66e96)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_1dea79fdeb265ef79604a85436937a59)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_688691275ba45bd3afd5a11c873f6ea9)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_e5d321e2821e5fe3ab89715bb349b7f5)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_3cfdfd7d3b2e5e4883bc0153f5adc563)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_9fae5fbc031d556ca6562f4946e86362, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_2bfa553a124d53e0832a5a9e062f04f5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_5e2756d5a0cb5ce6afbd377dbfd339ed, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_adc1031d95785bb0bc0021ca43f801b0, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_bf4cd956ef365843922824675afea214, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_85a4d3a471105cce99b9be825e53410d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_5bd0093cc5ec52d5b3db03670f862c0b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_a7c19e9701075644983cd9c47de76154, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_2709b6cd36425ef28163c63e193e42ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_107e63dbef205d2fb7766173a87df18b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_1fa87b80f90b5efab9fc10c21b0d4da7, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_2eaea39ed85458719941b347d632fa26, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_f0c6543f91685e4d97943e93343e57e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_10626155cbb65547b1c20fe8ae11d82b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_92716007413658feb17964b81f6b8b82, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_72dfcb762d7e5089a4b0b9b5b58188ec, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_e8e18024d2bf53a996f04869c3bb3f58, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_09905929737751ed869264fb287326fb, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_578ca148107a5e6395fe54c793a66e96, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_1dea79fdeb265ef79604a85436937a59, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_688691275ba45bd3afd5a11c873f6ea9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_e5d321e2821e5fe3ab89715bb349b7f5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_3cfdfd7d3b2e5e4883bc0153f5adc563, "");
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