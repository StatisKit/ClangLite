#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_9a779c22e00a5fef831f142edbd46d6f(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ASTUnit::*method_pointer_700329519e815bb7974aa2e68f519d1f)(class ::llvm::StringRef ) = &::clang::ASTUnit::Save;
    void  (::clang::ASTUnit::*method_pointer_1cc91277ea6555d08f5d96701688e10e)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_43da878f55305b539dbe1df178cce85b)(class ::llvm::StringRef ) = &::clang::ASTUnit::addTemporaryFile;
    void  (::clang::ASTUnit::*method_pointer_fc1a131c597055478a7bc06e30dab60c)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_e51783cb184f5d47ba7c630e51b977bc)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_9e7ad956a07351bcae842641ebd600e3)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_31769a7f6040525fafe82ee2e1b20d57)() = &::clang::ASTUnit::getASTContext;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_0fc144a3b8c156abbdb6e608aca72034)() const = &::clang::ASTUnit::getASTFileName;
    unsigned int  & (::clang::ASTUnit::*method_pointer_9a779c22e00a5fef831f142edbd46d6f)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_4afacc4c8a585f24af73fdd913afecbe)() = &::clang::ASTUnit::getEndOfPreambleFileID;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_80d008d7da15598ea2b5c8b43e11a098)() const = &::clang::ASTUnit::getMainFileName;
    bool  (::clang::ASTUnit::*method_pointer_64eaa5fea2a65a1784789c641f7d2757)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_0d3e8b3fff315ba38c0df5dda65c836a)() = &::clang::ASTUnit::getOriginalSourceFileName;
    bool  (::clang::ASTUnit::*method_pointer_d7a30a7fee125a5e9f0275bffff5340b)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    class ::clang::SourceManager  const & (::clang::ASTUnit::*method_pointer_c65292f1acab582a95d764ef8a2374a9)() const = &::clang::ASTUnit::getSourceManager;
    class ::clang::SourceManager  & (::clang::ASTUnit::*method_pointer_cdbe212c913855888276ee3cdcc2be45)() = &::clang::ASTUnit::getSourceManager;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_fde79e0aa7e959d3b59228bdc55f9091)() = &::clang::ASTUnit::getStartOfMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_0398f1854e6554249b0bbf394bb85aa7)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_e111192a9323558ba7db71a939293821)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_7897d1eba2d15395954774d1465e0174)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInPreambleFileID;
    bool  (::clang::ASTUnit::*method_pointer_99d080d8ab8a5905ba3077a7ae87ad3d)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_2cdeef5b32e75a7ca14a0dc30e522a66)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_80f2ac35f7515d19a4c37aec2ad3eed6)() const = &::clang::ASTUnit::isUnsafeToFree;
    bool  (::clang::ASTUnit::*method_pointer_e4d439233357575fb596917a52301971)(class ::llvm::StringRef , class ::clang::SourceLocation ) = &::clang::ASTUnit::lookupMissingImports;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_e60600418ce55d4a80875b3d1912f3bb)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationFromPreamble;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_4efd2a761fb65737b7db12fd70b40d49)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationToPreamble;
    void  (::clang::ASTUnit::*method_pointer_1f18617e544f513db45af55916faf175)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_70b574dd273054bab9c91a3d6af543e4)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_16325ed477e458da85a1bfef142465c3)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_df9553a8e25b55b3b4e1dd3b154a45a5)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_d3d2701198425404b6165fa6a3c95c4b)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_bc6a06c3805451f584828f293f136a27)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_9eca066e7c0a5e2e9e0c4ab06ba90059(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("save", method_pointer_700329519e815bb7974aa2e68f519d1f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_1cc91277ea6555d08f5d96701688e10e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_temporary_file", method_pointer_43da878f55305b539dbe1df178cce85b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_fc1a131c597055478a7bc06e30dab60c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_e51783cb184f5d47ba7c630e51b977bc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_9e7ad956a07351bcae842641ebd600e3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_31769a7f6040525fafe82ee2e1b20d57, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_file_name", method_pointer_0fc144a3b8c156abbdb6e608aca72034, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_9a779c22e00a5fef831f142edbd46d6f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_9a779c22e00a5fef831f142edbd46d6f);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_end_of_preamble_file_id", method_pointer_4afacc4c8a585f24af73fdd913afecbe, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_main_file_name", method_pointer_80d008d7da15598ea2b5c8b43e11a098, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_64eaa5fea2a65a1784789c641f7d2757, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_original_source_file_name", method_pointer_0d3e8b3fff315ba38c0df5dda65c836a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_d7a30a7fee125a5e9f0275bffff5340b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_source_manager", method_pointer_c65292f1acab582a95d764ef8a2374a9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_source_manager", method_pointer_cdbe212c913855888276ee3cdcc2be45, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_start_of_main_file_id", method_pointer_fde79e0aa7e959d3b59228bdc55f9091, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_0398f1854e6554249b0bbf394bb85aa7, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_main_file_id", method_pointer_e111192a9323558ba7db71a939293821, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_preamble_file_id", method_pointer_7897d1eba2d15395954774d1465e0174, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_99d080d8ab8a5905ba3077a7ae87ad3d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_2cdeef5b32e75a7ca14a0dc30e522a66, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_80f2ac35f7515d19a4c37aec2ad3eed6, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("lookup_missing_imports", method_pointer_e4d439233357575fb596917a52301971, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_from_preamble", method_pointer_e60600418ce55d4a80875b3d1912f3bb, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_to_preamble", method_pointer_4efd2a761fb65737b7db12fd70b40d49, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_1f18617e544f513db45af55916faf175, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_70b574dd273054bab9c91a3d6af543e4, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_16325ed477e458da85a1bfef142465c3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_df9553a8e25b55b3b4e1dd3b154a45a5, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_d3d2701198425404b6165fa6a3c95c4b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_bc6a06c3805451f584828f293f136a27, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_9eca066e7c0a5e2e9e0c4ab06ba90059, "");

}