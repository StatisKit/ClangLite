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
    class ::clang::LinkageSpecDecl  * (*method_pointer_577eabbaade05c76bcf195b1ae205870)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_d03d9dcff6c757c4a14a81088c554c43)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_962c87dadbda5f499f5c8960f61f1b24)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_7b7ff714b4455d8397de40e80f6a903c)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_d96dd0b8a78a5da3bec252b8f57178ac)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_758e5cb5b8a45989a043927257107745)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_7f52ee4577dd520f9db6dcafb936476a)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_d0cca1904cd950d7b35bcbc30c5f906e)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_5913899eb5cd520e8bd9a820d4809ac4)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_9d28dca336de5486afe0adb28e41bc65)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_0692b518be235b07a69172936b8d5ebe)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_f65d71b9fb17556991bcd0027bfac2de)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_4956d095bc8d581c93fdb2b57522693d)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_49fd2aae85e357539ef1a6a9716bc9bd)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_577eabbaade05c76bcf195b1ae205870, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_d03d9dcff6c757c4a14a81088c554c43, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_962c87dadbda5f499f5c8960f61f1b24, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_7b7ff714b4455d8397de40e80f6a903c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_d96dd0b8a78a5da3bec252b8f57178ac, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_758e5cb5b8a45989a043927257107745, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_7f52ee4577dd520f9db6dcafb936476a, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_d0cca1904cd950d7b35bcbc30c5f906e, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_5913899eb5cd520e8bd9a820d4809ac4, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_9d28dca336de5486afe0adb28e41bc65, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_0692b518be235b07a69172936b8d5ebe, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_f65d71b9fb17556991bcd0027bfac2de, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_4956d095bc8d581c93fdb2b57522693d, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_49fd2aae85e357539ef1a6a9716bc9bd, "");
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