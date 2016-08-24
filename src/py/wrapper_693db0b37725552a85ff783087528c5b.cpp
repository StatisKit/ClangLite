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
    class ::clang::LinkageSpecDecl  * (*method_pointer_d7572bbf11c950b58dfa05445fff528c)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_7cfa9ce45d5656f99850c733af3a93c1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_0ab13c67cc2f50f68e54996f4694002b)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_3888989dea6854d9afb35112c0a176ae)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_74e13e5c54d95c5594255f7a8c8eff5e)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_2cd3ac414753588f8f6354e14b43aff6)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_70f95b569d0257ca883dc083b5f5ae53)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_58a0c6c76ce95c9ba59cf8e63776fc84)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_8e1dc94d022b5ad0afa8edac2eba47fb)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_761f1a356634535eb82c05841919d779)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_53a77d035df058c183cce648c4acc7cb)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_99133af6f6335e789e087093d29fc15b)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_6e129de4697f573dac49aae9ee2cd79c)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_beabeac6a69f5242a61267a4f6f2bc27)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_d7572bbf11c950b58dfa05445fff528c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_7cfa9ce45d5656f99850c733af3a93c1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_0ab13c67cc2f50f68e54996f4694002b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_3888989dea6854d9afb35112c0a176ae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_74e13e5c54d95c5594255f7a8c8eff5e, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_2cd3ac414753588f8f6354e14b43aff6, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_70f95b569d0257ca883dc083b5f5ae53, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_58a0c6c76ce95c9ba59cf8e63776fc84, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_8e1dc94d022b5ad0afa8edac2eba47fb, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_761f1a356634535eb82c05841919d779, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_53a77d035df058c183cce648c4acc7cb, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_99133af6f6335e789e087093d29fc15b, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_6e129de4697f573dac49aae9ee2cd79c, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_beabeac6a69f5242a61267a4f6f2bc27, "");
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