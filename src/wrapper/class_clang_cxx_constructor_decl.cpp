#include <boost/python.hpp>
#include <clang/AST/ExprObjC.h>
#include <clang/AST/DependentDiagnostic.h>
#include <clang/AST/ASTContext.h>
#include <clang/AST/Mangle.h>
#include <clang/AST/MangleNumberingContext.h>
#include <clang/AST/ASTMutationListener.h>
#include <clang/AST/TypeLoc.h>
#include <clang/AST/VTableBuilder.h>
#include <clang/AST/PrettyPrinter.h>
#include <clang/AST/ASTConsumer.h>
#include <clang/AST/DeclLookups.h>
#include <clang/AST/CommentCommandTraits.h>
#include <clang/Frontend/ASTUnit.h>
#include <clang/AST/DeclCXX.h>
#include <clang/AST/Attr.h>
#include <clang/AST/Comment.h>
#include <clang/AST/ExprCXX.h>
#include <clang/AST/DeclFriend.h>

void class_clang_cxx_constructor_decl()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        bool (::clang::CXXConstructorDecl::*method_pointer_835991fb67b05fb6924ce1536801d7fb)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
        bool (::clang::CXXConstructorDecl::*method_pointer_9147159f4f49532c9cbd09ab77e88376)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
        boost::python::class_< class ::clang::CXXConstructorDecl, class ::clang::CXXConstructorDecl *, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable >("CXXConstructorDecl", boost::python::no_init)
            .def("is_copy_constructor", method_pointer_835991fb67b05fb6924ce1536801d7fb)
            .def("is_move_constructor", method_pointer_9147159f4f49532c9cbd09ab77e88376);
}