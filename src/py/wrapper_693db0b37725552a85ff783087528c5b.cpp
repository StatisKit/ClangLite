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
    class ::clang::LinkageSpecDecl  * (*method_pointer_11193d365197510aa63c34bff394bd13)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_93e32bd041f656fcbd70e921762f48ea)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_d6c902ede8415e7c8918266989f72fda)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_1187c9ae111d5bbcb8ee25b7117d7745)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_466812a5615f53e3927f0e453eea39d9)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_340d3e25a33452d0bff3df3fad5f48b2)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_8fb3ee508cf15c40a5b9d160df661b0f)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_3987f0b2af2450c79c6d3ab1cf7530b4)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_805dbecf3185526087439e2885cb48a7)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_b353e7903832599187f086a5a1edc80f)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_9799b9881e3e5f4ab0a6943e5299843c)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_a75726425dd553b7bb10071b3f1f1a22)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_28c1af5711ba5f64828976a14149b1ee)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_b35b94a75c555d17aa7759c1f55583c3)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_11193d365197510aa63c34bff394bd13, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_93e32bd041f656fcbd70e921762f48ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_d6c902ede8415e7c8918266989f72fda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_1187c9ae111d5bbcb8ee25b7117d7745, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_466812a5615f53e3927f0e453eea39d9, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_340d3e25a33452d0bff3df3fad5f48b2, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_8fb3ee508cf15c40a5b9d160df661b0f, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_3987f0b2af2450c79c6d3ab1cf7530b4, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_805dbecf3185526087439e2885cb48a7, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_b353e7903832599187f086a5a1edc80f, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_9799b9881e3e5f4ab0a6943e5299843c, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_a75726425dd553b7bb10071b3f1f1a22, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_28c1af5711ba5f64828976a14149b1ee, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_b35b94a75c555d17aa7759c1f55583c3, "");
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