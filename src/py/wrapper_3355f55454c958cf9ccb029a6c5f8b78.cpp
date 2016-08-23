#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_e141455a0540589e86d4ee86a6d09746(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTUnit::*method_pointer_168e36a1d15e51ea8b0cabecdc153054)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_30bc510178305edab21a9a6e0660a765)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_bbf2ddb283525bbda1eefe74d655f2c7)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_4ceee08cb94d586e82ef9cab9543b60a)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_76d05438f9525dc8ab42d0ac2fda9ee9)() = &::clang::ASTUnit::getASTContext;
    unsigned int  & (::clang::ASTUnit::*method_pointer_e141455a0540589e86d4ee86a6d09746)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    bool  (::clang::ASTUnit::*method_pointer_ddea6eaeb296588180c3a18e4118e811)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_f81b293de2895877b006e374e145c0f3)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_c61c93a675fc52378a3901f9a37c1e99)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_59e6851a82db5344b65b1789126f59c3)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_00f08d49ea665df58aea70cf7f0b78c1)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_405b9aa3934c581a892867e4a7de5b98)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_2fb9d26511795254a0c3716f2e79aefc)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_04979a825efe58dd97f1fa0f0d33f350)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_d49e5f2bc7975a6e9c72a6ce14598f4e)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_505eb1874ed159a3808184fa183fdb0b)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_b82ba0e96b375c07b88e7e0f38f35607)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_f8b7171aaef6589a935bef9b91a3c9ee)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_0c03c9aceb5158e3ab85c2d6731e916c(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_168e36a1d15e51ea8b0cabecdc153054, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_30bc510178305edab21a9a6e0660a765, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_bbf2ddb283525bbda1eefe74d655f2c7, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_4ceee08cb94d586e82ef9cab9543b60a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_76d05438f9525dc8ab42d0ac2fda9ee9, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_e141455a0540589e86d4ee86a6d09746, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_e141455a0540589e86d4ee86a6d09746);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_ddea6eaeb296588180c3a18e4118e811, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_f81b293de2895877b006e374e145c0f3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_c61c93a675fc52378a3901f9a37c1e99, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_59e6851a82db5344b65b1789126f59c3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_00f08d49ea665df58aea70cf7f0b78c1, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_405b9aa3934c581a892867e4a7de5b98, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_2fb9d26511795254a0c3716f2e79aefc, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_04979a825efe58dd97f1fa0f0d33f350, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_d49e5f2bc7975a6e9c72a6ce14598f4e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_505eb1874ed159a3808184fa183fdb0b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_b82ba0e96b375c07b88e7e0f38f35607, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_f8b7171aaef6589a935bef9b91a3c9ee, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_0c03c9aceb5158e3ab85c2d6731e916c, "");

}