#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_8d37c44444645ec6b44504d4cd174c8a(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTUnit::*method_pointer_14f92b67d5ef57c2b94ab7b625a499fb)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_da1f9d098b3f5e34a25eb8f11a22fbe0)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_13aa5f90644753bc871d8faf5664b2a0)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_875b7463d2475cb787ede86b097a58ce)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_25bd1f52e11d5c0ab34b537a05528a7f)() = &::clang::ASTUnit::getASTContext;
    unsigned int  & (::clang::ASTUnit::*method_pointer_8d37c44444645ec6b44504d4cd174c8a)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    bool  (::clang::ASTUnit::*method_pointer_352bc8d1cd375471b3f2ee4f3a86a36e)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_cdfcde39bb4f58119739d6aa868ece47)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_9d52efa4bbe15b83842ebf53c3614af0)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_abd3a0ef92715dbb8b34cb6a1284aeb8)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_982cb267c0a25b959cc5fb254398ff13)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_57c5a1a1b9265df3843e66fe00d2ff17)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_8b413fabca5c5b0da6d869597ff74ae1)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_0303492396565d75a430abf09ecfd279)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_58b3832178485803a945d14cc7520d66)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_6204b7d2bc44598eb220d6a39e7a0e75)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_e8c1c433f2105d2e867050368e3ca4b4)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_94a8cdb61a355d46aea8a19b26742435)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_8bae9c00604c59108aabccbe99b4bb71(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_14f92b67d5ef57c2b94ab7b625a499fb, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_da1f9d098b3f5e34a25eb8f11a22fbe0, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_13aa5f90644753bc871d8faf5664b2a0, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_875b7463d2475cb787ede86b097a58ce, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_25bd1f52e11d5c0ab34b537a05528a7f, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_8d37c44444645ec6b44504d4cd174c8a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_8d37c44444645ec6b44504d4cd174c8a);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_352bc8d1cd375471b3f2ee4f3a86a36e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_cdfcde39bb4f58119739d6aa868ece47, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_9d52efa4bbe15b83842ebf53c3614af0, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_abd3a0ef92715dbb8b34cb6a1284aeb8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_982cb267c0a25b959cc5fb254398ff13, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_57c5a1a1b9265df3843e66fe00d2ff17, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_8b413fabca5c5b0da6d869597ff74ae1, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_0303492396565d75a430abf09ecfd279, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_58b3832178485803a945d14cc7520d66, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_6204b7d2bc44598eb220d6a39e7a0e75, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_e8c1c433f2105d2e867050368e3ca4b4, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_94a8cdb61a355d46aea8a19b26742435, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_8bae9c00604c59108aabccbe99b4bb71, "");

}