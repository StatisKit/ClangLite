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
    class ::clang::BlockDecl  * (*method_pointer_28ab27a47fa05a60a48d07f0359a3ed0)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_cbb0e1d65cb957baa414c9253f3b16ab)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_7b010700195f51c498011fdb8d4ad5cc)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_342e76d06e4f5e24bfda51d8732e57e3)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_a1d016159f85521d86cf45b1123de3f9)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_5c37bbb9c3e752f6a4146e5a694852eb)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_9a87c1346f755d79a7f44481e92109e7)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_9452ff29325c502abcd9c746f4fabd5b)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_ebc591bbd99753689cc4c56309e69c57)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_8976c77dc250544c85977e0ba2ccd872)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_1b46c535de2a5ce1b6c4c51272729acd)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_7f1b7bc8f3f1540e8f46abdf5ad1a35a)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_82e3b86d01df53bfa33575aff3a07385)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_c7a886a6a232535b894d6c7f494d678b)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_1ab5cda0d37a515aba4a87899e74b136)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_40d58553dfc0590fb20d307ce34b49ae)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_74d1fa8c855d5b4cb911261c4ba2d57c)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_8244537ba6d95c38abab02325c4940c5)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_8ee537ebfe8d59c4a60f4fbe701a3c94)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_1a6a889c4cd15d5887bb5db4df1f6319)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_8361a22380395d4ebd7a3ad9e8f6bbeb)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_d0002dbb7b165c95986367132533e213)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_69a61a28a8515a6498309b1086b9b23d)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_8320074e8526551a96828e12c008b534)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_77efc54bc8035c2388bf8ec5e798a884)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_28ab27a47fa05a60a48d07f0359a3ed0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_cbb0e1d65cb957baa414c9253f3b16ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_7b010700195f51c498011fdb8d4ad5cc, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_342e76d06e4f5e24bfda51d8732e57e3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_a1d016159f85521d86cf45b1123de3f9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_5c37bbb9c3e752f6a4146e5a694852eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_9a87c1346f755d79a7f44481e92109e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_9452ff29325c502abcd9c746f4fabd5b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_ebc591bbd99753689cc4c56309e69c57, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_8976c77dc250544c85977e0ba2ccd872, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_1b46c535de2a5ce1b6c4c51272729acd, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_7f1b7bc8f3f1540e8f46abdf5ad1a35a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_82e3b86d01df53bfa33575aff3a07385, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_c7a886a6a232535b894d6c7f494d678b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_1ab5cda0d37a515aba4a87899e74b136, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_40d58553dfc0590fb20d307ce34b49ae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_74d1fa8c855d5b4cb911261c4ba2d57c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_8244537ba6d95c38abab02325c4940c5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_8ee537ebfe8d59c4a60f4fbe701a3c94, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_1a6a889c4cd15d5887bb5db4df1f6319, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_8361a22380395d4ebd7a3ad9e8f6bbeb, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_d0002dbb7b165c95986367132533e213, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_69a61a28a8515a6498309b1086b9b23d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_8320074e8526551a96828e12c008b534, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_77efc54bc8035c2388bf8ec5e798a884, "");
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