#include <boost/python.hpp>
#include <clang/AST/CommentCommandTraits.h>
#include <clang/AST/PrettyPrinter.h>
#include <clang/AST/Attr.h>
#include <clang/AST/RawCommentList.h>
#include <clang/AST/Decl.h>

void class_clang_source_manager()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        class ::clang::FileID (::clang::SourceManager::*method_pointer_0adca710abbb51628f4fb9013d4b23ea)(class ::clang::SourceLocation) const = &::clang::SourceManager::getFileID;
        class ::llvm::StringRef (::clang::SourceManager::*method_pointer_b6797117a2fc50d28cd62094739324ac)(class ::clang::SourceLocation) const = &::clang::SourceManager::getFilename;
        class ::clang::SourceLocation (::clang::SourceManager::*method_pointer_0b636f83ea5a55b2b27dcb464c2ebc48)(class ::clang::FileID) const = &::clang::SourceManager::getIncludeLoc;
        boost::python::class_< class ::clang::SourceManager, class ::clang::SourceManager *, boost::noncopyable >("SourceManager", boost::python::no_init)
            .def("get_file_id", method_pointer_0adca710abbb51628f4fb9013d4b23ea)
            .def("get_filename", method_pointer_b6797117a2fc50d28cd62094739324ac)
            .def("get_include_loc", method_pointer_0b636f83ea5a55b2b27dcb464c2ebc48);
}