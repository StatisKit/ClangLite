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
    class ::clang::BlockDecl  * (*method_pointer_732e45ae6b9453f693636d71cbd92707)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_54bb555640e05fb6ac5cfe30eae9c302)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_0cb6279430275cb6bd5abe522cc2d520)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_c926bd3877c85137a9313ecde8014884)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_1042a6486f4e568e88fa09b612b8b5d6)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_9988dcffc2625ca0bf888142bbb23175)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_62dd90241667548f915fd4710717ae81)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_d21aeaaede2651afa4e4a3981aedeef3)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_837b426a73715150b95d6c27fe54f5d9)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_3eef13207d27518e8a1bfe9f32751656)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_7471da9efe6156b6a23f2b0fa26e9cfe)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_c9b77463df8450b99b5523b65b8f655d)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_a91e9653193154d69a0cd5a6612b4f89)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_7a2c5505d1d153ed9a47b21bd36579a9)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_34ec46fb1baa5887b01fa15bc8fde878)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_a1c8a8810a06563195cf695965e508ea)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_4ccf821000d858bfa793a39a31c9b667)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_083089473c0058b6bdc3f34d85d1c032)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_74f020433a5251c199b35dc8e4a2671e)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_edeb7cb573885644b12cb796bba0f934)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_1d318ad700915c73af6194002d7ace7e)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_b0420cde51c854a3b078ff5693b08b3f)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_d4ee0bbf415c574d930d9fd3c16434de)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_24c6717371435f77b15ab4edcba9a8db)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_8e08488f8601585f9e95dc4a010245d3)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_732e45ae6b9453f693636d71cbd92707, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_54bb555640e05fb6ac5cfe30eae9c302, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_0cb6279430275cb6bd5abe522cc2d520, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_c926bd3877c85137a9313ecde8014884, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_1042a6486f4e568e88fa09b612b8b5d6, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_9988dcffc2625ca0bf888142bbb23175, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_62dd90241667548f915fd4710717ae81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_d21aeaaede2651afa4e4a3981aedeef3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_837b426a73715150b95d6c27fe54f5d9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_3eef13207d27518e8a1bfe9f32751656, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_7471da9efe6156b6a23f2b0fa26e9cfe, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_c9b77463df8450b99b5523b65b8f655d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_a91e9653193154d69a0cd5a6612b4f89, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_7a2c5505d1d153ed9a47b21bd36579a9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_34ec46fb1baa5887b01fa15bc8fde878, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_a1c8a8810a06563195cf695965e508ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_4ccf821000d858bfa793a39a31c9b667, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_083089473c0058b6bdc3f34d85d1c032, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_74f020433a5251c199b35dc8e4a2671e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_edeb7cb573885644b12cb796bba0f934, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_1d318ad700915c73af6194002d7ace7e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_b0420cde51c854a3b078ff5693b08b3f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_d4ee0bbf415c574d930d9fd3c16434de, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_24c6717371435f77b15ab4edcba9a8db, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_8e08488f8601585f9e95dc4a010245d3, "");
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