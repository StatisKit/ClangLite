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
    class ::clang::LinkageSpecDecl  * (*method_pointer_64b0d61e864e5576aae7ce99a25e22da)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_1654b2cf93d050c3b4dcc92633cf6496)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_d7af63eb6bd951238d97d27e47eb03c9)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_5074fe3215de5b8982ed11f648c4049e)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_2ed5ba5ddb2154eeaeb976d0657075c6)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_5d11f275f5705e289277a1e40b91f936)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_731410e0ade85048b646bbf5578bb66e)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_dbd444211950586a827a509e1c1bfb48)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_4be37230002456219d3b9ce3685f60e7)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_6fa1905f638a5fcdb1ff10973ba62c0d)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_d97c263b7f00593aa07539b5ddb7c451)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_7cf68c01a49d5bbd9db78d6ec192eee9)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_0d6091d3f1e55d2797aefa2e15a9779f)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_64ed87379f1e586e81803d3a7297c6e6)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_64b0d61e864e5576aae7ce99a25e22da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_1654b2cf93d050c3b4dcc92633cf6496, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_d7af63eb6bd951238d97d27e47eb03c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_5074fe3215de5b8982ed11f648c4049e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_2ed5ba5ddb2154eeaeb976d0657075c6, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_5d11f275f5705e289277a1e40b91f936, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_731410e0ade85048b646bbf5578bb66e, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_dbd444211950586a827a509e1c1bfb48, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_4be37230002456219d3b9ce3685f60e7, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_6fa1905f638a5fcdb1ff10973ba62c0d, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_d97c263b7f00593aa07539b5ddb7c451, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_7cf68c01a49d5bbd9db78d6ec192eee9, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_0d6091d3f1e55d2797aefa2e15a9779f, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_64ed87379f1e586e81803d3a7297c6e6, "");
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