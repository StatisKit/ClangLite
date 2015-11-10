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

void class_clang_qual_type()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        class ::clang::Type const * (::clang::QualType::*method_pointer_33c701e28bdd53a992c34d4066eeed19)() const = &::clang::QualType::getTypePtrOrNull;
        bool (::clang::QualType::*method_pointer_c3e8fd9f8f2a5c5eb4765a5c22d83bd8)() const = &::clang::QualType::isLocalConstQualified;
        bool (::clang::QualType::*method_pointer_0c2ab5b4bfd051eb8623cf893fb386be)() const = &::clang::QualType::isLocalVolatileQualified;
        boost::python::class_< class ::clang::QualType, class ::clang::QualType * >("QualType", boost::python::no_init)
            .def("get_type_ptr_or_null", method_pointer_33c701e28bdd53a992c34d4066eeed19, boost::python::return_value_policy< boost::python::reference_existing_object >())
            .def("is_local_const_qualified", method_pointer_c3e8fd9f8f2a5c5eb4765a5c22d83bd8)
            .def("is_local_volatile_qualified", method_pointer_0c2ab5b4bfd051eb8623cf893fb386be);
}