#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_693db0b37725552a85ff783087528c5b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::LinkageSpecDecl  * (*method_pointer_2171950828cc5bb59cb0e76f3e912c7a)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_47fb7e87d7c158eb9c39f2d3737b4d68)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_f6e03c2cba225a288d4b31f61eb2c485)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_da439e875c355cae83f76842b6ddc724)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_405b2cbf978e5b77a50bcfc33e0d94a4)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_f0493ba8125356e9b5b5a2677de444fb)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_2f343229c680574ab3936c2567bc8a43)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_1b756d7a22fa5343bea0de6a25ca3edb)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_5064bfb38d615c0999c0f6423b522d6c)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_971e070db989549ebe78feacadc88de0)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_935d677b2d695b6d977313c5a83629db)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_414ee13c67ba5bc595310fe354d3e7f4)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_360851e5c6565a4baaa605f52b6ce86c)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_c7d1d610de935c56b1a3103f13294630)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_2171950828cc5bb59cb0e76f3e912c7a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_47fb7e87d7c158eb9c39f2d3737b4d68, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_f6e03c2cba225a288d4b31f61eb2c485, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_da439e875c355cae83f76842b6ddc724, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_405b2cbf978e5b77a50bcfc33e0d94a4, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_f0493ba8125356e9b5b5a2677de444fb, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_2f343229c680574ab3936c2567bc8a43, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_1b756d7a22fa5343bea0de6a25ca3edb, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_5064bfb38d615c0999c0f6423b522d6c, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_971e070db989549ebe78feacadc88de0, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_935d677b2d695b6d977313c5a83629db, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_414ee13c67ba5bc595310fe354d3e7f4, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_360851e5c6565a4baaa605f52b6ce86c, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_c7d1d610de935c56b1a3103f13294630, "");
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