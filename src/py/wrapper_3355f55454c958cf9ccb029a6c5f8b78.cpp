#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_908758fdb8b058d588f9d1b76b191314(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ASTUnit::*method_pointer_29a6127443c35abe85c4d2c7118d57a8)(class ::llvm::StringRef ) = &::clang::ASTUnit::Save;
    void  (::clang::ASTUnit::*method_pointer_4731aff0d07b50f5925e2e4ad6fb3e20)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_60daa94ca86b5a0db489fccd81c74b2e)(class ::llvm::StringRef ) = &::clang::ASTUnit::addTemporaryFile;
    void  (::clang::ASTUnit::*method_pointer_c112855a6c4c54e28321e719f25bf566)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_0693628ce14156f98dff8223d569b7de)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_b1744f1cdb355ab783bf1fdf63c98cce)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_baa7e01e1e23557aa2bb2f8db73e5f35)() = &::clang::ASTUnit::getASTContext;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_1db2515cc3905bd99a6d181b45bdaa5b)() const = &::clang::ASTUnit::getASTFileName;
    unsigned int  & (::clang::ASTUnit::*method_pointer_908758fdb8b058d588f9d1b76b191314)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_8e725164b45d5dcf8c0dccb65e5f04ef)() = &::clang::ASTUnit::getEndOfPreambleFileID;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_6a29521e40bb5273ac069cfe019fc9af)() const = &::clang::ASTUnit::getMainFileName;
    bool  (::clang::ASTUnit::*method_pointer_714b93252abb5deba372ef9e31d7d60d)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_78345dd621855b0c9670d4bc027b6235)() = &::clang::ASTUnit::getOriginalSourceFileName;
    bool  (::clang::ASTUnit::*method_pointer_59f0006552c85607ad84a56464e3e74d)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    class ::clang::SourceManager  & (::clang::ASTUnit::*method_pointer_3043cd1978625c40ada7d0b1fac3e05d)() = &::clang::ASTUnit::getSourceManager;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_be21c81c2adf56ca912949f2535c6258)() = &::clang::ASTUnit::getStartOfMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_6894de19cec158eab5312e8dca4092fa)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_bf9173eb303c54b892dd5edee0f71085)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_ebb4e41200cc58ae8dde5d6f04c7797d)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInPreambleFileID;
    bool  (::clang::ASTUnit::*method_pointer_1d77bdebe10853f1969e42a4ca4b7f52)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_c7dd04c0b9a45d619d8dca2b4957e9cd)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_7c8ba2c4869d5fb59c3e53b456ed9d48)() const = &::clang::ASTUnit::isUnsafeToFree;
    bool  (::clang::ASTUnit::*method_pointer_58461be11895565fb52e4e881d557766)(class ::llvm::StringRef , class ::clang::SourceLocation ) = &::clang::ASTUnit::lookupMissingImports;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_ce2df14a573950d7ae8c38ee35fe5459)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationFromPreamble;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_539984fb56155a07a900bb46b9a125bc)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationToPreamble;
    void  (::clang::ASTUnit::*method_pointer_18f69804397d533396563503f5435d10)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_ab1e9b024d8b59129a805d9f7d49fd9a)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_27717f0b8f88567bba9c6e33abaf3664)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_0a448cde61be53148288b3cba7862526)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_337535f99cad59678772f51eeafa9533)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_cebbb996b9275058a713d0caed4b8f64)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_5e553b823ee1574ca719afc3e958891a(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("save", method_pointer_29a6127443c35abe85c4d2c7118d57a8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_4731aff0d07b50f5925e2e4ad6fb3e20, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_temporary_file", method_pointer_60daa94ca86b5a0db489fccd81c74b2e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_c112855a6c4c54e28321e719f25bf566, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_0693628ce14156f98dff8223d569b7de, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_b1744f1cdb355ab783bf1fdf63c98cce, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_baa7e01e1e23557aa2bb2f8db73e5f35, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_file_name", method_pointer_1db2515cc3905bd99a6d181b45bdaa5b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_908758fdb8b058d588f9d1b76b191314, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_908758fdb8b058d588f9d1b76b191314);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_end_of_preamble_file_id", method_pointer_8e725164b45d5dcf8c0dccb65e5f04ef, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_main_file_name", method_pointer_6a29521e40bb5273ac069cfe019fc9af, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_714b93252abb5deba372ef9e31d7d60d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_original_source_file_name", method_pointer_78345dd621855b0c9670d4bc027b6235, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_59f0006552c85607ad84a56464e3e74d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_source_manager", method_pointer_3043cd1978625c40ada7d0b1fac3e05d, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_start_of_main_file_id", method_pointer_be21c81c2adf56ca912949f2535c6258, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_6894de19cec158eab5312e8dca4092fa, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_main_file_id", method_pointer_bf9173eb303c54b892dd5edee0f71085, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_preamble_file_id", method_pointer_ebb4e41200cc58ae8dde5d6f04c7797d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_1d77bdebe10853f1969e42a4ca4b7f52, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_c7dd04c0b9a45d619d8dca2b4957e9cd, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_7c8ba2c4869d5fb59c3e53b456ed9d48, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("lookup_missing_imports", method_pointer_58461be11895565fb52e4e881d557766, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_from_preamble", method_pointer_ce2df14a573950d7ae8c38ee35fe5459, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_to_preamble", method_pointer_539984fb56155a07a900bb46b9a125bc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_18f69804397d533396563503f5435d10, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_ab1e9b024d8b59129a805d9f7d49fd9a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_27717f0b8f88567bba9c6e33abaf3664, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_0a448cde61be53148288b3cba7862526, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_337535f99cad59678772f51eeafa9533, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_cebbb996b9275058a713d0caed4b8f64, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_5e553b823ee1574ca719afc3e958891a, "");

}