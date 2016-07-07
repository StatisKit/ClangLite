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

void class_clang_elaborated_type()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        class ::clang::QualType (::clang::ElaboratedType::*method_pointer_c3ecb4da55d654c6b7bd85b091867b66)() const = &::clang::ElaboratedType::getNamedType;
        class ::clang::QualType (::clang::ElaboratedType::*method_pointer_208a3bca904a5cb1809a6791ba81eca3)() const = &::clang::ElaboratedType::desugar;
        boost::python::class_< class ::clang::ElaboratedType, class ::clang::ElaboratedType *, boost::noncopyable >("ElaboratedType", boost::python::no_init)
            .def("get_named_type", method_pointer_c3ecb4da55d654c6b7bd85b091867b66)
            .def("desugar", method_pointer_208a3bca904a5cb1809a6791ba81eca3);
}