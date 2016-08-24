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
    void  (::clang::SourceManager::*method_pointer_4e43b1c0c68454d4a428c440798603e1)(class ::clang::SourceLocation , unsigned int , int , bool , bool , bool , bool ) = &::clang::SourceManager::AddLineNote;
    void  (::clang::SourceManager::*method_pointer_df94fd3ff9a75ceead7e3e3b09cf8233)(class ::clang::SourceLocation , unsigned int , int ) = &::clang::SourceManager::AddLineNote;
    void  (::clang::SourceManager::*method_pointer_f217a216a2c35c569bf6aed7ee16c27d)() const = &::clang::SourceManager::PrintStats;
    void  (::clang::SourceManager::*method_pointer_52cb78e22b93538d94373dc2b68ba4f1)() = &::clang::SourceManager::clearIDTables;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_38bee921962f53599b316402ac519294)(class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , unsigned int , int , unsigned int ) = &::clang::SourceManager::createExpansionLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_44ace57b4b495323a4600120f84304b3)(class ::clang::SourceLocation , class ::clang::SourceLocation , unsigned int ) = &::clang::SourceManager::createMacroArgExpansionLoc;
    void  (::clang::SourceManager::*method_pointer_1522ac0a4d5559ce94403f8c219245af)() const = &::clang::SourceManager::dump;
    unsigned long int  (::clang::SourceManager::*method_pointer_dec2a56d0a8c5c71b4081c22d10d93d0)() const = &::clang::SourceManager::getContentCacheSize;
    unsigned long int  (::clang::SourceManager::*method_pointer_99457833b6cf59e28a04c3db90f299da)() const = &::clang::SourceManager::getDataStructureSizes;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_3e2b7ae7d1595bd68dcc021f81e1e934)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getExpansionLoc;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_ab0e99ed93bb5d1bafb96079f3d3881e)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileID;
    unsigned int  (::clang::SourceManager::*method_pointer_eb75b1240f2f596a8caba4c2011ea1d8)(class ::clang::FileID ) const = &::clang::SourceManager::getFileIDSize;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_e73700babe4d5425a8d0b626070ef003)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileLoc;
    unsigned int  (::clang::SourceManager::*method_pointer_c7e074a96e535beeabc9ab1e6c23067e)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileOffset;
    class ::llvm::StringRef  (::clang::SourceManager::*method_pointer_6212ea8fc23b50d99e8fab424a45ab90)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFilename;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_dc8785b9cab1507b9e086f66c4f6eaca)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getImmediateMacroCallerLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_17dc07b7519a530d819210400d54851f)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getImmediateSpellingLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_9aa25f29304953e7a88dab08f35fc217)(class ::clang::FileID ) const = &::clang::SourceManager::getIncludeLoc;
    unsigned int  (::clang::SourceManager::*method_pointer_b7ac5329357c511580e60a14e8c97ee2)(class ::llvm::StringRef ) = &::clang::SourceManager::getLineTableFilenameID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_b714cbdfa1db580d885bedc5de4ccf0b)(class ::clang::FileID ) const = &::clang::SourceManager::getLocForEndOfFile;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_b69183f6014455978ab40789f119f39e)(class ::clang::FileID ) const = &::clang::SourceManager::getLocForStartOfFile;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_bba1b3c4f2845e5fae715a9f0fd08216)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getMacroArgExpandedLocation;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_dd67015a6ced577f917e485ab84ca489)() const = &::clang::SourceManager::getMainFileID;
    unsigned int  (::clang::SourceManager::*method_pointer_19561fa09f395fb2b21281cc773e1436)() const = &::clang::SourceManager::getNextLocalOffset;
    unsigned int  (::clang::SourceManager::*method_pointer_404d88b219a05bdc9d9ca0c65ac70cad)(class ::clang::FileID ) const = &::clang::SourceManager::getNumCreatedFIDsForFileID;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_95061506a5b55c7895f99074e4639f03)() const = &::clang::SourceManager::getPreambleFileID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_e54a7a5965e7516dbf11ae2afe75e599)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getSpellingLoc;
    bool  (::clang::SourceManager::*method_pointer_82e8f6125c355445b0f3e09acf110924)() const = &::clang::SourceManager::hasLineTable;
    bool  (::clang::SourceManager::*method_pointer_ac13a9ab89c35146ae716fa8a1188bcc)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isAtEndOfImmediateMacroExpansion;
    bool  (::clang::SourceManager::*method_pointer_20077af008a85669b3da0e5c080d2dc9)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isAtStartOfImmediateMacroExpansion;
    bool  (::clang::SourceManager::*method_pointer_e02690aaae8f5752bb28600add388092)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isBeforeInSLocAddrSpace;
    bool  (::clang::SourceManager::*method_pointer_8937f0a7d8c8520aa677183f80923ab8)(class ::clang::SourceLocation , unsigned int ) const = &::clang::SourceManager::isBeforeInSLocAddrSpace;
    bool  (::clang::SourceManager::*method_pointer_870ddd61294757809905654fe07f7ab7)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isBeforeInTranslationUnit;
    bool  (::clang::SourceManager::*method_pointer_407c9e1508c3509eb98aec091911775a)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInExternCSystemHeader;
    bool  (::clang::SourceManager::*method_pointer_73452dd5bdbc54ea931451a104bec067)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInMainFile;
    bool  (::clang::SourceManager::*method_pointer_2f5f807704da5963b7ff766a431ef298)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInSystemHeader;
    bool  (::clang::SourceManager::*method_pointer_d01c919177855ac9bb82cd5e0cdc8f16)(class ::clang::SourceLocation ) = &::clang::SourceManager::isInSystemMacro;
    bool  (::clang::SourceManager::*method_pointer_6a21d2cdc5ae5796899e0a53d54b4450)(class ::clang::FileID ) const = &::clang::SourceManager::isLoadedFileID;
    bool  (::clang::SourceManager::*method_pointer_aef1efa018b2580890fec5cff211c9a3)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isLoadedSourceLocation;
    bool  (::clang::SourceManager::*method_pointer_03e9658dd6165488ab19eccd03aa73eb)(class ::clang::FileID ) const = &::clang::SourceManager::isLocalFileID;
    bool  (::clang::SourceManager::*method_pointer_d0f09c5ad6ea5692bbcbc9e689a7f106)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isLocalSourceLocation;
    bool  (::clang::SourceManager::*method_pointer_4cc571f1846e5ffbb0d318d83d71e0e6)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isMacroArgExpansion;
    bool  (::clang::SourceManager::*method_pointer_526c3c32f62a5ff3a26e267c1b029577)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isMacroBodyExpansion;
    bool  (::clang::SourceManager::*method_pointer_0bedcffec3fa5a2bb4b88a9635d375f1)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isWrittenInMainFile;
    bool  (::clang::SourceManager::*method_pointer_29b23f07a09f5e8a93722e0d41bba979)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isWrittenInSameFile;
    unsigned int  (::clang::SourceManager::*method_pointer_4be1242e4c715c1c9e0c36c1d4852f24)() const = &::clang::SourceManager::loaded_sloc_entry_size;
    unsigned int  (::clang::SourceManager::*method_pointer_9645a8057527526a83bfd214dff494d2)() const = &::clang::SourceManager::local_sloc_entry_size;
    void  (::clang::SourceManager::*method_pointer_1496821cca145a4889832be4752fc767)(bool ) = &::clang::SourceManager::setAllFilesAreTransient;
    void  (::clang::SourceManager::*method_pointer_cfaf4732b4d75978b427dfd0cab08489)(class ::clang::FileID ) = &::clang::SourceManager::setMainFileID;
    void  (::clang::SourceManager::*method_pointer_7095d8c535e25eccaa6b56aeb2f4dccf)(class ::clang::FileID , unsigned int ) const = &::clang::SourceManager::setNumCreatedFIDsForFileID;
    void  (::clang::SourceManager::*method_pointer_8efc1372d3d65f2495c1cb190d748739)(bool ) = &::clang::SourceManager::setOverridenFilesKeepOriginalName;
    void  (::clang::SourceManager::*method_pointer_ffcc02acb8b7542e8f70d37fd4282d9e)(class ::clang::FileID ) = &::clang::SourceManager::setPreambleFileID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_07b16a861aeb5c96aa001d4d0238581f)(class ::clang::FileID , unsigned int , unsigned int ) const = &::clang::SourceManager::translateLineCol;
    bool  (::clang::SourceManager::*method_pointer_59fc49642ef655658988f80e6aa7662d)() const = &::clang::SourceManager::userFilesAreVolatile;
    boost::python::class_< class ::clang::SourceManager, autowig::HeldType< class ::clang::SourceManager >, boost::noncopyable > class_9e52028d1c305f31bd87257e6d3ccc53("SourceManager", "", boost::python::no_init);
    class_9e52028d1c305f31bd87257e6d3ccc53.def("add_line_note", method_pointer_4e43b1c0c68454d4a428c440798603e1, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("add_line_note", method_pointer_df94fd3ff9a75ceead7e3e3b09cf8233, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("print_stats", method_pointer_f217a216a2c35c569bf6aed7ee16c27d, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("clear_id_tables", method_pointer_52cb78e22b93538d94373dc2b68ba4f1, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("create_expansion_loc", method_pointer_38bee921962f53599b316402ac519294, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("create_macro_arg_expansion_loc", method_pointer_44ace57b4b495323a4600120f84304b3, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("dump", method_pointer_1522ac0a4d5559ce94403f8c219245af, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_content_cache_size", method_pointer_dec2a56d0a8c5c71b4081c22d10d93d0, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_data_structure_sizes", method_pointer_99457833b6cf59e28a04c3db90f299da, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_expansion_loc", method_pointer_3e2b7ae7d1595bd68dcc021f81e1e934, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_id", method_pointer_ab0e99ed93bb5d1bafb96079f3d3881e, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_id_size", method_pointer_eb75b1240f2f596a8caba4c2011ea1d8, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_loc", method_pointer_e73700babe4d5425a8d0b626070ef003, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_offset", method_pointer_c7e074a96e535beeabc9ab1e6c23067e, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_filename", method_pointer_6212ea8fc23b50d99e8fab424a45ab90, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_immediate_macro_caller_loc", method_pointer_dc8785b9cab1507b9e086f66c4f6eaca, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_immediate_spelling_loc", method_pointer_17dc07b7519a530d819210400d54851f, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_include_loc", method_pointer_9aa25f29304953e7a88dab08f35fc217, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_line_table_filename_id", method_pointer_b7ac5329357c511580e60a14e8c97ee2, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_loc_for_end_of_file", method_pointer_b714cbdfa1db580d885bedc5de4ccf0b, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_loc_for_start_of_file", method_pointer_b69183f6014455978ab40789f119f39e, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_macro_arg_expanded_location", method_pointer_bba1b3c4f2845e5fae715a9f0fd08216, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_main_file_id", method_pointer_dd67015a6ced577f917e485ab84ca489, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_next_local_offset", method_pointer_19561fa09f395fb2b21281cc773e1436, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_num_created_fi_ds_for_file_id", method_pointer_404d88b219a05bdc9d9ca0c65ac70cad, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_preamble_file_id", method_pointer_95061506a5b55c7895f99074e4639f03, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_spelling_loc", method_pointer_e54a7a5965e7516dbf11ae2afe75e599, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("has_line_table", method_pointer_82e8f6125c355445b0f3e09acf110924, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_at_end_of_immediate_macro_expansion", method_pointer_ac13a9ab89c35146ae716fa8a1188bcc, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_at_start_of_immediate_macro_expansion", method_pointer_20077af008a85669b3da0e5c080d2dc9, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_s_loc_addr_space", method_pointer_e02690aaae8f5752bb28600add388092, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_s_loc_addr_space", method_pointer_8937f0a7d8c8520aa677183f80923ab8, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_translation_unit", method_pointer_870ddd61294757809905654fe07f7ab7, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_extern_c_system_header", method_pointer_407c9e1508c3509eb98aec091911775a, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_main_file", method_pointer_73452dd5bdbc54ea931451a104bec067, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_system_header", method_pointer_2f5f807704da5963b7ff766a431ef298, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_system_macro", method_pointer_d01c919177855ac9bb82cd5e0cdc8f16, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_loaded_file_id", method_pointer_6a21d2cdc5ae5796899e0a53d54b4450, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_loaded_source_location", method_pointer_aef1efa018b2580890fec5cff211c9a3, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_local_file_id", method_pointer_03e9658dd6165488ab19eccd03aa73eb, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_local_source_location", method_pointer_d0f09c5ad6ea5692bbcbc9e689a7f106, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_macro_arg_expansion", method_pointer_4cc571f1846e5ffbb0d318d83d71e0e6, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_macro_body_expansion", method_pointer_526c3c32f62a5ff3a26e267c1b029577, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_written_in_main_file", method_pointer_0bedcffec3fa5a2bb4b88a9635d375f1, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_written_in_same_file", method_pointer_29b23f07a09f5e8a93722e0d41bba979, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("loaded_sloc_entry_size", method_pointer_4be1242e4c715c1c9e0c36c1d4852f24, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("local_sloc_entry_size", method_pointer_9645a8057527526a83bfd214dff494d2, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_all_files_are_transient", method_pointer_1496821cca145a4889832be4752fc767, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_main_file_id", method_pointer_cfaf4732b4d75978b427dfd0cab08489, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_num_created_fi_ds_for_file_id", method_pointer_7095d8c535e25eccaa6b56aeb2f4dccf, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_overriden_files_keep_original_name", method_pointer_8efc1372d3d65f2495c1cb190d748739, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_preamble_file_id", method_pointer_ffcc02acb8b7542e8f70d37fd4282d9e, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("translate_line_col", method_pointer_07b16a861aeb5c96aa001d4d0238581f, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("user_files_are_volatile", method_pointer_59fc49642ef655658988f80e6aa7662d, "");

}