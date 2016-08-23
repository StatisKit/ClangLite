#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_e0c933bed3d15528afcf32135dda83b5(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTUnit::*method_pointer_447ebfc2a53b55b6be236d1543eb197e)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_06599cea2fdd559aa0a2a29af1942284)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_b50cd55795ea520f8b98d41c4c75f025)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_819d3be361975a2097455e9af5bcfa6c)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_ca982d0e6a865a6eb5c6734b42c61663)() = &::clang::ASTUnit::getASTContext;
    unsigned int  & (::clang::ASTUnit::*method_pointer_e0c933bed3d15528afcf32135dda83b5)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    bool  (::clang::ASTUnit::*method_pointer_529c4db5c79d5126b2a772808f3cb7e3)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_ee34607c11525cf9810759512bf63a3c)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_6c62f2f44eda5cdfa95ff1c79871e444)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_46e5ab76936e509bbe2842d3eaae88d9)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_71e37e9894b25385a0a39b7b565ad9e3)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_5c7b31e3c43b5facb0007679cdf7051e)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_051705fd74825f889bed9e30b69de2cc)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_312652ea0e2855628036eed60c5b8f96)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_b1ac70b330c353d2b0844966e55a1edf)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_0ca1c33651b850f08eeebf8594eb7199)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_08040b57c1fb57beb8b2b854fe6bee22)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_1dad30d46ae858aab62f1cd9388d86e5)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_7219a33892c75ea6b5d288236f94c17a(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_447ebfc2a53b55b6be236d1543eb197e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_06599cea2fdd559aa0a2a29af1942284, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_b50cd55795ea520f8b98d41c4c75f025, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_819d3be361975a2097455e9af5bcfa6c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_ca982d0e6a865a6eb5c6734b42c61663, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_e0c933bed3d15528afcf32135dda83b5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_e0c933bed3d15528afcf32135dda83b5);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_529c4db5c79d5126b2a772808f3cb7e3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_ee34607c11525cf9810759512bf63a3c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_6c62f2f44eda5cdfa95ff1c79871e444, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_46e5ab76936e509bbe2842d3eaae88d9, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_71e37e9894b25385a0a39b7b565ad9e3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_5c7b31e3c43b5facb0007679cdf7051e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_051705fd74825f889bed9e30b69de2cc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_312652ea0e2855628036eed60c5b8f96, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_b1ac70b330c353d2b0844966e55a1edf, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_0ca1c33651b850f08eeebf8594eb7199, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_08040b57c1fb57beb8b2b854fe6bee22, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_1dad30d46ae858aab62f1cd9388d86e5, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_7219a33892c75ea6b5d288236f94c17a, "");

}