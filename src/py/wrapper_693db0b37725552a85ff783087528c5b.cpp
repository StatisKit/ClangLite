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
    class ::clang::LinkageSpecDecl  * (*method_pointer_11cd4e62690c5681b46e50d4fa6d7146)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_cf0aa5fa2d88596aab8b40df2b9a9ab8)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_3a5baba6ed625adfa95323eac487b460)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_724cbeb0dc655867a8bf218ab4f40491)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_1ca12d86d5b458c2ab6a8db7d48ccc74)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_4c43da71cd0854199c73ccf530edddf9)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_6063efd0c07b51deab8406a2679ef623)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_660825d84b375dd2942e678641f455e6)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_6137cf6c4cf85ec6b1b33ed36d55f7dd)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_6304eb98b5a159aeb056636c5bee12bc)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_2231a2cdde485d37acde0c73f700d4f6)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_ec70795981c05bd699c6741ee1f1fa67)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_be90b83dbc36597ead13a85acc73a702)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_8e842d9ea97a50d7b9db1d6b691c4d79)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_11cd4e62690c5681b46e50d4fa6d7146, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_cf0aa5fa2d88596aab8b40df2b9a9ab8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_3a5baba6ed625adfa95323eac487b460, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_724cbeb0dc655867a8bf218ab4f40491, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_1ca12d86d5b458c2ab6a8db7d48ccc74, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_4c43da71cd0854199c73ccf530edddf9, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_6063efd0c07b51deab8406a2679ef623, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_660825d84b375dd2942e678641f455e6, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_6137cf6c4cf85ec6b1b33ed36d55f7dd, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_6304eb98b5a159aeb056636c5bee12bc, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_2231a2cdde485d37acde0c73f700d4f6, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_ec70795981c05bd699c6741ee1f1fa67, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_be90b83dbc36597ead13a85acc73a702, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_8e842d9ea97a50d7b9db1d6b691c4d79, "");
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