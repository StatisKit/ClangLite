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
    void  (::clang::SourceManager::*method_pointer_c1736d208f935e938474da5078a505d6)(class ::clang::SourceLocation , unsigned int , int ) = &::clang::SourceManager::AddLineNote;
    void  (::clang::SourceManager::*method_pointer_393258bd7a275d50a8b7db55b00fcbc1)(class ::clang::SourceLocation , unsigned int , int , bool , bool , bool , bool ) = &::clang::SourceManager::AddLineNote;
    void  (::clang::SourceManager::*method_pointer_ef5a6bf2789b565e95a68df3274afd77)() const = &::clang::SourceManager::PrintStats;
    void  (::clang::SourceManager::*method_pointer_9a528426eb10584e842abf4353939248)() = &::clang::SourceManager::clearIDTables;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_21dfdaa345965ab1ab3ed3a43282674c)(class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , unsigned int , int , unsigned int ) = &::clang::SourceManager::createExpansionLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_dd327ea15ea75a4188e4c1f443310727)(class ::clang::SourceLocation , class ::clang::SourceLocation , unsigned int ) = &::clang::SourceManager::createMacroArgExpansionLoc;
    void  (::clang::SourceManager::*method_pointer_23791ed4cbee5385962a3b7664cbf726)() const = &::clang::SourceManager::dump;
    unsigned long int  (::clang::SourceManager::*method_pointer_11f00cd8a54f51b09253edc558206950)() const = &::clang::SourceManager::getContentCacheSize;
    unsigned long int  (::clang::SourceManager::*method_pointer_98b2bb2b98ba58c8b1517f47176e327f)() const = &::clang::SourceManager::getDataStructureSizes;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_315d6cefb60452698111ce1fe7bcd8ea)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getExpansionLoc;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_dd726542fac35ec98fab85f4f983e47b)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileID;
    unsigned int  (::clang::SourceManager::*method_pointer_558c6de794dd56ccadddb70a51bed18c)(class ::clang::FileID ) const = &::clang::SourceManager::getFileIDSize;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_bae7323fd4ea5346a48a302aaf85096a)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileLoc;
    unsigned int  (::clang::SourceManager::*method_pointer_e267cd89db895227ac4895a39631ca6b)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileOffset;
    class ::llvm::StringRef  (::clang::SourceManager::*method_pointer_11e7b5f2dd7551eebd026b6795d98c83)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFilename;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_f43a8e8094a757e1b7a578dc739dcaa3)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getImmediateMacroCallerLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_b3d8c6346f2d517086d019526689d7d9)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getImmediateSpellingLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_451ab75d289357c9bfa1e49d979f1111)(class ::clang::FileID ) const = &::clang::SourceManager::getIncludeLoc;
    unsigned int  (::clang::SourceManager::*method_pointer_c93c1258c58d575ead7d11d51cbd9f96)(class ::llvm::StringRef ) = &::clang::SourceManager::getLineTableFilenameID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_7f4075a52f395ae58ac0b6136f683b98)(class ::clang::FileID ) const = &::clang::SourceManager::getLocForEndOfFile;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_7b8b6a7fc8675c83bc41556a14283ca6)(class ::clang::FileID ) const = &::clang::SourceManager::getLocForStartOfFile;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_88b98ad3d10055ee8e7eb2b680e6a1fb)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getMacroArgExpandedLocation;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_037ad887f936594d8755dd26aa1f616c)() const = &::clang::SourceManager::getMainFileID;
    unsigned int  (::clang::SourceManager::*method_pointer_ec8a255c049a5d21be8b0ee34fdd12db)() const = &::clang::SourceManager::getNextLocalOffset;
    unsigned int  (::clang::SourceManager::*method_pointer_1df9f97260875b33ae230bec2fcf9c34)(class ::clang::FileID ) const = &::clang::SourceManager::getNumCreatedFIDsForFileID;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_169e807bd5925082ae1f13c355f09e05)() const = &::clang::SourceManager::getPreambleFileID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_b9b6ac4edbb05024be1598cfee45b6ad)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getSpellingLoc;
    bool  (::clang::SourceManager::*method_pointer_e57cf1e10811578381687355c2a10e08)() const = &::clang::SourceManager::hasLineTable;
    bool  (::clang::SourceManager::*method_pointer_fd48f24b35455489abc02919b6cb35da)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isAtEndOfImmediateMacroExpansion;
    bool  (::clang::SourceManager::*method_pointer_c15330e4ff975d85afbc41649ef81bcc)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isAtStartOfImmediateMacroExpansion;
    bool  (::clang::SourceManager::*method_pointer_77f2b854f2bf5c0d94a84e24af8a98e8)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isBeforeInSLocAddrSpace;
    bool  (::clang::SourceManager::*method_pointer_b663100d371259649f5066b4d17f3a0c)(class ::clang::SourceLocation , unsigned int ) const = &::clang::SourceManager::isBeforeInSLocAddrSpace;
    bool  (::clang::SourceManager::*method_pointer_4d775738606d5490a9279a59f3314aad)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isBeforeInTranslationUnit;
    bool  (::clang::SourceManager::*method_pointer_74c3d91661c8595495cf569c0a999111)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInExternCSystemHeader;
    bool  (::clang::SourceManager::*method_pointer_313c25b8da255021b72db294c9fbae25)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInMainFile;
    bool  (::clang::SourceManager::*method_pointer_7ac7a12a9b7d5adeaa4cf7680b0281af)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInSystemHeader;
    bool  (::clang::SourceManager::*method_pointer_ee3bfec0488751a29eaf819985473a8f)(class ::clang::SourceLocation ) = &::clang::SourceManager::isInSystemMacro;
    bool  (::clang::SourceManager::*method_pointer_cd4ea4cae6895a6691cf26ddf686845f)(class ::clang::FileID ) const = &::clang::SourceManager::isLoadedFileID;
    bool  (::clang::SourceManager::*method_pointer_cc3853b22ab25c8d8aa85544ede5ada8)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isLoadedSourceLocation;
    bool  (::clang::SourceManager::*method_pointer_f90089c90a76548c82c3b8622a2ae452)(class ::clang::FileID ) const = &::clang::SourceManager::isLocalFileID;
    bool  (::clang::SourceManager::*method_pointer_acacdaf291305ce68f110b7354ce36a0)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isLocalSourceLocation;
    bool  (::clang::SourceManager::*method_pointer_e79b36a0d1b056dc922ff2ca4d24428c)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isMacroArgExpansion;
    bool  (::clang::SourceManager::*method_pointer_553a8245dbda5fe2a22b6654875f5340)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isMacroBodyExpansion;
    bool  (::clang::SourceManager::*method_pointer_112c826d448a572a9f1def11a859dbf7)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isWrittenInMainFile;
    bool  (::clang::SourceManager::*method_pointer_10ac280a2b2e57ef8b015b54c7fd7f5b)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isWrittenInSameFile;
    unsigned int  (::clang::SourceManager::*method_pointer_c82a022c90575746aa8dc6fe5f76d91a)() const = &::clang::SourceManager::loaded_sloc_entry_size;
    unsigned int  (::clang::SourceManager::*method_pointer_f770aaaa76f055c3ac4a72aca6183429)() const = &::clang::SourceManager::local_sloc_entry_size;
    void  (::clang::SourceManager::*method_pointer_3d059e382fe3509099c27d19b97cd5a0)(bool ) = &::clang::SourceManager::setAllFilesAreTransient;
    void  (::clang::SourceManager::*method_pointer_b8eb160d404a50608233690343d333f1)(class ::clang::FileID ) = &::clang::SourceManager::setMainFileID;
    void  (::clang::SourceManager::*method_pointer_3f2db412ea0758f097901458df6ecea4)(class ::clang::FileID , unsigned int ) const = &::clang::SourceManager::setNumCreatedFIDsForFileID;
    void  (::clang::SourceManager::*method_pointer_2e467f86545d5e859c049f0024395300)(bool ) = &::clang::SourceManager::setOverridenFilesKeepOriginalName;
    void  (::clang::SourceManager::*method_pointer_dcb66d2dc7d75598b9d8e8284e5dcc5d)(class ::clang::FileID ) = &::clang::SourceManager::setPreambleFileID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_34d2f6225dc059fb923e2c2acd73df8a)(class ::clang::FileID , unsigned int , unsigned int ) const = &::clang::SourceManager::translateLineCol;
    bool  (::clang::SourceManager::*method_pointer_8171126badab57f39b7bd1e826ede32e)() const = &::clang::SourceManager::userFilesAreVolatile;
    boost::python::class_< class ::clang::SourceManager, autowig::HeldType< class ::clang::SourceManager > > class_9e52028d1c305f31bd87257e6d3ccc53("SourceManager", "", boost::python::no_init);
    class_9e52028d1c305f31bd87257e6d3ccc53.def("add_line_note", method_pointer_c1736d208f935e938474da5078a505d6, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("add_line_note", method_pointer_393258bd7a275d50a8b7db55b00fcbc1, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("print_stats", method_pointer_ef5a6bf2789b565e95a68df3274afd77, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("clear_id_tables", method_pointer_9a528426eb10584e842abf4353939248, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("create_expansion_loc", method_pointer_21dfdaa345965ab1ab3ed3a43282674c, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("create_macro_arg_expansion_loc", method_pointer_dd327ea15ea75a4188e4c1f443310727, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("dump", method_pointer_23791ed4cbee5385962a3b7664cbf726, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_content_cache_size", method_pointer_11f00cd8a54f51b09253edc558206950, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_data_structure_sizes", method_pointer_98b2bb2b98ba58c8b1517f47176e327f, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_expansion_loc", method_pointer_315d6cefb60452698111ce1fe7bcd8ea, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_id", method_pointer_dd726542fac35ec98fab85f4f983e47b, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_id_size", method_pointer_558c6de794dd56ccadddb70a51bed18c, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_loc", method_pointer_bae7323fd4ea5346a48a302aaf85096a, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_offset", method_pointer_e267cd89db895227ac4895a39631ca6b, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_filename", method_pointer_11e7b5f2dd7551eebd026b6795d98c83, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_immediate_macro_caller_loc", method_pointer_f43a8e8094a757e1b7a578dc739dcaa3, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_immediate_spelling_loc", method_pointer_b3d8c6346f2d517086d019526689d7d9, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_include_loc", method_pointer_451ab75d289357c9bfa1e49d979f1111, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_line_table_filename_id", method_pointer_c93c1258c58d575ead7d11d51cbd9f96, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_loc_for_end_of_file", method_pointer_7f4075a52f395ae58ac0b6136f683b98, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_loc_for_start_of_file", method_pointer_7b8b6a7fc8675c83bc41556a14283ca6, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_macro_arg_expanded_location", method_pointer_88b98ad3d10055ee8e7eb2b680e6a1fb, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_main_file_id", method_pointer_037ad887f936594d8755dd26aa1f616c, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_next_local_offset", method_pointer_ec8a255c049a5d21be8b0ee34fdd12db, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_num_created_fi_ds_for_file_id", method_pointer_1df9f97260875b33ae230bec2fcf9c34, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_preamble_file_id", method_pointer_169e807bd5925082ae1f13c355f09e05, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_spelling_loc", method_pointer_b9b6ac4edbb05024be1598cfee45b6ad, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("has_line_table", method_pointer_e57cf1e10811578381687355c2a10e08, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_at_end_of_immediate_macro_expansion", method_pointer_fd48f24b35455489abc02919b6cb35da, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_at_start_of_immediate_macro_expansion", method_pointer_c15330e4ff975d85afbc41649ef81bcc, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_s_loc_addr_space", method_pointer_77f2b854f2bf5c0d94a84e24af8a98e8, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_s_loc_addr_space", method_pointer_b663100d371259649f5066b4d17f3a0c, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_translation_unit", method_pointer_4d775738606d5490a9279a59f3314aad, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_extern_c_system_header", method_pointer_74c3d91661c8595495cf569c0a999111, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_main_file", method_pointer_313c25b8da255021b72db294c9fbae25, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_system_header", method_pointer_7ac7a12a9b7d5adeaa4cf7680b0281af, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_system_macro", method_pointer_ee3bfec0488751a29eaf819985473a8f, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_loaded_file_id", method_pointer_cd4ea4cae6895a6691cf26ddf686845f, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_loaded_source_location", method_pointer_cc3853b22ab25c8d8aa85544ede5ada8, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_local_file_id", method_pointer_f90089c90a76548c82c3b8622a2ae452, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_local_source_location", method_pointer_acacdaf291305ce68f110b7354ce36a0, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_macro_arg_expansion", method_pointer_e79b36a0d1b056dc922ff2ca4d24428c, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_macro_body_expansion", method_pointer_553a8245dbda5fe2a22b6654875f5340, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_written_in_main_file", method_pointer_112c826d448a572a9f1def11a859dbf7, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_written_in_same_file", method_pointer_10ac280a2b2e57ef8b015b54c7fd7f5b, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("loaded_sloc_entry_size", method_pointer_c82a022c90575746aa8dc6fe5f76d91a, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("local_sloc_entry_size", method_pointer_f770aaaa76f055c3ac4a72aca6183429, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_all_files_are_transient", method_pointer_3d059e382fe3509099c27d19b97cd5a0, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_main_file_id", method_pointer_b8eb160d404a50608233690343d333f1, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_num_created_fi_ds_for_file_id", method_pointer_3f2db412ea0758f097901458df6ecea4, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_overriden_files_keep_original_name", method_pointer_2e467f86545d5e859c049f0024395300, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_preamble_file_id", method_pointer_dcb66d2dc7d75598b9d8e8284e5dcc5d, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("translate_line_col", method_pointer_34d2f6225dc059fb923e2c2acd73df8a, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("user_files_are_volatile", method_pointer_8171126badab57f39b7bd1e826ede32e, "");

}