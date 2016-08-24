#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_f40b39d2be145615aca8fffcf2e6b431(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ASTUnit::*method_pointer_520895338ab853679b5058a4ce3414e0)(class ::llvm::StringRef ) = &::clang::ASTUnit::Save;
    void  (::clang::ASTUnit::*method_pointer_5f2e0f06b38c5dba9ef31e121b1d5104)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_b677c894efdb54949605bdee16c21faa)(class ::llvm::StringRef ) = &::clang::ASTUnit::addTemporaryFile;
    void  (::clang::ASTUnit::*method_pointer_7bc5493fa5205cbaae53010b9305b082)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_ee09746b77985819a150da0133b22e9b)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_3b2b8212a5555eedace0d60c1f45309d)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_cc5f1718dea8505082a0981ad38bd9c8)() = &::clang::ASTUnit::getASTContext;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_49cb2c131b5055749ed322891322a30a)() const = &::clang::ASTUnit::getASTFileName;
    unsigned int  & (::clang::ASTUnit::*method_pointer_f40b39d2be145615aca8fffcf2e6b431)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_d33b91f95d2d5cf592b1c88f3f393bac)() = &::clang::ASTUnit::getEndOfPreambleFileID;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_15e911b4285854829647fcefa0fcbced)() const = &::clang::ASTUnit::getMainFileName;
    bool  (::clang::ASTUnit::*method_pointer_4c4de5c1e65b581cbbb352df0bba985f)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_09f9fbe9069b5386b4624040929e7654)() = &::clang::ASTUnit::getOriginalSourceFileName;
    bool  (::clang::ASTUnit::*method_pointer_09147e35c8ca5446af4ca401f484f574)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    class ::clang::SourceManager  & (::clang::ASTUnit::*method_pointer_4f86e8237f565b019f847b5c9ec8af33)() = &::clang::ASTUnit::getSourceManager;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_7d80a0308e045b6a87e6bac482e2bf82)() = &::clang::ASTUnit::getStartOfMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_41d1649dc96a579a957d6e616fa5c092)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_b3a09bbae1c95bbfa2792220a34223e3)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_a58221d0f219506680b92f924328aeee)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInPreambleFileID;
    bool  (::clang::ASTUnit::*method_pointer_bced1d49f7505181a019e69d7764ab76)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_dd56888bbf05504b9ba61d847144ebdb)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_3f9302f43df952aeba9da0a1564b3186)() const = &::clang::ASTUnit::isUnsafeToFree;
    bool  (::clang::ASTUnit::*method_pointer_8389d22d08765bf9bca029880331d213)(class ::llvm::StringRef , class ::clang::SourceLocation ) = &::clang::ASTUnit::lookupMissingImports;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_e448a04fab9f5ef2a4fd01c1e8470f22)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationFromPreamble;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_3a8388a59a2a585e8296a90350ff57f3)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationToPreamble;
    void  (::clang::ASTUnit::*method_pointer_681e3a4fba705e30883f24739de7239e)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_cfe8413ec6205732a22147fdea6a5fee)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_72163e2e05295f52bb3e669015b7c098)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_7ebf563de1135ccebd166262a11666d4)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_68476663ec5e5702a5b3cc6940a3a926)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_9b7dc1a07d635c978f2d5ea05b7c333b)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_33b99c2046885754922a7feb06911b33(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("save", method_pointer_520895338ab853679b5058a4ce3414e0, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_5f2e0f06b38c5dba9ef31e121b1d5104, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_temporary_file", method_pointer_b677c894efdb54949605bdee16c21faa, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_7bc5493fa5205cbaae53010b9305b082, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_ee09746b77985819a150da0133b22e9b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_3b2b8212a5555eedace0d60c1f45309d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_cc5f1718dea8505082a0981ad38bd9c8, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_file_name", method_pointer_49cb2c131b5055749ed322891322a30a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_f40b39d2be145615aca8fffcf2e6b431, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_f40b39d2be145615aca8fffcf2e6b431);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_end_of_preamble_file_id", method_pointer_d33b91f95d2d5cf592b1c88f3f393bac, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_main_file_name", method_pointer_15e911b4285854829647fcefa0fcbced, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_4c4de5c1e65b581cbbb352df0bba985f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_original_source_file_name", method_pointer_09f9fbe9069b5386b4624040929e7654, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_09147e35c8ca5446af4ca401f484f574, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_source_manager", method_pointer_4f86e8237f565b019f847b5c9ec8af33, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_start_of_main_file_id", method_pointer_7d80a0308e045b6a87e6bac482e2bf82, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_41d1649dc96a579a957d6e616fa5c092, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_main_file_id", method_pointer_b3a09bbae1c95bbfa2792220a34223e3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_preamble_file_id", method_pointer_a58221d0f219506680b92f924328aeee, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_bced1d49f7505181a019e69d7764ab76, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_dd56888bbf05504b9ba61d847144ebdb, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_3f9302f43df952aeba9da0a1564b3186, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("lookup_missing_imports", method_pointer_8389d22d08765bf9bca029880331d213, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_from_preamble", method_pointer_e448a04fab9f5ef2a4fd01c1e8470f22, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_to_preamble", method_pointer_3a8388a59a2a585e8296a90350ff57f3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_681e3a4fba705e30883f24739de7239e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_cfe8413ec6205732a22147fdea6a5fee, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_72163e2e05295f52bb3e669015b7c098, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_7ebf563de1135ccebd166262a11666d4, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_68476663ec5e5702a5b3cc6940a3a926, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_9b7dc1a07d635c978f2d5ea05b7c333b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_33b99c2046885754922a7feb06911b33, "");

}