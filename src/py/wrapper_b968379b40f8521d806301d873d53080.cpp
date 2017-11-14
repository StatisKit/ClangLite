#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TranslationUnitDecl const volatile * get_pointer<class ::clang::TranslationUnitDecl const volatile >(class ::clang::TranslationUnitDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b968379b40f8521d806301d873d53080()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ASTContext & (::clang::TranslationUnitDecl::*method_pointer_2bd67ec6dfd3505b97e4b5e071aa959c)() const = &::clang::TranslationUnitDecl::getASTContext;
    class ::clang::NamespaceDecl * (::clang::TranslationUnitDecl::*method_pointer_969c1e0c83b45b5a90557b8ea88354c5)() const = &::clang::TranslationUnitDecl::getAnonymousNamespace;
    void  (::clang::TranslationUnitDecl::*method_pointer_9b72dcbe0c14514b91d135e15d99b193)(class ::clang::NamespaceDecl *) = &::clang::TranslationUnitDecl::setAnonymousNamespace;
    class ::clang::TranslationUnitDecl * (*method_pointer_64e404a41f4d56c98640039063118208)(class ::clang::ASTContext &) = ::clang::TranslationUnitDecl::Create;
    bool  (*method_pointer_ce02c8b4feb95457b9ad9f91f71d3476)(class ::clang::Decl const *) = ::clang::TranslationUnitDecl::classof;
    bool  (*method_pointer_c98df1610ef05283a599f30ef2c955e8)(enum ::clang::Decl::Kind ) = ::clang::TranslationUnitDecl::classofKind;
    class ::clang::DeclContext * (*method_pointer_15cf6962e6c457daa799f6cfbadf8f56)(class ::clang::TranslationUnitDecl const *) = ::clang::TranslationUnitDecl::castToDeclContext;
    class ::clang::TranslationUnitDecl * (*method_pointer_0ad4e62f603d574bb7ff20e01d34ce03)(class ::clang::DeclContext const *) = ::clang::TranslationUnitDecl::castFromDeclContext;
    boost::python::class_< class ::clang::TranslationUnitDecl, autowig::Held< class ::clang::TranslationUnitDecl >::Type, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_b968379b40f8521d806301d873d53080("TranslationUnitDecl", "", boost::python::no_init);
    class_b968379b40f8521d806301d873d53080.def("get_ast_context", method_pointer_2bd67ec6dfd3505b97e4b5e071aa959c, boost::python::return_internal_reference<>(), "");
    class_b968379b40f8521d806301d873d53080.def("get_anonymous_namespace", method_pointer_969c1e0c83b45b5a90557b8ea88354c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("set_anonymous_namespace", method_pointer_9b72dcbe0c14514b91d135e15d99b193, "");
    class_b968379b40f8521d806301d873d53080.def("create", method_pointer_64e404a41f4d56c98640039063118208, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("classof", method_pointer_ce02c8b4feb95457b9ad9f91f71d3476, "");
    class_b968379b40f8521d806301d873d53080.def("classof_kind", method_pointer_c98df1610ef05283a599f30ef2c955e8, "");
    class_b968379b40f8521d806301d873d53080.def("cast_to_decl_context", method_pointer_15cf6962e6c457daa799f6cfbadf8f56, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("cast_from_decl_context", method_pointer_0ad4e62f603d574bb7ff20e01d34ce03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.staticmethod("classof_kind");
    class_b968379b40f8521d806301d873d53080.staticmethod("create");
    class_b968379b40f8521d806301d873d53080.staticmethod("classof");
    class_b968379b40f8521d806301d873d53080.staticmethod("cast_from_decl_context");
    class_b968379b40f8521d806301d873d53080.staticmethod("cast_to_decl_context");

    if(autowig::Held< class ::clang::TranslationUnitDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TranslationUnitDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TranslationUnitDecl >::Type, autowig::Held< class ::clang::DeclContext >::Type >();
    }

}