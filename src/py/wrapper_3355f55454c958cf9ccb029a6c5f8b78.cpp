#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
    void method_decorator_1127714dcd4a5247815cbf01706a7c04(class ::clang::ASTUnit & instance, unsigned int  & param_out)
    { instance.getCurrentTopLevelHashValue() = param_out; }
}


void wrapper_3355f55454c958cf9ccb029a6c5f8b78()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTUnit::*method_pointer_0b1b8586d3f959fab58a0080d3f7cd7c)(class ::clang::Decl  *) = &::clang::ASTUnit::addFileLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_3086053b39d65b20b958506a21aa4abd)(class ::clang::Decl  *) = &::clang::ASTUnit::addTopLevelDecl;
    void  (::clang::ASTUnit::*method_pointer_ef013ef485245d08b0ccafb0c4dfbd85)(unsigned int ) = &::clang::ASTUnit::addTopLevelDeclFromPreamble;
    unsigned int  (::clang::ASTUnit::*method_pointer_ba28b70c1ab758498afd5b549d3826d8)() const = &::clang::ASTUnit::cached_completion_size;
    class ::clang::ASTContext  & (::clang::ASTUnit::*method_pointer_3742475448c65bdfb67ef59d4c7f9f0b)() = &::clang::ASTUnit::getASTContext;
    unsigned int  & (::clang::ASTUnit::*method_pointer_1127714dcd4a5247815cbf01706a7c04)() = &::clang::ASTUnit::getCurrentTopLevelHashValue;
    bool  (::clang::ASTUnit::*method_pointer_518cd39d760c52e68a7725262f6d19dd)() const = &::clang::ASTUnit::getOnlyLocalDecls;
    bool  (::clang::ASTUnit::*method_pointer_fcabdf19c5b25738aa8736938a9bb011)() const = &::clang::ASTUnit::getOwnsRemappedFileBuffers;
    bool  (::clang::ASTUnit::*method_pointer_14ae83e62ed85c87bcfab57ece516d04)() const = &::clang::ASTUnit::hasSema;
    bool  (::clang::ASTUnit::*method_pointer_c4e6875d4d375d2c9c59d400a3428f59)() const = &::clang::ASTUnit::isMainFileAST;
    bool  (::clang::ASTUnit::*method_pointer_d19f853c5f8254d0bbae0f4ac1a8108d)() = &::clang::ASTUnit::isModuleFile;
    bool  (::clang::ASTUnit::*method_pointer_a181ca51b86d59fe8f347f1058cb6a39)() const = &::clang::ASTUnit::isUnsafeToFree;
    void  (::clang::ASTUnit::*method_pointer_81e298a9efae56b4bd959c52c6095a23)(class ::clang::ASTContext  *) = &::clang::ASTUnit::setASTContext;
    void  (::clang::ASTUnit::*method_pointer_88025c0f98ca5b989a1caeb3d08057d1)(bool ) = &::clang::ASTUnit::setOwnsRemappedFileBuffers;
    void  (::clang::ASTUnit::*method_pointer_286bb9519b915303a07c331653ff7fb8)(bool ) = &::clang::ASTUnit::setUnsafeToFree;
    unsigned int  (::clang::ASTUnit::*method_pointer_8c9f20e40de2537092c5dbe753a09138)() const = &::clang::ASTUnit::stored_diag_size;
    bool  (::clang::ASTUnit::*method_pointer_618ebe39fa6c5ffdaeeb40b3438e6db2)() const = &::clang::ASTUnit::top_level_empty;
    unsigned long int  (::clang::ASTUnit::*method_pointer_5e15a3f999385075bdf3f1fc1bd4c568)() const = &::clang::ASTUnit::top_level_size;
    boost::python::class_< class ::clang::ASTUnit, autowig::HeldType< class ::clang::ASTUnit >, boost::noncopyable > class_3355f55454c958cf9ccb029a6c5f8b78("ASTUnit", "", boost::python::no_init);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_file_level_decl", method_pointer_0b1b8586d3f959fab58a0080d3f7cd7c, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl", method_pointer_3086053b39d65b20b958506a21aa4abd, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("add_top_level_decl_from_preamble", method_pointer_ef013ef485245d08b0ccafb0c4dfbd85, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("cached_completion_size", method_pointer_ba28b70c1ab758498afd5b549d3826d8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_ast_context", method_pointer_3742475448c65bdfb67ef59d4c7f9f0b, boost::python::return_internal_reference<>(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", method_pointer_1127714dcd4a5247815cbf01706a7c04, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_current_top_level_hash_value", autowig::method_decorator_1127714dcd4a5247815cbf01706a7c04);
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_only_local_decls", method_pointer_518cd39d760c52e68a7725262f6d19dd, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("get_owns_remapped_file_buffers", method_pointer_fcabdf19c5b25738aa8736938a9bb011, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("has_sema", method_pointer_14ae83e62ed85c87bcfab57ece516d04, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_main_file_ast", method_pointer_c4e6875d4d375d2c9c59d400a3428f59, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_module_file", method_pointer_d19f853c5f8254d0bbae0f4ac1a8108d, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("is_unsafe_to_free", method_pointer_a181ca51b86d59fe8f347f1058cb6a39, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_ast_context", method_pointer_81e298a9efae56b4bd959c52c6095a23, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_owns_remapped_file_buffers", method_pointer_88025c0f98ca5b989a1caeb3d08057d1, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("set_unsafe_to_free", method_pointer_286bb9519b915303a07c331653ff7fb8, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("stored_diag_size", method_pointer_8c9f20e40de2537092c5dbe753a09138, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_empty", method_pointer_618ebe39fa6c5ffdaeeb40b3438e6db2, "");
    class_3355f55454c958cf9ccb029a6c5f8b78.def("top_level_size", method_pointer_5e15a3f999385075bdf3f1fc1bd4c568, "");

}