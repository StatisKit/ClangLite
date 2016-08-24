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
    class ::clang::LinkageSpecDecl  * (*method_pointer_9e2d468368825d1faaf218616ecade9f)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_c242465a776d5392a6614284ec5c1fd6)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_9793ba95f99a5317b72e5b96d94bb100)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_9b7c7c0eb8e35e54854a3e96bd6bb327)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_6bfc636be25c5010ba1822e8856ba985)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_cefff715b4c85137a9e8caf574136dff)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_25c5da11fbfe55ca9202fface8884a77)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_0e8d20896af05774bac1b2dd32a163e4)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_d929772bdf815d34baa8a2af16aedcfb)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_ccde2e25ee3b52e580d779514dd41c83)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_065c537c13cf57cd9bb2156df5156f8e)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_56f6b0882d7f520db6c2fb50785f5875)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_47ab5c983712515e83daa8181b705bd7)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_fc6e9a81b38955529331778349f83445)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_9e2d468368825d1faaf218616ecade9f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_c242465a776d5392a6614284ec5c1fd6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_9793ba95f99a5317b72e5b96d94bb100, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_9b7c7c0eb8e35e54854a3e96bd6bb327, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_6bfc636be25c5010ba1822e8856ba985, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_cefff715b4c85137a9e8caf574136dff, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_25c5da11fbfe55ca9202fface8884a77, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_0e8d20896af05774bac1b2dd32a163e4, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_d929772bdf815d34baa8a2af16aedcfb, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_ccde2e25ee3b52e580d779514dd41c83, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_065c537c13cf57cd9bb2156df5156f8e, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_56f6b0882d7f520db6c2fb50785f5875, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_47ab5c983712515e83daa8181b705bd7, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_fc6e9a81b38955529331778349f83445, "");
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