#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_34838c9147c05222b4a7290e3775d5c1(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTUnit::*method_pointer_ea3a216be98c592299755eac12addbbc)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_bda395e380f25ea9ac21e10ab9e25810)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_0a6cecd5cf0755edae760c25597c9e27)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_6caa5599a41f5424a7fb5a90d28d71d2)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_6316de0fec28586881398983a380b6f0)() = &::clang::ASTUnit::getASTContext;
    unsigned int  & (::clang::ASTUnit::*method_pointer_34838c9147c05222b4a7290e3775d5c1)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    bool  (::clang::ASTUnit::*method_pointer_1e86d75f65e85e9f99e0ffef5c2ec1f1)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_15e49170db155d80a1d5968fc8ee07d1)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_c047f3a7acb95c97aa73baf5ae5728a1)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_e2a70ca6a5bf524caf20ee19c598eb68)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_acea7aaae59c5cd5af16dd2a0e9c3365)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_5fccf6c6135c5f45b6ed9f97d3415434)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_ce288ba8a3355c8288b6f0714eac0eb0)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_7841358f08de5f01aae4d042979d7aca)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_22a4aeedfe6d5dae89dd662399cdf789)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_0881cc46549953f6b7e8646c30d699e5)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_0857192ad8e25ec284a26b5dbdcdb6a6)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_2c3afc8a904352d5a956dd97a655fc4d)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_289fd7ebe37e5aa4b7b63b0328f34512(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_ea3a216be98c592299755eac12addbbc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_bda395e380f25ea9ac21e10ab9e25810, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_0a6cecd5cf0755edae760c25597c9e27, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_6caa5599a41f5424a7fb5a90d28d71d2, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_6316de0fec28586881398983a380b6f0, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_34838c9147c05222b4a7290e3775d5c1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_34838c9147c05222b4a7290e3775d5c1);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_1e86d75f65e85e9f99e0ffef5c2ec1f1, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_15e49170db155d80a1d5968fc8ee07d1, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_c047f3a7acb95c97aa73baf5ae5728a1, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_e2a70ca6a5bf524caf20ee19c598eb68, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_acea7aaae59c5cd5af16dd2a0e9c3365, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_5fccf6c6135c5f45b6ed9f97d3415434, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_ce288ba8a3355c8288b6f0714eac0eb0, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_7841358f08de5f01aae4d042979d7aca, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_22a4aeedfe6d5dae89dd662399cdf789, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_0881cc46549953f6b7e8646c30d699e5, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_0857192ad8e25ec284a26b5dbdcdb6a6, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_2c3afc8a904352d5a956dd97a655fc4d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_289fd7ebe37e5aa4b7b63b0328f34512, "");

}