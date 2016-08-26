#include "_clanglite.h"


namespace autowig
{
}


void wrapper_693db0b37725552a85ff783087528c5b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::LinkageSpecDecl  * (*method_pointer_464f22d79978587cb8d215deceef141f)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_119b2c4e239a5395a28db273faa17382)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_ddd116de9cbe59bd8daad03b0fd1540b)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_31d64faa515555a4a70468322d967fef)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_26894c2af6b35184b184ccd4a09dc2eb)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_ef60a5a21c4751ba961c43418300c716)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_141b09a7db685e52a2ca4fd54e9539d5)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_074dd75be8b9551693838148d655d8fb)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_4a8b44cb645b511d94646023b0b26e93)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_0e7f945447425fbcb8efd1984040ca36)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_1ec6c9b1f15d512c947381e3a73ce679)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_be9bcdd409b251409fd2a6fe0abcdfa1)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_3a7abfe825a35042af8690f5f5519c06)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_6233503c6d7459e49f82ff3a1293d569)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_464f22d79978587cb8d215deceef141f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_119b2c4e239a5395a28db273faa17382, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_ddd116de9cbe59bd8daad03b0fd1540b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_31d64faa515555a4a70468322d967fef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_26894c2af6b35184b184ccd4a09dc2eb, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_ef60a5a21c4751ba961c43418300c716, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_141b09a7db685e52a2ca4fd54e9539d5, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_074dd75be8b9551693838148d655d8fb, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_4a8b44cb645b511d94646023b0b26e93, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_0e7f945447425fbcb8efd1984040ca36, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_1ec6c9b1f15d512c947381e3a73ce679, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_be9bcdd409b251409fd2a6fe0abcdfa1, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_3a7abfe825a35042af8690f5f5519c06, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_6233503c6d7459e49f82ff3a1293d569, "");
    class_693db0b37725552a85ff783087528c5b.staticmethod("cast_from_decl_context");
    class_693db0b37725552a85ff783087528c5b.staticmethod("cast_to_decl_context");
    class_693db0b37725552a85ff783087528c5b.staticmethod("create");
    class_693db0b37725552a85ff783087528c5b.staticmethod("classof_kind");
    class_693db0b37725552a85ff783087528c5b.staticmethod("classof");
    class_693db0b37725552a85ff783087528c5b.staticmethod("create_deserialized");

    if(std::is_class< autowig::HeldType< class ::clang::LinkageSpecDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LinkageSpecDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LinkageSpecDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}