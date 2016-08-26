#include "_clanglite.h"


namespace autowig
{
    void method_decorator_9c91ec6243e05de09edd49d94d5d3681(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ASTUnit::*method_pointer_5c5900c65d2c50eb97c95ee5951a0939)(class ::llvm::StringRef ) = &::clang::ASTUnit::Save;
    void  (::clang::ASTUnit::*method_pointer_412dff04836a540eb3129b3510061ba3)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_da6723801bc95fa49dff440fcf7dfab2)(class ::llvm::StringRef ) = &::clang::ASTUnit::addTemporaryFile;
    void  (::clang::ASTUnit::*method_pointer_db59d2229d365f41a579e90b863b1e4d)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_3444e8516a8054cd931d3072ab53a5e4)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_bea72b5ec61e5a0399cdc95883e0577d)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_7db46bc5fd0f5c25b9c2a76f6d1207ac)() = &::clang::ASTUnit::getASTContext;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_d28e00469c985922968068067202b6bc)() const = &::clang::ASTUnit::getASTFileName;
    unsigned int  & (::clang::ASTUnit::*method_pointer_9c91ec6243e05de09edd49d94d5d3681)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_ba6050edfca050efa549f13fce65e032)() = &::clang::ASTUnit::getEndOfPreambleFileID;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_1d6a459dd5fd5cd39c9fca0c15dfd15b)() const = &::clang::ASTUnit::getMainFileName;
    bool  (::clang::ASTUnit::*method_pointer_f9f5aa1536895935bf56b02d0b104a77)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_5f794f27a4f758d584d2787dbca86c3c)() = &::clang::ASTUnit::getOriginalSourceFileName;
    bool  (::clang::ASTUnit::*method_pointer_2974735101455cadb127a4cea6bf1726)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    class ::clang::SourceManager  & (::clang::ASTUnit::*method_pointer_9a736c85436c557390abeff7f65b660a)() = &::clang::ASTUnit::getSourceManager;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_73171f03421b5ea98281fa3c9fbc856c)() = &::clang::ASTUnit::getStartOfMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_b8df92ace40f53f1983699e09fd10acb)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_3526b14a114c521ca99198c18f1010a4)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_37452b28ea885c588041dee2dfbdfd2f)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInPreambleFileID;
    bool  (::clang::ASTUnit::*method_pointer_fdaa88e9d79d50598962ed42da13e7a5)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_74d115c8bf68544a9f5235990f4eb2fb)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_6d94d3c080055a43b10e30c243d05d8a)() const = &::clang::ASTUnit::isUnsafeToFree;
    bool  (::clang::ASTUnit::*method_pointer_4a34e4a969425dfcb6287a158e6906e3)(class ::llvm::StringRef , class ::clang::SourceLocation ) = &::clang::ASTUnit::lookupMissingImports;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_6bcb206331295906bc4c9694ddccfefb)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationFromPreamble;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_fdc0c5f4a78e5a0b96a3a47b40dbf1d6)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationToPreamble;
    void  (::clang::ASTUnit::*method_pointer_320c1c5ff4ff5444a8d25f69eea8e6b5)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_1c229f6da2d0560592b337babd1b5786)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_9a039fe6cba25eccb88d76887c1da4f6)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_6f90b1d90140539f8e0d4682430f64a0)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_c8fb2e0430e65a8eb43fa8151f16ad3f)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_82f9e8b033095ac4b9cc27568bede503)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_497f8cedab93543e9dcd1ab49f13256f(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("save", method_pointer_5c5900c65d2c50eb97c95ee5951a0939, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_412dff04836a540eb3129b3510061ba3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_temporary_file", method_pointer_da6723801bc95fa49dff440fcf7dfab2, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_db59d2229d365f41a579e90b863b1e4d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_3444e8516a8054cd931d3072ab53a5e4, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_bea72b5ec61e5a0399cdc95883e0577d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_7db46bc5fd0f5c25b9c2a76f6d1207ac, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_file_name", method_pointer_d28e00469c985922968068067202b6bc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_9c91ec6243e05de09edd49d94d5d3681, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_9c91ec6243e05de09edd49d94d5d3681);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_end_of_preamble_file_id", method_pointer_ba6050edfca050efa549f13fce65e032, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_main_file_name", method_pointer_1d6a459dd5fd5cd39c9fca0c15dfd15b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_f9f5aa1536895935bf56b02d0b104a77, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_original_source_file_name", method_pointer_5f794f27a4f758d584d2787dbca86c3c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_2974735101455cadb127a4cea6bf1726, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_source_manager", method_pointer_9a736c85436c557390abeff7f65b660a, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_start_of_main_file_id", method_pointer_73171f03421b5ea98281fa3c9fbc856c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_b8df92ace40f53f1983699e09fd10acb, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_main_file_id", method_pointer_3526b14a114c521ca99198c18f1010a4, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_preamble_file_id", method_pointer_37452b28ea885c588041dee2dfbdfd2f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_fdaa88e9d79d50598962ed42da13e7a5, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_74d115c8bf68544a9f5235990f4eb2fb, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_6d94d3c080055a43b10e30c243d05d8a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("lookup_missing_imports", method_pointer_4a34e4a969425dfcb6287a158e6906e3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_from_preamble", method_pointer_6bcb206331295906bc4c9694ddccfefb, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_to_preamble", method_pointer_fdc0c5f4a78e5a0b96a3a47b40dbf1d6, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_320c1c5ff4ff5444a8d25f69eea8e6b5, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_1c229f6da2d0560592b337babd1b5786, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_9a039fe6cba25eccb88d76887c1da4f6, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_6f90b1d90140539f8e0d4682430f64a0, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_c8fb2e0430e65a8eb43fa8151f16ad3f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_82f9e8b033095ac4b9cc27568bede503, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_497f8cedab93543e9dcd1ab49f13256f, "");

}