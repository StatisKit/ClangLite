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

void class_clang_cxx_method_decl()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        bool (::clang::CXXMethodDecl::*method_pointer_8c049fcc04605980a0b50ac1fb25a821)() const = &::clang::CXXMethodDecl::isStatic;
        bool (::clang::CXXMethodDecl::*method_pointer_1385a27352f658c7a5e2e18d8e96e5d7)() const = &::clang::CXXMethodDecl::isConst;
        bool (::clang::CXXMethodDecl::*method_pointer_6a9f6ec56ad05ecea9c3b0e028c5f658)() const = &::clang::CXXMethodDecl::isVolatile;
        bool (::clang::CXXMethodDecl::*method_pointer_4bc46c9c59875b8786259df46d0add46)() const = &::clang::CXXMethodDecl::isVirtual;
        boost::python::class_< class ::clang::CXXMethodDecl, class ::clang::CXXMethodDecl *, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable >("CXXMethodDecl", boost::python::no_init)
            .def("is_static", method_pointer_8c049fcc04605980a0b50ac1fb25a821)
            .def("is_const", method_pointer_1385a27352f658c7a5e2e18d8e96e5d7)
            .def("is_volatile", method_pointer_6a9f6ec56ad05ecea9c3b0e028c5f658)
            .def("is_virtual", method_pointer_4bc46c9c59875b8786259df46d0add46);
}