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

void class_clang_template_argument_list()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        class ::clang::TemplateArgument const & (::clang::TemplateArgumentList::*method_pointer_dd06961cfded59dabbe6e7d692e2c8c6)(unsigned int) const = &::clang::TemplateArgumentList::get;
        unsigned int (::clang::TemplateArgumentList::*method_pointer_44b86487c7b254408d02b63768cb5d1d)() const = &::clang::TemplateArgumentList::size;
        boost::python::class_< class ::clang::TemplateArgumentList, class ::clang::TemplateArgumentList *, boost::noncopyable >("TemplateArgumentList", boost::python::no_init)
            .def("get", method_pointer_dd06961cfded59dabbe6e7d692e2c8c6, boost::python::return_value_policy< boost::python::reference_existing_object >())
            .def("size", method_pointer_44b86487c7b254408d02b63768cb5d1d);
}