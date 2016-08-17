#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_693db0b37725552a85ff783087528c5b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::LinkageSpecDecl::*method_pointer_7199ec906d6e58f2aef280fd29bf8440)() const = &::clang::LinkageSpecDecl::hasBraces;
    class ::clang::DeclContext  * (*method_pointer_d43e1ae45f175671928ffa967f5038d5)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_74133b6549375143aeeec858350058e1)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    void  (::clang::LinkageSpecDecl::*method_pointer_65812c13e0f956cea6d66c7aaff13aca)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    class ::clang::LinkageSpecDecl  * (*method_pointer_1d26d1f8a0f35b3e966a5d1121899619)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::LinkageSpecDecl  * (*method_pointer_67a07e8f968651e391cc5203c7535aaf)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_22ada4b26ff15e35a64183febb5cab78)() const = &::clang::LinkageSpecDecl::getLanguage;
    bool  (*method_pointer_aa0a8059f2eb5a1fa810309f36dbbf8a)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_7199ec906d6e58f2aef280fd29bf8440, "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_d43e1ae45f175671928ffa967f5038d5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_74133b6549375143aeeec858350058e1, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_65812c13e0f956cea6d66c7aaff13aca, "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_1d26d1f8a0f35b3e966a5d1121899619, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_67a07e8f968651e391cc5203c7535aaf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_22ada4b26ff15e35a64183febb5cab78, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_aa0a8059f2eb5a1fa810309f36dbbf8a, "");
    class_693db0b37725552a85ff783087528c5b.staticmethod("classof_kind");
    class_693db0b37725552a85ff783087528c5b.staticmethod("create_deserialized");
    class_693db0b37725552a85ff783087528c5b.staticmethod("classof");
    class_693db0b37725552a85ff783087528c5b.staticmethod("cast_from_decl_context");
    class_693db0b37725552a85ff783087528c5b.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::LinkageSpecDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LinkageSpecDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LinkageSpecDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}