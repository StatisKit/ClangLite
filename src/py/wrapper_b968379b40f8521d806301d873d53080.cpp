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
    class ::clang::TranslationUnitDecl  * (*method_pointer_c3cffcd4fbd85cb6962ce6af0a900f8e)(class ::clang::ASTContext  &) = ::clang::TranslationUnitDecl::Create;
    class ::clang::TranslationUnitDecl  * (*method_pointer_8cfa77e78c8052c18d78c9f1a20ef52e)(class ::clang::DeclContext  const *) = ::clang::TranslationUnitDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_38c1c8958fd251e1b8822d253be3fbab)(class ::clang::TranslationUnitDecl  const *) = ::clang::TranslationUnitDecl::castToDeclContext;
    bool  (*method_pointer_c138f0b89b2b5effa7c055633e89d921)(class ::clang::Decl  const *) = ::clang::TranslationUnitDecl::classof;
    bool  (*method_pointer_1795dccb1e455f1bba1565a77e623925)(enum ::clang::Decl::Kind ) = ::clang::TranslationUnitDecl::classofKind;
    class ::clang::ASTContext  & (::clang::TranslationUnitDecl::*method_pointer_d3b0d46c8741564c8b088de800b41b3c)() const = &::clang::TranslationUnitDecl::getASTContext;
    class ::clang::NamespaceDecl  * (::clang::TranslationUnitDecl::*method_pointer_a788ad46a8845f67a154348431983fbc)() const = &::clang::TranslationUnitDecl::getAnonymousNamespace;
    void  (::clang::TranslationUnitDecl::*method_pointer_c803066b15be58ba828851328db5d8eb)(class ::clang::NamespaceDecl  *) = &::clang::TranslationUnitDecl::setAnonymousNamespace;
    boost::python::class_< class ::clang::TranslationUnitDecl, autowig::HeldType< class ::clang::TranslationUnitDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_b968379b40f8521d806301d873d53080("TranslationUnitDecl", "", boost::python::no_init);
    class_b968379b40f8521d806301d873d53080.def("create", method_pointer_c3cffcd4fbd85cb6962ce6af0a900f8e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("cast_from_decl_context", method_pointer_8cfa77e78c8052c18d78c9f1a20ef52e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("cast_to_decl_context", method_pointer_38c1c8958fd251e1b8822d253be3fbab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("classof", method_pointer_c138f0b89b2b5effa7c055633e89d921, "");
    class_b968379b40f8521d806301d873d53080.def("classof_kind", method_pointer_1795dccb1e455f1bba1565a77e623925, "");
    class_b968379b40f8521d806301d873d53080.def("get_ast_context", method_pointer_d3b0d46c8741564c8b088de800b41b3c, boost::python::return_internal_reference<>(), "");
    class_b968379b40f8521d806301d873d53080.def("get_anonymous_namespace", method_pointer_a788ad46a8845f67a154348431983fbc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("set_anonymous_namespace", method_pointer_c803066b15be58ba828851328db5d8eb, "");
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