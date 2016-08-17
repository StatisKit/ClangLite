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
    class ::clang::TranslationUnitDecl  * (*method_pointer_c1b6b42f71615a6e823c2bae154db53a)(class ::clang::ASTContext  &) = ::clang::TranslationUnitDecl::Create;
    class ::clang::DeclContext  * (*method_pointer_d46fe559b65d5cbbb305007fb21b1af4)(class ::clang::TranslationUnitDecl  const *) = ::clang::TranslationUnitDecl::castToDeclContext;
    bool  (*method_pointer_1e25facc636555239a8cd769cd1ed203)(class ::clang::Decl  const *) = ::clang::TranslationUnitDecl::classof;
    bool  (*method_pointer_04eddbf6e01f5a359079d79470cea8e2)(enum ::clang::Decl::Kind ) = ::clang::TranslationUnitDecl::classofKind;
    class ::clang::ASTContext  & (::clang::TranslationUnitDecl::*method_pointer_2cb3535add9d54fa8682b59d77a18361)() const = &::clang::TranslationUnitDecl::getASTContext;
    void  (::clang::TranslationUnitDecl::*method_pointer_cde4954ab3e252038d6f6c9dfff0b00b)(class ::clang::NamespaceDecl  *) = &::clang::TranslationUnitDecl::setAnonymousNamespace;
    class ::clang::TranslationUnitDecl  * (*method_pointer_ad5a60c751f95c28950ce9c6ec05c22b)(class ::clang::DeclContext  const *) = ::clang::TranslationUnitDecl::castFromDeclContext;
    class ::clang::NamespaceDecl  * (::clang::TranslationUnitDecl::*method_pointer_d59cc7189a3a5ac680e5a243cfab30b9)() const = &::clang::TranslationUnitDecl::getAnonymousNamespace;
    boost::python::class_< class ::clang::TranslationUnitDecl, autowig::HeldType< class ::clang::TranslationUnitDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_b968379b40f8521d806301d873d53080("TranslationUnitDecl", "", boost::python::no_init);
    class_b968379b40f8521d806301d873d53080.def("create", method_pointer_c1b6b42f71615a6e823c2bae154db53a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("cast_to_decl_context", method_pointer_d46fe559b65d5cbbb305007fb21b1af4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("classof", method_pointer_1e25facc636555239a8cd769cd1ed203, "");
    class_b968379b40f8521d806301d873d53080.def("classof_kind", method_pointer_04eddbf6e01f5a359079d79470cea8e2, "");
    class_b968379b40f8521d806301d873d53080.def("get_ast_context", method_pointer_2cb3535add9d54fa8682b59d77a18361, boost::python::return_internal_reference<>(), "");
    class_b968379b40f8521d806301d873d53080.def("set_anonymous_namespace", method_pointer_cde4954ab3e252038d6f6c9dfff0b00b, "");
    class_b968379b40f8521d806301d873d53080.def("cast_from_decl_context", method_pointer_ad5a60c751f95c28950ce9c6ec05c22b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("get_anonymous_namespace", method_pointer_d59cc7189a3a5ac680e5a243cfab30b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
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