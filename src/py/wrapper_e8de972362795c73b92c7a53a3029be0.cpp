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
    class ::clang::BlockDecl  * (*method_pointer_f33642c1db185c5b9c5456d0896400c4)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_1b0f193dea3e5868bece23cef0eb7e8c)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_7c787bf51ce45942885914872832b1c4)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_9950cd704ad65c47aee5ddb19cc2045e)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_7e1789107b3f5acbb3751153a10e7d1f)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_2c18ce27d0355be783eb602af611d3c2)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_f7f8dfcac6f15c169c97f3322e20955e)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_00b83771fb8c53a39a65837bab98f29a)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_fe6035a9da765f709d3de8bd5327c5c1)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_3f10910a77a45345b8b4f0a9d679212e)() const = &::clang::BlockDecl::getBlockManglingNumber;
    unsigned int  (::clang::BlockDecl::*method_pointer_cecf328c97cf5c07a01f1b601da3bcf3)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_88009328cbd05bf6892498740f7b051a)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_2d82be51373e5e29b59c513d0df416ab)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_412add68db3553db89ff903617be6fbc)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_c86c0795991b51e9b4f5442a0870a75c)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_b6ebc4079ff657a8aa097e6391cad1cb)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_47e555889dec5856a562b6ea98007b19)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_5187b837ef0b5f3eb2cbe48efdd78930)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_111c564db8c85c1099ba6e058a7f54ed)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_7f8c4bcfe729594abb38a05d2e9f982c)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_da4846efef145a09ac77b3a7a88c3b3f)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_635d6b1cecc35aeeac79395cdadd570b)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_7fd33ba42f215701849812ebeb99037a)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_f33642c1db185c5b9c5456d0896400c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_1b0f193dea3e5868bece23cef0eb7e8c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_7c787bf51ce45942885914872832b1c4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_9950cd704ad65c47aee5ddb19cc2045e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_7e1789107b3f5acbb3751153a10e7d1f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_2c18ce27d0355be783eb602af611d3c2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_f7f8dfcac6f15c169c97f3322e20955e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_00b83771fb8c53a39a65837bab98f29a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_fe6035a9da765f709d3de8bd5327c5c1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_3f10910a77a45345b8b4f0a9d679212e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_cecf328c97cf5c07a01f1b601da3bcf3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_88009328cbd05bf6892498740f7b051a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_2d82be51373e5e29b59c513d0df416ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_412add68db3553db89ff903617be6fbc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_c86c0795991b51e9b4f5442a0870a75c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_b6ebc4079ff657a8aa097e6391cad1cb, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_47e555889dec5856a562b6ea98007b19, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_5187b837ef0b5f3eb2cbe48efdd78930, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_111c564db8c85c1099ba6e058a7f54ed, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_7f8c4bcfe729594abb38a05d2e9f982c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_da4846efef145a09ac77b3a7a88c3b3f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_635d6b1cecc35aeeac79395cdadd570b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_7fd33ba42f215701849812ebeb99037a, "");
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