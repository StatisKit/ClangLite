#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_62a91cdd328955748e091b8a7284e2b5(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTUnit::*method_pointer_630931c73bb2594eb325bbe571403eb2)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_3e4f337b0d44552682e808d9df1dea99)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_06c8357799dc58dbb4b6b829f2546a0d)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_3e16d383e9ce5d66ad4861f58edca4aa)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_84ca90ae00cb58cbb89ec00b3085013d)() = &::clang::ASTUnit::getASTContext;
    unsigned int  & (::clang::ASTUnit::*method_pointer_62a91cdd328955748e091b8a7284e2b5)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    bool  (::clang::ASTUnit::*method_pointer_db9de24f682058908e0cd54a139ecbff)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_25c9dd0c5d3e5a5b8b6916b62c30acaf)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_95d4901b4eba534a9b99e2705854b53b)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_d27fcb216d80572c8c5c88d9ddec5b6b)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_829f228f86615052ba6ea7b6f3a2b386)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_07a445f9ff5857a1b2e18ccf5fc02104)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_99a457759a2651059f488e0364886c74)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_6efea016f27c5546941e71f3ebb7f422)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_fb7b3d2816f05ae597ac149a638036fb)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_15a0fa2f0b1a5390a3afaf9e5fc90bc5)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_05efa1bef533543985ea3dca19c237ae)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_c033ab0a1cb95a5fbfd8f62783cf9791)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_05601bf9935e5fefbf6ac1ac2f46ec52(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_630931c73bb2594eb325bbe571403eb2, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_3e4f337b0d44552682e808d9df1dea99, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_06c8357799dc58dbb4b6b829f2546a0d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_3e16d383e9ce5d66ad4861f58edca4aa, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_84ca90ae00cb58cbb89ec00b3085013d, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_62a91cdd328955748e091b8a7284e2b5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_62a91cdd328955748e091b8a7284e2b5);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_db9de24f682058908e0cd54a139ecbff, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_25c9dd0c5d3e5a5b8b6916b62c30acaf, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_95d4901b4eba534a9b99e2705854b53b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_d27fcb216d80572c8c5c88d9ddec5b6b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_829f228f86615052ba6ea7b6f3a2b386, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_07a445f9ff5857a1b2e18ccf5fc02104, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_99a457759a2651059f488e0364886c74, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_6efea016f27c5546941e71f3ebb7f422, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_fb7b3d2816f05ae597ac149a638036fb, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_15a0fa2f0b1a5390a3afaf9e5fc90bc5, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_05efa1bef533543985ea3dca19c237ae, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_c033ab0a1cb95a5fbfd8f62783cf9791, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_05601bf9935e5fefbf6ac1ac2f46ec52, "");

}