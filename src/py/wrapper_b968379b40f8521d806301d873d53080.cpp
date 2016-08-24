#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_b968379b40f8521d806301d873d53080()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TranslationUnitDecl  * (*method_pointer_8957cef955c85aea877aa06d6544e074)(class ::clang::ASTContext  &) = ::clang::TranslationUnitDecl::Create;
    class ::clang::TranslationUnitDecl  * (*method_pointer_41ed8b0bad43557d91254496ae055ac0)(class ::clang::DeclContext  const *) = ::clang::TranslationUnitDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_a86aebffad575b6e9ad7a8dbfaf67de8)(class ::clang::TranslationUnitDecl  const *) = ::clang::TranslationUnitDecl::castToDeclContext;
    bool  (*method_pointer_683c4a3fe4b2536a9c7e918e42f23854)(class ::clang::Decl  const *) = ::clang::TranslationUnitDecl::classof;
    bool  (*method_pointer_92f975791d605d4f9d5040725cba566b)(enum ::clang::Decl::Kind ) = ::clang::TranslationUnitDecl::classofKind;
    class ::clang::ASTContext  & (::clang::TranslationUnitDecl::*method_pointer_330b906603cd565ba8cb4eaa310b935b)() const = &::clang::TranslationUnitDecl::getASTContext;
    class ::clang::NamespaceDecl  * (::clang::TranslationUnitDecl::*method_pointer_6f8553fe36fd5404893dcfb9fd3e98b7)() const = &::clang::TranslationUnitDecl::getAnonymousNamespace;
    void  (::clang::TranslationUnitDecl::*method_pointer_e04827507ee15944a413507ddfd6684c)(class ::clang::NamespaceDecl  *) = &::clang::TranslationUnitDecl::setAnonymousNamespace;
    boost::python::class_< class ::clang::TranslationUnitDecl, autowig::HeldType< class ::clang::TranslationUnitDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_b968379b40f8521d806301d873d53080("TranslationUnitDecl", "", boost::python::no_init);
    class_b968379b40f8521d806301d873d53080.def("create", method_pointer_8957cef955c85aea877aa06d6544e074, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("cast_from_decl_context", method_pointer_41ed8b0bad43557d91254496ae055ac0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("cast_to_decl_context", method_pointer_a86aebffad575b6e9ad7a8dbfaf67de8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("classof", method_pointer_683c4a3fe4b2536a9c7e918e42f23854, "");
    class_b968379b40f8521d806301d873d53080.def("classof_kind", method_pointer_92f975791d605d4f9d5040725cba566b, "");
    class_b968379b40f8521d806301d873d53080.def("get_ast_context", method_pointer_330b906603cd565ba8cb4eaa310b935b, boost::python::return_internal_reference<>(), "");
    class_b968379b40f8521d806301d873d53080.def("get_anonymous_namespace", method_pointer_6f8553fe36fd5404893dcfb9fd3e98b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("set_anonymous_namespace", method_pointer_e04827507ee15944a413507ddfd6684c, "");
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