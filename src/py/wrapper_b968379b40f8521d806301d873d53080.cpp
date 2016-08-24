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
    class ::clang::TranslationUnitDecl  * (*method_pointer_b5e2a6a854eb5265869f96a3423e9446)(class ::clang::ASTContext  &) = ::clang::TranslationUnitDecl::Create;
    class ::clang::TranslationUnitDecl  * (*method_pointer_e84fcf2ddef4555cbc58cb86e13e4833)(class ::clang::DeclContext  const *) = ::clang::TranslationUnitDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_4fd9175271225fc48978eafbed9e35e8)(class ::clang::TranslationUnitDecl  const *) = ::clang::TranslationUnitDecl::castToDeclContext;
    bool  (*method_pointer_f268bbec8fe65c99b1d0c37a7f018489)(class ::clang::Decl  const *) = ::clang::TranslationUnitDecl::classof;
    bool  (*method_pointer_55b1f352a24958b18923ce7cf3807a36)(enum ::clang::Decl::Kind ) = ::clang::TranslationUnitDecl::classofKind;
    class ::clang::ASTContext  & (::clang::TranslationUnitDecl::*method_pointer_215f5c98e09d5b37974aca4bb426980f)() const = &::clang::TranslationUnitDecl::getASTContext;
    class ::clang::NamespaceDecl  * (::clang::TranslationUnitDecl::*method_pointer_f1e9ba9ecd545b4994bf62419fc05784)() const = &::clang::TranslationUnitDecl::getAnonymousNamespace;
    void  (::clang::TranslationUnitDecl::*method_pointer_079f0f9871705bdb8c01c3f8055a02f5)(class ::clang::NamespaceDecl  *) = &::clang::TranslationUnitDecl::setAnonymousNamespace;
    boost::python::class_< class ::clang::TranslationUnitDecl, autowig::HeldType< class ::clang::TranslationUnitDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_b968379b40f8521d806301d873d53080("TranslationUnitDecl", "", boost::python::no_init);
    class_b968379b40f8521d806301d873d53080.def("create", method_pointer_b5e2a6a854eb5265869f96a3423e9446, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("cast_from_decl_context", method_pointer_e84fcf2ddef4555cbc58cb86e13e4833, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("cast_to_decl_context", method_pointer_4fd9175271225fc48978eafbed9e35e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("classof", method_pointer_f268bbec8fe65c99b1d0c37a7f018489, "");
    class_b968379b40f8521d806301d873d53080.def("classof_kind", method_pointer_55b1f352a24958b18923ce7cf3807a36, "");
    class_b968379b40f8521d806301d873d53080.def("get_ast_context", method_pointer_215f5c98e09d5b37974aca4bb426980f, boost::python::return_internal_reference<>(), "");
    class_b968379b40f8521d806301d873d53080.def("get_anonymous_namespace", method_pointer_f1e9ba9ecd545b4994bf62419fc05784, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("set_anonymous_namespace", method_pointer_079f0f9871705bdb8c01c3f8055a02f5, "");
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