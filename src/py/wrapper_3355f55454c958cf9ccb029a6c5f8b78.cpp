#include "_clanglite.h"


namespace autowig
{
    void method_decorator_f7155c2ef59e5ce4a7db437660509cb4(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTUnit::*method_pointer_0cd2eeed2269555e94e7143865324798)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_44d333a800eb52ccab7d1c0bc2d0b9be)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_420372d47fd65f41b648dab71e70da9d)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_1a7691c048eb50d0b854c35451611901)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_8fffe55247be5f8b8540fc4338cf2259)() = &::clang::ASTUnit::getASTContext;
    unsigned int  & (::clang::ASTUnit::*method_pointer_f7155c2ef59e5ce4a7db437660509cb4)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    bool  (::clang::ASTUnit::*method_pointer_ee8238b051ea52a19c664eeb989d9c19)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_f4e8583e7c8453b7bcd319ec189d10de)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_e72808f0f2e7502ca308600d90c764c3)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_f2b3f301bfa15925bbc8d4cead2d6112)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_30efd2cf49ba5ec8ba17ea9816f51ec0)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_cd75b995e5ca5502977786c5e8ddd0ee)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_417b8376e61c5c078d82eb27332e7772)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_9d364b3738365423a95d953dcb730da3)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_aa7541a58dc352109dff904827473b93)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_15fbe33da0965c21baca9861a3131c48)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_4018a89d079253d5a54bc3d4b0d4467f)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_a72142db89075b1d945cf21a22d952df)() const = &::clang::ASTUnit::top_level_size;
    struct function_group
    {
        static class ::boost::python::list  function_b3c29a271dda523a83a2d675a4b2e978(class ::clang::ASTUnit  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_0cd2eeed2269555e94e7143865324798, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_44d333a800eb52ccab7d1c0bc2d0b9be, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_420372d47fd65f41b648dab71e70da9d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_1a7691c048eb50d0b854c35451611901, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_8fffe55247be5f8b8540fc4338cf2259, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_f7155c2ef59e5ce4a7db437660509cb4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_f7155c2ef59e5ce4a7db437660509cb4);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_ee8238b051ea52a19c664eeb989d9c19, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_f4e8583e7c8453b7bcd319ec189d10de, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_e72808f0f2e7502ca308600d90c764c3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_f2b3f301bfa15925bbc8d4cead2d6112, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_30efd2cf49ba5ec8ba17ea9816f51ec0, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_cd75b995e5ca5502977786c5e8ddd0ee, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_417b8376e61c5c078d82eb27332e7772, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_9d364b3738365423a95d953dcb730da3, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_aa7541a58dc352109dff904827473b93, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_15fbe33da0965c21baca9861a3131c48, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_4018a89d079253d5a54bc3d4b0d4467f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_a72142db89075b1d945cf21a22d952df, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_children", function_group::function_b3c29a271dda523a83a2d675a4b2e978, "");

}