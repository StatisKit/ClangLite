#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_9e52028d1c305f31bd87257e6d3ccc53()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::SourceManager::*method_pointer_442c7c5796b65c1ca7825707b0683668)(class ::clang::SourceLocation , unsigned int , int , bool , bool , bool , bool ) = &::clang::SourceManager::AddLineNote;
    void  (::clang::SourceManager::*method_pointer_fce1bf60d09159d0829c3594174419a1)(class ::clang::SourceLocation , unsigned int , int ) = &::clang::SourceManager::AddLineNote;
    void  (::clang::SourceManager::*method_pointer_72d6296b3f6d519486db12653cb66136)() const = &::clang::SourceManager::PrintStats;
    void  (::clang::SourceManager::*method_pointer_9170fd39cdab548396bf5e8a7e2e9d93)() = &::clang::SourceManager::clearIDTables;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_8ea3ca20484c568a953ba326858eb262)(class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , unsigned int , int , unsigned int ) = &::clang::SourceManager::createExpansionLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_c7a71fb7581b58ada257f6c905ac24c8)(class ::clang::SourceLocation , class ::clang::SourceLocation , unsigned int ) = &::clang::SourceManager::createMacroArgExpansionLoc;
    void  (::clang::SourceManager::*method_pointer_a5dfc9aa883854019df4d71a01da53d9)() const = &::clang::SourceManager::dump;
    unsigned long int  (::clang::SourceManager::*method_pointer_4921cda2f0475bdc904e3f12c579eccb)() const = &::clang::SourceManager::getContentCacheSize;
    unsigned long int  (::clang::SourceManager::*method_pointer_a7392a997416532cb958855d89d38f91)() const = &::clang::SourceManager::getDataStructureSizes;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_b7ed46a8658851d49c5f7e6f04b1aab2)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getExpansionLoc;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_647d90654b975807b147a2ba30674148)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileID;
    unsigned int  (::clang::SourceManager::*method_pointer_5fc3b04ee0ad5de58f368239326cb4d1)(class ::clang::FileID ) const = &::clang::SourceManager::getFileIDSize;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_af8fb661e5ba58f5b902142d8ec6a83f)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileLoc;
    unsigned int  (::clang::SourceManager::*method_pointer_172164974a9e5934b023fae50c9d1cb6)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileOffset;
    class ::llvm::StringRef  (::clang::SourceManager::*method_pointer_f172bb6cd2315e5483596685b4adb19e)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFilename;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_a20edd40096359b7a83000a89df44644)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getImmediateMacroCallerLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_c1b0a80f4021587c9ce9659e0823bf61)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getImmediateSpellingLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_8f4d401ba7b157a580675550837fe48c)(class ::clang::FileID ) const = &::clang::SourceManager::getIncludeLoc;
    unsigned int  (::clang::SourceManager::*method_pointer_0fff5f4efd6d5f4fafc227fbfeecee73)(class ::llvm::StringRef ) = &::clang::SourceManager::getLineTableFilenameID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_b1307b0faaec572c92ba645f09a9a3f5)(class ::clang::FileID ) const = &::clang::SourceManager::getLocForEndOfFile;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_02f01a051ac65af399e091c1df1e0111)(class ::clang::FileID ) const = &::clang::SourceManager::getLocForStartOfFile;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_542d3c08db4353c0bdeea1d9ff737ef2)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getMacroArgExpandedLocation;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_60a519f7f6185f778dcc5b04ce0975d6)() const = &::clang::SourceManager::getMainFileID;
    unsigned int  (::clang::SourceManager::*method_pointer_4bf7f93a9d695576ba792cc193bf7b71)() const = &::clang::SourceManager::getNextLocalOffset;
    unsigned int  (::clang::SourceManager::*method_pointer_58ac1e9eddf050f0bd0467f025530682)(class ::clang::FileID ) const = &::clang::SourceManager::getNumCreatedFIDsForFileID;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_33f72682df8553d59f284cf9c7d8c89e)() const = &::clang::SourceManager::getPreambleFileID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_36dacf39a60c52bd93b5b7a9d5534998)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getSpellingLoc;
    bool  (::clang::SourceManager::*method_pointer_46964d8202e05b2db87c7ae4156f8f94)() const = &::clang::SourceManager::hasLineTable;
    bool  (::clang::SourceManager::*method_pointer_1eaee6a705f156fb91f64521991cc002)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isAtEndOfImmediateMacroExpansion;
    bool  (::clang::SourceManager::*method_pointer_520d367c0c735a579c16b4b33c7004d9)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isAtStartOfImmediateMacroExpansion;
    bool  (::clang::SourceManager::*method_pointer_62001a3cb31c5aaeaebc6ae58f53727d)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isBeforeInSLocAddrSpace;
    bool  (::clang::SourceManager::*method_pointer_cdd940f4ac285543aaeca28a82494428)(class ::clang::SourceLocation , unsigned int ) const = &::clang::SourceManager::isBeforeInSLocAddrSpace;
    bool  (::clang::SourceManager::*method_pointer_1c3fc49cea0450158284030f148db9af)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isBeforeInTranslationUnit;
    bool  (::clang::SourceManager::*method_pointer_65fb99ee147759149dfb76c71a43334d)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInExternCSystemHeader;
    bool  (::clang::SourceManager::*method_pointer_e27ef60aa46e5691a7e8f30f9903aa25)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInMainFile;
    bool  (::clang::SourceManager::*method_pointer_58124edbf94e5346b830ee6025e8c91d)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInSystemHeader;
    bool  (::clang::SourceManager::*method_pointer_687d0af4862d59acb134a513c7c41a31)(class ::clang::SourceLocation ) = &::clang::SourceManager::isInSystemMacro;
    bool  (::clang::SourceManager::*method_pointer_ddd611a66f8151c8bd6c80701aaf36bd)(class ::clang::FileID ) const = &::clang::SourceManager::isLoadedFileID;
    bool  (::clang::SourceManager::*method_pointer_acf353b8f1a65117be9319b0d10ada87)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isLoadedSourceLocation;
    bool  (::clang::SourceManager::*method_pointer_c6969a35888750da83cfef0913df4b11)(class ::clang::FileID ) const = &::clang::SourceManager::isLocalFileID;
    bool  (::clang::SourceManager::*method_pointer_c2abd57ceffa59f5840c7d9be404acab)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isLocalSourceLocation;
    bool  (::clang::SourceManager::*method_pointer_1ebaf78501245e2b92fcc750c24379ff)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isMacroArgExpansion;
    bool  (::clang::SourceManager::*method_pointer_ef051352f2b3567085670d34f9e6eb68)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isMacroBodyExpansion;
    bool  (::clang::SourceManager::*method_pointer_827a4b3ff8895c0d993e234bc06adbe0)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isWrittenInMainFile;
    bool  (::clang::SourceManager::*method_pointer_008bfd93d1d75e218080f7c60e65ad74)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isWrittenInSameFile;
    unsigned int  (::clang::SourceManager::*method_pointer_b3e6e8667e445f07a5f59ab39085bc0c)() const = &::clang::SourceManager::loaded_sloc_entry_size;
    unsigned int  (::clang::SourceManager::*method_pointer_eb33a13187c55d96b46718ad9e82fd01)() const = &::clang::SourceManager::local_sloc_entry_size;
    void  (::clang::SourceManager::*method_pointer_b5e876e2ad9f5bd985982da3f8cd0e71)(bool ) = &::clang::SourceManager::setAllFilesAreTransient;
    void  (::clang::SourceManager::*method_pointer_b3499c8e78ec5a4295851fb148b47b18)(class ::clang::FileID ) = &::clang::SourceManager::setMainFileID;
    void  (::clang::SourceManager::*method_pointer_b3c3bd2d18ea524b88b72e9962575362)(class ::clang::FileID , unsigned int ) const = &::clang::SourceManager::setNumCreatedFIDsForFileID;
    void  (::clang::SourceManager::*method_pointer_60c0442689fb5e438dcee92aff318cf1)(bool ) = &::clang::SourceManager::setOverridenFilesKeepOriginalName;
    void  (::clang::SourceManager::*method_pointer_1b88160125025660a07f5598fc78b7dd)(class ::clang::FileID ) = &::clang::SourceManager::setPreambleFileID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_02ea3990830350638f93baca9323ba0d)(class ::clang::FileID , unsigned int , unsigned int ) const = &::clang::SourceManager::translateLineCol;
    bool  (::clang::SourceManager::*method_pointer_cb0a3fc21c4655bf9e565fb673c15ab9)() const = &::clang::SourceManager::userFilesAreVolatile;
    boost::python::class_< class ::clang::SourceManager, autowig::HeldType< class ::clang::SourceManager >, boost::noncopyable > class_9e52028d1c305f31bd87257e6d3ccc53("SourceManager", "", boost::python::no_init);
    class_9e52028d1c305f31bd87257e6d3ccc53.def("add_line_note", method_pointer_442c7c5796b65c1ca7825707b0683668, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("add_line_note", method_pointer_fce1bf60d09159d0829c3594174419a1, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("print_stats", method_pointer_72d6296b3f6d519486db12653cb66136, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("clear_id_tables", method_pointer_9170fd39cdab548396bf5e8a7e2e9d93, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("create_expansion_loc", method_pointer_8ea3ca20484c568a953ba326858eb262, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("create_macro_arg_expansion_loc", method_pointer_c7a71fb7581b58ada257f6c905ac24c8, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("dump", method_pointer_a5dfc9aa883854019df4d71a01da53d9, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_content_cache_size", method_pointer_4921cda2f0475bdc904e3f12c579eccb, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_data_structure_sizes", method_pointer_a7392a997416532cb958855d89d38f91, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_expansion_loc", method_pointer_b7ed46a8658851d49c5f7e6f04b1aab2, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_id", method_pointer_647d90654b975807b147a2ba30674148, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_id_size", method_pointer_5fc3b04ee0ad5de58f368239326cb4d1, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_loc", method_pointer_af8fb661e5ba58f5b902142d8ec6a83f, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_offset", method_pointer_172164974a9e5934b023fae50c9d1cb6, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_filename", method_pointer_f172bb6cd2315e5483596685b4adb19e, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_immediate_macro_caller_loc", method_pointer_a20edd40096359b7a83000a89df44644, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_immediate_spelling_loc", method_pointer_c1b0a80f4021587c9ce9659e0823bf61, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_include_loc", method_pointer_8f4d401ba7b157a580675550837fe48c, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_line_table_filename_id", method_pointer_0fff5f4efd6d5f4fafc227fbfeecee73, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_loc_for_end_of_file", method_pointer_b1307b0faaec572c92ba645f09a9a3f5, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_loc_for_start_of_file", method_pointer_02f01a051ac65af399e091c1df1e0111, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_macro_arg_expanded_location", method_pointer_542d3c08db4353c0bdeea1d9ff737ef2, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_main_file_id", method_pointer_60a519f7f6185f778dcc5b04ce0975d6, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_next_local_offset", method_pointer_4bf7f93a9d695576ba792cc193bf7b71, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_num_created_fi_ds_for_file_id", method_pointer_58ac1e9eddf050f0bd0467f025530682, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_preamble_file_id", method_pointer_33f72682df8553d59f284cf9c7d8c89e, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_spelling_loc", method_pointer_36dacf39a60c52bd93b5b7a9d5534998, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("has_line_table", method_pointer_46964d8202e05b2db87c7ae4156f8f94, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_at_end_of_immediate_macro_expansion", method_pointer_1eaee6a705f156fb91f64521991cc002, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_at_start_of_immediate_macro_expansion", method_pointer_520d367c0c735a579c16b4b33c7004d9, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_s_loc_addr_space", method_pointer_62001a3cb31c5aaeaebc6ae58f53727d, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_s_loc_addr_space", method_pointer_cdd940f4ac285543aaeca28a82494428, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_translation_unit", method_pointer_1c3fc49cea0450158284030f148db9af, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_extern_c_system_header", method_pointer_65fb99ee147759149dfb76c71a43334d, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_main_file", method_pointer_e27ef60aa46e5691a7e8f30f9903aa25, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_system_header", method_pointer_58124edbf94e5346b830ee6025e8c91d, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_system_macro", method_pointer_687d0af4862d59acb134a513c7c41a31, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_loaded_file_id", method_pointer_ddd611a66f8151c8bd6c80701aaf36bd, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_loaded_source_location", method_pointer_acf353b8f1a65117be9319b0d10ada87, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_local_file_id", method_pointer_c6969a35888750da83cfef0913df4b11, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_local_source_location", method_pointer_c2abd57ceffa59f5840c7d9be404acab, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_macro_arg_expansion", method_pointer_1ebaf78501245e2b92fcc750c24379ff, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_macro_body_expansion", method_pointer_ef051352f2b3567085670d34f9e6eb68, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_written_in_main_file", method_pointer_827a4b3ff8895c0d993e234bc06adbe0, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_written_in_same_file", method_pointer_008bfd93d1d75e218080f7c60e65ad74, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("loaded_sloc_entry_size", method_pointer_b3e6e8667e445f07a5f59ab39085bc0c, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("local_sloc_entry_size", method_pointer_eb33a13187c55d96b46718ad9e82fd01, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_all_files_are_transient", method_pointer_b5e876e2ad9f5bd985982da3f8cd0e71, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_main_file_id", method_pointer_b3499c8e78ec5a4295851fb148b47b18, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_num_created_fi_ds_for_file_id", method_pointer_b3c3bd2d18ea524b88b72e9962575362, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_overriden_files_keep_original_name", method_pointer_60c0442689fb5e438dcee92aff318cf1, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_preamble_file_id", method_pointer_1b88160125025660a07f5598fc78b7dd, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("translate_line_col", method_pointer_02ea3990830350638f93baca9323ba0d, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("user_files_are_volatile", method_pointer_cb0a3fc21c4655bf9e565fb673c15ab9, "");

}