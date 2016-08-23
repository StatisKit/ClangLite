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
    class ::clang::LinkageSpecDecl  * (*method_pointer_5941ef6324635dad9d94715c838856ed)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_10ec018148a352128055ad17208838f4)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_1a7fcb76dd725c9f85c48bb39c9315a0)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_c6b6651ac0905d408babc2c80374bb13)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_2ea2c51f5e1657f6a9d9bbd6933a1172)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_d81bca69f6185daab19a052cf921b544)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_9cf5bf07c1315f1aa8fef926701fed0f)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_7a5a5d3c5d5d59d3ab6134056ea4f8d1)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_fb68dc4ef2e85fa9b0440da02148582d)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_06e868cbe7695a01bfccbefd06fbb079)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_3dee4ac03c505506a0a5640224ca03d9)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_885e3612c9d1560c9f8e7d9eaf6cd2be)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_d28c53d6be355bbc935834add5db30b2)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_c6b976df2c875945847dd945a41b0fdd)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_5941ef6324635dad9d94715c838856ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_10ec018148a352128055ad17208838f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_1a7fcb76dd725c9f85c48bb39c9315a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_c6b6651ac0905d408babc2c80374bb13, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_2ea2c51f5e1657f6a9d9bbd6933a1172, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_d81bca69f6185daab19a052cf921b544, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_9cf5bf07c1315f1aa8fef926701fed0f, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_7a5a5d3c5d5d59d3ab6134056ea4f8d1, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_fb68dc4ef2e85fa9b0440da02148582d, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_06e868cbe7695a01bfccbefd06fbb079, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_3dee4ac03c505506a0a5640224ca03d9, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_885e3612c9d1560c9f8e7d9eaf6cd2be, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_d28c53d6be355bbc935834add5db30b2, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_c6b976df2c875945847dd945a41b0fdd, "");
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