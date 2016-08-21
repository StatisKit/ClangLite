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
    class ::clang::BlockDecl  * (*method_pointer_f0926d1573a45f37816982b56f044a64)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_104345fd5d4855a7b69dffdcf5c9bc94)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_74330e4147a358f5b23e82fdbf9481f8)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_7c631ddac8185b2b94a07c892f9fb2d5)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_e4e1189d1431524e93cf735e627f7dbc)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_f1cbb896e2d3566882a33b625630d0f1)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_48d55169b6ad587181f6ed328dc9ea5a)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_fb41181e606855ddaf1d366e996aa282)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_dc0a809e1f675a9cac70c76b27250a08)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_c260d27462c359f1bae3392c5b25b771)() const = &::clang::BlockDecl::getBlockManglingNumber;
    unsigned int  (::clang::BlockDecl::*method_pointer_adf67d1054715045a68606f04148cad6)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_098f59a6adaf5dc08d10190fb2998fc6)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_74d5ee4318565a59ad75d37d0c972416)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_4d6064f64a2f50c8ba27c641b3e4fe18)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_4612c3d8b2c457a79849549356934bd7)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_000992308ff05214bc5b69bf2b845026)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_7e1ba7f56d415d1f94526efaaef3ef88)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_8c869f59055e543d8b157063fd935c81)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_b8291e535aa7583d98c6d37eaee371dc)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_b229b3d53318546f8e3bdd45c04707e1)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_1513ccc5b2b854308ee9f39f4e94a1b0)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_a2442261879e5554af6a26f0e5e4f00b)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_a6aa054471b4537594b4174eac464a3f)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_f0926d1573a45f37816982b56f044a64, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_104345fd5d4855a7b69dffdcf5c9bc94, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_74330e4147a358f5b23e82fdbf9481f8, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_7c631ddac8185b2b94a07c892f9fb2d5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_e4e1189d1431524e93cf735e627f7dbc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_f1cbb896e2d3566882a33b625630d0f1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_48d55169b6ad587181f6ed328dc9ea5a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_fb41181e606855ddaf1d366e996aa282, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_dc0a809e1f675a9cac70c76b27250a08, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_c260d27462c359f1bae3392c5b25b771, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_adf67d1054715045a68606f04148cad6, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_098f59a6adaf5dc08d10190fb2998fc6, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_74d5ee4318565a59ad75d37d0c972416, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_4d6064f64a2f50c8ba27c641b3e4fe18, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_4612c3d8b2c457a79849549356934bd7, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_000992308ff05214bc5b69bf2b845026, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_7e1ba7f56d415d1f94526efaaef3ef88, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_8c869f59055e543d8b157063fd935c81, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_b8291e535aa7583d98c6d37eaee371dc, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_b229b3d53318546f8e3bdd45c04707e1, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_1513ccc5b2b854308ee9f39f4e94a1b0, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_a2442261879e5554af6a26f0e5e4f00b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_a6aa054471b4537594b4174eac464a3f, "");
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