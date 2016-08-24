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
    class ::clang::BlockDecl  * (*method_pointer_66c441570f2b5cd798bc0e3fae81b165)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_c45840b84e2d57028300176012bbf7c7)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_8a08b26b488c5dd2be9c851310ddc158)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_e2f7cc34a85f56edab03209e7c7ff9fe)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_792a5995cd545210987b7aa13621742f)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_d33b961cac3e5ee687c6ae68cf24caee)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_f7f3a419d7d95b1496750c5174379e9a)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_461a477a9708587c8cc0953d9a4ade07)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_3714075f32a557149776fd9cb1beee86)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_69cc3cdc863a5a19b1c6b4de49cf105b)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_a9987092dba858b7b187024e6cb87b64)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_67a94f4ccb9c51f7815c414d22632dce)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_8c56cbc64acb518caf1fadbf9a285e56)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_4d77ae32f87c572cb2d27d5994bc2b62)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_4d49a32b5dfb555eb1a5baaf0510e1ce)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_6c3bf1f10695508bb3ae5ec174dc2f0b)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_51129853a3a5595d9c37f6bfe0b08f5a)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_6f44d703808451c4b7dafc477b06a79c)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_e0c31ba0dbcb5942b56c5e978d965958)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_0016eb2921f45fe2a0f2d96db6c98f57)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_aa1dc63bfe3b5c5cae6527a0ee64e47d)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_45d88c8422e5567e821470dcd117cc8b)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_2a4a62fc9b575bf593cfe4c31afb69c7)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_93b4b44ec56b52dda1a37e93ec10f86f)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_935081951a0b5c15adecc5018e031ac3)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_66c441570f2b5cd798bc0e3fae81b165, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_c45840b84e2d57028300176012bbf7c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_8a08b26b488c5dd2be9c851310ddc158, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_e2f7cc34a85f56edab03209e7c7ff9fe, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_792a5995cd545210987b7aa13621742f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_d33b961cac3e5ee687c6ae68cf24caee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_f7f3a419d7d95b1496750c5174379e9a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_461a477a9708587c8cc0953d9a4ade07, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_3714075f32a557149776fd9cb1beee86, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_69cc3cdc863a5a19b1c6b4de49cf105b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_a9987092dba858b7b187024e6cb87b64, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_67a94f4ccb9c51f7815c414d22632dce, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_8c56cbc64acb518caf1fadbf9a285e56, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_4d77ae32f87c572cb2d27d5994bc2b62, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_4d49a32b5dfb555eb1a5baaf0510e1ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_6c3bf1f10695508bb3ae5ec174dc2f0b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_51129853a3a5595d9c37f6bfe0b08f5a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_6f44d703808451c4b7dafc477b06a79c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_e0c31ba0dbcb5942b56c5e978d965958, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_0016eb2921f45fe2a0f2d96db6c98f57, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_aa1dc63bfe3b5c5cae6527a0ee64e47d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_45d88c8422e5567e821470dcd117cc8b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_2a4a62fc9b575bf593cfe4c31afb69c7, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_93b4b44ec56b52dda1a37e93ec10f86f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_935081951a0b5c15adecc5018e031ac3, "");
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