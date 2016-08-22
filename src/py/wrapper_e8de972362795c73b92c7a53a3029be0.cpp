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
    class ::clang::BlockDecl  * (*method_pointer_538e09c2129e52f49e96dd32894b3465)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_b685e1cb155d56479bf850b8ae7357d7)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_f91bd974ef165d8ab4dcd46e5d207a62)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_92711f81436c52bb9a7deab69f6866eb)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_dc0a9cf5e8ec5675b1021fb9995726d7)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_eb1ce580f8b158eb8be502d0002fa793)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_62038e1c6c1d5597b191537b6c0b0830)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_80e31849ca16566b91d8809813ec364d)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_f603e9e6e25f5a4ca15a0713773b34c7)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_f467af37c55c50d69a7b0e24453b50d2)() const = &::clang::BlockDecl::getBlockManglingNumber;
    unsigned int  (::clang::BlockDecl::*method_pointer_8e875a22477051bdbba275beae73dbff)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_ce20f55e5b2f58058d61c19e6c23c9cb)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_b7935de655815f089da65a9e6e026d87)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_cdde9f999d22585a8373af6d12210736)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_d09cd7552f5852f9a8d2bbd3ec736f53)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_98ffe2dc70f2553ba9f88fc4a0b18572)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_ecfef058adf95389864a4a3fc8757b21)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_ba56c91548b55de5a3fb2b6d19284e03)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_afd051f64b4b5a21929a9f4460be5d5f)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_4c3faf27fd23557db86a8b2452dae315)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_70931994d1665d63ba6f6adac68a1792)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_f334362dc996591c84677ed25bafc9e3)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_f956e2357718502b97e64334d07763c6)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_538e09c2129e52f49e96dd32894b3465, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_b685e1cb155d56479bf850b8ae7357d7, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_f91bd974ef165d8ab4dcd46e5d207a62, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_92711f81436c52bb9a7deab69f6866eb, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_dc0a9cf5e8ec5675b1021fb9995726d7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_eb1ce580f8b158eb8be502d0002fa793, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_62038e1c6c1d5597b191537b6c0b0830, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_80e31849ca16566b91d8809813ec364d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_f603e9e6e25f5a4ca15a0713773b34c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_f467af37c55c50d69a7b0e24453b50d2, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_8e875a22477051bdbba275beae73dbff, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_ce20f55e5b2f58058d61c19e6c23c9cb, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_b7935de655815f089da65a9e6e026d87, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_cdde9f999d22585a8373af6d12210736, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_d09cd7552f5852f9a8d2bbd3ec736f53, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_98ffe2dc70f2553ba9f88fc4a0b18572, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_ecfef058adf95389864a4a3fc8757b21, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_ba56c91548b55de5a3fb2b6d19284e03, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_afd051f64b4b5a21929a9f4460be5d5f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_4c3faf27fd23557db86a8b2452dae315, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_70931994d1665d63ba6f6adac68a1792, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_f334362dc996591c84677ed25bafc9e3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_f956e2357718502b97e64334d07763c6, "");
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