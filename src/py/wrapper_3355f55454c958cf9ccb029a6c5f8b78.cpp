#include "_clanglite.h"


namespace autowig
{
    void method_decorator_19826778ab2b59b5ad8f8699a5549331(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ASTUnit::*method_pointer_a73047e2d40f58da835a153beeec0f1b)(class ::llvm::StringRef ) = &::clang::ASTUnit::Save;
    void  (::clang::ASTUnit::*method_pointer_e8cacdfbd411540280b05344d73e5150)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_2ce7796c1af25cb592efed58a9f8503b)(class ::llvm::StringRef ) = &::clang::ASTUnit::addTemporaryFile;
    void  (::clang::ASTUnit::*method_pointer_09cc9e93818552de8f9b622c7c81eb1f)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_2fb55fd2026051b9a009bf05c0cf35cc)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_139bca995f555196836cc51272a45be9)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_7cadd629ad325cd4a93c35bcd5437e82)() = &::clang::ASTUnit::getASTContext;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_9fc60933b0eb55b39d336b45e862a3c3)() const = &::clang::ASTUnit::getASTFileName;
    unsigned int  & (::clang::ASTUnit::*method_pointer_19826778ab2b59b5ad8f8699a5549331)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_90bf42b21a4f5e218b5f449a9fe05c8c)() = &::clang::ASTUnit::getEndOfPreambleFileID;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_1fdaadc2c3a152a39a48e9c50583f273)() const = &::clang::ASTUnit::getMainFileName;
    bool  (::clang::ASTUnit::*method_pointer_8e426aecec9555ea8a34cc20678ea4ae)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_1625d8aa42b354b1a8f9b3e453938ba2)() = &::clang::ASTUnit::getOriginalSourceFileName;
    bool  (::clang::ASTUnit::*method_pointer_1f5c716bb30b5debbd38be8add168c9c)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    class ::clang::SourceManager  & (::clang::ASTUnit::*method_pointer_24710af04f72581b838d7c6942116f48)() = &::clang::ASTUnit::getSourceManager;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_d9eb11d430fc5bcdba1d9c66cc4e6d2a)() = &::clang::ASTUnit::getStartOfMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_e761474894985acca8baa2707d933f19)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_583df240c1b95b71b49833c6c0ef0367)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_5a7db47b42ef52668a0e7a100cd337be)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInPreambleFileID;
    bool  (::clang::ASTUnit::*method_pointer_935ea0ecca8157848d1952a76e210b35)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_32f01e4f95b95a1c843eb244623ed193)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_8d1f3e0aaf185962a0ffab75465c9c63)() const = &::clang::ASTUnit::isUnsafeToFree;
    bool  (::clang::ASTUnit::*method_pointer_e3c085097dc4504fa74638a7f436a66f)(class ::llvm::StringRef , class ::clang::SourceLocation ) = &::clang::ASTUnit::lookupMissingImports;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_d2e218a18bc8540989790774e8ec6c65)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationFromPreamble;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_91a845988a645df6b9b39045db9048bb)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationToPreamble;
    void  (::clang::ASTUnit::*method_pointer_d7f8f81bd8ad543b89eb6da0058adfdd)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_8fecd3c1174f5b4283061a147f51ac74)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_dbcc36f137265cadad64c83ad8dc75e1)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_ba0a1488bca954df989662cee66b8fbb)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_6f18a34f14835372baab96bc31d6022c)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_8214c563cabf562187a43fedd98e99d4)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_b1a22cba7153510188e9319b37b2fcc5(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("save", method_pointer_a73047e2d40f58da835a153beeec0f1b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_e8cacdfbd411540280b05344d73e5150, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_temporary_file", method_pointer_2ce7796c1af25cb592efed58a9f8503b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_09cc9e93818552de8f9b622c7c81eb1f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_2fb55fd2026051b9a009bf05c0cf35cc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_139bca995f555196836cc51272a45be9, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_7cadd629ad325cd4a93c35bcd5437e82, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_file_name", method_pointer_9fc60933b0eb55b39d336b45e862a3c3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_19826778ab2b59b5ad8f8699a5549331, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_19826778ab2b59b5ad8f8699a5549331);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_end_of_preamble_file_id", method_pointer_90bf42b21a4f5e218b5f449a9fe05c8c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_main_file_name", method_pointer_1fdaadc2c3a152a39a48e9c50583f273, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_8e426aecec9555ea8a34cc20678ea4ae, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_original_source_file_name", method_pointer_1625d8aa42b354b1a8f9b3e453938ba2, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_1f5c716bb30b5debbd38be8add168c9c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_source_manager", method_pointer_24710af04f72581b838d7c6942116f48, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_start_of_main_file_id", method_pointer_d9eb11d430fc5bcdba1d9c66cc4e6d2a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_e761474894985acca8baa2707d933f19, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_main_file_id", method_pointer_583df240c1b95b71b49833c6c0ef0367, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_preamble_file_id", method_pointer_5a7db47b42ef52668a0e7a100cd337be, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_935ea0ecca8157848d1952a76e210b35, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_32f01e4f95b95a1c843eb244623ed193, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_8d1f3e0aaf185962a0ffab75465c9c63, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("lookup_missing_imports", method_pointer_e3c085097dc4504fa74638a7f436a66f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_from_preamble", method_pointer_d2e218a18bc8540989790774e8ec6c65, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_to_preamble", method_pointer_91a845988a645df6b9b39045db9048bb, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_d7f8f81bd8ad543b89eb6da0058adfdd, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_8fecd3c1174f5b4283061a147f51ac74, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_dbcc36f137265cadad64c83ad8dc75e1, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_ba0a1488bca954df989662cee66b8fbb, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_6f18a34f14835372baab96bc31d6022c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_8214c563cabf562187a43fedd98e99d4, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_b1a22cba7153510188e9319b37b2fcc5, "");

}