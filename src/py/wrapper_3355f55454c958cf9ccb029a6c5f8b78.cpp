#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
    void method_decorator_566c5bb3a29e5ad7905342446d8fdc2f(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned int  & (::clang::ASTUnit::*method_pointer_566c5bb3a29e5ad7905342446d8fdc2f)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    void  (::clang::ASTUnit::*method_pointer_d6541e067bc659938918eb775250cc57)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned long int  (::clang::ASTUnit::*method_pointer_8c7fb682aa135ab889a701e2fb3113ac)() const = &::clang::ASTUnit::top_level_size;
    bool  (::clang::ASTUnit::*method_pointer_a79afa2050435555bf9afd05488ddd8c)() const = &::clang::ASTUnit::hasSema;
    void  (::clang::ASTUnit::*method_pointer_8876a52974fb5add9a255a9bb6f07f3d)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    bool  (::clang::ASTUnit::*method_pointer_764981bc6ffa5d56b46bcbe1835ff169)() const = &::clang::ASTUnit::isUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_ba2f168e3a885d64a18910ea1fc04bd1)() const = &::clang::ASTUnit::cached_completion_size;
    void  (::clang::ASTUnit::*method_pointer_050cfbb5a4135497b458753dcda16d8e)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_3b3495fdb18b5aefaeb435764dc459d5)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    bool  (::clang::ASTUnit::*method_pointer_5359653bc762517c8d27f31eb8eeecba)() const = &::clang::ASTUnit::isMainFileAST;
    void  (::clang::ASTUnit::*method_pointer_54c600cf1f7a5847a91bb1802f048a44)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_a47668fcee585ae9b2031a4204e14c1a)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_15f0b55cd6ba5b7292cb4bbe92ef2787)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_44fdfc488c365157bdaa7a88f2257698)() const = &::clang::ASTUnit::top_level_empty;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_a577980e03c35dbc8da23b17b755b650)() = &::clang::ASTUnit::getASTContext;
    bool  (::clang::ASTUnit::*method_pointer_3ca5ad61f82450e68c72c6dc2748c3ce)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_e68b86d165a355d084a28e1e04742dbf)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    void  (::clang::ASTUnit::*method_pointer_1494a67d1fb6575895230e3c38d070f5)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_566c5bb3a29e5ad7905342446d8fdc2f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_566c5bb3a29e5ad7905342446d8fdc2f);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_d6541e067bc659938918eb775250cc57, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_8c7fb682aa135ab889a701e2fb3113ac, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_a79afa2050435555bf9afd05488ddd8c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_8876a52974fb5add9a255a9bb6f07f3d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_764981bc6ffa5d56b46bcbe1835ff169, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_ba2f168e3a885d64a18910ea1fc04bd1, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_050cfbb5a4135497b458753dcda16d8e, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_3b3495fdb18b5aefaeb435764dc459d5, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_5359653bc762517c8d27f31eb8eeecba, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_54c600cf1f7a5847a91bb1802f048a44, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_a47668fcee585ae9b2031a4204e14c1a, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_15f0b55cd6ba5b7292cb4bbe92ef2787, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_44fdfc488c365157bdaa7a88f2257698, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_a577980e03c35dbc8da23b17b755b650, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_3ca5ad61f82450e68c72c6dc2748c3ce, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_e68b86d165a355d084a28e1e04742dbf, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_1494a67d1fb6575895230e3c38d070f5, "");

}