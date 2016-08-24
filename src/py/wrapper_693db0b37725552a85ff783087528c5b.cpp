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
    class ::clang::LinkageSpecDecl  * (*method_pointer_6960a799f2425ae6a924d70cf81ef26b)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_9837fafb9b9a554ebaa8be4455553b4e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_e9f7ac4b8ee357fc8bbf176be4e00e48)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_3e9eeb2259405b36a3d95d1f8e28e9ed)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_4a323816e73b5dc5b47b210905afedbb)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_d38ea1781f2f5621b917bc19131884bc)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_60e437e6833652eda483e5aaa8df146a)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_7b27655f278e5876a3183b9a079022fc)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_aeb6be4cce5e54b4beee92bb702b1012)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_dae9cb714181522887b14bfe7d0222fe)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_0133b8df86a25b59ae20991811cb8099)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_9f2889d5c12252e8ac48f263ba399a61)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_50413de2281656998760fc0ae56bf490)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_db593efe0f405668b3beb62294aa42fd)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_6960a799f2425ae6a924d70cf81ef26b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_9837fafb9b9a554ebaa8be4455553b4e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_e9f7ac4b8ee357fc8bbf176be4e00e48, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_3e9eeb2259405b36a3d95d1f8e28e9ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_4a323816e73b5dc5b47b210905afedbb, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_d38ea1781f2f5621b917bc19131884bc, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_60e437e6833652eda483e5aaa8df146a, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_7b27655f278e5876a3183b9a079022fc, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_aeb6be4cce5e54b4beee92bb702b1012, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_dae9cb714181522887b14bfe7d0222fe, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_0133b8df86a25b59ae20991811cb8099, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_9f2889d5c12252e8ac48f263ba399a61, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_50413de2281656998760fc0ae56bf490, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_db593efe0f405668b3beb62294aa42fd, "");
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