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
    bool  (*method_pointer_01a30afd064851f9ab5405018de78e51)(class ::clang::Decl  const *) = ::clang::TranslationUnitDecl::classof;
    class ::clang::TranslationUnitDecl  * (*method_pointer_d3aabc4431ab568da6dc16d344205c7a)(class ::clang::DeclContext  const *) = ::clang::TranslationUnitDecl::castFromDeclContext;
    class ::clang::NamespaceDecl  * (::clang::TranslationUnitDecl::*method_pointer_a3bda4a71b9a5bb592f168b04eb309ca)() const = &::clang::TranslationUnitDecl::getAnonymousNamespace;
    bool  (*method_pointer_99342687580b5fe8940dfcebfc4fd21a)(enum ::clang::Decl::Kind ) = ::clang::TranslationUnitDecl::classofKind;
    class ::clang::ASTContext  & (::clang::TranslationUnitDecl::*method_pointer_e6f4c7dd678757c587dc93eb9f65135c)() const = &::clang::TranslationUnitDecl::getASTContext;
    class ::clang::DeclContext  * (*method_pointer_517d37cfe98b574f9615904e20999285)(class ::clang::TranslationUnitDecl  const *) = ::clang::TranslationUnitDecl::castToDeclContext;
    void  (::clang::TranslationUnitDecl::*method_pointer_6b58b4a694f15882a62116f903e33cf2)(class ::clang::NamespaceDecl  *) = &::clang::TranslationUnitDecl::setAnonymousNamespace;
    class ::clang::TranslationUnitDecl  * (*method_pointer_85255b3c336a553ea75c9771b9d1cb9c)(class ::clang::ASTContext  &) = ::clang::TranslationUnitDecl::Create;
    boost::python::class_< class ::clang::TranslationUnitDecl, autowig::HeldType< class ::clang::TranslationUnitDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_b968379b40f8521d806301d873d53080("TranslationUnitDecl", "", boost::python::no_init);
    class_b968379b40f8521d806301d873d53080.def("classof", method_pointer_01a30afd064851f9ab5405018de78e51, "");
    class_b968379b40f8521d806301d873d53080.def("cast_from_decl_context", method_pointer_d3aabc4431ab568da6dc16d344205c7a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("get_anonymous_namespace", method_pointer_a3bda4a71b9a5bb592f168b04eb309ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("classof_kind", method_pointer_99342687580b5fe8940dfcebfc4fd21a, "");
    class_b968379b40f8521d806301d873d53080.def("get_ast_context", method_pointer_e6f4c7dd678757c587dc93eb9f65135c, boost::python::return_internal_reference<>(), "");
    class_b968379b40f8521d806301d873d53080.def("cast_to_decl_context", method_pointer_517d37cfe98b574f9615904e20999285, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("set_anonymous_namespace", method_pointer_6b58b4a694f15882a62116f903e33cf2, "");
    class_b968379b40f8521d806301d873d53080.def("create", method_pointer_85255b3c336a553ea75c9771b9d1cb9c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
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