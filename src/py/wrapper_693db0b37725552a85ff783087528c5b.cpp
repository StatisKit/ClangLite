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
    class ::clang::LinkageSpecDecl  * (*method_pointer_25b75240ac435485a0fc8c75e8489bbe)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_ffa4d3e39c68580cbbc48239198d7eda)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_28ce5b5538ab5d2fb83629b9c8708449)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_e1d2d7b4c87c5e098b3ef171bf60c29b)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_62f90c76b09c5df9ba444bdfe9946602)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_77ce55416df85074b4030d9df9feffe4)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_c93e74870e6e50b4b65ae84a71106754)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_b8ecfb460122595cbe5f0ea766ede8a9)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_a6f5971af84e5ac1a5ccbe407ccc910c)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_b307e9524ea851be87a5f7a4f7f97a1e)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_af862e46f25c565aba6c323769f6897c)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_1fa9fe7096af5b3f8afcd2f62acc6693)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_68d17613440f5ba7821ca488c86ca001)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_6a86aefd79c3557b8d78026ae87104dc)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_25b75240ac435485a0fc8c75e8489bbe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_ffa4d3e39c68580cbbc48239198d7eda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_28ce5b5538ab5d2fb83629b9c8708449, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_e1d2d7b4c87c5e098b3ef171bf60c29b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_62f90c76b09c5df9ba444bdfe9946602, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_77ce55416df85074b4030d9df9feffe4, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_c93e74870e6e50b4b65ae84a71106754, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_b8ecfb460122595cbe5f0ea766ede8a9, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_a6f5971af84e5ac1a5ccbe407ccc910c, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_b307e9524ea851be87a5f7a4f7f97a1e, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_af862e46f25c565aba6c323769f6897c, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_1fa9fe7096af5b3f8afcd2f62acc6693, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_68d17613440f5ba7821ca488c86ca001, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_6a86aefd79c3557b8d78026ae87104dc, "");
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