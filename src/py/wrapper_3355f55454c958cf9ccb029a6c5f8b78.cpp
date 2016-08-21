#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
    void method_decorator_66fa22c65c2850639646825ca5274e11(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTUnit::*method_pointer_045aca56e8475f6ba0c05146f4648652)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_f38e277ec6e2522d9e1974f5c690e43e)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_c7afec5a7a015df8b4a7fbd51d6350e3)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_85f9c2080da4556795ebc5bb8ff3000b)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_909540b157745c72bc200593ed5df57b)() = &::clang::ASTUnit::getASTContext;
    unsigned int  & (::clang::ASTUnit::*method_pointer_66fa22c65c2850639646825ca5274e11)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    bool  (::clang::ASTUnit::*method_pointer_8d8f0144262a5b22bac056b4d308e863)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_2e36fd3815c05d04aa7e4454f58c874c)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_03a4b844cc6c5c8fafd673cdf8df16ea)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_e0e5d7b079e75eccb36d0eaa31615382)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_3392865397b457ffa31875ae53da4c9f)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_b516f0e980885d14a5e941a75aca5154)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_efd2ff2d39035d1ab1544cdcb9f17cd8)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_d0a8d82b1bdb557c85ad1d9aaa586c5f)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_93047e0c96435390a5d940b52dfdd9c6)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_242c879a2f1c5c438e2d8e0876afd073)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_4e837691d59753daabdecda51779d3f7)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_d5dc0c06ccb45603a5e31ecc2e2835ab)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_f0bd8b587bc15d69933204ddf7bbbaa0(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_045aca56e8475f6ba0c05146f4648652, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_f38e277ec6e2522d9e1974f5c690e43e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_c7afec5a7a015df8b4a7fbd51d6350e3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_85f9c2080da4556795ebc5bb8ff3000b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_909540b157745c72bc200593ed5df57b, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_66fa22c65c2850639646825ca5274e11, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_66fa22c65c2850639646825ca5274e11);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_8d8f0144262a5b22bac056b4d308e863, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_2e36fd3815c05d04aa7e4454f58c874c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_03a4b844cc6c5c8fafd673cdf8df16ea, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_e0e5d7b079e75eccb36d0eaa31615382, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_3392865397b457ffa31875ae53da4c9f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_b516f0e980885d14a5e941a75aca5154, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_efd2ff2d39035d1ab1544cdcb9f17cd8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_d0a8d82b1bdb557c85ad1d9aaa586c5f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_93047e0c96435390a5d940b52dfdd9c6, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_242c879a2f1c5c438e2d8e0876afd073, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_4e837691d59753daabdecda51779d3f7, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_d5dc0c06ccb45603a5e31ecc2e2835ab, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_f0bd8b587bc15d69933204ddf7bbbaa0, "");

}