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
    class ::clang::LinkageSpecDecl  * (*method_pointer_934c5aa0a9e35bfa9b6a665612c4e442)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::DeclContext  * (*method_pointer_95cb56b6f226535c871398d0b16d2e4b)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_9f7c045b65e5567699535226af1a3f2f)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    void  (::clang::LinkageSpecDecl::*method_pointer_95c913ca24e8549794b4f8d2c15e675e)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    class ::clang::LinkageSpecDecl  * (*method_pointer_e30edc67a1a1582982ccc025e2874712)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    bool  (*method_pointer_93b04f5c66185605b5db07480e081249)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_56d58febe47f5b79a4da2f0963362666)() const = &::clang::LinkageSpecDecl::getLanguage;
    bool  (::clang::LinkageSpecDecl::*method_pointer_a2df3ee0b54754ffb2bfa6d3154768aa)() const = &::clang::LinkageSpecDecl::hasBraces;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_934c5aa0a9e35bfa9b6a665612c4e442, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_95cb56b6f226535c871398d0b16d2e4b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_9f7c045b65e5567699535226af1a3f2f, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_95c913ca24e8549794b4f8d2c15e675e, "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_e30edc67a1a1582982ccc025e2874712, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_93b04f5c66185605b5db07480e081249, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_56d58febe47f5b79a4da2f0963362666, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_a2df3ee0b54754ffb2bfa6d3154768aa, "");
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