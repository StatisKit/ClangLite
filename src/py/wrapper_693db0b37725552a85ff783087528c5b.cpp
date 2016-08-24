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
    class ::clang::LinkageSpecDecl  * (*method_pointer_69ab937b9f1a512f982ed32378b83dea)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_cd4c13fa623858039a13f663060edfb9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_b8689d636e785543970683cf44998ae8)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_e237e515589d5854bf3608cced8ff7be)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_f3cc95ed095b5765b00c391ad9b59d5e)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_8dd5b978298a56f1b47be7d7add6985b)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_5b97a2d7b10e59b7908264d64e6330a4)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_e9417d4bdb6c533c8b59ea9e6fd9cc7a)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_09fbacc6538357f1872422f0b5949c29)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_89a8b32adc4457208cece4423e3e186b)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_e91679b91d025ebc9e3ab490de722ee2)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_5d64e98954ca53a0baffa6c837e209b2)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_6d6fc5eb2f665d128ee7ede4ec7005bf)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_cd8602a1accf57f3a0a4d2b67acf055f)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_69ab937b9f1a512f982ed32378b83dea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_cd4c13fa623858039a13f663060edfb9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_b8689d636e785543970683cf44998ae8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_e237e515589d5854bf3608cced8ff7be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_f3cc95ed095b5765b00c391ad9b59d5e, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_8dd5b978298a56f1b47be7d7add6985b, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_5b97a2d7b10e59b7908264d64e6330a4, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_e9417d4bdb6c533c8b59ea9e6fd9cc7a, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_09fbacc6538357f1872422f0b5949c29, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_89a8b32adc4457208cece4423e3e186b, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_e91679b91d025ebc9e3ab490de722ee2, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_5d64e98954ca53a0baffa6c837e209b2, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_6d6fc5eb2f665d128ee7ede4ec7005bf, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_cd8602a1accf57f3a0a4d2b67acf055f, "");
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