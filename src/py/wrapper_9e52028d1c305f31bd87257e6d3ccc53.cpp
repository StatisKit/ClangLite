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
    void  (::clang::SourceManager::*method_pointer_e058de8d1bd45a0e8de61f4964aab789)(class ::clang::SourceLocation , unsigned int , int , bool , bool , bool , bool ) = &::clang::SourceManager::AddLineNote;
    void  (::clang::SourceManager::*method_pointer_ca75764f57715b04adcabeec19bf3f9d)(class ::clang::SourceLocation , unsigned int , int ) = &::clang::SourceManager::AddLineNote;
    void  (::clang::SourceManager::*method_pointer_edee0530e87752e7bb67107598cb69e9)() const = &::clang::SourceManager::PrintStats;
    void  (::clang::SourceManager::*method_pointer_f0a289ab9d035ed8bebd87b3bda85184)() = &::clang::SourceManager::clearIDTables;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_59cb38f822c5549898ce8696d0221aa4)(class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , unsigned int , int , unsigned int ) = &::clang::SourceManager::createExpansionLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_1436e8aca7e954f386303c2a5c89fb75)(class ::clang::SourceLocation , class ::clang::SourceLocation , unsigned int ) = &::clang::SourceManager::createMacroArgExpansionLoc;
    void  (::clang::SourceManager::*method_pointer_14441af00629590fb62ff18b5d38ea2f)() const = &::clang::SourceManager::dump;
    unsigned long int  (::clang::SourceManager::*method_pointer_36e74c8948755bd5a8572a11abb379cc)() const = &::clang::SourceManager::getContentCacheSize;
    unsigned long int  (::clang::SourceManager::*method_pointer_6ef672346d1a54028e183209f4d29cdc)() const = &::clang::SourceManager::getDataStructureSizes;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_ff6736c935b959cd892352ba53a8c95e)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getExpansionLoc;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_0a35bfa73349587cb20d3549c2c3b8ad)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileID;
    unsigned int  (::clang::SourceManager::*method_pointer_1dfb90badc0f54ed9dcce858d3a9b429)(class ::clang::FileID ) const = &::clang::SourceManager::getFileIDSize;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_490715f8f32953df8ba15a18b5747aa2)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileLoc;
    unsigned int  (::clang::SourceManager::*method_pointer_084be4cc306356c8bc3a10988cd1fd95)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileOffset;
    class ::llvm::StringRef  (::clang::SourceManager::*method_pointer_5462ca681bdb5c5097e349e114181dfe)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFilename;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_c14878f1d13d57aab0b432096ec60805)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getImmediateMacroCallerLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_6343977c182c5c49b167f27525fb3827)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getImmediateSpellingLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_8dca2c3e1f6752598b3b5137bd7eae78)(class ::clang::FileID ) const = &::clang::SourceManager::getIncludeLoc;
    unsigned int  (::clang::SourceManager::*method_pointer_3892e253baa258a7accadec1ca417c1f)(class ::llvm::StringRef ) = &::clang::SourceManager::getLineTableFilenameID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_e751062e5a2c5af6be10aa492e3692be)(class ::clang::FileID ) const = &::clang::SourceManager::getLocForEndOfFile;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_dd8259c06d4f5621ad95b39516408582)(class ::clang::FileID ) const = &::clang::SourceManager::getLocForStartOfFile;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_e276b5ca46545c27994f7e83583a1cf0)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getMacroArgExpandedLocation;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_1c71e268a84050e4be5fcfe09d74bc26)() const = &::clang::SourceManager::getMainFileID;
    unsigned int  (::clang::SourceManager::*method_pointer_4086a224fdd45c029bd701a8404f2400)() const = &::clang::SourceManager::getNextLocalOffset;
    unsigned int  (::clang::SourceManager::*method_pointer_64d5609961fd5ee8bd60f5c9de59aa2c)(class ::clang::FileID ) const = &::clang::SourceManager::getNumCreatedFIDsForFileID;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_74c866b158535ec98c95be5c1d3001cd)() const = &::clang::SourceManager::getPreambleFileID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_58935ee1c97e5e21ba1a1a384a29c5e0)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getSpellingLoc;
    bool  (::clang::SourceManager::*method_pointer_4b4b30d4ac0f5e2dad24b3f63e920363)() const = &::clang::SourceManager::hasLineTable;
    bool  (::clang::SourceManager::*method_pointer_df33da69f07c5785a40ca2d5171a2919)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isAtEndOfImmediateMacroExpansion;
    bool  (::clang::SourceManager::*method_pointer_e196d1e81f57543fadc5d0f941dfed7e)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isAtStartOfImmediateMacroExpansion;
    bool  (::clang::SourceManager::*method_pointer_700097fe463b533ea816efc6c7f3fc12)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isBeforeInSLocAddrSpace;
    bool  (::clang::SourceManager::*method_pointer_97c2795077bc542dabd4f2ea7e6eeed6)(class ::clang::SourceLocation , unsigned int ) const = &::clang::SourceManager::isBeforeInSLocAddrSpace;
    bool  (::clang::SourceManager::*method_pointer_2220a4221eaf5de8bdc70112681bb8d1)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isBeforeInTranslationUnit;
    bool  (::clang::SourceManager::*method_pointer_9a4cac96820653b396d3fecb7f595953)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInExternCSystemHeader;
    bool  (::clang::SourceManager::*method_pointer_a4adb9f306de5f0c8281d718f929508c)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInMainFile;
    bool  (::clang::SourceManager::*method_pointer_d822db5eb3f45de3b279fa7b12a357f3)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInSystemHeader;
    bool  (::clang::SourceManager::*method_pointer_54f939b3d1005732bd319e9f23112b51)(class ::clang::SourceLocation ) = &::clang::SourceManager::isInSystemMacro;
    bool  (::clang::SourceManager::*method_pointer_e7cd2cae01415bcb8c4d84719153d19b)(class ::clang::FileID ) const = &::clang::SourceManager::isLoadedFileID;
    bool  (::clang::SourceManager::*method_pointer_a4b8d2cee199592fbc2ee708291d5a19)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isLoadedSourceLocation;
    bool  (::clang::SourceManager::*method_pointer_686b10eaecdc5083953eb4f3b915d7bb)(class ::clang::FileID ) const = &::clang::SourceManager::isLocalFileID;
    bool  (::clang::SourceManager::*method_pointer_4fac470531bb567992eecc286440cee7)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isLocalSourceLocation;
    bool  (::clang::SourceManager::*method_pointer_6703c3ee3a88538280f00fad889fea69)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isMacroArgExpansion;
    bool  (::clang::SourceManager::*method_pointer_1bda3c4a2ad4567c8060239577ec3aad)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isMacroBodyExpansion;
    bool  (::clang::SourceManager::*method_pointer_ce7ae11722cb5eea93cf123d3b19a68f)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isWrittenInMainFile;
    bool  (::clang::SourceManager::*method_pointer_b69979648a47502dbbbc632312599c75)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isWrittenInSameFile;
    unsigned int  (::clang::SourceManager::*method_pointer_fc7a01846b4f5692849d751ff90ea8c8)() const = &::clang::SourceManager::loaded_sloc_entry_size;
    unsigned int  (::clang::SourceManager::*method_pointer_56bd9cb84b01502d9646af135769ac98)() const = &::clang::SourceManager::local_sloc_entry_size;
    void  (::clang::SourceManager::*method_pointer_d5eea6f8a57258fbad9b1c6d76654f0f)(bool ) = &::clang::SourceManager::setAllFilesAreTransient;
    void  (::clang::SourceManager::*method_pointer_dfab978212d55d539e6c79651fdd4971)(class ::clang::FileID ) = &::clang::SourceManager::setMainFileID;
    void  (::clang::SourceManager::*method_pointer_fb9374a21ab85c19b75783bf5d3e33aa)(class ::clang::FileID , unsigned int ) const = &::clang::SourceManager::setNumCreatedFIDsForFileID;
    void  (::clang::SourceManager::*method_pointer_ae799721eba050df90d4b444014e9377)(bool ) = &::clang::SourceManager::setOverridenFilesKeepOriginalName;
    void  (::clang::SourceManager::*method_pointer_864d3fa849845ca0b7d801c9e53c1734)(class ::clang::FileID ) = &::clang::SourceManager::setPreambleFileID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_3038dbd38a83503c9dcc4d51e7c41dbf)(class ::clang::FileID , unsigned int , unsigned int ) const = &::clang::SourceManager::translateLineCol;
    bool  (::clang::SourceManager::*method_pointer_220f4317a064590cb56114d7d64857cd)() const = &::clang::SourceManager::userFilesAreVolatile;
    boost::python::class_< class ::clang::SourceManager, autowig::HeldType< class ::clang::SourceManager >, boost::noncopyable > class_9e52028d1c305f31bd87257e6d3ccc53("SourceManager", "", boost::python::no_init);
    class_9e52028d1c305f31bd87257e6d3ccc53.def("add_line_note", method_pointer_e058de8d1bd45a0e8de61f4964aab789, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("add_line_note", method_pointer_ca75764f57715b04adcabeec19bf3f9d, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("print_stats", method_pointer_edee0530e87752e7bb67107598cb69e9, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("clear_id_tables", method_pointer_f0a289ab9d035ed8bebd87b3bda85184, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("create_expansion_loc", method_pointer_59cb38f822c5549898ce8696d0221aa4, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("create_macro_arg_expansion_loc", method_pointer_1436e8aca7e954f386303c2a5c89fb75, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("dump", method_pointer_14441af00629590fb62ff18b5d38ea2f, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_content_cache_size", method_pointer_36e74c8948755bd5a8572a11abb379cc, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_data_structure_sizes", method_pointer_6ef672346d1a54028e183209f4d29cdc, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_expansion_loc", method_pointer_ff6736c935b959cd892352ba53a8c95e, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_id", method_pointer_0a35bfa73349587cb20d3549c2c3b8ad, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_id_size", method_pointer_1dfb90badc0f54ed9dcce858d3a9b429, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_loc", method_pointer_490715f8f32953df8ba15a18b5747aa2, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_offset", method_pointer_084be4cc306356c8bc3a10988cd1fd95, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_filename", method_pointer_5462ca681bdb5c5097e349e114181dfe, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_immediate_macro_caller_loc", method_pointer_c14878f1d13d57aab0b432096ec60805, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_immediate_spelling_loc", method_pointer_6343977c182c5c49b167f27525fb3827, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_include_loc", method_pointer_8dca2c3e1f6752598b3b5137bd7eae78, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_line_table_filename_id", method_pointer_3892e253baa258a7accadec1ca417c1f, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_loc_for_end_of_file", method_pointer_e751062e5a2c5af6be10aa492e3692be, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_loc_for_start_of_file", method_pointer_dd8259c06d4f5621ad95b39516408582, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_macro_arg_expanded_location", method_pointer_e276b5ca46545c27994f7e83583a1cf0, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_main_file_id", method_pointer_1c71e268a84050e4be5fcfe09d74bc26, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_next_local_offset", method_pointer_4086a224fdd45c029bd701a8404f2400, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_num_created_fi_ds_for_file_id", method_pointer_64d5609961fd5ee8bd60f5c9de59aa2c, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_preamble_file_id", method_pointer_74c866b158535ec98c95be5c1d3001cd, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_spelling_loc", method_pointer_58935ee1c97e5e21ba1a1a384a29c5e0, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("has_line_table", method_pointer_4b4b30d4ac0f5e2dad24b3f63e920363, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_at_end_of_immediate_macro_expansion", method_pointer_df33da69f07c5785a40ca2d5171a2919, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_at_start_of_immediate_macro_expansion", method_pointer_e196d1e81f57543fadc5d0f941dfed7e, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_s_loc_addr_space", method_pointer_700097fe463b533ea816efc6c7f3fc12, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_s_loc_addr_space", method_pointer_97c2795077bc542dabd4f2ea7e6eeed6, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_translation_unit", method_pointer_2220a4221eaf5de8bdc70112681bb8d1, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_extern_c_system_header", method_pointer_9a4cac96820653b396d3fecb7f595953, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_main_file", method_pointer_a4adb9f306de5f0c8281d718f929508c, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_system_header", method_pointer_d822db5eb3f45de3b279fa7b12a357f3, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_system_macro", method_pointer_54f939b3d1005732bd319e9f23112b51, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_loaded_file_id", method_pointer_e7cd2cae01415bcb8c4d84719153d19b, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_loaded_source_location", method_pointer_a4b8d2cee199592fbc2ee708291d5a19, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_local_file_id", method_pointer_686b10eaecdc5083953eb4f3b915d7bb, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_local_source_location", method_pointer_4fac470531bb567992eecc286440cee7, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_macro_arg_expansion", method_pointer_6703c3ee3a88538280f00fad889fea69, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_macro_body_expansion", method_pointer_1bda3c4a2ad4567c8060239577ec3aad, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_written_in_main_file", method_pointer_ce7ae11722cb5eea93cf123d3b19a68f, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_written_in_same_file", method_pointer_b69979648a47502dbbbc632312599c75, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("loaded_sloc_entry_size", method_pointer_fc7a01846b4f5692849d751ff90ea8c8, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("local_sloc_entry_size", method_pointer_56bd9cb84b01502d9646af135769ac98, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_all_files_are_transient", method_pointer_d5eea6f8a57258fbad9b1c6d76654f0f, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_main_file_id", method_pointer_dfab978212d55d539e6c79651fdd4971, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_num_created_fi_ds_for_file_id", method_pointer_fb9374a21ab85c19b75783bf5d3e33aa, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_overriden_files_keep_original_name", method_pointer_ae799721eba050df90d4b444014e9377, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_preamble_file_id", method_pointer_864d3fa849845ca0b7d801c9e53c1734, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("translate_line_col", method_pointer_3038dbd38a83503c9dcc4d51e7c41dbf, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("user_files_are_volatile", method_pointer_220f4317a064590cb56114d7d64857cd, "");

}