#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
    void method_decorator_9fb8f226cf7f5313a2843dac8f442fa1(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTUnit::*method_pointer_fb387b07173e5ba0b8c272c8088653dd)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_9f8e0f76fc575e39b6b52c32f6cee66f)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_f936c448f9f65236b8942f332ea5bb3e)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_de9cd0bbc95052a5b728b3d5cc888a8b)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_f34a37c48e10504a94e855a3a685434b)() = &::clang::ASTUnit::getASTContext;
    unsigned int  & (::clang::ASTUnit::*method_pointer_9fb8f226cf7f5313a2843dac8f442fa1)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    bool  (::clang::ASTUnit::*method_pointer_153c700437715934a649d24ea867f5e4)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_f2b355a9eab55209a08fe9bfd8318b1e)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_ced3d7393f935aa0987e8479ca006c8f)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_b659035de5a55099a7269d52fdc55a2a)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_7ce0138693e85311bac6c21f5b52402c)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_a9b7f1e8023c52cd8ba99eba5d116fe8)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_81cc01f5c3d756e2bef612a174bd9b5e)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_cd9bf5c3a05a5c56bd5f20356d50cf58)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_15ee2cf2bbb45a609a5900c18888fc2d)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_a9e237b2d5b25749a24c5b1617c2486a)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_1cd4506b13145fda80ede63c26621cac)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_ae708e4b544558f29ee4c5145da084aa)() const = &::clang::ASTUnit::top_level_size;
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_fb387b07173e5ba0b8c272c8088653dd, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_9f8e0f76fc575e39b6b52c32f6cee66f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_f936c448f9f65236b8942f332ea5bb3e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_de9cd0bbc95052a5b728b3d5cc888a8b, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_f34a37c48e10504a94e855a3a685434b, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_9fb8f226cf7f5313a2843dac8f442fa1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_9fb8f226cf7f5313a2843dac8f442fa1);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_153c700437715934a649d24ea867f5e4, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_f2b355a9eab55209a08fe9bfd8318b1e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_ced3d7393f935aa0987e8479ca006c8f, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_b659035de5a55099a7269d52fdc55a2a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_7ce0138693e85311bac6c21f5b52402c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_a9b7f1e8023c52cd8ba99eba5d116fe8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_81cc01f5c3d756e2bef612a174bd9b5e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_cd9bf5c3a05a5c56bd5f20356d50cf58, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_15ee2cf2bbb45a609a5900c18888fc2d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_a9e237b2d5b25749a24c5b1617c2486a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_1cd4506b13145fda80ede63c26621cac, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_ae708e4b544558f29ee4c5145da084aa, "");

}