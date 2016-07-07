#include <boost/python.hpp>
#include <clang/AST/ExprObjC.h>
#include <clang/AST/DependentDiagnostic.h>
#include <clang/AST/ASTContext.h>
#include <clang/AST/Mangle.h>
#include <clang/AST/MangleNumberingContext.h>
#include <clang/AST/ASTMutationListener.h>
#include <clang/AST/TypeLoc.h>
#include <clang/Frontend/ASTUnit.h>
#include <clang/AST/PrettyPrinter.h>
#include <clang/AST/DeclLookups.h>
#include <clang/AST/ASTConsumer.h>
#include <clang/AST/CommentCommandTraits.h>
#include <clang/AST/VTableBuilder.h>
#include <clang/AST/DeclCXX.h>
#include <clang/AST/Attr.h>
#include <clang/AST/Comment.h>
#include <clang/AST/ExprCXX.h>
#include <clang/AST/DeclFriend.h>

void class_clang_linkage_spec_decl()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        enum ::clang::LinkageSpecDecl::LanguageIDs (::clang::LinkageSpecDecl::*method_pointer_55fd643d0cd35314a9f34f14e86046b2)() const = &::clang::LinkageSpecDecl::getLanguage;
        boost::python::class_< class ::clang::LinkageSpecDecl, class ::clang::LinkageSpecDecl *, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable >("LinkageSpecDecl", boost::python::no_init)
            .def("get_language", method_pointer_55fd643d0cd35314a9f34f14e86046b2);
}