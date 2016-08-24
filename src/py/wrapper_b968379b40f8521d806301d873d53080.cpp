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
    class ::clang::TranslationUnitDecl  * (*method_pointer_d62d3c414ded5a69928de0999ffaad0e)(class ::clang::ASTContext  &) = ::clang::TranslationUnitDecl::Create;
    class ::clang::TranslationUnitDecl  * (*method_pointer_6ece78b98a9b573eba7fd009d73a7128)(class ::clang::DeclContext  const *) = ::clang::TranslationUnitDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_d55f53d691e150bbb46f13b961cf3269)(class ::clang::TranslationUnitDecl  const *) = ::clang::TranslationUnitDecl::castToDeclContext;
    bool  (*method_pointer_40f32fa6b1065026898327eee6a5262d)(class ::clang::Decl  const *) = ::clang::TranslationUnitDecl::classof;
    bool  (*method_pointer_e42446718d8c5fd984cdc79978100be1)(enum ::clang::Decl::Kind ) = ::clang::TranslationUnitDecl::classofKind;
    class ::clang::ASTContext  & (::clang::TranslationUnitDecl::*method_pointer_814f0694c94057ad80316a5efb71b4ae)() const = &::clang::TranslationUnitDecl::getASTContext;
    class ::clang::NamespaceDecl  * (::clang::TranslationUnitDecl::*method_pointer_128022b41b6c5aefad159116166ad71d)() const = &::clang::TranslationUnitDecl::getAnonymousNamespace;
    void  (::clang::TranslationUnitDecl::*method_pointer_60c41c7bf59353dc93de84886414cf4d)(class ::clang::NamespaceDecl  *) = &::clang::TranslationUnitDecl::setAnonymousNamespace;
    boost::python::class_< class ::clang::TranslationUnitDecl, autowig::HeldType< class ::clang::TranslationUnitDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_b968379b40f8521d806301d873d53080("TranslationUnitDecl", "", boost::python::no_init);
    class_b968379b40f8521d806301d873d53080.def("create", method_pointer_d62d3c414ded5a69928de0999ffaad0e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("cast_from_decl_context", method_pointer_6ece78b98a9b573eba7fd009d73a7128, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("cast_to_decl_context", method_pointer_d55f53d691e150bbb46f13b961cf3269, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("classof", method_pointer_40f32fa6b1065026898327eee6a5262d, "");
    class_b968379b40f8521d806301d873d53080.def("classof_kind", method_pointer_e42446718d8c5fd984cdc79978100be1, "");
    class_b968379b40f8521d806301d873d53080.def("get_ast_context", method_pointer_814f0694c94057ad80316a5efb71b4ae, boost::python::return_internal_reference<>(), "");
    class_b968379b40f8521d806301d873d53080.def("get_anonymous_namespace", method_pointer_128022b41b6c5aefad159116166ad71d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("set_anonymous_namespace", method_pointer_60c41c7bf59353dc93de84886414cf4d, "");
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