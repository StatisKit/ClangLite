#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_41c0d80afa9c5e2e843a50aea3a58435(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ASTUnit::*method_pointer_ab989c9c6c2d5ded86b24fef42bc4936)(class ::llvm::StringRef ) = &::clang::ASTUnit::Save;
    void  (::clang::ASTUnit::*method_pointer_413c2ab0ca675e69ad2fdb4ef1874e4b)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_b066189784d95599a1766092251fd648)(class ::llvm::StringRef ) = &::clang::ASTUnit::addTemporaryFile;
    void  (::clang::ASTUnit::*method_pointer_a51abb942c375b0ca6d910e0ec4e0f14)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_06375c164269594a8b252826dc107f0c)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_b5f57ff14d3c558bbf10116b73571810)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_042a3d2b8c7d58338a9896c06c52b769)() = &::clang::ASTUnit::getASTContext;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_00c543ef0cba515fa138272b337e3273)() const = &::clang::ASTUnit::getASTFileName;
    unsigned int  & (::clang::ASTUnit::*method_pointer_41c0d80afa9c5e2e843a50aea3a58435)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_cea51f778a275f0b88a58183dac25223)() = &::clang::ASTUnit::getEndOfPreambleFileID;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_165d87299bfb5fc6b204278f51cf1ae1)() const = &::clang::ASTUnit::getMainFileName;
    bool  (::clang::ASTUnit::*method_pointer_84e27246778058b48023ccf152ae23be)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_9ac7a81cf0885a83933f4e656d0495eb)() = &::clang::ASTUnit::getOriginalSourceFileName;
    bool  (::clang::ASTUnit::*method_pointer_dbbbd4735ba25884a537a5c2792a90e2)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    class ::clang::SourceManager  & (::clang::ASTUnit::*method_pointer_d289deff904e5bdebb4800edcc5caf3e)() = &::clang::ASTUnit::getSourceManager;
    class ::clang::SourceManager  const & (::clang::ASTUnit::*method_pointer_0f2dbe72e40e5ca7b19ac61c94d96055)() const = &::clang::ASTUnit::getSourceManager;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_e0342c34958e59fca8001ab486d694b2)() = &::clang::ASTUnit::getStartOfMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_5fccb35f00fd5f24ba85b39a8a909375)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_441381f9b9145ec0a397ef3fbfeca503)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_b078aa763c68525bba3a65b4c161ec6a)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInPreambleFileID;
    bool  (::clang::ASTUnit::*method_pointer_65860d425d875cd4b1fe5159de80a79b)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_1bcd4e06f8435336803d15b38e9203ca)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_5ba7b0ef5dbf5ddaa62689dccda696ca)() const = &::clang::ASTUnit::isUnsafeToFree;
    bool  (::clang::ASTUnit::*method_pointer_83e3758b6c0252369a870a1912f60e10)(class ::llvm::StringRef , class ::clang::SourceLocation ) = &::clang::ASTUnit::lookupMissingImports;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_98f84adfff8f5eea81bc8fc194828db7)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationFromPreamble;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_a5becf2db0ec58329a89621ab210bf68)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationToPreamble;
    void  (::clang::ASTUnit::*method_pointer_8fc133fa3f9d502fa6b1c4fd56ff5c65)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_afc48f84c5ff556eabb81cf5ca318fac)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_609a442dd7b95eaabd3945a322a0e5c5)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_e5d421dbe5505ab08289e971a0cc3ca8)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_0d1838a3835257cf88f9495307b1d884)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_fa36a3fd595f5ad29704ac7afa3d5fb3)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_978dc85730475f54a161ea423cbab3d5(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("save", method_pointer_ab989c9c6c2d5ded86b24fef42bc4936, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_413c2ab0ca675e69ad2fdb4ef1874e4b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_temporary_file", method_pointer_b066189784d95599a1766092251fd648, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_a51abb942c375b0ca6d910e0ec4e0f14, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_06375c164269594a8b252826dc107f0c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_b5f57ff14d3c558bbf10116b73571810, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_042a3d2b8c7d58338a9896c06c52b769, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_file_name", method_pointer_00c543ef0cba515fa138272b337e3273, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_41c0d80afa9c5e2e843a50aea3a58435, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_41c0d80afa9c5e2e843a50aea3a58435);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_end_of_preamble_file_id", method_pointer_cea51f778a275f0b88a58183dac25223, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_main_file_name", method_pointer_165d87299bfb5fc6b204278f51cf1ae1, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_84e27246778058b48023ccf152ae23be, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_original_source_file_name", method_pointer_9ac7a81cf0885a83933f4e656d0495eb, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_dbbbd4735ba25884a537a5c2792a90e2, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_source_manager", method_pointer_d289deff904e5bdebb4800edcc5caf3e, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_source_manager", method_pointer_0f2dbe72e40e5ca7b19ac61c94d96055, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_start_of_main_file_id", method_pointer_e0342c34958e59fca8001ab486d694b2, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_5fccb35f00fd5f24ba85b39a8a909375, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_main_file_id", method_pointer_441381f9b9145ec0a397ef3fbfeca503, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_preamble_file_id", method_pointer_b078aa763c68525bba3a65b4c161ec6a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_65860d425d875cd4b1fe5159de80a79b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_1bcd4e06f8435336803d15b38e9203ca, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_5ba7b0ef5dbf5ddaa62689dccda696ca, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("lookup_missing_imports", method_pointer_83e3758b6c0252369a870a1912f60e10, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_from_preamble", method_pointer_98f84adfff8f5eea81bc8fc194828db7, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_to_preamble", method_pointer_a5becf2db0ec58329a89621ab210bf68, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_8fc133fa3f9d502fa6b1c4fd56ff5c65, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_afc48f84c5ff556eabb81cf5ca318fac, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_609a442dd7b95eaabd3945a322a0e5c5, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_e5d421dbe5505ab08289e971a0cc3ca8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_0d1838a3835257cf88f9495307b1d884, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_fa36a3fd595f5ad29704ac7afa3d5fb3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_978dc85730475f54a161ea423cbab3d5, "");

}