#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_ef7e88b26f725b8c8e58016eea242ead(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ASTUnit::*method_pointer_106c12f315105380b9a39d63240d816a)(class ::llvm::StringRef ) = &::clang::ASTUnit::Save;
    void  (::clang::ASTUnit::*method_pointer_b681da1d80c45a18a2d77c641c6bcbc7)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_2181c2659b725cc89d5e7855a4a55557)(class ::llvm::StringRef ) = &::clang::ASTUnit::addTemporaryFile;
    void  (::clang::ASTUnit::*method_pointer_7d6092c78c8653588e97730f8d68c0fc)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_e8d8aadb646d57959a5a987e69b1772f)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_3aa9efa46f525e7aa40ddaa81d2b3eb5)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_6e7aca8834f558189553d01620a5b592)() = &::clang::ASTUnit::getASTContext;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_5463e5b30bce55a7bf513445700bc6ba)() const = &::clang::ASTUnit::getASTFileName;
    unsigned int  & (::clang::ASTUnit::*method_pointer_ef7e88b26f725b8c8e58016eea242ead)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_5799f588071d51dc8cb189f27b032078)() = &::clang::ASTUnit::getEndOfPreambleFileID;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_28934c0d8d9b5b2499d276e76dc6f991)() const = &::clang::ASTUnit::getMainFileName;
    bool  (::clang::ASTUnit::*method_pointer_43cbaf8927d5508aacceee09be0fa0a4)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_faf2a1b72f4b5a6ba3eae5274209e85c)() = &::clang::ASTUnit::getOriginalSourceFileName;
    bool  (::clang::ASTUnit::*method_pointer_d3b1bf53b1205791a9e18e50905f3b59)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    class ::clang::SourceManager  & (::clang::ASTUnit::*method_pointer_f02f24c3ce3954858475804b384744c4)() = &::clang::ASTUnit::getSourceManager;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_8358b93038c158d38a0dd99f27494172)() = &::clang::ASTUnit::getStartOfMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_2744d4b2d0a450a78f98bf4c1f5629ed)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_abae5e5ddcd357fb93da9e022b210e21)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_9314b33e69845d6c9cdc36b24dcc0111)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInPreambleFileID;
    bool  (::clang::ASTUnit::*method_pointer_43efce9349ba534d8f969fc49c5d2dfa)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_4a9d311530a35dca803fe447c51b8392)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_a76553264111500c85d899a5c79f4998)() const = &::clang::ASTUnit::isUnsafeToFree;
    bool  (::clang::ASTUnit::*method_pointer_6408ef8a2c8a515486203dac9bd56c9c)(class ::llvm::StringRef , class ::clang::SourceLocation ) = &::clang::ASTUnit::lookupMissingImports;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_5a08a20a62575dd49c2cdf026fd3ff3e)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationFromPreamble;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_a71ab08475ef5c6b8cc05288f63c2160)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationToPreamble;
    void  (::clang::ASTUnit::*method_pointer_83c694c0cea55db98160b977839b572e)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_32b40a7c1dc6547c93ac6d4bac9b222c)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_6a3b2b1aba3456fd8c9c47bfd833d14f)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_55bac7d68ef850798ae6d583c7ce79c5)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_08244308b7bd5d32b736ef7e86100214)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_40302a557b3e50ad84b6449702497cc6)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_6289a46e048f50c4a023898279432d34(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("save", method_pointer_106c12f315105380b9a39d63240d816a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_b681da1d80c45a18a2d77c641c6bcbc7, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_temporary_file", method_pointer_2181c2659b725cc89d5e7855a4a55557, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_7d6092c78c8653588e97730f8d68c0fc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_e8d8aadb646d57959a5a987e69b1772f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_3aa9efa46f525e7aa40ddaa81d2b3eb5, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_6e7aca8834f558189553d01620a5b592, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_file_name", method_pointer_5463e5b30bce55a7bf513445700bc6ba, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_ef7e88b26f725b8c8e58016eea242ead, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_ef7e88b26f725b8c8e58016eea242ead);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_end_of_preamble_file_id", method_pointer_5799f588071d51dc8cb189f27b032078, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_main_file_name", method_pointer_28934c0d8d9b5b2499d276e76dc6f991, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_43cbaf8927d5508aacceee09be0fa0a4, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_original_source_file_name", method_pointer_faf2a1b72f4b5a6ba3eae5274209e85c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_d3b1bf53b1205791a9e18e50905f3b59, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_source_manager", method_pointer_f02f24c3ce3954858475804b384744c4, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_start_of_main_file_id", method_pointer_8358b93038c158d38a0dd99f27494172, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_2744d4b2d0a450a78f98bf4c1f5629ed, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_main_file_id", method_pointer_abae5e5ddcd357fb93da9e022b210e21, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_preamble_file_id", method_pointer_9314b33e69845d6c9cdc36b24dcc0111, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_43efce9349ba534d8f969fc49c5d2dfa, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_4a9d311530a35dca803fe447c51b8392, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_a76553264111500c85d899a5c79f4998, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("lookup_missing_imports", method_pointer_6408ef8a2c8a515486203dac9bd56c9c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_from_preamble", method_pointer_5a08a20a62575dd49c2cdf026fd3ff3e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_to_preamble", method_pointer_a71ab08475ef5c6b8cc05288f63c2160, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_83c694c0cea55db98160b977839b572e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_32b40a7c1dc6547c93ac6d4bac9b222c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_6a3b2b1aba3456fd8c9c47bfd833d14f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_55bac7d68ef850798ae6d583c7ce79c5, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_08244308b7bd5d32b736ef7e86100214, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_40302a557b3e50ad84b6449702497cc6, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_6289a46e048f50c4a023898279432d34, "");

}