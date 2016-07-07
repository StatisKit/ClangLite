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

void class_clang_decl_context()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        enum ::clang::Decl::Kind (::clang::DeclContext::*method_pointer_28c24fdc140056a0b868244f21cfe876)() const = &::clang::DeclContext::getDeclKind;
        class ::clang::DeclContext * (::clang::DeclContext::*method_pointer_43ccc9c9ca885ac2b9d01bf0ce13c6ba)() = &::clang::DeclContext::getParent;
        class ::clang::DeclContext * (::clang::DeclContext::*method_pointer_ad3342c5e59652a1810f13876474c71c)() = &::clang::DeclContext::getLexicalParent;
        class ::clang::DeclContext * (::clang::DeclContext::*method_pointer_6eb9e90e04945afe9d0aff4930583974)() = &::clang::DeclContext::getLookupParent;
        boost::python::class_< class ::clang::DeclContext, class ::clang::DeclContext * >("DeclContext", boost::python::no_init)
            .def("get_decl_kind", method_pointer_28c24fdc140056a0b868244f21cfe876)
            .def("get_parent", method_pointer_43ccc9c9ca885ac2b9d01bf0ce13c6ba, boost::python::return_value_policy< boost::python::reference_existing_object >())
            .def("get_lexical_parent", method_pointer_ad3342c5e59652a1810f13876474c71c, boost::python::return_value_policy< boost::python::reference_existing_object >())
            .def("get_lookup_parent", method_pointer_6eb9e90e04945afe9d0aff4930583974, boost::python::return_value_policy< boost::python::reference_existing_object >());
}