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
    class ::clang::LinkageSpecDecl  * (*method_pointer_faf370510f955e8e844ff5c40d881572)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_6f6c08767d69508cac7789ba874ea73c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_fafba8ebaf1a52c9ac1957faa0ccd15f)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_e086b770570c57d68d34d332adc4ab9e)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_c6dfa1ba10ee5a518c85756c62f8e14b)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_4cb7d49499d3530fa9d38b6197c8db23)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_80386941a8785ebfb61f10b5727fe462)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_4d69166c0298543296d666c90eccfd56)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_5034f82d360753ae8c1aef5c34313fdb)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_052790ddd3eb5eddaeda75544271b353)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_8456d00150ff5f9b846995a5496452a0)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_e7c36ddeedea5c18adeb13bb22c6f9d0)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_3af3e1a3b343545a90819cc4cd9f798c)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_8bea4750ef07598b9dd7649ae96b749f)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_faf370510f955e8e844ff5c40d881572, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_6f6c08767d69508cac7789ba874ea73c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_fafba8ebaf1a52c9ac1957faa0ccd15f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_e086b770570c57d68d34d332adc4ab9e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_c6dfa1ba10ee5a518c85756c62f8e14b, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_4cb7d49499d3530fa9d38b6197c8db23, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_80386941a8785ebfb61f10b5727fe462, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_4d69166c0298543296d666c90eccfd56, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_5034f82d360753ae8c1aef5c34313fdb, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_052790ddd3eb5eddaeda75544271b353, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_8456d00150ff5f9b846995a5496452a0, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_e7c36ddeedea5c18adeb13bb22c6f9d0, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_3af3e1a3b343545a90819cc4cd9f798c, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_8bea4750ef07598b9dd7649ae96b749f, "");
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