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
    bool  (::clang::BlockDecl::*method_pointer_518b9c199ff1523cb96616bbdc071db8)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_e3ef80cfade15843a761bb22ad0c102b)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    bool  (::clang::BlockDecl::*method_pointer_aecdfd894e7d541e82c08084221f5ebc)() const = &::clang::BlockDecl::param_empty;
    class ::clang::BlockDecl  * (*method_pointer_424b9ca4d6555cfdb066bd5bf21cd78b)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::BlockDecl  * (*method_pointer_d0984b3290db5b1ab7d7b889efcb63a2)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    void  (::clang::BlockDecl::*method_pointer_5b8825494ebc530686def9356df5ac14)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    bool  (*method_pointer_d0e8f6974e2a58299a5fc8a8499757df)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    unsigned int  (::clang::BlockDecl::*method_pointer_c61ef692d19b51969b60606b7a0ea5ff)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_05f45cdfb80b57018740bed8c5f55e4a)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_39b870f206865204a4a4087506c3013b)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    void  (::clang::BlockDecl::*method_pointer_187e4e7ec6885c29860fc5671ab832eb)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_406287b26c815e3ea72a9b3fcac13278)() const = &::clang::BlockDecl::capturesCXXThis;
    unsigned int  (::clang::BlockDecl::*method_pointer_76818ba7b5135e51845d0e903d2ceb1d)() const = &::clang::BlockDecl::getNumParams;
    unsigned int  (::clang::BlockDecl::*method_pointer_71d0f3cb46d1547c950bf1894ba6ee73)() const = &::clang::BlockDecl::param_size;
    bool  (::clang::BlockDecl::*method_pointer_70b0b6639b095254bee652213fdf1bfc)() const = &::clang::BlockDecl::isVariadic;
    class ::clang::DeclContext  * (*method_pointer_5f383457e79155c8af07e277a8ca91ad)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    void  (::clang::BlockDecl::*method_pointer_580c7b4e86065f629916311f346b2599)(bool ) = &::clang::BlockDecl::setIsVariadic;
    bool  (::clang::BlockDecl::*method_pointer_8abd959c251954319f5dc56490f889ff)() const = &::clang::BlockDecl::isConversionFromLambda;
    unsigned int  (::clang::BlockDecl::*method_pointer_209e2239935d58298ddd310f1e369317)() const = &::clang::BlockDecl::getNumCaptures;
    bool  (*method_pointer_1848f9d22ffb58fd89163f70c324e424)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (::clang::BlockDecl::*method_pointer_5d13fd8387ce5de789849fbb50e9d5dc)() const = &::clang::BlockDecl::blockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_fe2214b4d63b5297978b4da163a72e31)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_4d22c214d01d5ac594bd7cc5e89c18bd)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_518b9c199ff1523cb96616bbdc071db8, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_e3ef80cfade15843a761bb22ad0c102b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_aecdfd894e7d541e82c08084221f5ebc, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_424b9ca4d6555cfdb066bd5bf21cd78b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_d0984b3290db5b1ab7d7b889efcb63a2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_5b8825494ebc530686def9356df5ac14, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_d0e8f6974e2a58299a5fc8a8499757df, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_c61ef692d19b51969b60606b7a0ea5ff, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_05f45cdfb80b57018740bed8c5f55e4a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_39b870f206865204a4a4087506c3013b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_187e4e7ec6885c29860fc5671ab832eb, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_406287b26c815e3ea72a9b3fcac13278, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_76818ba7b5135e51845d0e903d2ceb1d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_71d0f3cb46d1547c950bf1894ba6ee73, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_70b0b6639b095254bee652213fdf1bfc, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_5f383457e79155c8af07e277a8ca91ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_580c7b4e86065f629916311f346b2599, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_8abd959c251954319f5dc56490f889ff, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_209e2239935d58298ddd310f1e369317, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_1848f9d22ffb58fd89163f70c324e424, "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_5d13fd8387ce5de789849fbb50e9d5dc, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_fe2214b4d63b5297978b4da163a72e31, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_4d22c214d01d5ac594bd7cc5e89c18bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
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