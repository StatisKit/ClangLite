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

void class_clang_template_argument()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        enum ::clang::TemplateArgument::ArgKind (::clang::TemplateArgument::*method_pointer_87b135b94a7854e0935cbbbfb3ba4b9c)() const = &::clang::TemplateArgument::getKind;
        class ::clang::QualType (::clang::TemplateArgument::*method_pointer_c3a4864c2153579eaed85a6503b82f80)() const = &::clang::TemplateArgument::getAsType;
        class ::clang::ValueDecl * (::clang::TemplateArgument::*method_pointer_d14564868804596f81746684870cb78f)() const = &::clang::TemplateArgument::getAsDecl;
        class ::clang::QualType (::clang::TemplateArgument::*method_pointer_04d815b923315818a2c25604c25bedf5)() const = &::clang::TemplateArgument::getIntegralType;
        boost::python::class_< class ::clang::TemplateArgument, class ::clang::TemplateArgument * >("TemplateArgument", boost::python::no_init)
            .def("get_kind", method_pointer_87b135b94a7854e0935cbbbfb3ba4b9c)
            .def("get_as_type", method_pointer_c3a4864c2153579eaed85a6503b82f80)
            .def("get_as_decl", method_pointer_d14564868804596f81746684870cb78f, boost::python::return_value_policy< boost::python::reference_existing_object >())
            .def("get_integral_type", method_pointer_04d815b923315818a2c25604c25bedf5);
}