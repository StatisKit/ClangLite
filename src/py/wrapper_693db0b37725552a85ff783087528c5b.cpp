#include "_clanglite.h"


namespace autowig
{
}


void wrapper_693db0b37725552a85ff783087528c5b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::LinkageSpecDecl  * (*method_pointer_7a00d7bd5cdb50d18d5ea270965545da)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_a1ae5a6cac3c5704a310822f051a7aec)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_69a7e785942357948b858e353bfb10b5)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_3b4eed44a3c05db9a1e6e3ee0e1db4af)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_aff840d4d4f7566cbac28777a2adf015)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_2a40e0ed0a01588e91b3645d45cce3d7)() const = &::clang::LinkageSpecDecl::getLanguage;
    bool  (::clang::LinkageSpecDecl::*method_pointer_8181c423496d5652abd7cb7d6341f190)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_ba8ab628a98055c38fed316fb78917c4)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_7a00d7bd5cdb50d18d5ea270965545da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_a1ae5a6cac3c5704a310822f051a7aec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_69a7e785942357948b858e353bfb10b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_3b4eed44a3c05db9a1e6e3ee0e1db4af, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_aff840d4d4f7566cbac28777a2adf015, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_2a40e0ed0a01588e91b3645d45cce3d7, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_8181c423496d5652abd7cb7d6341f190, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_ba8ab628a98055c38fed316fb78917c4, "");
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