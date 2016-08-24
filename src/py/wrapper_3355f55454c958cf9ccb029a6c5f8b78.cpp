#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_1b2e9ca1be7651c0a457be508dcbc79b(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ASTUnit::*method_pointer_4b557fae4ef25c5dbe66d76e34db9e69)(class ::llvm::StringRef ) = &::clang::ASTUnit::Save;
    void  (::clang::ASTUnit::*method_pointer_76b69258267d565d9b407912b570939e)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_37fe55033e515a48901f208d2bbbef6b)(class ::llvm::StringRef ) = &::clang::ASTUnit::addTemporaryFile;
    void  (::clang::ASTUnit::*method_pointer_016fd45ba6f054dbb0e6584663694626)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_db772f9fac315d3ba8bc78ffd62d9234)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_a00eb2c2f0a557babc0feec8d5d2ebc8)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_2adf8f3347565864bcc06f6b1df85d83)() = &::clang::ASTUnit::getASTContext;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_27f6c70f490a5c239457ccc153cf1f2f)() const = &::clang::ASTUnit::getASTFileName;
    unsigned int  & (::clang::ASTUnit::*method_pointer_1b2e9ca1be7651c0a457be508dcbc79b)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_44da3c1763df5ced855ab550ccf523fc)() = &::clang::ASTUnit::getEndOfPreambleFileID;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_72018a8ea75c553b88656909bbc956e6)() const = &::clang::ASTUnit::getMainFileName;
    bool  (::clang::ASTUnit::*method_pointer_444d96c2278259f6a3f12766dc8246e4)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_7fdfaf8f70bf5691b3a3f7766b01604e)() = &::clang::ASTUnit::getOriginalSourceFileName;
    bool  (::clang::ASTUnit::*method_pointer_91939d01eead5937814502676b4e4d40)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    class ::clang::SourceManager  & (::clang::ASTUnit::*method_pointer_73a5ecca03ca51758abf719196b02d17)() = &::clang::ASTUnit::getSourceManager;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_2c2874f5d99a52edbd38ded6490ca8f8)() = &::clang::ASTUnit::getStartOfMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_2c39d22339a953bd947926abeddb537c)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_cbd651eb68af543fb67b8a7816011720)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_9f92d684ae1d55c8913a1609608743d7)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInPreambleFileID;
    bool  (::clang::ASTUnit::*method_pointer_88b229d833615e0fb41643d692aba584)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_afc272c669d75a62b095d41e6e9bfd1a)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_e400bb81f88a5f00b8763b33e1645897)() const = &::clang::ASTUnit::isUnsafeToFree;
    bool  (::clang::ASTUnit::*method_pointer_2f62157901f95c2c9bc9d6f0e650b136)(class ::llvm::StringRef , class ::clang::SourceLocation ) = &::clang::ASTUnit::lookupMissingImports;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_3ee8885d7efe5ee38f31364ff11c3cf4)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationFromPreamble;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_1c7ccb377372560597fe28d0ae9ac420)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationToPreamble;
    void  (::clang::ASTUnit::*method_pointer_3ab97e4f3787502c89b7d25521303443)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_81c7832903a350bdbcd05a93037a23cf)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_a7398aa839dd5e618de473a17e98d537)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_7047d46562ab50008b8fe4633fe3faf7)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_9c8648f54241550abb522b8220150f81)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_d536af294b4a52cc92a8d01b371a8a0b)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_6a83441f861a5ba2a80f82cc23a2d913(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("save", method_pointer_4b557fae4ef25c5dbe66d76e34db9e69, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_76b69258267d565d9b407912b570939e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_temporary_file", method_pointer_37fe55033e515a48901f208d2bbbef6b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_016fd45ba6f054dbb0e6584663694626, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_db772f9fac315d3ba8bc78ffd62d9234, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_a00eb2c2f0a557babc0feec8d5d2ebc8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_2adf8f3347565864bcc06f6b1df85d83, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_file_name", method_pointer_27f6c70f490a5c239457ccc153cf1f2f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_1b2e9ca1be7651c0a457be508dcbc79b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_1b2e9ca1be7651c0a457be508dcbc79b);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_end_of_preamble_file_id", method_pointer_44da3c1763df5ced855ab550ccf523fc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_main_file_name", method_pointer_72018a8ea75c553b88656909bbc956e6, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_444d96c2278259f6a3f12766dc8246e4, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_original_source_file_name", method_pointer_7fdfaf8f70bf5691b3a3f7766b01604e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_91939d01eead5937814502676b4e4d40, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_source_manager", method_pointer_73a5ecca03ca51758abf719196b02d17, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_start_of_main_file_id", method_pointer_2c2874f5d99a52edbd38ded6490ca8f8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_2c39d22339a953bd947926abeddb537c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_main_file_id", method_pointer_cbd651eb68af543fb67b8a7816011720, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_preamble_file_id", method_pointer_9f92d684ae1d55c8913a1609608743d7, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_88b229d833615e0fb41643d692aba584, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_afc272c669d75a62b095d41e6e9bfd1a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_e400bb81f88a5f00b8763b33e1645897, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("lookup_missing_imports", method_pointer_2f62157901f95c2c9bc9d6f0e650b136, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_from_preamble", method_pointer_3ee8885d7efe5ee38f31364ff11c3cf4, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_to_preamble", method_pointer_1c7ccb377372560597fe28d0ae9ac420, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_3ab97e4f3787502c89b7d25521303443, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_81c7832903a350bdbcd05a93037a23cf, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_a7398aa839dd5e618de473a17e98d537, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_7047d46562ab50008b8fe4633fe3faf7, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_9c8648f54241550abb522b8220150f81, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_d536af294b4a52cc92a8d01b371a8a0b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_6a83441f861a5ba2a80f82cc23a2d913, "");

}