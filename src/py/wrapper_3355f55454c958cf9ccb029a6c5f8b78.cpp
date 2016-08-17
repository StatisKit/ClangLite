#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
    void method_decorator_f3732ee7a716593683796cdc53a3117f(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTUnit::*method_pointer_dd1d6c39897350e8b6a6e53db9a21cd5)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_f6a931b3e48f5294bdcc655d70a1ed73)() = &::clang::ASTUnit::isModuleFile;
    unsigned int  & (::clang::ASTUnit::*method_pointer_f3732ee7a716593683796cdc53a3117f)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_bc325bd774da5c4c931cddb8753a285e)() = &::clang::ASTUnit::getASTContext;
    bool  (::clang::ASTUnit::*method_pointer_a59ff6f343d95397ac5b122a39ede9cc)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_5a764aba2f5d5748a681f58e63e80f38)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_6624d6655bee5e2e86a742037823e7de)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_1a9d3eaeefae5637ac0624b44b52c898)() const = &::clang::ASTUnit::stored_diag_size;
    void  (::clang::ASTUnit::*method_pointer_f1eaefcf36665da985b4ce4281493682)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    bool  (::clang::ASTUnit::*method_pointer_fd1564fb0e2c54d78a44102b43869248)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_fc9f3a039cbc59618e806e40095dbe74)() const = &::clang::ASTUnit::top_level_empty;
    bool  (::clang::ASTUnit::*method_pointer_06b17cd4002d570b90da80de732cdad1)() const = &::clang::ASTUnit::hasSema;
    void  (::clang::ASTUnit::*method_pointer_436c93f31b7159c18d2d0b6adb003e81)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    bool  (::clang::ASTUnit::*method_pointer_7728711c09a3599c814d63458c5c7c3f)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_c4ad006309a652c69483a6b4ecd2b45f)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    unsigned int  (::clang::ASTUnit::*method_pointer_7417b2fd2f0159b6a5a978f71029fa52)() const = &::clang::ASTUnit::cached_completion_size;
    bool  (::clang::ASTUnit::*method_pointer_070dd85d4fc35467bc4e6205c428f474)() const = &::clang::ASTUnit::isMainFileAST;
    unsigned long int  (::clang::ASTUnit::*method_pointer_1d511c912425503799740de3f79af1a4)() const = &::clang::ASTUnit::top_level_size;
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_dd1d6c39897350e8b6a6e53db9a21cd5, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_f6a931b3e48f5294bdcc655d70a1ed73, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_f3732ee7a716593683796cdc53a3117f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_f3732ee7a716593683796cdc53a3117f);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_bc325bd774da5c4c931cddb8753a285e, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_a59ff6f343d95397ac5b122a39ede9cc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_5a764aba2f5d5748a681f58e63e80f38, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_6624d6655bee5e2e86a742037823e7de, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_1a9d3eaeefae5637ac0624b44b52c898, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_f1eaefcf36665da985b4ce4281493682, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_fd1564fb0e2c54d78a44102b43869248, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_fc9f3a039cbc59618e806e40095dbe74, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_06b17cd4002d570b90da80de732cdad1, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_436c93f31b7159c18d2d0b6adb003e81, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_7728711c09a3599c814d63458c5c7c3f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_c4ad006309a652c69483a6b4ecd2b45f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_7417b2fd2f0159b6a5a978f71029fa52, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_070dd85d4fc35467bc4e6205c428f474, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_1d511c912425503799740de3f79af1a4, "");

}