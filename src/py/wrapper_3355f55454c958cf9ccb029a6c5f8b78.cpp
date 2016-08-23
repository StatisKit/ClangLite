#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_04bac6f8e2a8540c8c8344686d7d46f0(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTUnit::*method_pointer_29648be2593b5b7295aa9736cc129b53)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_62e085cc0ba854b799f5f08c758e42a0)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_506847e2080751e7a0e349c7bc972e15)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_2346f1f14487550694ffcf9764b0aeba)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_894b055d73df5bdfbf6e8c9439dd50ee)() = &::clang::ASTUnit::getASTContext;
    unsigned int  & (::clang::ASTUnit::*method_pointer_04bac6f8e2a8540c8c8344686d7d46f0)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    bool  (::clang::ASTUnit::*method_pointer_a4c4333797c45236964f372d5d4dccad)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_8f31976fec28564f8ce7c782589444aa)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_325bc1cfbaa9527e899500e88271b3b8)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_122241b2043e5dbbb2d8c1e8c16dac12)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_eea8af81ab4154a895e330d9204743cf)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_18a80288a61e549ca4bb7ef800d93e80)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_32c8b7656681504fb01335e18cefc55d)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_e2f8d311c5985d5192779788d1e72530)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_df6db1a7ddc35982abcdf960574d67f9)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_582825714b6e5e52bb06aaabbb928ebb)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_324ad4bd735d5b61a4504380dadb297b)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_a1c15f33e1ea5e5c8ecf099f94c0c0ce)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_6fe5ac8c55285cb9bac3970ef9a43ceb(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_29648be2593b5b7295aa9736cc129b53, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_62e085cc0ba854b799f5f08c758e42a0, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_506847e2080751e7a0e349c7bc972e15, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_2346f1f14487550694ffcf9764b0aeba, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_894b055d73df5bdfbf6e8c9439dd50ee, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_04bac6f8e2a8540c8c8344686d7d46f0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_04bac6f8e2a8540c8c8344686d7d46f0);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_a4c4333797c45236964f372d5d4dccad, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_8f31976fec28564f8ce7c782589444aa, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_325bc1cfbaa9527e899500e88271b3b8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_122241b2043e5dbbb2d8c1e8c16dac12, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_eea8af81ab4154a895e330d9204743cf, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_18a80288a61e549ca4bb7ef800d93e80, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_32c8b7656681504fb01335e18cefc55d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_e2f8d311c5985d5192779788d1e72530, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_df6db1a7ddc35982abcdf960574d67f9, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_582825714b6e5e52bb06aaabbb928ebb, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_324ad4bd735d5b61a4504380dadb297b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_a1c15f33e1ea5e5c8ecf099f94c0c0ce, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_6fe5ac8c55285cb9bac3970ef9a43ceb, "");

}