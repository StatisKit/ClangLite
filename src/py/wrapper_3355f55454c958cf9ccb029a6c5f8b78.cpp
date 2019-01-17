#include "_clanglite.h"

bool  (::clang::ASTUnit::*method_pointer_3e808aebd4675bef93a92088f727170a)()const= &::clang::ASTUnit::isMainFileAST;
bool  (::clang::ASTUnit::*method_pointer_5ab42ee56d0a5514abb4121f1eb2a619)()const= &::clang::ASTUnit::isUnsafeToFree;
void  (::clang::ASTUnit::*method_pointer_cd308b04f8055866b779f8510a89a287)(bool )= &::clang::ASTUnit::setUnsafeToFree;
class ::clang::SourceManager & (::clang::ASTUnit::*method_pointer_2bc88580735c57cda4bf1e0d30679c6c)()= &::clang::ASTUnit::getSourceManager;
class ::clang::ASTContext & (::clang::ASTUnit::*method_pointer_ea14f5ae96675765975ead790e270a74)()= &::clang::ASTUnit::getASTContext;
void  (::clang::ASTUnit::*method_pointer_5cdb2ffff70c5481bcfeff5266da6ce9)(class ::clang::ASTContext *)= &::clang::ASTUnit::setASTContext;
bool  (::clang::ASTUnit::*method_pointer_347bb4013e7b5ed894b0c35fc38d0420)()const= &::clang::ASTUnit::hasSema;
class ::clang::Sema & (::clang::ASTUnit::*method_pointer_719bf62003a95ebf8b711f657099b4cc)()const= &::clang::ASTUnit::getSema;
class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_b66ea5075322543caaaaf5fd73439ecd)()= &::clang::ASTUnit::getOriginalSourceFileName;
void  (::clang::ASTUnit::*method_pointer_461b830151f757c98a422c4714f066e3)(class ::llvm::StringRef )= &::clang::ASTUnit::addTemporaryFile;
bool  (::clang::ASTUnit::*method_pointer_7c6cd4d1d54b55cb9be9d43a4f2f950b)()const= &::clang::ASTUnit::getOnlyLocalDecls;
bool  (::clang::ASTUnit::*method_pointer_d3033fd8375757d59464efafde1c3b7d)()const= &::clang::ASTUnit::getOwnsRemappedFileBuffers;
void  (::clang::ASTUnit::*method_pointer_7d275098fe9a5ec8aeedd00292d54d3a)(bool )= &::clang::ASTUnit::setOwnsRemappedFileBuffers;
class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_ced83189b9d7590286b9c643defd11fc)()const= &::clang::ASTUnit::getMainFileName;
class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_2d2cbbf08c60567f90024ecdc46c9902)()const= &::clang::ASTUnit::getASTFileName;
unsigned long int  (::clang::ASTUnit::*method_pointer_66729bea6df6571895bb1342f4213b4a)()const= &::clang::ASTUnit::top_level_size;
bool  (::clang::ASTUnit::*method_pointer_68f7d671faee5f77888f24350c3a76a9)()const= &::clang::ASTUnit::top_level_empty;
void  (::clang::ASTUnit::*method_pointer_780f1b020f465a4c8b80d164ba83cc77)(class ::clang::Decl *)= &::clang::ASTUnit::addTopLevelDecl;
void  (::clang::ASTUnit::*method_pointer_c7c5bad525805ea5977716195d50ee53)(class ::clang::Decl *)= &::clang::ASTUnit::addFileLevelDecl;
void  (::clang::ASTUnit::*method_pointer_3abd4e876d8c5455a4d1862c40c4d956)(unsigned int )= &::clang::ASTUnit::addTopLevelDeclFromPreamble;
unsigned int & (::clang::ASTUnit::*method_pointer_aedb3f1eaf985ea082f16cdeb84c469d)()= &::clang::ASTUnit::getCurrentTopLevelHashValue;
class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_3779fe364c6352eb9628ec430d2735b9)(class ::clang::SourceLocation )= &::clang::ASTUnit::mapLocationFromPreamble;
class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_444032ae88715f86ae0a7173283d03fe)(class ::clang::SourceLocation )= &::clang::ASTUnit::mapLocationToPreamble;
bool  (::clang::ASTUnit::*method_pointer_4ddf34b0050454ffa29013ea0c3ae32b)(class ::clang::SourceLocation )= &::clang::ASTUnit::isInPreambleFileID;
bool  (::clang::ASTUnit::*method_pointer_06c5e8127660513a84c7d614064dc414)(class ::clang::SourceLocation )= &::clang::ASTUnit::isInMainFileID;
class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_3df7e0a0d233591daabe71e718a939ef)()= &::clang::ASTUnit::getStartOfMainFileID;
class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_88a7bc7ff0025122b08be33fcfa2bf3d)()= &::clang::ASTUnit::getEndOfPreambleFileID;
unsigned int  (::clang::ASTUnit::*method_pointer_2de1dd71491e513cb0e29110045b95b2)()const= &::clang::ASTUnit::stored_diag_size;
unsigned int  (::clang::ASTUnit::*method_pointer_31509b6e5aa3516982986f740f3358f4)()const= &::clang::ASTUnit::cached_completion_size;
bool  (::clang::ASTUnit::*method_pointer_7d7f1255f5ed57feb65b2158e3f1fab5)()= &::clang::ASTUnit::isModuleFile;
bool  (::clang::ASTUnit::*method_pointer_621316ea48f3511fa390cb0c4fac7657)(class ::llvm::StringRef )= &::clang::ASTUnit::Save;


void wrapper_3355f55454c958cf9ccb029a6c5f8b78(pybind11::module& module)
{

    struct function_group
    {
        static class ::pybind11::list  function_d39550f58a685797a3dc2b5a02ccf049(class ::clang::ASTUnit & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    pybind11::class_<class ::clang::ASTUnit, autowig::HolderType< class ::clang::ASTUnit >::Type > class_3355f55454c958cf9ccb029a6c5f8b78(module, "ASTUnit", "Utility class for loading a ASTContext from an AST file.\n\n");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_3e808aebd4675bef93a92088f727170a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_5ab42ee56d0a5514abb4121f1eb2a619, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_cd308b04f8055866b779f8510a89a287, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_source_manager", method_pointer_2bc88580735c57cda4bf1e0d30679c6c, pybind11::return_value_policy::reference_internal, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_ea14f5ae96675765975ead790e270a74, pybind11::return_value_policy::reference_internal, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_5cdb2ffff70c5481bcfeff5266da6ce9, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_347bb4013e7b5ed894b0c35fc38d0420, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_sema", method_pointer_719bf62003a95ebf8b711f657099b4cc, pybind11::return_value_policy::reference_internal, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_original_source_file_name", method_pointer_b66ea5075322543caaaaf5fd73439ecd, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_temporary_file", method_pointer_461b830151f757c98a422c4714f066e3, "Add a temporary file that the ASTUnit depends on.\n\nThis file will be erased when the ASTUnit is destroyed.\n\n:Parameter:\n    `TempFile` (:cpp:class:`::llvm::StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_7c6cd4d1d54b55cb9be9d43a4f2f950b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_d3033fd8375757d59464efafde1c3b7d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_7d275098fe9a5ec8aeedd00292d54d3a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_main_file_name", method_pointer_ced83189b9d7590286b9c643defd11fc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_file_name", method_pointer_2d2cbbf08c60567f90024ecdc46c9902, "If this ASTUnit came from an AST file, returns the filename for it.\n\n:Return Type:\n    :cpp:class:`::llvm::StringRef`\n\n");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_66729bea6df6571895bb1342f4213b4a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_68f7d671faee5f77888f24350c3a76a9, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_780f1b020f465a4c8b80d164ba83cc77, "Add a new top-level declaration.\n\n:Parameter:\n    `D` (:cpp:class:`::clang::Decl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_c7c5bad525805ea5977716195d50ee53, "Add a new local file-level declaration.\n\n:Parameter:\n    `D` (:cpp:class:`::clang::Decl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_3abd4e876d8c5455a4d1862c40c4d956, "Add a new top-level declaration, identified by its ID in the precompiled\npreamble.\n\n:Parameter:\n    `D` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_aedb3f1eaf985ea082f16cdeb84c469d, pybind11::return_value_policy::copy, "Retrieve a reference to the current top-level name hash value.\n\nNote: This is used internally by the top-level tracking action\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_aedb3f1eaf985ea082f16cdeb84c469d);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_from_preamble", method_pointer_3779fe364c6352eb9628ec430d2735b9, "If :raw-latex:`\\p `Loc is a loaded location from the preamble, returns\nthe corresponding local location of the main file, otherwise it returns\n\n:Parameter:\n    `Loc` (:cpp:class:`::clang::SourceLocation`) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_to_preamble", method_pointer_444032ae88715f86ae0a7173283d03fe, "If :raw-latex:`\\p `Loc is a local location of the main file but inside\nthe preamble chunk, returns the corresponding loaded location from the\npreamble, otherwise it returns :raw-latex:`\\p `Loc.\n\n:Parameter:\n    `Loc` (:cpp:class:`::clang::SourceLocation`) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_preamble_file_id", method_pointer_4ddf34b0050454ffa29013ea0c3ae32b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_main_file_id", method_pointer_06c5e8127660513a84c7d614064dc414, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_start_of_main_file_id", method_pointer_3df7e0a0d233591daabe71e718a939ef, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_end_of_preamble_file_id", method_pointer_88a7bc7ff0025122b08be33fcfa2bf3d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_2de1dd71491e513cb0e29110045b95b2, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_31509b6e5aa3516982986f740f3358f4, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_7d7f1255f5ed57feb65b2158e3f1fab5, "Returns true if the ASTUnit was constructed from a serialized module\nfile.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("save", method_pointer_621316ea48f3511fa390cb0c4fac7657, "Save this translation unit to a file with the given name.\n\n:Parameter:\n    `File` (:cpp:class:`::llvm::StringRef`) - Undocumented\n\n:Returns:\n    true if there was a file error or false if the save was successful.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_d39550f58a685797a3dc2b5a02ccf049, "");

}