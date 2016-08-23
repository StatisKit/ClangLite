#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_c349babb09585370a02ca1922f799c2b(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ASTUnit::*method_pointer_b09dbda797755fffa73473864890de18)(class ::llvm::StringRef ) = &::clang::ASTUnit::Save;
    void  (::clang::ASTUnit::*method_pointer_eaa1883e84b75f28bcf50cb2da1ab85d)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_145c6959ac2e5f6f819e16fc2ec6aa7a)(class ::llvm::StringRef ) = &::clang::ASTUnit::addTemporaryFile;
    void  (::clang::ASTUnit::*method_pointer_e1b8ea7c7d425327a2add653d6082651)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_552209eab6505bb994f9b191214489f8)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_ac9584d76a175062be6b60abc7c614c6)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_0d425b7ace335b9fa96045e12897fc09)() = &::clang::ASTUnit::getASTContext;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_848b36bf45e65d07be19abe68cedcd8b)() const = &::clang::ASTUnit::getASTFileName;
    unsigned int  & (::clang::ASTUnit::*method_pointer_c349babb09585370a02ca1922f799c2b)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_068ca1f1788756e796315175e90dc48a)() = &::clang::ASTUnit::getEndOfPreambleFileID;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_c6a4abe966685ce4a5d186285402a79b)() const = &::clang::ASTUnit::getMainFileName;
    bool  (::clang::ASTUnit::*method_pointer_f8e646990d015f37a1144541766260b0)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    class ::llvm::StringRef  (::clang::ASTUnit::*method_pointer_545659c73ad353ba8be1848c9e80d268)() = &::clang::ASTUnit::getOriginalSourceFileName;
    bool  (::clang::ASTUnit::*method_pointer_d7f873d2f4ee54b29f4c7e788d88c4b3)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_6e0f0280e80655f98afe5638a1b521d8)() = &::clang::ASTUnit::getStartOfMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_ac72db8a8c9d5526a0d6808e710c9849)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_190b45fc682a50879ec9133864b94aa2)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInMainFileID;
    bool  (::clang::ASTUnit::*method_pointer_43c7b7c514b3502c8647c009f0b5e0bc)(class ::clang::SourceLocation ) = &::clang::ASTUnit::isInPreambleFileID;
    bool  (::clang::ASTUnit::*method_pointer_8cc5760290825e64ac9da8b21d44da2b)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_a952189bc0ba5312a9a14735fbfdc253)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_2c0abc9adc9f5945b3cde460e5a64151)() const = &::clang::ASTUnit::isUnsafeToFree;
    bool  (::clang::ASTUnit::*method_pointer_1044169284e0518c99e88ea3e195c560)(class ::llvm::StringRef , class ::clang::SourceLocation ) = &::clang::ASTUnit::lookupMissingImports;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_1176c4f3006e532d915fa1a5a8fee284)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationFromPreamble;
    class ::clang::SourceLocation  (::clang::ASTUnit::*method_pointer_1b85916a0c025c7abca8c28470aded5b)(class ::clang::SourceLocation ) = &::clang::ASTUnit::mapLocationToPreamble;
    void  (::clang::ASTUnit::*method_pointer_0dbf67e03f9558cc8325cbf48fc0f62b)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_77e3df5e798f50ce9302e980bc8af9a2)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_87ccc4b65298538ba89c39328fc8bb6e)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_8e0343f536e85545abe0773691e7a352)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_328454f2a9a153c799a2f1de0e06e513)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_0b0d6aa5429159989d8b8c62275ebf66)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_7587277a30d4594783bd552bf82147b6(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("save", method_pointer_b09dbda797755fffa73473864890de18, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_eaa1883e84b75f28bcf50cb2da1ab85d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_temporary_file", method_pointer_145c6959ac2e5f6f819e16fc2ec6aa7a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_e1b8ea7c7d425327a2add653d6082651, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_552209eab6505bb994f9b191214489f8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_ac9584d76a175062be6b60abc7c614c6, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_0d425b7ace335b9fa96045e12897fc09, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_file_name", method_pointer_848b36bf45e65d07be19abe68cedcd8b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_c349babb09585370a02ca1922f799c2b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_c349babb09585370a02ca1922f799c2b);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_end_of_preamble_file_id", method_pointer_068ca1f1788756e796315175e90dc48a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_main_file_name", method_pointer_c6a4abe966685ce4a5d186285402a79b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_f8e646990d015f37a1144541766260b0, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_original_source_file_name", method_pointer_545659c73ad353ba8be1848c9e80d268, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_d7f873d2f4ee54b29f4c7e788d88c4b3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_start_of_main_file_id", method_pointer_6e0f0280e80655f98afe5638a1b521d8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_ac72db8a8c9d5526a0d6808e710c9849, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_main_file_id", method_pointer_190b45fc682a50879ec9133864b94aa2, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_in_preamble_file_id", method_pointer_43c7b7c514b3502c8647c009f0b5e0bc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_8cc5760290825e64ac9da8b21d44da2b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_a952189bc0ba5312a9a14735fbfdc253, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_2c0abc9adc9f5945b3cde460e5a64151, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("lookup_missing_imports", method_pointer_1044169284e0518c99e88ea3e195c560, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_from_preamble", method_pointer_1176c4f3006e532d915fa1a5a8fee284, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("map_location_to_preamble", method_pointer_1b85916a0c025c7abca8c28470aded5b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_0dbf67e03f9558cc8325cbf48fc0f62b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_77e3df5e798f50ce9302e980bc8af9a2, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_87ccc4b65298538ba89c39328fc8bb6e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_8e0343f536e85545abe0773691e7a352, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_328454f2a9a153c799a2f1de0e06e513, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_0b0d6aa5429159989d8b8c62275ebf66, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_7587277a30d4594783bd552bf82147b6, "");

}