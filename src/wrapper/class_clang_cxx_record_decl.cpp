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

void class_clang_cxx_record_decl()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        unsigned int (::clang::CXXRecordDecl::*method_pointer_3ae2df53a25d5cbea70dae1b1aa9f4da)() const = &::clang::CXXRecordDecl::getNumBases;
        unsigned int (::clang::CXXRecordDecl::*method_pointer_548915aa91fe54178926fd2a7bb8a131)() const = &::clang::CXXRecordDecl::getNumVBases;
        bool (::clang::CXXRecordDecl::*method_pointer_219649b9814c588cbd9e6fe0db5bc00e)() const = &::clang::CXXRecordDecl::isAbstract;
        boost::python::class_< class ::clang::CXXRecordDecl, class ::clang::CXXRecordDecl *, boost::python::bases< class ::clang::RecordDecl >, boost::noncopyable >("CXXRecordDecl", boost::python::no_init)
            .def("get_num_bases", method_pointer_3ae2df53a25d5cbea70dae1b1aa9f4da)
            .def("get_num_v_bases", method_pointer_548915aa91fe54178926fd2a7bb8a131)
            .def("is_abstract", method_pointer_219649b9814c588cbd9e6fe0db5bc00e);
}