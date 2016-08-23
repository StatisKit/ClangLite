#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_8b321d4bcced5158a2af0dcc66c11e73(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTUnit::*method_pointer_14df6599bd4a54c38b932f1f27ae585c)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_31450ec81ae25e6eb96aab8a5c1912e0)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_69f7c82b2d095068b98bd8d0f6e4756b)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_2c42b74f66915b51b22adc474054e596)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_049968c401ec5467a2a7c2a57d351b6a)() = &::clang::ASTUnit::getASTContext;
    unsigned int  & (::clang::ASTUnit::*method_pointer_8b321d4bcced5158a2af0dcc66c11e73)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    bool  (::clang::ASTUnit::*method_pointer_5cae6e6089c350ecb6ef7f8c29cfe0cf)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_e5b4d38e4f755deab56bac478a57ffa8)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_5205dc971d5c5a5087c17701a3b6ed26)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_3a0ab8138f0f5770841a1c1ff80bff02)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_640ede9fdda4513d8fb8222f43a22a1f)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_f41d364c42a95f2ca4a28a1c18f6a16d)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_6981dca2f3d85772b42f537f6744803b)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_df77b4a095445df4bed72a363398dd04)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_c2d3b78188f15e579e612a65d7c4e40f)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_ec1a6dff44f75798a55842adc5c3caaf)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_5a845d58c81e521283555ae7480e0de7)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_c52e805d4ddd5a2db1dfc69779d191ed)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_f9ff59e089b3562d9642a0b7f3289c8e(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_14df6599bd4a54c38b932f1f27ae585c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_31450ec81ae25e6eb96aab8a5c1912e0, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_69f7c82b2d095068b98bd8d0f6e4756b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_2c42b74f66915b51b22adc474054e596, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_049968c401ec5467a2a7c2a57d351b6a, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_8b321d4bcced5158a2af0dcc66c11e73, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_8b321d4bcced5158a2af0dcc66c11e73);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_5cae6e6089c350ecb6ef7f8c29cfe0cf, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_e5b4d38e4f755deab56bac478a57ffa8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_5205dc971d5c5a5087c17701a3b6ed26, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_3a0ab8138f0f5770841a1c1ff80bff02, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_640ede9fdda4513d8fb8222f43a22a1f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_f41d364c42a95f2ca4a28a1c18f6a16d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_6981dca2f3d85772b42f537f6744803b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_df77b4a095445df4bed72a363398dd04, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_c2d3b78188f15e579e612a65d7c4e40f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_ec1a6dff44f75798a55842adc5c3caaf, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_5a845d58c81e521283555ae7480e0de7, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_c52e805d4ddd5a2db1dfc69779d191ed, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_f9ff59e089b3562d9642a0b7f3289c8e, "");

}