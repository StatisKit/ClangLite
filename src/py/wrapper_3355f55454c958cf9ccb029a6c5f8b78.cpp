#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
    void method_decorator_c223b1f7597f59079d3542203d57658f(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned long int  (::clang::ASTUnit::*method_pointer_dc44999a940d593abc716a1376495dae)() const = &::clang::ASTUnit::top_level_size;
    unsigned int  (::clang::ASTUnit::*method_pointer_c3d24d42a8475e3995ed949faf8918c9)() const = &::clang::ASTUnit::stored_diag_size;
    void  (::clang::ASTUnit::*method_pointer_4b7acd13bd70578b9a5d403e92a4c639)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    bool  (::clang::ASTUnit::*method_pointer_67a411ca229b50e4a99e71074a225ea2)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_00e69b67c4cb56a9a85efd51b319d4cc)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    void  (::clang::ASTUnit::*method_pointer_39fb2093a646571c91693bf4c7552f44)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    bool  (::clang::ASTUnit::*method_pointer_f6694258196d555dbf98c9f14e12a030)() const = &::clang::ASTUnit::top_level_empty;
    void  (::clang::ASTUnit::*method_pointer_8d91d6f7c8ab5507b50d10384ae70896)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_935fb990b0045925a4dbebab29249a28)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_d891656332c059ba80f334a57841edda)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    bool  (::clang::ASTUnit::*method_pointer_cdc150f1c731537892bea5da869e2ee4)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_902371afc63058f6a7dac6bfa7f6e4aa)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_ab536f1ba2285af8a924b7121fdf23ec)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_a34cc470cf305d429e19a75f4b4ce69a)() = &::clang::ASTUnit::isModuleFile;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_e967a5607ce65e7f80da22af39ce4976)() = &::clang::ASTUnit::getASTContext;
    unsigned int  (::clang::ASTUnit::*method_pointer_8b3ca05b345c517190f010557e2c48fc)() const = &::clang::ASTUnit::cached_completion_size;
    bool  (::clang::ASTUnit::*method_pointer_493ffd5abd2b555495aaeac429cc792f)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    unsigned int  & (::clang::ASTUnit::*method_pointer_c223b1f7597f59079d3542203d57658f)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_dc44999a940d593abc716a1376495dae, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_c3d24d42a8475e3995ed949faf8918c9, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_4b7acd13bd70578b9a5d403e92a4c639, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_67a411ca229b50e4a99e71074a225ea2, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_00e69b67c4cb56a9a85efd51b319d4cc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_39fb2093a646571c91693bf4c7552f44, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_f6694258196d555dbf98c9f14e12a030, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_8d91d6f7c8ab5507b50d10384ae70896, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_935fb990b0045925a4dbebab29249a28, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_d891656332c059ba80f334a57841edda, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_cdc150f1c731537892bea5da869e2ee4, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_902371afc63058f6a7dac6bfa7f6e4aa, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_ab536f1ba2285af8a924b7121fdf23ec, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_a34cc470cf305d429e19a75f4b4ce69a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_e967a5607ce65e7f80da22af39ce4976, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_8b3ca05b345c517190f010557e2c48fc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_493ffd5abd2b555495aaeac429cc792f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_c223b1f7597f59079d3542203d57658f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_c223b1f7597f59079d3542203d57658f);

}