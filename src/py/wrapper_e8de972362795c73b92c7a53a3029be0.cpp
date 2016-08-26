#include "_clanglite.h"


namespace autowig
{
}


void wrapper_e8de972362795c73b92c7a53a3029be0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::BlockDecl  * (*method_pointer_6def6b7eb1d5502c9a8a6e3fe6b4b64e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_4298ca47b98e5132b7a709067cbecc66)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_e234c7781c5b5c24bfbebf761574c38f)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_1663e3d8eae1513aa574622add12baad)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_49e86fb380a95d6aa5e58b5b0e20cd9e)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_7c476d94bcb7562ba64303a8d72bf377)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_860acc99480c58a4b51d8a1ccc357753)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_c00b04ce8a895b30a0e4eb7a8c4de5ca)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_a08fbfb50f385378bd1c7730a1bb7869)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_b71d4b6798085f3abddf2126ce1b85e5)() const = &::clang::BlockDecl::getBlockManglingNumber;
    unsigned int  (::clang::BlockDecl::*method_pointer_253d533df950569e9b011eab4cdbd673)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_1beaf95d85db5affb317ad8e9b9b04e3)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_d8e023824ad75555a710be2bdebb212e)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_abac1a207d2b5d33aec7e5d55e11d684)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_e1085071e72c56aeb8fdcb71aece033e)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_5d88f58d46325da19e279f43263b00ed)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_d30da73ddfb950bdbcd63b7132f051d2)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_68c800a52a31592f844eb1919a7c39ce)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_622eb7bc577f56f3908843ce42e17ca7)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_6fc04e44d64e5bef967fcbf6ee25f798)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_26e4e670145e5999a0776802e6e21eb4)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_31ea9aad657f56d6a9c3a73f89e8f1ae)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_e7dafe476eda54918096efc1c742fb1e)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_6def6b7eb1d5502c9a8a6e3fe6b4b64e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_4298ca47b98e5132b7a709067cbecc66, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_e234c7781c5b5c24bfbebf761574c38f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_1663e3d8eae1513aa574622add12baad, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_49e86fb380a95d6aa5e58b5b0e20cd9e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_7c476d94bcb7562ba64303a8d72bf377, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_860acc99480c58a4b51d8a1ccc357753, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_c00b04ce8a895b30a0e4eb7a8c4de5ca, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_a08fbfb50f385378bd1c7730a1bb7869, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_b71d4b6798085f3abddf2126ce1b85e5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_253d533df950569e9b011eab4cdbd673, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_1beaf95d85db5affb317ad8e9b9b04e3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_d8e023824ad75555a710be2bdebb212e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_abac1a207d2b5d33aec7e5d55e11d684, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_e1085071e72c56aeb8fdcb71aece033e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_5d88f58d46325da19e279f43263b00ed, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_d30da73ddfb950bdbcd63b7132f051d2, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_68c800a52a31592f844eb1919a7c39ce, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_622eb7bc577f56f3908843ce42e17ca7, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_6fc04e44d64e5bef967fcbf6ee25f798, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_26e4e670145e5999a0776802e6e21eb4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_31ea9aad657f56d6a9c3a73f89e8f1ae, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_e7dafe476eda54918096efc1c742fb1e, "");
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