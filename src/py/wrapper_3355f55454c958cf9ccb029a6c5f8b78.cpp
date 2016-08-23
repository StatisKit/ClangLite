#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_e3de848a178f509581f4dac272f9d2b6(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTUnit::*method_pointer_9295245bc9275a229cc31f98daf4fa93)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_58976eabb05051bdbd1c683f05526579)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_a3e77f0959bf5044a70319a434319f5d)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_bac8dc78856c5f90935cc2d201305e4f)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_714e7a10d5e45fe483a69b88ed5b8248)() = &::clang::ASTUnit::getASTContext;
    unsigned int  & (::clang::ASTUnit::*method_pointer_e3de848a178f509581f4dac272f9d2b6)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    bool  (::clang::ASTUnit::*method_pointer_f2fe438f5af55b9eada8688362dfcb08)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_3add190aa1ac5f37b7abed34c361f1b2)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_cd404655067a53b28c9aad51bcb6b4e5)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_c70f476941b658ceb3a27b9fb8d9ee1a)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_90c9d17988d053e2a23b19fe7f088aa4)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_d2bf49eed3835d62a8e2919852116c93)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_d1c8f4407cc6593e8c7b6cd6090635e8)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_1c1b6ae8ae7d567aa88309c787f09fef)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_3baa8c56d3125b17a0fcb4f72e21dbcc)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_b260171906a258bc87cd27171af8a0d7)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_24d410e34a595058b828547e76a12ce7)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_9c7b2adf5afe5cc796384a4360841c96)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_8fcedee0b6a655649c97cdf73455aa6f(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_9295245bc9275a229cc31f98daf4fa93, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_58976eabb05051bdbd1c683f05526579, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_a3e77f0959bf5044a70319a434319f5d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_bac8dc78856c5f90935cc2d201305e4f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_714e7a10d5e45fe483a69b88ed5b8248, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_e3de848a178f509581f4dac272f9d2b6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_e3de848a178f509581f4dac272f9d2b6);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_f2fe438f5af55b9eada8688362dfcb08, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_3add190aa1ac5f37b7abed34c361f1b2, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_cd404655067a53b28c9aad51bcb6b4e5, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_c70f476941b658ceb3a27b9fb8d9ee1a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_90c9d17988d053e2a23b19fe7f088aa4, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_d2bf49eed3835d62a8e2919852116c93, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_d1c8f4407cc6593e8c7b6cd6090635e8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_1c1b6ae8ae7d567aa88309c787f09fef, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_3baa8c56d3125b17a0fcb4f72e21dbcc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_b260171906a258bc87cd27171af8a0d7, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_24d410e34a595058b828547e76a12ce7, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_9c7b2adf5afe5cc796384a4360841c96, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_8fcedee0b6a655649c97cdf73455aa6f, "");

}