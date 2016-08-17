#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_b968379b40f8521d806301d873d53080()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamespaceDecl  * (::clang::TranslationUnitDecl::*method_pointer_aeeee7fa71c652ffaa9a5a88aa4d9854)() const = &::clang::TranslationUnitDecl::getAnonymousNamespace;
    class ::clang::TranslationUnitDecl  * (*method_pointer_d32cca9fc31959c5809f953c7d8856b5)(class ::clang::DeclContext  const *) = ::clang::TranslationUnitDecl::castFromDeclContext;
    class ::clang::ASTContext  & (::clang::TranslationUnitDecl::*method_pointer_b4ab6a66fac3519cb24a58e3dcb974a8)() const = &::clang::TranslationUnitDecl::getASTContext;
    void  (::clang::TranslationUnitDecl::*method_pointer_e902fe4cbd425f2aad1fe3c4ff4d3896)(class ::clang::NamespaceDecl  *) = &::clang::TranslationUnitDecl::setAnonymousNamespace;
    class ::clang::DeclContext  * (*method_pointer_9a470029795b50d184ee97ed2f31d82a)(class ::clang::TranslationUnitDecl  const *) = ::clang::TranslationUnitDecl::castToDeclContext;
    bool  (*method_pointer_01f5386e43a5558e9ddcde79aa7ac635)(enum ::clang::Decl::Kind ) = ::clang::TranslationUnitDecl::classofKind;
    class ::clang::TranslationUnitDecl  * (*method_pointer_c6128e1cd2be54b48e59a3dfaa2e0861)(class ::clang::ASTContext  &) = ::clang::TranslationUnitDecl::Create;
    bool  (*method_pointer_45dfa6030fae530184eed49bbbe723f6)(class ::clang::Decl  const *) = ::clang::TranslationUnitDecl::classof;
    boost::python::class_< class ::clang::TranslationUnitDecl, autowig::HeldType< class ::clang::TranslationUnitDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_b968379b40f8521d806301d873d53080("TranslationUnitDecl", "", boost::python::no_init);
    class_b968379b40f8521d806301d873d53080.def("get_anonymous_namespace", method_pointer_aeeee7fa71c652ffaa9a5a88aa4d9854, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("cast_from_decl_context", method_pointer_d32cca9fc31959c5809f953c7d8856b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("get_ast_context", method_pointer_b4ab6a66fac3519cb24a58e3dcb974a8, boost::python::return_internal_reference<>(), "");
    class_b968379b40f8521d806301d873d53080.def("set_anonymous_namespace", method_pointer_e902fe4cbd425f2aad1fe3c4ff4d3896, "");
    class_b968379b40f8521d806301d873d53080.def("cast_to_decl_context", method_pointer_9a470029795b50d184ee97ed2f31d82a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("classof_kind", method_pointer_01f5386e43a5558e9ddcde79aa7ac635, "");
    class_b968379b40f8521d806301d873d53080.def("create", method_pointer_c6128e1cd2be54b48e59a3dfaa2e0861, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("classof", method_pointer_45dfa6030fae530184eed49bbbe723f6, "");
    class_b968379b40f8521d806301d873d53080.staticmethod("classof_kind");
    class_b968379b40f8521d806301d873d53080.staticmethod("create");
    class_b968379b40f8521d806301d873d53080.staticmethod("classof");
    class_b968379b40f8521d806301d873d53080.staticmethod("cast_from_decl_context");
    class_b968379b40f8521d806301d873d53080.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::TranslationUnitDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TranslationUnitDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TranslationUnitDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}