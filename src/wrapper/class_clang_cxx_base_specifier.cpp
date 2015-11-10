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
#include <clang/AST/ASTConsumer.h>
#include <clang/AST/DeclLookups.h>
#include <clang/AST/CommentCommandTraits.h>
#include <clang/AST/VTableBuilder.h>
#include <clang/AST/DeclCXX.h>
#include <clang/AST/Attr.h>
#include <clang/AST/Comment.h>
#include <clang/AST/ExprCXX.h>
#include <clang/AST/DeclFriend.h>

void class_clang_cxx_base_specifier()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        enum ::clang::AccessSpecifier (::clang::CXXBaseSpecifier::*method_pointer_85a57697a6fd5abf8eb666ed604be448)() const = &::clang::CXXBaseSpecifier::getAccessSpecifier;
        class ::clang::QualType (::clang::CXXBaseSpecifier::*method_pointer_dae61ee019e45bb69a652468baf9999d)() const = &::clang::CXXBaseSpecifier::getType;
        boost::python::class_< class ::clang::CXXBaseSpecifier, class ::clang::CXXBaseSpecifier * >("CXXBaseSpecifier", boost::python::no_init)
            .def("get_access_specifier", method_pointer_85a57697a6fd5abf8eb666ed604be448)
            .def("get_type", method_pointer_dae61ee019e45bb69a652468baf9999d);
}