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

void class_clang_tag_decl()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        bool (::clang::TagDecl::*method_pointer_4b3092dc1bd25860b750ccddd4b064d9)() const = &::clang::TagDecl::isCompleteDefinition;
        bool (::clang::TagDecl::*method_pointer_2648f5bb5cde5781ad5f23b8777293e5)() const = &::clang::TagDecl::isStruct;
        bool (::clang::TagDecl::*method_pointer_139f68198cb15661a3c0698fc61d8d86)() const = &::clang::TagDecl::isClass;
        bool (::clang::TagDecl::*method_pointer_d868df1ac933520ba6053238cb158602)() const = &::clang::TagDecl::isUnion;
        bool (::clang::TagDecl::*method_pointer_152f2d793a9f58b19fb707aa3e524e32)() const = &::clang::TagDecl::hasNameForLinkage;
        class ::clang::TypedefNameDecl * (::clang::TagDecl::*method_pointer_1a7988c372d05d2ebd41bb291578e900)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
        boost::python::class_< class ::clang::TagDecl, class ::clang::TagDecl *, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable >("TagDecl", boost::python::no_init)
            .def("is_complete_definition", method_pointer_4b3092dc1bd25860b750ccddd4b064d9)
            .def("is_struct", method_pointer_2648f5bb5cde5781ad5f23b8777293e5)
            .def("is_class", method_pointer_139f68198cb15661a3c0698fc61d8d86)
            .def("is_union", method_pointer_d868df1ac933520ba6053238cb158602)
            .def("has_name_for_linkage", method_pointer_152f2d793a9f58b19fb707aa3e524e32)
            .def("get_typedef_name_for_anon_decl", method_pointer_1a7988c372d05d2ebd41bb291578e900, boost::python::return_value_policy< boost::python::reference_existing_object >());
}