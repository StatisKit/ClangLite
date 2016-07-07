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

void class_clang_type()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        enum ::clang::Type::TypeClass (::clang::Type::*method_pointer_8553d8a312825b639a5c6310320adf62)() const = &::clang::Type::getTypeClass;
        bool (::clang::Type::*method_pointer_785eb07b3dfc5320af9c348ab7d895e9)() const = &::clang::Type::isBuiltinType;
        bool (::clang::Type::*method_pointer_73dd827d75935df3ba026e38f865cb7e)(unsigned int) const = &::clang::Type::isSpecificBuiltinType;
        bool (::clang::Type::*method_pointer_87e73df4b77f5072b3c216944ecd12b9)() const = &::clang::Type::isEnumeralType;
        bool (::clang::Type::*method_pointer_6ec8c308afbe5888b5997bd6aaba366a)() const = &::clang::Type::isPointerType;
        bool (::clang::Type::*method_pointer_d0c7bda2e00357a6829f99338a82507c)() const = &::clang::Type::isLValueReferenceType;
        bool (::clang::Type::*method_pointer_76a4cfe233be50be8faf62a99e532e53)() const = &::clang::Type::isRValueReferenceType;
        bool (::clang::Type::*method_pointer_8e4c609727a3543984803a32915e6abf)() const = &::clang::Type::isStructureOrClassType;
        bool (::clang::Type::*method_pointer_53cacf2228ce500b9a0c3bc22cfe238c)() const = &::clang::Type::isUnionType;
        class ::clang::TagDecl * (::clang::Type::*method_pointer_6639873221095f27bc2ea1a41b44aff5)() const = &::clang::Type::getAsTagDecl;
        class ::clang::QualType (::clang::Type::*method_pointer_70258610ad8d5daa9b243388b78e7da8)() const = &::clang::Type::getPointeeType;
        class ::clang::Type const * (::clang::Type::*method_pointer_b43a03398625550b9b1bafb9b8eaca71)() const = &::clang::Type::getUnqualifiedDesugaredType;
        class ::clang::QualType (::clang::Type::*method_pointer_0507c5cc3767594a8db63b67498c476b)() const = &::clang::Type::getCanonicalTypeInternal;
        boost::python::class_< class ::clang::Type, class ::clang::Type *, boost::noncopyable >("Type", boost::python::no_init)
            .def("get_type_class", method_pointer_8553d8a312825b639a5c6310320adf62)
            .def("is_builtin_type", method_pointer_785eb07b3dfc5320af9c348ab7d895e9)
            .def("is_specific_builtin_type", method_pointer_73dd827d75935df3ba026e38f865cb7e)
            .def("is_enumeral_type", method_pointer_87e73df4b77f5072b3c216944ecd12b9)
            .def("is_pointer_type", method_pointer_6ec8c308afbe5888b5997bd6aaba366a)
            .def("is_l_value_reference_type", method_pointer_d0c7bda2e00357a6829f99338a82507c)
            .def("is_r_value_reference_type", method_pointer_76a4cfe233be50be8faf62a99e532e53)
            .def("is_structure_or_class_type", method_pointer_8e4c609727a3543984803a32915e6abf)
            .def("is_union_type", method_pointer_53cacf2228ce500b9a0c3bc22cfe238c)
            .def("get_as_tag_decl", method_pointer_6639873221095f27bc2ea1a41b44aff5, boost::python::return_value_policy< boost::python::reference_existing_object >())
            .def("get_pointee_type", method_pointer_70258610ad8d5daa9b243388b78e7da8)
            .def("get_unqualified_desugared_type", method_pointer_b43a03398625550b9b1bafb9b8eaca71, boost::python::return_value_policy< boost::python::reference_existing_object >())
            .def("get_canonical_type_internal", method_pointer_0507c5cc3767594a8db63b67498c476b);
}