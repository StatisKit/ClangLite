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

void class_clang_decl()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        class ::clang::SourceLocation (::clang::Decl::*method_pointer_595fbec88c4d53fba835b6d41821e772)() const = &::clang::Decl::getLocation;
        enum ::clang::Decl::Kind (::clang::Decl::*method_pointer_42dcce4d3f7c5b0fbc6134d1b9ab1a36)() const = &::clang::Decl::getKind;
        class ::clang::DeclContext * (::clang::Decl::*method_pointer_32a5a8c406c2588081fc89c8a9c6bc35)() = &::clang::Decl::getDeclContext;
        class ::clang::ASTContext & (::clang::Decl::*method_pointer_32a4cb430a755856b33d5af72e680a0b)() const = &::clang::Decl::getASTContext;
        enum ::clang::AccessSpecifier (::clang::Decl::*method_pointer_98f8687293a552cbb77c7e6245b94394)() const = &::clang::Decl::getAccessUnsafe;
        bool (::clang::Decl::*method_pointer_fb599948919559ca9bafb0803da1b763)() const = &::clang::Decl::isImplicit;
        boost::python::class_< class ::clang::Decl, class ::clang::Decl *, boost::noncopyable >("Decl", boost::python::no_init)
            .def("get_location", method_pointer_595fbec88c4d53fba835b6d41821e772)
            .def("get_kind", method_pointer_42dcce4d3f7c5b0fbc6134d1b9ab1a36)
            .def("get_decl_context", method_pointer_32a5a8c406c2588081fc89c8a9c6bc35, boost::python::return_value_policy< boost::python::reference_existing_object >())
            .def("get_ast_context", method_pointer_32a4cb430a755856b33d5af72e680a0b, boost::python::return_value_policy< boost::python::reference_existing_object >())
            .def("get_access_unsafe", method_pointer_98f8687293a552cbb77c7e6245b94394)
            .def("is_implicit", method_pointer_fb599948919559ca9bafb0803da1b763);
}