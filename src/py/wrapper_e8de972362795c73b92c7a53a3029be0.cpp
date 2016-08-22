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
    class ::clang::BlockDecl  * (*method_pointer_47d52f5a8afb53549e494ccddd762d04)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_48c91003f0d55ac89a1f41c749f1b160)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_820662ea5d155375b01eda1756b7493b)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_f580b66fe54658cea3564dbaa7346d32)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_e506bee8842258b0af6fd26dfebf34f5)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_33c0224c824650968edb2ab4efe1d72b)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_6f98657f95e75c3fa24000a64b5c98df)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_8282e279b62953f785846ca4e2f94736)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_94a186b6336a5744bc32aad56023e8e2)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_96232e5a2b7b55818a4e0e461002fcb4)() const = &::clang::BlockDecl::getBlockManglingNumber;
    unsigned int  (::clang::BlockDecl::*method_pointer_9c1917ee8f2b5f00ad06312e87d2f40e)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_51e806ca14a35cf5a59efed69c4a96aa)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_fddb491af81f50cbb3a6aa197774a46d)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_07b12149148d50588c3a532b1f9a1317)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_6d4fd727df255c32af65fbdfccd07a73)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_4049b7e1498c5b6296e4c332b4259668)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_98b0288d575a502db1e6fe07bc2f1f06)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_29c782ff576a506c801992ca394be929)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_30b842822fd152f398012c88187ad60d)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_c25386134d855d38beb4c84e90b8d454)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_1ca3654d244b5b3dabc5b1051b053aa1)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_6c85a4e665765ed9973c0aeaa0045931)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_d2cccfdaba695d929de0706232360796)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_47d52f5a8afb53549e494ccddd762d04, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_48c91003f0d55ac89a1f41c749f1b160, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_820662ea5d155375b01eda1756b7493b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_f580b66fe54658cea3564dbaa7346d32, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_e506bee8842258b0af6fd26dfebf34f5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_33c0224c824650968edb2ab4efe1d72b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_6f98657f95e75c3fa24000a64b5c98df, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_8282e279b62953f785846ca4e2f94736, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_94a186b6336a5744bc32aad56023e8e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_96232e5a2b7b55818a4e0e461002fcb4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_9c1917ee8f2b5f00ad06312e87d2f40e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_51e806ca14a35cf5a59efed69c4a96aa, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_fddb491af81f50cbb3a6aa197774a46d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_07b12149148d50588c3a532b1f9a1317, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_6d4fd727df255c32af65fbdfccd07a73, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_4049b7e1498c5b6296e4c332b4259668, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_98b0288d575a502db1e6fe07bc2f1f06, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_29c782ff576a506c801992ca394be929, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_30b842822fd152f398012c88187ad60d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_c25386134d855d38beb4c84e90b8d454, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_1ca3654d244b5b3dabc5b1051b053aa1, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_6c85a4e665765ed9973c0aeaa0045931, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_d2cccfdaba695d929de0706232360796, "");
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