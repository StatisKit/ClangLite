#include "_clanglite.h"


namespace autowig
{
    void method_decorator_c5dd6359671a574da706a296d6748fa7(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTUnit::*method_pointer_5e6e77e2eaf05824b67586623d163271)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_44a21fa23e6f5e169e8b0dd187c97aeb)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_8b7fb1153fde547b851d113252d61330)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_1e337a893f0f552995e9c997655100e7)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_3440287cde2a57ba8a6a85937096492e)() = &::clang::ASTUnit::getASTContext;
    unsigned int  & (::clang::ASTUnit::*method_pointer_c5dd6359671a574da706a296d6748fa7)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    bool  (::clang::ASTUnit::*method_pointer_e86dbc1cd2115ac7bd89193d5012953d)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_dd46ae823e0153fea64783c71728073e)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_ccc341806f575235b52d206b5cc1e386)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_aca313ad2af75b84b9092c2f13052750)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_a48dd88f026e569abc06fdd9a8ceadf3)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_6e161d58ee6d546182438b002e9edeef)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_d47731f607e55f09b621cbd56def3ca8)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_78f5ed21b2d45d76a92037b4d127331c)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_3df567bfdaea51c0abd4319880137905)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_5254d93dbfce5df691f09d2294a64197)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_cf656f4fef715163af2c039f3029b23b)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_24195766f0c8560ba8c6bd9c79aef8b2)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_c028073e85345f8bb5e402a4eea59363(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_5e6e77e2eaf05824b67586623d163271, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_44a21fa23e6f5e169e8b0dd187c97aeb, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_8b7fb1153fde547b851d113252d61330, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_1e337a893f0f552995e9c997655100e7, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_3440287cde2a57ba8a6a85937096492e, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_c5dd6359671a574da706a296d6748fa7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_c5dd6359671a574da706a296d6748fa7);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_e86dbc1cd2115ac7bd89193d5012953d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_dd46ae823e0153fea64783c71728073e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_ccc341806f575235b52d206b5cc1e386, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_aca313ad2af75b84b9092c2f13052750, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_a48dd88f026e569abc06fdd9a8ceadf3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_6e161d58ee6d546182438b002e9edeef, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_d47731f607e55f09b621cbd56def3ca8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_78f5ed21b2d45d76a92037b4d127331c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_3df567bfdaea51c0abd4319880137905, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_5254d93dbfce5df691f09d2294a64197, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_cf656f4fef715163af2c039f3029b23b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_24195766f0c8560ba8c6bd9c79aef8b2, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_c028073e85345f8bb5e402a4eea59363, "");

}