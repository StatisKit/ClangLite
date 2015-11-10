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

void class_clang_class_template_specialization_decl()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        class ::clang::ClassTemplateDecl * (::clang::ClassTemplateSpecializationDecl::*method_pointer_96248976868755f896edca666dc106a9)() const = &::clang::ClassTemplateSpecializationDecl::getSpecializedTemplate;
        class ::clang::TemplateArgumentList const & (::clang::ClassTemplateSpecializationDecl::*method_pointer_0191b8121ca75ff2a73dd5561427dc98)() const = &::clang::ClassTemplateSpecializationDecl::getTemplateArgs;
        bool (::clang::ClassTemplateSpecializationDecl::*method_pointer_7b190fe4d64453acac438b33a7cbd05b)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitSpecialization;
        boost::python::class_< class ::clang::ClassTemplateSpecializationDecl, class ::clang::ClassTemplateSpecializationDecl *, boost::python::bases< class ::clang::CXXRecordDecl >, boost::noncopyable >("ClassTemplateSpecializationDecl", boost::python::no_init)
            .def("get_specialized_template", method_pointer_96248976868755f896edca666dc106a9, boost::python::return_value_policy< boost::python::reference_existing_object >())
            .def("get_template_args", method_pointer_0191b8121ca75ff2a73dd5561427dc98, boost::python::return_value_policy< boost::python::reference_existing_object >())
            .def("is_explicit_specialization", method_pointer_7b190fe4d64453acac438b33a7cbd05b);
}