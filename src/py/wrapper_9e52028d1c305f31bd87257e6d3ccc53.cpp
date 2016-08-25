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
    void  (::clang::SourceManager::*method_pointer_d0df905cf6ef519d95115a6c544f79e4)(class ::clang::SourceLocation , unsigned int , int , bool , bool , bool , bool ) = &::clang::SourceManager::AddLineNote;
    void  (::clang::SourceManager::*method_pointer_88fd8f62cabc5673b2fd3f777b95a1fe)(class ::clang::SourceLocation , unsigned int , int ) = &::clang::SourceManager::AddLineNote;
    void  (::clang::SourceManager::*method_pointer_02480748535050b1af7b519c022a3162)() const = &::clang::SourceManager::PrintStats;
    void  (::clang::SourceManager::*method_pointer_36ed8638718c5af4810ab4f8a858373e)() = &::clang::SourceManager::clearIDTables;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_47e5d2fd2b7c5349a36e54771d2b46c6)(class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , unsigned int , int , unsigned int ) = &::clang::SourceManager::createExpansionLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_698aa619bc935249853c89bf3f45b974)(class ::clang::SourceLocation , class ::clang::SourceLocation , unsigned int ) = &::clang::SourceManager::createMacroArgExpansionLoc;
    void  (::clang::SourceManager::*method_pointer_b7f8fa413b5c5c2884c6ac269a597334)() const = &::clang::SourceManager::dump;
    unsigned long int  (::clang::SourceManager::*method_pointer_da5c950ea9a4590c95e2d5b2473d23a1)() const = &::clang::SourceManager::getContentCacheSize;
    unsigned long int  (::clang::SourceManager::*method_pointer_9c7a4e1281025a13abf4241d38bdfec0)() const = &::clang::SourceManager::getDataStructureSizes;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_e0538cc5e1fc5c82a8d48f7fa5f57b64)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getExpansionLoc;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_2013f8c7fdb1532aaafb0fc8afcf7a98)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileID;
    unsigned int  (::clang::SourceManager::*method_pointer_dfe92482c85457b78cd4734b54596ab0)(class ::clang::FileID ) const = &::clang::SourceManager::getFileIDSize;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_ab68e1b7093857d98d25cdc0aa1c69e4)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileLoc;
    unsigned int  (::clang::SourceManager::*method_pointer_56d602ab94985f689d3e8c3da716f64b)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFileOffset;
    class ::llvm::StringRef  (::clang::SourceManager::*method_pointer_9ad22647c6bd5ae881b862320565d648)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getFilename;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_0321d999d7c6547cb1ecf96c721e4959)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getImmediateMacroCallerLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_4bf4cd115f4b59ed901792f3dd9dd99f)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getImmediateSpellingLoc;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_e8b5b8657b215961a6ca8f7c3eebab44)(class ::clang::FileID ) const = &::clang::SourceManager::getIncludeLoc;
    unsigned int  (::clang::SourceManager::*method_pointer_5d1cc9b68d475990bebb1537562df550)(class ::llvm::StringRef ) = &::clang::SourceManager::getLineTableFilenameID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_ca8ebf30c73f5f8aa9742e2839e39cc3)(class ::clang::FileID ) const = &::clang::SourceManager::getLocForEndOfFile;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_0caf8074886852389628e2c95ca6e4d0)(class ::clang::FileID ) const = &::clang::SourceManager::getLocForStartOfFile;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_345cd4c68692515282e97bd38a0ae70c)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getMacroArgExpandedLocation;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_2bbed835237f5392bc03257f5df9af6f)() const = &::clang::SourceManager::getMainFileID;
    unsigned int  (::clang::SourceManager::*method_pointer_ad33ff8d7f66500389f338e063ade73b)() const = &::clang::SourceManager::getNextLocalOffset;
    unsigned int  (::clang::SourceManager::*method_pointer_0830d27a9f725652a8972db40348993a)(class ::clang::FileID ) const = &::clang::SourceManager::getNumCreatedFIDsForFileID;
    class ::clang::FileID  (::clang::SourceManager::*method_pointer_8442d9272d6c5cf98d5087d4b7380a34)() const = &::clang::SourceManager::getPreambleFileID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_8bb7c493c8535c01b61916bad1af80cd)(class ::clang::SourceLocation ) const = &::clang::SourceManager::getSpellingLoc;
    bool  (::clang::SourceManager::*method_pointer_d7dc2316aa245c468a877ea4f52e5c50)() const = &::clang::SourceManager::hasLineTable;
    bool  (::clang::SourceManager::*method_pointer_6bde42fb9b8d557dba157ee4b68e489f)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isAtEndOfImmediateMacroExpansion;
    bool  (::clang::SourceManager::*method_pointer_296814b594ee530d9ee16fc2a8fa035d)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isAtStartOfImmediateMacroExpansion;
    bool  (::clang::SourceManager::*method_pointer_f4394a7dbae451d59999955f02928a44)(class ::clang::SourceLocation , unsigned int ) const = &::clang::SourceManager::isBeforeInSLocAddrSpace;
    bool  (::clang::SourceManager::*method_pointer_a25d78f23ca05183a94bdc41eeb2c35c)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isBeforeInSLocAddrSpace;
    bool  (::clang::SourceManager::*method_pointer_2c0a083601225766aa9ee93ac6c53bcf)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isBeforeInTranslationUnit;
    bool  (::clang::SourceManager::*method_pointer_dafcab8d4794560280097602cc1dba5e)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInExternCSystemHeader;
    bool  (::clang::SourceManager::*method_pointer_f7e4ef349d855015b00998d74e06002a)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInMainFile;
    bool  (::clang::SourceManager::*method_pointer_905d68336ade5ce5ab60aebd7135526e)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isInSystemHeader;
    bool  (::clang::SourceManager::*method_pointer_96aabfce25375c728cf28347e7ce9f3f)(class ::clang::SourceLocation ) = &::clang::SourceManager::isInSystemMacro;
    bool  (::clang::SourceManager::*method_pointer_a7637240ba205fabb6d35b6b94815981)(class ::clang::FileID ) const = &::clang::SourceManager::isLoadedFileID;
    bool  (::clang::SourceManager::*method_pointer_1b2dc9b7b4fc5674a8ea61c5212372be)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isLoadedSourceLocation;
    bool  (::clang::SourceManager::*method_pointer_fb88c589529e5947ab95ddaeefe50a1e)(class ::clang::FileID ) const = &::clang::SourceManager::isLocalFileID;
    bool  (::clang::SourceManager::*method_pointer_e7eec3c797c25aceadf7a57bef7e98b7)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isLocalSourceLocation;
    bool  (::clang::SourceManager::*method_pointer_215790a2cb985074b9277db83fdd777d)(class ::clang::SourceLocation , class ::clang::SourceLocation  *) const = &::clang::SourceManager::isMacroArgExpansion;
    bool  (::clang::SourceManager::*method_pointer_aee9f364b58b5e8d8f6ba5e0eac964d9)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isMacroBodyExpansion;
    bool  (::clang::SourceManager::*method_pointer_4f9da04941d45382a4881dda58a9d838)(class ::clang::SourceLocation ) const = &::clang::SourceManager::isWrittenInMainFile;
    bool  (::clang::SourceManager::*method_pointer_09948c40e21c514187a27c7fa902b399)(class ::clang::SourceLocation , class ::clang::SourceLocation ) const = &::clang::SourceManager::isWrittenInSameFile;
    unsigned int  (::clang::SourceManager::*method_pointer_33a42a8038c25693ae6245b0ee8326b5)() const = &::clang::SourceManager::loaded_sloc_entry_size;
    unsigned int  (::clang::SourceManager::*method_pointer_0310a7807f4556beaf6248012d18a410)() const = &::clang::SourceManager::local_sloc_entry_size;
    void  (::clang::SourceManager::*method_pointer_eb9e77668e1e559c9691654559c59659)(bool ) = &::clang::SourceManager::setAllFilesAreTransient;
    void  (::clang::SourceManager::*method_pointer_78dbbd85838b5f1fb2735a016101fc8d)(class ::clang::FileID ) = &::clang::SourceManager::setMainFileID;
    void  (::clang::SourceManager::*method_pointer_9e9f8da0dfdb5195abc7e2684f4c1fc6)(class ::clang::FileID , unsigned int ) const = &::clang::SourceManager::setNumCreatedFIDsForFileID;
    void  (::clang::SourceManager::*method_pointer_cdc1833026b7518590966598a13b6ec9)(bool ) = &::clang::SourceManager::setOverridenFilesKeepOriginalName;
    void  (::clang::SourceManager::*method_pointer_c3065ffb8f1a5802abc0605141bf2267)(class ::clang::FileID ) = &::clang::SourceManager::setPreambleFileID;
    class ::clang::SourceLocation  (::clang::SourceManager::*method_pointer_5797c354902f541e87d2fce65b2ffa88)(class ::clang::FileID , unsigned int , unsigned int ) const = &::clang::SourceManager::translateLineCol;
    bool  (::clang::SourceManager::*method_pointer_9655e6483c0c5b58a351632a13c2ad3b)() const = &::clang::SourceManager::userFilesAreVolatile;
    boost::python::class_< class ::clang::SourceManager, autowig::HeldType< class ::clang::SourceManager >, boost::noncopyable > class_9e52028d1c305f31bd87257e6d3ccc53("SourceManager", "", boost::python::no_init);
    class_9e52028d1c305f31bd87257e6d3ccc53.def("add_line_note", method_pointer_d0df905cf6ef519d95115a6c544f79e4, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("add_line_note", method_pointer_88fd8f62cabc5673b2fd3f777b95a1fe, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("print_stats", method_pointer_02480748535050b1af7b519c022a3162, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("clear_id_tables", method_pointer_36ed8638718c5af4810ab4f8a858373e, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("create_expansion_loc", method_pointer_47e5d2fd2b7c5349a36e54771d2b46c6, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("create_macro_arg_expansion_loc", method_pointer_698aa619bc935249853c89bf3f45b974, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("dump", method_pointer_b7f8fa413b5c5c2884c6ac269a597334, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_content_cache_size", method_pointer_da5c950ea9a4590c95e2d5b2473d23a1, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_data_structure_sizes", method_pointer_9c7a4e1281025a13abf4241d38bdfec0, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_expansion_loc", method_pointer_e0538cc5e1fc5c82a8d48f7fa5f57b64, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_id", method_pointer_2013f8c7fdb1532aaafb0fc8afcf7a98, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_id_size", method_pointer_dfe92482c85457b78cd4734b54596ab0, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_loc", method_pointer_ab68e1b7093857d98d25cdc0aa1c69e4, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_file_offset", method_pointer_56d602ab94985f689d3e8c3da716f64b, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_filename", method_pointer_9ad22647c6bd5ae881b862320565d648, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_immediate_macro_caller_loc", method_pointer_0321d999d7c6547cb1ecf96c721e4959, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_immediate_spelling_loc", method_pointer_4bf4cd115f4b59ed901792f3dd9dd99f, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_include_loc", method_pointer_e8b5b8657b215961a6ca8f7c3eebab44, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_line_table_filename_id", method_pointer_5d1cc9b68d475990bebb1537562df550, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_loc_for_end_of_file", method_pointer_ca8ebf30c73f5f8aa9742e2839e39cc3, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_loc_for_start_of_file", method_pointer_0caf8074886852389628e2c95ca6e4d0, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_macro_arg_expanded_location", method_pointer_345cd4c68692515282e97bd38a0ae70c, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_main_file_id", method_pointer_2bbed835237f5392bc03257f5df9af6f, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_next_local_offset", method_pointer_ad33ff8d7f66500389f338e063ade73b, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_num_created_fi_ds_for_file_id", method_pointer_0830d27a9f725652a8972db40348993a, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_preamble_file_id", method_pointer_8442d9272d6c5cf98d5087d4b7380a34, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("get_spelling_loc", method_pointer_8bb7c493c8535c01b61916bad1af80cd, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("has_line_table", method_pointer_d7dc2316aa245c468a877ea4f52e5c50, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_at_end_of_immediate_macro_expansion", method_pointer_6bde42fb9b8d557dba157ee4b68e489f, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_at_start_of_immediate_macro_expansion", method_pointer_296814b594ee530d9ee16fc2a8fa035d, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_s_loc_addr_space", method_pointer_f4394a7dbae451d59999955f02928a44, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_s_loc_addr_space", method_pointer_a25d78f23ca05183a94bdc41eeb2c35c, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_before_in_translation_unit", method_pointer_2c0a083601225766aa9ee93ac6c53bcf, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_extern_c_system_header", method_pointer_dafcab8d4794560280097602cc1dba5e, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_main_file", method_pointer_f7e4ef349d855015b00998d74e06002a, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_system_header", method_pointer_905d68336ade5ce5ab60aebd7135526e, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_in_system_macro", method_pointer_96aabfce25375c728cf28347e7ce9f3f, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_loaded_file_id", method_pointer_a7637240ba205fabb6d35b6b94815981, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_loaded_source_location", method_pointer_1b2dc9b7b4fc5674a8ea61c5212372be, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_local_file_id", method_pointer_fb88c589529e5947ab95ddaeefe50a1e, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_local_source_location", method_pointer_e7eec3c797c25aceadf7a57bef7e98b7, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_macro_arg_expansion", method_pointer_215790a2cb985074b9277db83fdd777d, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_macro_body_expansion", method_pointer_aee9f364b58b5e8d8f6ba5e0eac964d9, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_written_in_main_file", method_pointer_4f9da04941d45382a4881dda58a9d838, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("is_written_in_same_file", method_pointer_09948c40e21c514187a27c7fa902b399, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("loaded_sloc_entry_size", method_pointer_33a42a8038c25693ae6245b0ee8326b5, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("local_sloc_entry_size", method_pointer_0310a7807f4556beaf6248012d18a410, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_all_files_are_transient", method_pointer_eb9e77668e1e559c9691654559c59659, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_main_file_id", method_pointer_78dbbd85838b5f1fb2735a016101fc8d, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_num_created_fi_ds_for_file_id", method_pointer_9e9f8da0dfdb5195abc7e2684f4c1fc6, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_overriden_files_keep_original_name", method_pointer_cdc1833026b7518590966598a13b6ec9, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("set_preamble_file_id", method_pointer_c3065ffb8f1a5802abc0605141bf2267, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("translate_line_col", method_pointer_5797c354902f541e87d2fce65b2ffa88, "");
    class_9e52028d1c305f31bd87257e6d3ccc53.def("user_files_are_volatile", method_pointer_9655e6483c0c5b58a351632a13c2ad3b, "");

}