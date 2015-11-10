#include <boost/python.hpp>
#include <clang/AST/CommentCommandTraits.h>
#include <clang/AST/PrettyPrinter.h>
#include <clang/AST/Attr.h>
#include <clang/AST/RawCommentList.h>
#include <clang/AST/Decl.h>

void class_clang_source_location()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::class_< class ::clang::SourceLocation, class ::clang::SourceLocation * >("SourceLocation", boost::python::no_init);
}