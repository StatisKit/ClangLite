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

void class_clang_function_decl()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        bool (::clang::FunctionDecl::*method_pointer_798d46f8d9d35e3887c27d0ddfe3fc8c)() const = &::clang::FunctionDecl::isDeleted;
        unsigned int (::clang::FunctionDecl::*method_pointer_df62631bc1755b1bb54e4bc386715182)() const = &::clang::FunctionDecl::getNumParams;
        class ::clang::ParmVarDecl * (::clang::FunctionDecl::*method_pointer_4ca29ec0650c5e1ea902227f202abbfd)(unsigned int) = &::clang::FunctionDecl::getParamDecl;
        class ::clang::QualType (::clang::FunctionDecl::*method_pointer_380a74411ee8592183e3d812d033385e)() const = &::clang::FunctionDecl::getReturnType;
        boost::python::class_< class ::clang::FunctionDecl, class ::clang::FunctionDecl *, boost::python::bases< class ::clang::DeclaratorDecl, class ::clang::DeclContext >, boost::noncopyable >("FunctionDecl", boost::python::no_init)
            .def("is_deleted", method_pointer_798d46f8d9d35e3887c27d0ddfe3fc8c)
            .def("get_num_params", method_pointer_df62631bc1755b1bb54e4bc386715182)
            .def("get_param_decl", method_pointer_4ca29ec0650c5e1ea902227f202abbfd, boost::python::return_value_policy< boost::python::reference_existing_object >())
            .def("get_return_type", method_pointer_380a74411ee8592183e3d812d033385e);
}